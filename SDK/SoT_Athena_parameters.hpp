#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Athena.MetalAIFormComponent.OnRep_IsWet
struct UMetalAIFormComponent_OnRep_IsWet_Params
{
};

// Function Athena.PlantAIFormComponent.OnRep_IsWet
struct UPlantAIFormComponent_OnRep_IsWet_Params
{
};

// Function Athena.PlantAIFormComponent.OnRep_IsWeak
struct UPlantAIFormComponent_OnRep_IsWeak_Params
{
};

// Function Athena.ShadowAIFormComponent.OnRep_CurrentState
struct UShadowAIFormComponent_OnRep_CurrentState_Params
{
	TEnumAsByte<EShadowAIFormState>                    PreviousState;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.ShadowAIFormComponent.Multicast_ChangedToState
struct UShadowAIFormComponent_Multicast_ChangedToState_Params
{
	TEnumAsByte<EShadowAIFormState>                    InState;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ControllableObject.TakenControlImpl
struct AControllableObject_TakenControlImpl_Params
{
	class AActor*                                      Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ControllableObject.SetCanInteract
struct AControllableObject_SetCanInteract_Params
{
	bool                                               InCanInteract;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ControllableObject.RelinquishedControlImpl
struct AControllableObject_RelinquishedControlImpl_Params
{
	class AActor*                                      Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ControllableObject.GetControllingActor
struct AControllableObject_GetControllingActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ControllableObject.CanInteractImpl
struct AControllableObject_CanInteractImpl_Params
{
	class AActor*                                      InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SailManipulator.SetMastSocketId
struct ASailManipulator_SetMastSocketId_Params
{
	struct FSocketId                                   InMastSocketId;                                           // (Parm)
};

// Function Athena.SailManipulator.SetMast
struct ASailManipulator_SetMast_Params
{
	class AMast*                                       InMast;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SailManipulator.RotateTowardsLocation
struct ASailManipulator_RotateTowardsLocation_Params
{
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.SailManipulator.OnRep_PendingBoundMast
struct ASailManipulator_OnRep_PendingBoundMast_Params
{
};

// Function Athena.SailManipulator.HandleBoundMastEndPlay
struct ASailManipulator_HandleBoundMastEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SailManipulator.HandleBoundMastDestroyed
struct ASailManipulator_HandleBoundMastDestroyed_Params
{
};

// Function Athena.SailManipulator.GetRopeUVOffset
struct ASailManipulator_GetRopeUVOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SailManipulator.GetMast
struct ASailManipulator_GetMast_Params
{
	class AMast*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Mast.UpdateSailsLoweredBasedOnIntent
struct AMast_UpdateSailsLoweredBasedOnIntent_Params
{
	float                                              LoweredIntent;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Mast.UpdateSailsBasedOnIntent
struct AMast_UpdateSailsBasedOnIntent_Params
{
	float                                              AngleIntent;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LoweredIntent;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Mast.UpdateSailsAngleBasedOnIntent
struct AMast_UpdateSailsAngleBasedOnIntent_Params
{
	float                                              AngleIntent;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Mast.OnRep_IsCursed
struct AMast_OnRep_IsCursed_Params
{
};

// Function Athena.Mast.OnMastDescLoaded
struct AMast_OnMastDescLoaded_Params
{
	class UMastDescAsset*                              MastDesc;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Mast.OnLoweredProportionChange
struct AMast_OnLoweredProportionChange_Params
{
	float                                              LoweredProportion;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Mast.OnAngleChanged
struct AMast_OnAngleChanged_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Mast.GetSailTurnRate
struct AMast_GetSailTurnRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Mast.GetSails
struct AMast_GetSails_Params
{
	TArray<class ASail*>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.Mast.GetSailMovementRate
struct AMast_GetSailMovementRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Mast.GetSailLoweredProportion
struct AMast_GetSailLoweredProportion_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Mast.GetSailAngleRatio
struct AMast_GetSailAngleRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Mast.GetMastAngleBoneTransform
struct AMast_GetMastAngleBoneTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Athena.Mast.GetLookAtPos
struct AMast_GetLookAtPos_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Mast.FinaliseSails
struct AMast_FinaliseSails_Params
{
	TArray<class ASail*>                               InSails;                                                  // (Parm, ZeroConstructor)
};

// Function Athena.ActionRulesBlueprintFunctionLibrary.AddOneShotUseActionRule
struct UActionRulesBlueprintFunctionLibrary_AddOneShotUseActionRule_Params
{
	class UClass*                                      StartInput;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ActionRulesBlueprintFunctionLibrary.AddHoldToUseActionRule
struct UActionRulesBlueprintFunctionLibrary_AddHoldToUseActionRule_Params
{
	class UClass*                                      StartInput;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      EndInput;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ActorCoherentViewComponent.ReadyForBindingsEventReceived
struct UActorCoherentViewComponent_ReadyForBindingsEventReceived_Params
{
};

// Function Athena.ActorFunctionLibrary.TestSetNetCullDistance
struct UActorFunctionLibrary_TestSetNetCullDistance_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InDistance;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ActorFunctionLibrary.TestSetActorRoleAutonomousProxy
struct UActorFunctionLibrary_TestSetActorRoleAutonomousProxy_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ActorFunctionLibrary.IsParentActorInChildActorComponentHierarchy
struct UActorFunctionLibrary_IsParentActorInChildActorComponentHierarchy_Params
{
	class AActor*                                      ChildActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TestParentActor;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ActorFunctionLibrary.IsDependentActorSpawnAckedOnClient
struct UActorFunctionLibrary_IsDependentActorSpawnAckedOnClient_Params
{
	class AActor*                                      RealViewer;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DependencyActor;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ActorFunctionLibrary.IsActorTickFunctionRegistered
struct UActorFunctionLibrary_IsActorTickFunctionRegistered_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ActorFunctionLibrary.GetTransformOfActorRelativeToAnother
struct UActorFunctionLibrary_GetTransformOfActorRelativeToAnother_Params
{
	class AActor*                                      TargetActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      RelativeToActor;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Athena.ActorFunctionLibrary.GetActorNetGuidValue
struct UActorFunctionLibrary_GetActorNetGuidValue_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ActorFunctionLibrary.FindChildActorsByClass
struct UActorFunctionLibrary_FindChildActorsByClass_Params
{
	class AActor*                                      ParentActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.ActorFunctionLibrary.FindActorByNetGuidValue
struct UActorFunctionLibrary_FindActorByNetGuidValue_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NetGuidValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ActorFunctionLibrary.FindActorByName
struct UActorFunctionLibrary_FindActorByName_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ActorName;                                                // (Parm, ZeroConstructor)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ActorFunctionLibrary.FindActorByClass
struct UActorFunctionLibrary_FindActorByClass_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ActorFunctionLibrary.FilterActorArrayByInterface
struct UActorFunctionLibrary_FilterActorArrayByInterface_Params
{
	TArray<class AActor*>                              Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      InterfaceToTest;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.ActorFunctionLibrary.ClosestActorToPoint
struct UActorFunctionLibrary_ClosestActorToPoint_Params
{
	TArray<class AActor*>                              Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ActorRelevancyTestFunctions.WaitForActorToBeAckedForPlayerId
struct UActorRelevancyTestFunctions_WaitForActorToBeAckedForPlayerId_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ClientId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SplitScreenIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ActorRelevancyTestFunctions.WaitForActorToBeAckedForPlayerController
struct UActorRelevancyTestFunctions_WaitForActorToBeAckedForPlayerController_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ActorRelevancyTestFunctions.IsActorAckedForPlayer
struct UActorRelevancyTestFunctions_IsActorAckedForPlayer_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AILocomotionCompositeInputHandler.OnSecondaryItemUseReleased
struct UAILocomotionCompositeInputHandler_OnSecondaryItemUseReleased_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AILocomotionCompositeInputHandler.OnSecondaryItemUsePressed
struct UAILocomotionCompositeInputHandler_OnSecondaryItemUsePressed_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AILocomotionCompositeInputHandler.OnQuickSwitchWeapon
struct UAILocomotionCompositeInputHandler_OnQuickSwitchWeapon_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AILocomotionCompositeInputHandler.OnQuickSwitchSecondaryWeapon
struct UAILocomotionCompositeInputHandler_OnQuickSwitchSecondaryWeapon_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AILocomotionCompositeInputHandler.OnQuickSwitchPrimaryWeapon
struct UAILocomotionCompositeInputHandler_OnQuickSwitchPrimaryWeapon_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AILocomotionCompositeInputHandler.OnPrimaryItemUseReleased
struct UAILocomotionCompositeInputHandler_OnPrimaryItemUseReleased_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AILocomotionCompositeInputHandler.OnPrimaryItemUsePressed
struct UAILocomotionCompositeInputHandler_OnPrimaryItemUsePressed_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AIPartsRetrievalComponent.RequestNewAIParts
struct UAIPartsRetrievalComponent_RequestNewAIParts_Params
{
	class UAIPartsCategory*                            AssignedPartsCategory;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamColorIndex;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AIPartsRetrievalComponent.OnRep_ReplicatedAIPartsData
struct UAIPartsRetrievalComponent_OnRep_ReplicatedAIPartsData_Params
{
};

// Function Athena.CameraFunctionLib.UpdateCameraAdditiveType
struct UCameraFunctionLib_UpdateCameraAdditiveType_Params
{
	TEnumAsByte<ECameraLookatAnimationType>            EnumControllableType;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              CameraAdditiveBlendValue;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              IsCameraAdditive;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CameraPitchTime;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CameraYawTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CameraYawAngle;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraPitchAngle;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinPitchAngle;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxPitchAngle;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxYawAngle;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinYawAngle;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.LookAtOffsetComponent.GetLookAtOffset
struct ULookAtOffsetComponent_GetLookAtOffset_Params
{
	struct FLookAtOffset                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AthenaAnimationLODInterface.SetIKState
struct UAthenaAnimationLODInterface_SetIKState_Params
{
	TEnumAsByte<EIKState>                              NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaAnimationLODInterface.SetIKSolverType
struct UAthenaAnimationLODInterface_SetIKSolverType_Params
{
	TEnumAsByte<EIKSolverType>                         NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaAnimationLODInterface.SetIKFootplantState
struct UAthenaAnimationLODInterface_SetIKFootplantState_Params
{
	TEnumAsByte<EIKFootPlantingState>                  NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CharacterAnimationInterface.UnbindFromCharacter
struct UCharacterAnimationInterface_UnbindFromCharacter_Params
{
	class AAthenaCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CharacterAnimationInterface.OnImpact
struct UCharacterAnimationInterface_OnImpact_Params
{
	struct FVector                                     ImpactLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactNormal;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ECharacterHitReactionAnimType>         HitReactionAnimType;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CharacterAnimationInterface.LoadCharacterAnimations
struct UCharacterAnimationInterface_LoadCharacterAnimations_Params
{
	class UClass*                                      AnimDataId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CharacterAnimationInterface.BindThirdPersonToCharacter
struct UCharacterAnimationInterface_BindThirdPersonToCharacter_Params
{
	class AAthenaCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimDataId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CharacterAnimationInterface.BindFirstPersonToCharacter
struct UCharacterAnimationInterface_BindFirstPersonToCharacter_Params
{
	class AAthenaCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimDataId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.MarkRunStopComplete
struct UAthenaAnimationLocomotionComponentFunctions_MarkRunStopComplete_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (Parm, OutParm, ReferenceParm)
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.GetWantedMovementSpeed
struct UAthenaAnimationLocomotionComponentFunctions_GetWantedMovementSpeed_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.GetVelocity
struct UAthenaAnimationLocomotionComponentFunctions_GetVelocity_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.GetTurningLeft
struct UAthenaAnimationLocomotionComponentFunctions_GetTurningLeft_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.GetTurningActive
struct UAthenaAnimationLocomotionComponentFunctions_GetTurningActive_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.GetRunStopWanted
struct UAthenaAnimationLocomotionComponentFunctions_GetRunStopWanted_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.GetIsUnderwaterSwimming
struct UAthenaAnimationLocomotionComponentFunctions_GetIsUnderwaterSwimming_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.GetIsSwimming
struct UAthenaAnimationLocomotionComponentFunctions_GetIsSwimming_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.GetCurrentYaw
struct UAthenaAnimationLocomotionComponentFunctions_GetCurrentYaw_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.GetCurrentDirection
struct UAthenaAnimationLocomotionComponentFunctions_GetCurrentDirection_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.GetCharacterMoving
struct UAthenaAnimationLocomotionComponentFunctions_GetCharacterMoving_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationLocomotionComponentFunctions.GetBlendedTurnRate
struct UAthenaAnimationLocomotionComponentFunctions_GetBlendedTurnRate_Params
{
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryItemInterface.SetItemType
struct UInventoryItemInterface_SetItemType_Params
{
	TEnumAsByte<EItemType>                             InType;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.InventoryItemInterface.OnAddedToInventory
struct UInventoryItemInterface_OnAddedToInventory_Params
{
};

// Function Athena.InventoryItemInterface.GetItemType
struct UInventoryItemInterface_GetItemType_Params
{
	TEnumAsByte<EItemType>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryItemInterface.GetIconURL
struct UInventoryItemInterface_GetIconURL_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.InventoryItemInterface.GetIconScale
struct UInventoryItemInterface_GetIconScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryItemInterface.GetIconRotation
struct UInventoryItemInterface_GetIconRotation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryItemInterface.GetBackgroundImageURL
struct UInventoryItemInterface_GetBackgroundImageURL_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.WielderAnimationInterface.SetItemVisibility
struct UWielderAnimationInterface_SetItemVisibility_Params
{
	TScriptInterface<class UWieldableInterface>        Item;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               VISIBILITY;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WielderAnimationInterface.ItemWielded
struct UWielderAnimationInterface_ItemWielded_Params
{
	TScriptInterface<class UWieldableInterface>        Item;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FWieldAnimationParams                       AnimParams;                                               // (Parm, OutParm)
};

// Function Athena.WielderAnimationInterface.ItemStowed
struct UWielderAnimationInterface_ItemStowed_Params
{
	TScriptInterface<class UWieldableInterface>        Item;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               FastStow;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WielderAnimationInterface.GetWieldedItemMesh
struct UWielderAnimationInterface_GetWieldedItemMesh_Params
{
	TScriptInterface<class UWieldableInterface>        Item;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.WielderAnimationInterface.DetachWieldedItem
struct UWielderAnimationInterface_DetachWieldedItem_Params
{
	TScriptInterface<class UWieldableInterface>        Item;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.WielderAnimationInterface.AttachWieldedItem
struct UWielderAnimationInterface_AttachWieldedItem_Params
{
	TScriptInterface<class UWieldableInterface>        Item;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FWieldAnimationParams                       AnimParams;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.LoadableItemInterface.CanBeUnloaded
struct ULoadableItemInterface_CanBeUnloaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LoadableItemInterface.CanBeLoaded
struct ULoadableItemInterface_CanBeLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ItemInfo.GetItemType
struct AItemInfo_GetItemType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ItemInfo.GetItemCategory
struct AItemInfo_GetItemCategory_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ItemInfo.GetItem
struct AItemInfo_GetItem_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ItemInfo.GetAsWieldable
struct AItemInfo_GetAsWieldable_Params
{
	class AWieldableItem*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ItemInfo.CreateWieldableItem
struct AItemInfo_CreateWieldableItem_Params
{
	class AActor*                                      InNewOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InTransform;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AWieldableItem*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ItemInfo.CreateProxyItem
struct AItemInfo_CreateProxyItem_Params
{
	struct FTransform                                  InTransform;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EItemLifetimeManagement>               LifetimeManagement;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AItemProxy*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.SpawnCosmeticItem
struct UAthenaAnimationInstance_SpawnCosmeticItem_Params
{
	class AAthenaCharacter*                            Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ObjectToSpawn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWieldAnimationLocation>               SpawnLocation;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWieldAnimationGraph>                  Animgraph;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnHidden;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.SetWieldedItemContinuousIsAlternate
struct UAthenaAnimationInstance_SetWieldedItemContinuousIsAlternate_Params
{
	bool                                               IsAlternate;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.SetLoadedItemAllAnimations
struct UAthenaAnimationInstance_SetLoadedItemAllAnimations_Params
{
	struct FAthenaAnimationCoreObjectAnimations        AllAnimationSet;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.AthenaAnimationInstance.SetCosmeticItemVisibility
struct UAthenaAnimationInstance_SetCosmeticItemVisibility_Params
{
	TEnumAsByte<EWieldAnimationLocation>               CosmeticLocation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RenderShadow;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RenderShadowWhenHidden;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.SetControllableSocketGroupCharacterSize
struct UAthenaAnimationInstance_SetControllableSocketGroupCharacterSize_Params
{
	TEnumAsByte<EAthenaAnimationSocketGroupCharacterSize> InGroup;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.SetControllableSocketGroup
struct UAthenaAnimationInstance_SetControllableSocketGroup_Params
{
	TEnumAsByte<EAthenaAnimationSocketGroup>           InGroup;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.PickItemOneShotSequencePitchOverride
struct UAthenaAnimationInstance_PickItemOneShotSequencePitchOverride_Params
{
	class UBlendSpace1D*                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.PickItemOneShotSequence
struct UAthenaAnimationInstance_PickItemOneShotSequence_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.NotRunningOnServer
struct UAthenaAnimationInstance_NotRunningOnServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.LoadAllItemAnimations
struct UAthenaAnimationInstance_LoadAllItemAnimations_Params
{
	class AAthenaCharacter*                            Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UScriptStruct*                               DestinationStruct;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CharacterType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAthenaAnimationLoadObjectsWrapper>  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.AthenaAnimationInstance.LeftItemBlockingFeedbackState
struct UAthenaAnimationInstance_LeftItemBlockingFeedbackState_Params
{
};

// Function Athena.AthenaAnimationInstance.InMeleeBlock
struct UAthenaAnimationInstance_InMeleeBlock_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.InMeleeAttack
struct UAthenaAnimationInstance_InMeleeAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetWantsToReenterItemBlockingFeedback
struct UAthenaAnimationInstance_GetWantsToReenterItemBlockingFeedback_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetMeleeStrikeType
struct UAthenaAnimationInstance_GetMeleeStrikeType_Params
{
	TEnumAsByte<EWieldableItemComplexOneShotAnimType>  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetLocomotion
struct UAthenaAnimationInstance_GetLocomotion_Params
{
	struct FAthenaAnimationLocomotion                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemWieldedParams
struct UAthenaAnimationInstance_GetLoadedItemWieldedParams_Params
{
	struct FWieldAnimationParams                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemSecondaryPitchOverride
struct UAthenaAnimationInstance_GetLoadedItemSecondaryPitchOverride_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemSecondaryContinuousAnimationsMain
struct UAthenaAnimationInstance_GetLoadedItemSecondaryContinuousAnimationsMain_Params
{
	struct FAthenaAnimationObjectActionContinuousStruct ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemRightHandOffset
struct UAthenaAnimationInstance_GetLoadedItemRightHandOffset_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemPrimaryPitchOverride
struct UAthenaAnimationInstance_GetLoadedItemPrimaryPitchOverride_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemPrimaryContinuousAnimationsMain
struct UAthenaAnimationInstance_GetLoadedItemPrimaryContinuousAnimationsMain_Params
{
	struct FAthenaAnimationObjectActionContinuousStruct ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemMeleeAnimationsV2
struct UAthenaAnimationInstance_GetLoadedItemMeleeAnimationsV2_Params
{
	struct FAthenaAnimationObjectMeleeV2               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemLocomotionAnimations
struct UAthenaAnimationInstance_GetLoadedItemLocomotionAnimations_Params
{
	struct FAthenaAnimationObjectLocomotionAnimations  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemLeftHandOffset
struct UAthenaAnimationInstance_GetLoadedItemLeftHandOffset_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemJumpingAnimations
struct UAthenaAnimationInstance_GetLoadedItemJumpingAnimations_Params
{
	struct FAthenaAnimationObjectJumpingAnimations     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemIsRangedWeapon
struct UAthenaAnimationInstance_GetLoadedItemIsRangedWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemIdleAnimations
struct UAthenaAnimationInstance_GetLoadedItemIdleAnimations_Params
{
	struct FAthenaAnimationObjectIdleAnimations        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemHandAdditiveOverlayAnimation
struct UAthenaAnimationInstance_GetLoadedItemHandAdditiveOverlayAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemFacialAnimations
struct UAthenaAnimationInstance_GetLoadedItemFacialAnimations_Params
{
	struct FAthenaAnimationObjectFacial                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemEquippingAnimations
struct UAthenaAnimationInstance_GetLoadedItemEquippingAnimations_Params
{
	struct FAthenaAnimationObjectEquipAnimations       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemAlternateLocomotionAnimations
struct UAthenaAnimationInstance_GetLoadedItemAlternateLocomotionAnimations_Params
{
	struct FAthenaAnimationObjectLocomotionAnimations  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemAlternateIdleAnimations
struct UAthenaAnimationInstance_GetLoadedItemAlternateIdleAnimations_Params
{
	struct FAthenaAnimationObjectIdleAnimations        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AthenaAnimationInstance.GetLoadedItemAllAnimations
struct UAthenaAnimationInstance_GetLoadedItemAllAnimations_Params
{
	struct FAthenaAnimationCoreObjectAnimations        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AthenaAnimationInstance.GetJumpingAnimationState
struct UAthenaAnimationInstance_GetJumpingAnimationState_Params
{
	TEnumAsByte<EAthenaAnimationJumpingState>          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetItemUsePitchOverride
struct UAthenaAnimationInstance_GetItemUsePitchOverride_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetItemMeleeDodgeBlendspace
struct UAthenaAnimationInstance_GetItemMeleeDodgeBlendspace_Params
{
	class UBlendSpace*                                 ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetItemContinuousStructurePitchOverride
struct UAthenaAnimationInstance_GetItemContinuousStructurePitchOverride_Params
{
	TEnumAsByte<EContinuousUseID>                      ContinuousUseID;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EContinuousUseOverride>                Override;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAthenaAnimationObjectActionContinuousStructPitchOverride ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AthenaAnimationInstance.GetItemContinuousStructure
struct UAthenaAnimationInstance_GetItemContinuousStructure_Params
{
	TEnumAsByte<EContinuousUseID>                      ContinuousUseID;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EContinuousUseOverride>                Override;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAthenaAnimationObjectActionContinuousStruct ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AthenaAnimationInstance.GetItemComplexOneShotSequence
struct UAthenaAnimationInstance_GetItemComplexOneShotSequence_Params
{
	TEnumAsByte<EComplexOneShotSubState>               ComplexOneShotSubState;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetItemComplexOneShotPlaySpeed
struct UAthenaAnimationInstance_GetItemComplexOneShotPlaySpeed_Params
{
	class UAnimSequence*                               AnimSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EComplexOneShotSubState>               ComplexOneShotSubState;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetItemBlockingSubState
struct UAthenaAnimationInstance_GetItemBlockingSubState_Params
{
	TEnumAsByte<EItemBlockingSubState>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetItemBlockingMainOutOfAnimation
struct UAthenaAnimationInstance_GetItemBlockingMainOutOfAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetItemBlockingMainIntoAnimation
struct UAthenaAnimationInstance_GetItemBlockingMainIntoAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetItemBlockingMainBlendspace
struct UAthenaAnimationInstance_GetItemBlockingMainBlendspace_Params
{
	class UBlendSpace*                                 ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetItemBlockingFeedbackSequence
struct UAthenaAnimationInstance_GetItemBlockingFeedbackSequence_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetInDockingTransition
struct UAthenaAnimationInstance_GetInDockingTransition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetCurrentEqippedItem
struct UAthenaAnimationInstance_GetCurrentEqippedItem_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetCosmeticItem
struct UAthenaAnimationInstance_GetCosmeticItem_Params
{
	TEnumAsByte<EWieldAnimationLocation>               CosmeticLocation;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetControllableSocketGroupCharacterSize
struct UAthenaAnimationInstance_GetControllableSocketGroupCharacterSize_Params
{
	TEnumAsByte<EAthenaAnimationSocketGroupCharacterSize> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetControllableSocketGroup
struct UAthenaAnimationInstance_GetControllableSocketGroup_Params
{
	TEnumAsByte<EAthenaAnimationSocketGroup>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.GetAnimationLength
struct UAthenaAnimationInstance_GetAnimationLength_Params
{
	class UAnimSequence*                               Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstance.EnteredItemBlockingFeedbackState
struct UAthenaAnimationInstance_EnteredItemBlockingFeedbackState_Params
{
};

// Function Athena.AthenaAnimationInstance.DestroyCosmeticItem
struct UAthenaAnimationInstance_DestroyCosmeticItem_Params
{
	TEnumAsByte<EWieldAnimationLocation>               SpawnLocation;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CharacterInterface.GetMouthPosition
struct UCharacterInterface_GetMouthPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CharacterFootImpactMeshInterface.GetFootImpactSkeletonMeshComponent
struct UCharacterFootImpactMeshInterface_GetFootImpactSkeletonMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.CharacterInertInterface.SetInert
struct UCharacterInertInterface_SetInert_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CharacterInertInterface.IsInert
struct UCharacterInertInterface_IsInert_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CharacterInertInterface.ClearInert
struct UCharacterInertInterface_ClearInert_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ControllerInterface.EndControl
struct UControllerInterface_EndControl_Params
{
};

// Function Athena.InventoryManipulatorInterface.WieldItemByActor
struct UInventoryManipulatorInterface_WieldItemByActor_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UnwieldFast;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWieldItemReturnCode>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryManipulatorInterface.ToggleWieldItem
struct UInventoryManipulatorInterface_ToggleWieldItem_Params
{
};

// Function Athena.InventoryManipulatorInterface.RemoveItem
struct UInventoryManipulatorInterface_RemoveItem_Params
{
	class AItemInfo*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryManipulatorInterface.QuickSelectItemOfType
struct UInventoryManipulatorInterface_QuickSelectItemOfType_Params
{
	TEnumAsByte<EItemType>                             ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TypedItemIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.InventoryManipulatorInterface.QuickSelectItemOfCategory
struct UInventoryManipulatorInterface_QuickSelectItemOfCategory_Params
{
	class UClass*                                      Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IndexIntoCategory;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.InventoryManipulatorInterface.QuickSelectItem
struct UInventoryManipulatorInterface_QuickSelectItem_Params
{
	int                                                ItemIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.InventoryManipulatorInterface.PickUpItem
struct UInventoryManipulatorInterface_PickUpItem_Params
{
	class AItemInfo*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AndWield;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldNotifyClients;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryManipulatorInterface.GetNumberOfItemsOfItemCategory
struct UInventoryManipulatorInterface_GetNumberOfItemsOfItemCategory_Params
{
	class UClass*                                      ItemSlot;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryManipulatorInterface.GetItems
struct UInventoryManipulatorInterface_GetItems_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.InventoryManipulatorInterface.GetCurrentItemIndex
struct UInventoryManipulatorInterface_GetCurrentItemIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryManipulatorInterface.DropWieldedItem
struct UInventoryManipulatorInterface_DropWieldedItem_Params
{
	TEnumAsByte<EDropItemReturnCode>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryManipulatorInterface.CycleItemUp
struct UInventoryManipulatorInterface_CycleItemUp_Params
{
};

// Function Athena.InventoryManipulatorInterface.CycleItemType
struct UInventoryManipulatorInterface_CycleItemType_Params
{
	TEnumAsByte<EItemType>                             ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.InventoryManipulatorInterface.CycleItemDown
struct UInventoryManipulatorInterface_CycleItemDown_Params
{
};

// Function Athena.InventoryManipulatorInterface.CycleItemCategory
struct UInventoryManipulatorInterface_CycleItemCategory_Params
{
	class UClass*                                      Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.InventoryManipulatorInterface.ConsumeItem
struct UInventoryManipulatorInterface_ConsumeItem_Params
{
	class AItemInfo*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryManipulatorInterface.CanDropWieldedItem
struct UInventoryManipulatorInterface_CanDropWieldedItem_Params
{
	TEnumAsByte<EDropItemReturnCode>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryManipulatorInterface.CanAddItemOfItemCategory
struct UInventoryManipulatorInterface_CanAddItemOfItemCategory_Params
{
	class UClass*                                      ItemSlot;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECanAddItemQueryResult>                ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryManipulatorInterface.AddItemOfSubclass
struct UInventoryManipulatorInterface_AddItemOfSubclass_Params
{
	class UClass*                                      InItem;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryManipulatorInterface.AddItem
struct UInventoryManipulatorInterface_AddItem_Params
{
	class AItemInfo*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldedItemInterface.WieldItem
struct UWieldedItemInterface_WieldItem_Params
{
	TScriptInterface<class UWieldableInterface>        Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Fast;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWieldItemReturnCode>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldedItemInterface.UnstashItem
struct UWieldedItemInterface_UnstashItem_Params
{
	TEnumAsByte<EStashReason>                          Reason;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WieldedItemInterface.StashItem
struct UWieldedItemInterface_StashItem_Params
{
	TEnumAsByte<EStashReason>                          Reason;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WieldedItemInterface.SlowStashItem
struct UWieldedItemInterface_SlowStashItem_Params
{
	TEnumAsByte<EStashReason>                          Reason;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WieldedItemInterface.ShouldDropLargeItemOnDestroy
struct UWieldedItemInterface_ShouldDropLargeItemOnDestroy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldedItemInterface.GetWieldedItemIfNotStashed
struct UWieldedItemInterface_GetWieldedItemIfNotStashed_Params
{
	TScriptInterface<class UWieldableInterface>        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldedItemInterface.GetWieldedItem
struct UWieldedItemInterface_GetWieldedItem_Params
{
	TScriptInterface<class UWieldableInterface>        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CloudDomeInterface.UpdateCloudMeshes
struct UCloudDomeInterface_UpdateCloudMeshes_Params
{
	struct FCloudVisualParameters                      CloudVisualParametersIn;                                  // (Parm, OutParm)
	TArray<struct FTiledCloudProperties>               CloudTileIn;                                              // (Parm, OutParm, ZeroConstructor)
	TArray<struct FRenderedCloudProperties>            RenderedCloudsIn;                                         // (Parm, OutParm, ZeroConstructor)
	TArray<struct FCloudTypeDefinition>                CloudMeshesIn;                                            // (Parm, OutParm, ZeroConstructor)
	TArray<struct FCloudTypeNormalizedWeight>          NormalizedCloudWeightsIn;                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Athena.CloudDomeInterface.GetCloudDomePosition
struct UCloudDomeInterface_GetCloudDomePosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacter.WieldItem
struct AAthenaCharacter_WieldItem_Params
{
	TScriptInterface<class UWieldableInterface>        Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Fast;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWieldItemReturnCode>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacter.UseItem
struct AAthenaCharacter_UseItem_Params
{
	class UClass*                                      NotificationInputId;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacter.UnforceWaterHeight
struct AAthenaCharacter_UnforceWaterHeight_Params
{
};

// Function Athena.AthenaCharacter.SetIgnoreReplicationRotationOnly
struct AAthenaCharacter_SetIgnoreReplicationRotationOnly_Params
{
	bool                                               InIgnoreReplicationRotationOnly;                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacter.ReceiveRestart
struct AAthenaCharacter_ReceiveRestart_Params
{
};

// Function Athena.AthenaCharacter.PickUpItem
struct AAthenaCharacter_PickUpItem_Params
{
	class AItemInfo*                                   ItemInfo;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AndWield;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacter.Kill
struct AAthenaCharacter_Kill_Params
{
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacter.IsInWater
struct AAthenaCharacter_IsInWater_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacter.IsInteractionValid
struct AAthenaCharacter_IsInteractionValid_Params
{
	class UObject*                                     InInteractable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacter.IsDead
struct AAthenaCharacter_IsDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacter.IsCurrentItemReadyForAI
struct AAthenaCharacter_IsCurrentItemReadyForAI_Params
{
	class UClass*                                      NotificationInputId;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacter.InteractWith
struct AAthenaCharacter_InteractWith_Params
{
	class UObject*                                     InInteractable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NotificationInputId;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacter.Interact
struct AAthenaCharacter_Interact_Params
{
	class UObject*                                     InInteractable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacter.HasValidWaterHeight
struct AAthenaCharacter_HasValidWaterHeight_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacter.HandleCharacterMovementUpdated
struct AAthenaCharacter_HandleCharacterMovementUpdated_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OldLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OldVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacter.GetYawOnMovingBase
struct AAthenaCharacter_GetYawOnMovingBase_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacter.GetWaterLevelRelativeToCharacterBasePosition
struct AAthenaCharacter_GetWaterLevelRelativeToCharacterBasePosition_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacter.GetWaterInformation
struct AAthenaCharacter_GetWaterInformation_Params
{
	struct FWaterInformation                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AthenaCharacter.GetWaterHeight
struct AAthenaCharacter_GetWaterHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacter.GetViewPitch
struct AAthenaCharacter_GetViewPitch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacter.GetValidWaterHeightAtomic
struct AAthenaCharacter_GetValidWaterHeightAtomic_Params
{
	float                                              OutWaterHeight;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacter.GetThirdPersonMeshComponent
struct AAthenaCharacter_GetThirdPersonMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.AthenaCharacter.GetInputBinder
struct AAthenaCharacter_GetInputBinder_Params
{
	class UCharacterInputBinder*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacter.GetIgnoreReplicationRotationOnly
struct AAthenaCharacter_GetIgnoreReplicationRotationOnly_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacter.GetFocusedInteractable
struct AAthenaCharacter_GetFocusedInteractable_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacter.GetFloorSweepCollisionResponseContainer
struct AAthenaCharacter_GetFloorSweepCollisionResponseContainer_Params
{
	struct FCollisionResponseContainer                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AthenaCharacter.GetFirstPersonMeshComponent
struct AAthenaCharacter_GetFirstPersonMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.AthenaCharacter.GetCurrentShipAsActor
struct AAthenaCharacter_GetCurrentShipAsActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacter.GetCurrentShip
struct AAthenaCharacter_GetCurrentShip_Params
{
	class AShip*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacter.GetCharacterTransform
struct AAthenaCharacter_GetCharacterTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacter.GetCharacterRotation
struct AAthenaCharacter_GetCharacterRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacter.GenerateNewRandomAnimationSeed
struct AAthenaCharacter_GenerateNewRandomAnimationSeed_Params
{
};

// Function Athena.AthenaCharacter.ForceWaterHeight
struct AAthenaCharacter_ForceWaterHeight_Params
{
	float                                              WaterHeight;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WaterId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacter.CureAllAilings
struct AAthenaCharacter_CureAllAilings_Params
{
};

// Function Athena.AthenaCharacter.CreateProjectileTraceHitVolume
struct AAthenaCharacter_CreateProjectileTraceHitVolume_Params
{
};

// Function Athena.AthenaCharacter.CanInteractWith
struct AAthenaCharacter_CanInteractWith_Params
{
	class UObject*                                     InInteractable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NotificationInputId;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacter.CalculateWaterHeight
struct AAthenaCharacter_CalculateWaterHeight_Params
{
};

// Function Athena.AthenaCharacter.AllAnimationsLoaded
struct AAthenaCharacter_AllAnimationsLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PlayerCharacterInterface.GetFirstPersonWwiseEmitterOwner
struct UPlayerCharacterInterface_GetFirstPersonWwiseEmitterOwner_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.PlayerCharacterInterface.ExecuteRumbleProfile
struct UPlayerCharacterInterface_ExecuteRumbleProfile_Params
{
	struct FName                                       RumbleTag;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.DamageInstigatorInterface.CanDamageActor
struct UDamageInstigatorInterface_CanDamageActor_Params
{
	class AActor*                                      DamageRecipient;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PlayerManagerServiceInterface.GetPlayerCharacterFromPlayerState
struct UPlayerManagerServiceInterface_GetPlayerCharacterFromPlayerState_Params
{
	class AAthenaPlayerState*                          PlayerState;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AAthenaPlayerCharacter*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PlayerManagerServiceInterface.GetNumPlayers
struct UPlayerManagerServiceInterface_GetNumPlayers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PlayerManagerServiceInterface.GetNumActiveLocalPlayers
struct UPlayerManagerServiceInterface_GetNumActiveLocalPlayers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PlayerManagerServiceInterface.GetFirstLocalPlayer
struct UPlayerManagerServiceInterface_GetFirstLocalPlayer_Params
{
	class AAthenaPlayerCharacter*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PlayerManagerServiceInterface.GetAllPlayerControllersWeakActorHandle
struct UPlayerManagerServiceInterface_GetAllPlayerControllersWeakActorHandle_Params
{
	TArray<struct FWeakActorHandle>                    ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Athena.PlayerManagerServiceInterface.GetAllActivePlayers
struct UPlayerManagerServiceInterface_GetAllActivePlayers_Params
{
	TArray<class AAthenaPlayerCharacter*>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.PlayerManagerServiceInterface.GetActiveLocalPlayers
struct UPlayerManagerServiceInterface_GetActiveLocalPlayers_Params
{
	TArray<class AAthenaPlayerCharacter*>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.WieldableInterface.GetItemInfo
struct UWieldableInterface_GetItemInfo_Params
{
	class AItemInfo*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableInterface.GetAnimationKey
struct UWieldableInterface_GetAnimationKey_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableInterface.GetActor
struct UWieldableInterface_GetActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ItemLoadoutViewInterface.HasCapacity
struct UItemLoadoutViewInterface_HasCapacity_Params
{
	class UClass*                                      InItemCategory;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ItemLoadoutViewInterface.GetWeaponsLoadout
struct UItemLoadoutViewInterface_GetWeaponsLoadout_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Athena.ItemLoadoutViewInterface.GetNumItems
struct UItemLoadoutViewInterface_GetNumItems_Params
{
	class UClass*                                      InItemCategory;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ItemLoadoutViewInterface.GetNumCategories
struct UItemLoadoutViewInterface_GetNumCategories_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ItemLoadoutViewInterface.GetItems
struct UItemLoadoutViewInterface_GetItems_Params
{
	class UClass*                                      InItemCategory;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AItemInfo*>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.ItemLoadoutViewInterface.GetItemLoadout
struct UItemLoadoutViewInterface_GetItemLoadout_Params
{
	struct FItemLoadout                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Athena.ItemLoadoutViewInterface.GetItemByIndex
struct UItemLoadoutViewInterface_GetItemByIndex_Params
{
	class UClass*                                      InItemCategory;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AItemInfo*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ItemLoadoutViewInterface.GetItem
struct UItemLoadoutViewInterface_GetItem_Params
{
	class UClass*                                      InItemCategory;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AItemInfo*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ItemLoadoutViewInterface.GetCategories
struct UItemLoadoutViewInterface_GetCategories_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.ItemLoadoutViewInterface.GetCapacity
struct UItemLoadoutViewInterface_GetCapacity_Params
{
	class UClass*                                      InItemCategory;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ItemLoadoutViewInterface.GetAllItems
struct UItemLoadoutViewInterface_GetAllItems_Params
{
	TArray<class AItemInfo*>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.RadialInventoryInterface.TrySetLastSelectedItem
struct URadialInventoryInterface_TrySetLastSelectedItem_Params
{
	class AActor*                                      InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryInterface.ResetRadialInventory
struct URadialInventoryInterface_ResetRadialInventory_Params
{
};

// Function Athena.RadialInventoryInterface.OnRadialInventoryInput
struct URadialInventoryInterface_OnRadialInventoryInput_Params
{
	struct FVector2D                                   InputVector;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.RadialInventoryInterface.IsFullyOpened
struct URadialInventoryInterface_IsFullyOpened_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryInterface.GetNumSlots
struct URadialInventoryInterface_GetNumSlots_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryInterface.GetMaxNumOfPages
struct URadialInventoryInterface_GetMaxNumOfPages_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryInterface.GetLastSelectedItem
struct URadialInventoryInterface_GetLastSelectedItem_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryInterface.DeactivateRadialInventory
struct URadialInventoryInterface_DeactivateRadialInventory_Params
{
};

// Function Athena.RadialInventoryInterface.ConfirmRadialFullyOpened
struct URadialInventoryInterface_ConfirmRadialFullyOpened_Params
{
};

// Function Athena.RadialInventoryInterface.ActivateRadialInventory
struct URadialInventoryInterface_ActivateRadialInventory_Params
{
	TEnumAsByte<ERadialMenuInputModality>              InputModality;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WieldableItemSetInterface.RemoveItem
struct UWieldableItemSetInterface_RemoveItem_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetInterface.GetSlotForItem
struct UWieldableItemSetInterface_GetSlotForItem_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetInterface.GetNumItemsOfType
struct UWieldableItemSetInterface_GetNumItemsOfType_Params
{
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetInterface.GetNumItems
struct UWieldableItemSetInterface_GetNumItems_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetInterface.GetItemsOfCategory
struct UWieldableItemSetInterface_GetItemsOfCategory_Params
{
	class UClass*                                      ItemCategory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.WieldableItemSetInterface.GetItemIndexInCategorySet
struct UWieldableItemSetInterface_GetItemIndexInCategorySet_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemCategory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetInterface.GetItemIndex
struct UWieldableItemSetInterface_GetItemIndex_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetInterface.GetItemFromSlot
struct UWieldableItemSetInterface_GetItemFromSlot_Params
{
	class UClass*                                      ItemCategory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetInterface.GetItem
struct UWieldableItemSetInterface_GetItem_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetInterface.ContainsItemOfType
struct UWieldableItemSetInterface_ContainsItemOfType_Params
{
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetInterface.Contains
struct UWieldableItemSetInterface_Contains_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetInterface.AddItemToSlot
struct UWieldableItemSetInterface_AddItemToSlot_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemCategory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetInterface.AddItem
struct UWieldableItemSetInterface_AddItem_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryComponent.TrySetLastSelectedItem
struct URadialInventoryComponent_TrySetLastSelectedItem_Params
{
	class AActor*                                      InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryComponent.SetDefaultRemappingPolicy
struct URadialInventoryComponent_SetDefaultRemappingPolicy_Params
{
};

// Function Athena.RadialInventoryComponent.ResetRadialInventory
struct URadialInventoryComponent_ResetRadialInventory_Params
{
};

// Function Athena.RadialInventoryComponent.OnRadialInventoryInput
struct URadialInventoryComponent_OnRadialInventoryInput_Params
{
	struct FVector2D                                   InputVector;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.RadialInventoryComponent.IsHUDScriptingReady
struct URadialInventoryComponent_IsHUDScriptingReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryComponent.IsFullyOpened
struct URadialInventoryComponent_IsFullyOpened_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryComponent.GetSelectedRadialInventorySlot
struct URadialInventoryComponent_GetSelectedRadialInventorySlot_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryComponent.GetNumSlots
struct URadialInventoryComponent_GetNumSlots_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryComponent.GetMaxNumOfPages
struct URadialInventoryComponent_GetMaxNumOfPages_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryComponent.GetLastSelectedItem
struct URadialInventoryComponent_GetLastSelectedItem_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryComponent.GetInputModality
struct URadialInventoryComponent_GetInputModality_Params
{
	TEnumAsByte<ERadialMenuInputModality>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryComponent.GetInputBinder
struct URadialInventoryComponent_GetInputBinder_Params
{
	class UInputBinder*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryComponent.DeactivateRadialInventory
struct URadialInventoryComponent_DeactivateRadialInventory_Params
{
};

// Function Athena.RadialInventoryComponent.ConfirmRadialFullyOpened
struct URadialInventoryComponent_ConfirmRadialFullyOpened_Params
{
};

// Function Athena.RadialInventoryComponent.ActivateRadialInventory
struct URadialInventoryComponent_ActivateRadialInventory_Params
{
	TEnumAsByte<ERadialMenuInputModality>              InputModality;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.PhrasesRadialComponent.GetNumSlots
struct UPhrasesRadialComponent_GetNumSlots_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PhrasesRadialComponent.GetLastSelectedItem
struct UPhrasesRadialComponent_GetLastSelectedItem_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PhrasesRadialComponent.DeactivateRadialInventory
struct UPhrasesRadialComponent_DeactivateRadialInventory_Params
{
};

// Function Athena.RadialPhrasesAdjusterInterface.GetRadialPhrases
struct URadialPhrasesAdjusterInterface_GetRadialPhrases_Params
{
	class UPhrasesRadialDataAsset*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItem.SetItemWwiseSwitch
struct AWieldableItem_SetItemWwiseSwitch_Params
{
	struct FName                                       SwitchGroup;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       SwitchOption;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.WieldableItem.SetItemWwiseRTPC
struct AWieldableItem_SetItemWwiseRTPC_Params
{
	struct FName                                       RTPCName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WieldableItem.PostItemWwiseEvent
struct AWieldableItem_PostItemWwiseEvent_Params
{
	class UWwiseEvent*                                 Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WieldableItem.OnWielderHasLandedFromJumpBPImpl
struct AWieldableItem_OnWielderHasLandedFromJumpBPImpl_Params
{
};

// Function Athena.WieldableItem.IsUnderwater
struct AWieldableItem_IsUnderwater_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItem.GetWielderCharacter
struct AWieldableItem_GetWielderCharacter_Params
{
	class AAthenaCharacter*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItem.GetWielder
struct AWieldableItem_GetWielder_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItem.GetWieldableItemSize
struct AWieldableItem_GetWieldableItemSize_Params
{
	TEnumAsByte<EWieldableItemSize>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItem.GetLastKnownWielder
struct AWieldableItem_GetLastKnownWielder_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItem.GetIsFirstPerson
struct AWieldableItem_GetIsFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialCompositeInputHandler.OnRadialY
struct URadialCompositeInputHandler_OnRadialY_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialCompositeInputHandler.OnRadialX
struct URadialCompositeInputHandler_OnRadialX_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialCompositeInputHandler.HandleAxisChange
struct URadialCompositeInputHandler_HandleAxisChange_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.RadialCompositeInputHandler.HandleAnalogInputsIfBlocking
struct URadialCompositeInputHandler_HandleAnalogInputsIfBlocking_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CloudDomeServiceInterface.UnregisterCloudDomeFromService
struct UCloudDomeServiceInterface_UnregisterCloudDomeFromService_Params
{
	TScriptInterface<class UCloudDomeInterface>        CloudDome;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CloudDomeServiceInterface.RegisterCloudDomeWithService
struct UCloudDomeServiceInterface_RegisterCloudDomeWithService_Params
{
	TScriptInterface<class UCloudDomeInterface>        CloudDome;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CloudDomeServiceInterface.GetNumberOfCloudDomes
struct UCloudDomeServiceInterface_GetNumberOfCloudDomes_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CloudDomeServiceInterface.GetCloudDome
struct UCloudDomeServiceInterface_GetCloudDome_Params
{
	int                                                CloudDomeIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UCloudDomeInterface>        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CloudDomeServiceInterface.GetActualCloudDome
struct UCloudDomeServiceInterface_GetActualCloudDome_Params
{
	int                                                CloudDomeIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ACloudDome*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaPlayerCharacter.WalkActivate
struct AAthenaPlayerCharacter_WalkActivate_Params
{
};

// Function Athena.AthenaPlayerCharacter.UseItem
struct AAthenaPlayerCharacter_UseItem_Params
{
	class UClass*                                      NotificationInputId;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaPlayerCharacter.TriggerTattooGlow
struct AAthenaPlayerCharacter_TriggerTattooGlow_Params
{
};

// Function Athena.AthenaPlayerCharacter.TattooGlowClient
struct AAthenaPlayerCharacter_TattooGlowClient_Params
{
};

// Function Athena.AthenaPlayerCharacter.TattooGlow
struct AAthenaPlayerCharacter_TattooGlow_Params
{
};

// Function Athena.AthenaPlayerCharacter.SprintActivate
struct AAthenaPlayerCharacter_SprintActivate_Params
{
};

// Function Athena.AthenaPlayerCharacter.OnWieldedItem
struct AAthenaPlayerCharacter_OnWieldedItem_Params
{
};

// Function Athena.AthenaPlayerCharacter.OnRep_ReplicatedIsSprinting
struct AAthenaPlayerCharacter_OnRep_ReplicatedIsSprinting_Params
{
};

// Function Athena.AthenaPlayerCharacter.OnRep_OverridePirateDescSeed
struct AAthenaPlayerCharacter_OnRep_OverridePirateDescSeed_Params
{
};

// Function Athena.AthenaPlayerCharacter.OnRep_OverrideAnimationEntry
struct AAthenaPlayerCharacter_OnRep_OverrideAnimationEntry_Params
{
};

// Function Athena.AthenaPlayerCharacter.OnMeshSet
struct AAthenaPlayerCharacter_OnMeshSet_Params
{
};

// Function Athena.AthenaPlayerCharacter.Multicast_OnKrakenTentacleDeath
struct AAthenaPlayerCharacter_Multicast_OnKrakenTentacleDeath_Params
{
	int                                                RemainingTentacles;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaPlayerCharacter.IsSprintEnabled
struct AAthenaPlayerCharacter_IsSprintEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaPlayerCharacter.IsInteractionValid
struct AAthenaPlayerCharacter_IsInteractionValid_Params
{
	class UObject*                                     InInteractable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaPlayerCharacter.HasMeshSet
struct AAthenaPlayerCharacter_HasMeshSet_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaPlayerCharacter.HasFinishedSpawning
struct AAthenaPlayerCharacter_HasFinishedSpawning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaPlayerCharacter.GetPrimaryVoyageParticipantComponent
struct AAthenaPlayerCharacter_GetPrimaryVoyageParticipantComponent_Params
{
	class UVoyageParticipantComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.AthenaPlayerCharacter.GetPawnViewLocation
struct AAthenaPlayerCharacter_GetPawnViewLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaPlayerCharacter.GetLocalPlayerWorldRegionName
struct AAthenaPlayerCharacter_GetLocalPlayerWorldRegionName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaPlayerCharacter.GetIsSprinting
struct AAthenaPlayerCharacter_GetIsSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaPlayerCharacter.GetIsDigitallyWalking
struct AAthenaPlayerCharacter_GetIsDigitallyWalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaPlayerCharacter.GetFocusedInteractable
struct AAthenaPlayerCharacter_GetFocusedInteractable_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaPlayerCharacter.GetFirstPersonMeshOffset
struct AAthenaPlayerCharacter_GetFirstPersonMeshOffset_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaPlayerCharacter.GetEmergentVoyageParticipantComponent
struct AAthenaPlayerCharacter_GetEmergentVoyageParticipantComponent_Params
{
	class UVoyageParticipantComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.AthenaPlayerCharacter.GetCurrentShipRegion
struct AAthenaPlayerCharacter_GetCurrentShipRegion_Params
{
	TEnumAsByte<EShipRegion>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaPlayerCharacter.GetClothingLoadoutComponent
struct AAthenaPlayerCharacter_GetClothingLoadoutComponent_Params
{
	class UClothingLoadoutComponent*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.AthenaPlayerCharacter.ClientAddPlayerAsFriend
struct AAthenaPlayerCharacter_ClientAddPlayerAsFriend_Params
{
	class AAthenaPlayerCharacter*                      PlayerToAddAsFriend;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaPlayerCharacter.AllAnimationsLoaded
struct AAthenaPlayerCharacter_AllAnimationsLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaPlayerState.OnRep_PirateDescription
struct AAthenaPlayerState_OnRep_PirateDescription_Params
{
};

// Function Athena.AthenaPlayerState.GetUniquePlayerId
struct AAthenaPlayerState_GetUniquePlayerId_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.AIShipCaptainActionStateId.PushCharacterIntoAIShipCaptainActionState
struct UAIShipCaptainActionStateId_PushCharacterIntoAIShipCaptainActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ControlledObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AISpawnActionStateId.PushCharacterIntoAISpawnActionState
struct UAISpawnActionStateId_PushCharacterIntoAISpawnActionState_Params
{
	class AActor*                                      InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ShipServiceInterface.GetShipForCrew
struct UShipServiceInterface_GetShipForCrew_Params
{
	struct FGuid                                       CrewId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AShip*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipServiceInterface.GetCrewFromShip
struct UShipServiceInterface_GetCrewFromShip_Params
{
	class AShip*                                       Ship;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AllianceService.OnRep_CrewAllianceJoinStatuses
struct AAllianceService_OnRep_CrewAllianceJoinStatuses_Params
{
};

// Function Athena.Anchor.SetAnchorLoweredProportion
struct AAnchor_SetAnchorLoweredProportion_Params
{
	float                                              InLoweredProportion;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AnimatedStepsComponent.StartOpening
struct UAnimatedStepsComponent_StartOpening_Params
{
};

// Function Athena.AnimatedStepsComponent.OpenImmediate
struct UAnimatedStepsComponent_OpenImmediate_Params
{
};

// Function Athena.AnimatedStepsComponent.Close
struct UAnimatedStepsComponent_Close_Params
{
};

// Function Athena.AthenaAIInteractableComponent.SetOwnerAITeam
struct UAthenaAIInteractableComponent_SetOwnerAITeam_Params
{
	TEnumAsByte<EAthenaAITeam>                         InOwner;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaAIInteractableComponent.GetTriggerRegionRadius
struct UAthenaAIInteractableComponent_GetTriggerRegionRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAIInteractableComponent.GetTriggerRegionCenterPoint
struct UAthenaAIInteractableComponent_GetTriggerRegionCenterPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAIInteractableComponent.GetOwnerAITeam
struct UAthenaAIInteractableComponent_GetOwnerAITeam_Params
{
	TEnumAsByte<EAthenaAITeam>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationCapstanBlueprintFunctions.SetAnimationRemapSpeed
struct UAthenaAnimationCapstanBlueprintFunctions_SetAnimationRemapSpeed_Params
{
	struct FAthenaAnimationCapstan                     Capstan;                                                  // (Parm, OutParm, ReferenceParm)
	float                                              Speed;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaAnimationCapstanBlueprintFunctions.GetCapstanState
struct UAthenaAnimationCapstanBlueprintFunctions_GetCapstanState_Params
{
	struct FAthenaAnimationCapstan                     Capstan;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EAthenaAnimationCapstanState>          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationCapstanBlueprintFunctions.GetAngularVelocityWanted
struct UAthenaAnimationCapstanBlueprintFunctions_GetAngularVelocityWanted_Params
{
	struct FAthenaAnimationCapstan                     Capstan;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FirstPersonAnimationInstance.LoadSpecificItemAnimations
struct UFirstPersonAnimationInstance_LoadSpecificItemAnimations_Params
{
	TArray<struct FAthenaAnimationLoadObjectsWrapper>  AllItemData;                                              // (Parm, ZeroConstructor)
	class UClass*                                      ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ThirdPersonAnimationInstance.UpdateSkeletonFleeingAnimations
struct UThirdPersonAnimationInstance_UpdateSkeletonFleeingAnimations_Params
{
	class UClass*                                      ObjectID;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ThirdPersonAnimationInstance.UpdatePitchOverrideAnimation
struct UThirdPersonAnimationInstance_UpdatePitchOverrideAnimation_Params
{
	bool                                               IsPrimary;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ThirdPersonAnimationInstance.UpdateAISpawnAnimation
struct UThirdPersonAnimationInstance_UpdateAISpawnAnimation_Params
{
	class AAthenaCharacter*                            Owner;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ObjectID;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnLand;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               QuickSpawn;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ThirdPersonAnimationInstance.TriggerSensingAnimation
struct UThirdPersonAnimationInstance_TriggerSensingAnimation_Params
{
	TEnumAsByte<ESkeletonSensingState>                 NewSensingState;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ThirdPersonAnimationInstance.TriggerEmoteActionAnimation
struct UThirdPersonAnimationInstance_TriggerEmoteActionAnimation_Params
{
	TEnumAsByte<ESkeletonEmoteActionState>             EmoteActionState;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ThirdPersonAnimationInstance.StopMeleeStanceChange
struct UThirdPersonAnimationInstance_StopMeleeStanceChange_Params
{
};

// Function Athena.ThirdPersonAnimationInstance.StartMeleeStanceChange
struct UThirdPersonAnimationInstance_StartMeleeStanceChange_Params
{
};

// Function Athena.ThirdPersonAnimationInstance.SetLocomotionTypeActive
struct UThirdPersonAnimationInstance_SetLocomotionTypeActive_Params
{
	TEnumAsByte<ELocomotionType>                       LocomotionType;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ThirdPersonAnimationInstance.SelectSkeletonFleeingVariationAnimation
struct UThirdPersonAnimationInstance_SelectSkeletonFleeingVariationAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ThirdPersonAnimationInstance.OnEventAllocateShopInteractionAnimations
struct UThirdPersonAnimationInstance_OnEventAllocateShopInteractionAnimations_Params
{
	class AAthenaCharacter*                            Owner;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionObject>                    Type;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ThirdPersonAnimationInstance.LoadSpecificItemAnimations
struct UThirdPersonAnimationInstance_LoadSpecificItemAnimations_Params
{
	TArray<struct FAthenaAnimationLoadObjectsWrapper>  AllItemData;                                              // (Parm, ZeroConstructor)
	class UClass*                                      ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ThirdPersonAnimationInstance.GetTargetingPitch
struct UThirdPersonAnimationInstance_GetTargetingPitch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ThirdPersonAnimationInstance.GetCurrentLocomotionType
struct UThirdPersonAnimationInstance_GetCurrentLocomotionType_Params
{
	TEnumAsByte<ELocomotionType>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ThirdPersonAnimationInstance.GetCharacterPitch
struct UThirdPersonAnimationInstance_GetCharacterPitch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ThirdPersonAnimationInstance.GetAIKnockbackAnimation
struct UThirdPersonAnimationInstance_GetAIKnockbackAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ThirdPersonAnimationInstance.AllocateNewTauntCheerVariant
struct UThirdPersonAnimationInstance_AllocateNewTauntCheerVariant_Params
{
	bool                                               IsPrimary;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletonEmoteActionState>             EmoteActionState;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ThirdPersonAnimationInstance.AllocateNewShipCaptainIdleVariant
struct UThirdPersonAnimationInstance_AllocateNewShipCaptainIdleVariant_Params
{
	bool                                               IsIdleStateA;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ThirdPersonAnimationInstance.AllocateNewRandomContinuousEmote
struct UThirdPersonAnimationInstance_AllocateNewRandomContinuousEmote_Params
{
	bool                                               IsSlotA;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstanceTestFunctions.IsStateActiveOnAnimationInstance
struct UAthenaAnimationInstanceTestFunctions_IsStateActiveOnAnimationInstance_Params
{
	class UAthenaAnimationInstance*                    AnimationInstance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InStatePathName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationInstanceTestFunctions.GetActiveStatesOnAnimationInstance
struct UAthenaAnimationInstanceTestFunctions_GetActiveStatesOnAnimationInstance_Params
{
	class UAthenaAnimationInstance*                    AnimationInstance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.AthenaAnimationJumpingBlueprintFunctions.SetMaxJumpSequence
struct UAthenaAnimationJumpingBlueprintFunctions_SetMaxJumpSequence_Params
{
	struct FAthenaAnimationJumping                     Jumping;                                                  // (Parm, OutParm, ReferenceParm)
	int                                                NewMaxJumpSequence;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaAnimationJumpingBlueprintFunctions.SetJumpCompleted
struct UAthenaAnimationJumpingBlueprintFunctions_SetJumpCompleted_Params
{
	struct FAthenaAnimationJumping                     Jumping;                                                  // (Parm, OutParm, ReferenceParm)
};

// Function Athena.AthenaAnimationJumpingBlueprintFunctions.IsHeavyLanding
struct UAthenaAnimationJumpingBlueprintFunctions_IsHeavyLanding_Params
{
	struct FAthenaAnimationJumping                     Jumping;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationJumpingBlueprintFunctions.GetPreImpactTime
struct UAthenaAnimationJumpingBlueprintFunctions_GetPreImpactTime_Params
{
	struct FAthenaAnimationJumping                     Jumping;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationJumpingBlueprintFunctions.GetLandingSequence
struct UAthenaAnimationJumpingBlueprintFunctions_GetLandingSequence_Params
{
	struct FAthenaAnimationJumping                     Jumping;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationJumpingBlueprintFunctions.GetJumpSequence
struct UAthenaAnimationJumpingBlueprintFunctions_GetJumpSequence_Params
{
	struct FAthenaAnimationJumping                     Jumping;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationJumpingBlueprintFunctions.GetJumpingState
struct UAthenaAnimationJumpingBlueprintFunctions_GetJumpingState_Params
{
	struct FAthenaAnimationJumping                     Jumping;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EAthenaAnimationJumpingState>          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationLadderBlueprintFunctions.SetClimbOnComplete
struct UAthenaAnimationLadderBlueprintFunctions_SetClimbOnComplete_Params
{
	struct FAthenaAnimationLadder                      Ladder;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function Athena.AthenaAnimationLadderBlueprintFunctions.SetClimbOffComplete
struct UAthenaAnimationLadderBlueprintFunctions_SetClimbOffComplete_Params
{
	struct FAthenaAnimationLadder                      Ladder;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function Athena.AthenaAnimationLadderBlueprintFunctions.GetPlayerIntent
struct UAthenaAnimationLadderBlueprintFunctions_GetPlayerIntent_Params
{
	struct FAthenaAnimationLadder                      Ladder;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationLadderBlueprintFunctions.GetLadderState
struct UAthenaAnimationLadderBlueprintFunctions_GetLadderState_Params
{
	struct FAthenaAnimationLadder                      Ladder;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EAthenaAnimationLadderState>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationLadderBlueprintFunctions.GetClimbDistance
struct UAthenaAnimationLadderBlueprintFunctions_GetClimbDistance_Params
{
	struct FAthenaAnimationLadder                      Ladder;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationMountedWeaponBlueprintFunctions.SetFireFinished
struct UAthenaAnimationMountedWeaponBlueprintFunctions_SetFireFinished_Params
{
	struct FAthenaAnimationMountedWeapon               MountedWeapon;                                            // (Parm, OutParm, ReferenceParm)
};

// Function Athena.AthenaAnimationWheelBlueprintFunctions.GetWheelTime
struct UAthenaAnimationWheelBlueprintFunctions_GetWheelTime_Params
{
	struct FAthenaAnimationWheel                       Wheel;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationWheelBlueprintFunctions.GetWheelDirection
struct UAthenaAnimationWheelBlueprintFunctions_GetWheelDirection_Params
{
	struct FAthenaAnimationWheel                       Wheel;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationWheelBlueprintFunctions.GetWheelAnimationType
struct UAthenaAnimationWheelBlueprintFunctions_GetWheelAnimationType_Params
{
	struct FAthenaAnimationWheel                       Wheel;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EWheelAnimationType>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationWheelBlueprintFunctions.GetRightWheelArmDown
struct UAthenaAnimationWheelBlueprintFunctions_GetRightWheelArmDown_Params
{
	struct FAthenaAnimationWheel                       Wheel;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationWheelBlueprintFunctions.GetRightHandSocket
struct UAthenaAnimationWheelBlueprintFunctions_GetRightHandSocket_Params
{
	struct FAthenaAnimationWheel                       Wheel;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAthenaAnimationInstance*                    Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSocketId                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AthenaAnimationWheelBlueprintFunctions.GetRightFingerAlpha
struct UAthenaAnimationWheelBlueprintFunctions_GetRightFingerAlpha_Params
{
	struct FAthenaAnimationWheel                       Wheel;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationWheelBlueprintFunctions.GetLeftWheelArmDown
struct UAthenaAnimationWheelBlueprintFunctions_GetLeftWheelArmDown_Params
{
	struct FAthenaAnimationWheel                       Wheel;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationWheelBlueprintFunctions.GetLeftHandSocket
struct UAthenaAnimationWheelBlueprintFunctions_GetLeftHandSocket_Params
{
	struct FAthenaAnimationWheel                       Wheel;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAthenaAnimationInstance*                    Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSocketId                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AthenaAnimationWheelBlueprintFunctions.GetLeftFingerAlpha
struct UAthenaAnimationWheelBlueprintFunctions_GetLeftFingerAlpha_Params
{
	struct FAthenaAnimationWheel                       Wheel;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationWheelBlueprintFunctions.GetFullBodyAlpha
struct UAthenaAnimationWheelBlueprintFunctions_GetFullBodyAlpha_Params
{
	struct FAthenaAnimationWheel                       Wheel;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationWieldedItemAnimationOverlayFunctions.UpdateThirdPersonArmOverlayFlags
struct UAthenaAnimationWieldedItemAnimationOverlayFunctions_UpdateThirdPersonArmOverlayFlags_Params
{
	class UAthenaAnimationInstance*                    Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      SourceString;                                             // (ConstParm, Parm, ZeroConstructor)
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.AthenaAnimationWieldedItemAnimationOverlayFunctions.UpdateFirstPersonArmOverlayFlags
struct UAthenaAnimationWieldedItemAnimationOverlayFunctions_UpdateFirstPersonArmOverlayFlags_Params
{
	class UAthenaAnimationInstance*                    Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      SourceString;                                             // (ConstParm, Parm, ZeroConstructor)
	struct FAthenaAnimationLocomotion                  Locomotion;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.AthenaAnimationWieldedItemAnimationOverlayFunctions.UpdateAnimOverlayParameters
struct UAthenaAnimationWieldedItemAnimationOverlayFunctions_UpdateAnimOverlayParameters_Params
{
	class UAthenaAnimationInstance*                    Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EArmOverlayState>                      ArmOverlayState;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ThirdPersonAnimgraph;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaAnimationWieldedItemAnimationOverlayFunctions.StopFacialAnimationMontage
struct UAthenaAnimationWieldedItemAnimationOverlayFunctions_StopFacialAnimationMontage_Params
{
	class UAthenaAnimationInstance*                    Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                MontageToStop;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFacialPriority>                       Priority;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationWieldedItemAnimationOverlayFunctions.PlayNewFacialAnimation
struct UAthenaAnimationWieldedItemAnimationOverlayFunctions_PlayNewFacialAnimation_Params
{
	class UAthenaAnimationInstance*                    Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MontagePlayRate;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFacialPriority>                       Priority;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationWieldedItemAnimationOverlayFunctions.JumpToFacialAnimationMontageSection
struct UAthenaAnimationWieldedItemAnimationOverlayFunctions_JumpToFacialAnimationMontageSection_Params
{
	class UAthenaAnimationInstance*                    Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                PlayingMontage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MontageSection;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFacialPriority>                       Priority;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationWieldedItemFunctions.GetIntoContinuousUseSwimmingAnimationBlendSpace
struct UAthenaAnimationWieldedItemFunctions_GetIntoContinuousUseSwimmingAnimationBlendSpace_Params
{
	class UAthenaAnimationInstance*                    AnimInstance;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EContinuousUseOverride>                Override;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAnimationWieldedItemFunctions.GetIntoContinuousUseAnimationSequence
struct UAthenaAnimationWieldedItemFunctions_GetIntoContinuousUseAnimationSequence_Params
{
	class UAthenaAnimationInstance*                    AnimInstance;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EContinuousUseOverride>                Override;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCameraComponent.GetIsUnderwater
struct UAthenaCameraComponent_GetIsUnderwater_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCameraComponent.Activate
struct UAthenaCameraComponent_Activate_Params
{
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaAICharacter.SetTargetActorToFace
struct AAthenaAICharacter_SetTargetActorToFace_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaAICharacter.SetRegion
struct AAthenaAICharacter_SetRegion_Params
{
	struct FName                                       InRegion;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.AthenaAICharacter.SetOverrideShotHitChance
struct AAthenaAICharacter_SetOverrideShotHitChance_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HitChance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaAICharacter.SetOverrideCannonShotHitChance
struct AAthenaAICharacter_SetOverrideCannonShotHitChance_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HitChance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaAICharacter.SetLoadout
struct AAthenaAICharacter_SetLoadout_Params
{
	TAssetPtr<class ULoadoutAsset>                     InLoadout;                                                // (Parm)
};

// Function Athena.AthenaAICharacter.SetAIStrategy
struct AAthenaAICharacter_SetAIStrategy_Params
{
	class UClass*                                      InStrategy;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaAICharacter.SetAIAnimationState
struct AAthenaAICharacter_SetAIAnimationState_Params
{
	class UClass*                                      InAnimationState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaAICharacter.OnRep_CurrentAnimationState
struct AAthenaAICharacter_OnRep_CurrentAnimationState_Params
{
	class UClass*                                      OldAnimationState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaAICharacter.OnRep_CurrentAIStrategy
struct AAthenaAICharacter_OnRep_CurrentAIStrategy_Params
{
	class UClass*                                      OldAIStrategy;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaAICharacter.GetRegion
struct AAthenaAICharacter_GetRegion_Params
{
	struct FName                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Athena.AthenaAICharacter.GetAIStrategy
struct AAthenaAICharacter_GetAIStrategy_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaAICharacter.GetAIAnimationState
struct AAthenaAICharacter_GetAIAnimationState_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.VoyageParticipantComponent.OnRep_View
struct UVoyageParticipantComponent_OnRep_View_Params
{
};

// Function Athena.LocalDisturbanceFunctionLibrary.SetWindowSize
struct ULocalDisturbanceFunctionLibrary_SetWindowSize_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   WindowSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.LocalDisturbanceFunctionLibrary.SetBlendValues
struct ULocalDisturbanceFunctionLibrary_SetBlendValues_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    BlendValues;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.LocalDisturbanceFunctionLibrary.AddDisturbance
struct ULocalDisturbanceFunctionLibrary_AddDisturbance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GrassCutScale;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacterMovementComponent.SetMovementMode
struct UAthenaCharacterMovementComponent_SetMovementMode_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacterMovementComponent.SetErrorOnResolvePenetration
struct UAthenaCharacterMovementComponent_SetErrorOnResolvePenetration_Params
{
	bool                                               ErrorOnResolve;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacterMovementComponent.HasValidAckedMoveClientOnly
struct UAthenaCharacterMovementComponent_HasValidAckedMoveClientOnly_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacterMovementComponent.GetTimestampOfMostRecentPredictedMoveClientOnly
struct UAthenaCharacterMovementComponent_GetTimestampOfMostRecentPredictedMoveClientOnly_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacterMovementComponent.GetTimestampOfLastAckedMoveClientOnly
struct UAthenaCharacterMovementComponent_GetTimestampOfLastAckedMoveClientOnly_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacterMovementComponent.GetTerminalVelocity
struct UAthenaCharacterMovementComponent_GetTerminalVelocity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacterMovementComponent.GetMovementMode
struct UAthenaCharacterMovementComponent_GetMovementMode_Params
{
	TEnumAsByte<EMovementMode>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacterMovementComponent.GetMaxSprintSpeed
struct UAthenaCharacterMovementComponent_GetMaxSprintSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacterMovementComponent.GetMaxMoveSpeedScalar
struct UAthenaCharacterMovementComponent_GetMaxMoveSpeedScalar_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacterMovementComponent.FindCurrentFloor
struct UAthenaCharacterMovementComponent_FindCurrentFloor_Params
{
};

// Function Athena.AthenaPlayerCharacterMovementComponent.RestoreAudioStateAfterFallDamage
struct UAthenaPlayerCharacterMovementComponent_RestoreAudioStateAfterFallDamage_Params
{
};

// Function Athena.AthenaCharacterDockingFunctions.StartDockingCharacterWithActor
struct UAthenaCharacterDockingFunctions_StartDockingCharacterWithActor_Params
{
	struct FDocker                                     Docker;                                                   // (Parm, OutParm, ReferenceParm)
	class AAthenaCharacter*                            Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DockDuration;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DelayAfterDockDuration;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacterDodgeComponent.Server_RequestDodge
struct UAthenaCharacterDodgeComponent_Server_RequestDodge_Params
{
	struct FVector                                     Direction;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.AthenaCharacterDodgeComponent.Multicast_CharacterDodge
struct UAthenaCharacterDodgeComponent_Multicast_CharacterDodge_Params
{
	struct FVector                                     Direction;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.AthenaCharacterFunctions.TeleportPlayerToLocation
struct UAthenaCharacterFunctions_TeleportPlayerToLocation_Params
{
	class AAthenaCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTeleportLocation                           Where;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacterFunctions.GetTeleportLocationForPlayer
struct UAthenaCharacterFunctions_GetTeleportLocationForPlayer_Params
{
	class AAthenaCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTeleportLocation                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AthenaCharacterFunctions.AllAnimationsLoadedForCharacter
struct UAthenaCharacterFunctions_AllAnimationsLoadedForCharacter_Params
{
	class AAthenaCharacter*                            Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacterKnockbackComponent.SetDisabled
struct UAthenaCharacterKnockbackComponent_SetDisabled_Params
{
	bool                                               IsDisabled;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacterKnockbackComponent.KnockBack
struct UAthenaCharacterKnockbackComponent_KnockBack_Params
{
	struct FKnockBackInfo                              KnockBackInfo;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Direction;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              NoWaterDragDuration;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamagerType;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacterKnockbackComponent.Client_PlayerKnockBackRPC
struct UAthenaCharacterKnockbackComponent_Client_PlayerKnockBackRPC_Params
{
	struct FKnockBackInfo                              KnockBackInfo;                                            // (ConstParm, Parm, ReferenceParm)
	struct FVector                                     Direction;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              NoWaterDragDuration;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacterTestFunctions.WaitUntilFullySpawned
struct UAthenaCharacterTestFunctions_WaitUntilFullySpawned_Params
{
	class AAthenaCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function Athena.AthenaCharacterTestFunctions.WaitUntilDocked
struct UAthenaCharacterTestFunctions_WaitUntilDocked_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	class AAthenaCharacter*                            AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacterTestFunctions.WaitForTeleport
struct UAthenaCharacterTestFunctions_WaitForTeleport_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AAthenaCharacter*                            AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function Athena.AthenaCharacterTestFunctions.WaitForMovementMode
struct UAthenaCharacterTestFunctions_WaitForMovementMode_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	class AAthenaCharacter*                            AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         WantedMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumFramesInMovementMode;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacterTestFunctions.WaitForCustomMovementMode
struct UAthenaCharacterTestFunctions_WaitForCustomMovementMode_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	class AAthenaCharacter*                            AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CustomMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumFramesInMovementMode;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacterTestFunctions.TestRadialHandleNotificationInput
struct UAthenaCharacterTestFunctions_TestRadialHandleNotificationInput_Params
{
	class AAthenaCharacter*                            AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacterTestFunctions.TestRadialHandleAnalogInput
struct UAthenaCharacterTestFunctions_TestRadialHandleAnalogInput_Params
{
	class AAthenaCharacter*                            AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacterTestFunctions.TestAthenaCharacterHandleNotificationInput
struct UAthenaCharacterTestFunctions_TestAthenaCharacterHandleNotificationInput_Params
{
	class AAthenaCharacter*                            AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacterTestFunctions.TestAthenaCharacterHandleAnalogInput
struct UAthenaCharacterTestFunctions_TestAthenaCharacterHandleAnalogInput_Params
{
	class AAthenaCharacter*                            AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacterTestFunctions.TeleportToPosition
struct UAthenaCharacterTestFunctions_TeleportToPosition_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	class AAthenaCharacter*                            AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TeleportBase;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StreamOutLevel;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StreamInLevel;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacterTestFunctions.SimulateButtonPress
struct UAthenaCharacterTestFunctions_SimulateButtonPress_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Button;                                                   // (Parm)
};

// Function Athena.AthenaCharacterTestFunctions.SetupInputBinder
struct UAthenaCharacterTestFunctions_SetupInputBinder_Params
{
	class AAthenaCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCharacterInputBinder*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacterTestFunctions.SetupCharacterForMPTesting
struct UAthenaCharacterTestFunctions_SetupCharacterForMPTesting_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AAthenaCharacter*                            AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacterTestFunctions.SetupAthenaCharacterForInteractionTestByIndex
struct UAthenaCharacterTestFunctions_SetupAthenaCharacterForInteractionTestByIndex_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AAthenaCharacter*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacterTestFunctions.SetupAthenaCharacterForInteractionTest
struct UAthenaCharacterTestFunctions_SetupAthenaCharacterForInteractionTest_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AAthenaCharacter*                            AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AAthenaCharacter*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacterTestFunctions.SendCharacterMoveInput
struct UAthenaCharacterTestFunctions_SendCharacterMoveInput_Params
{
	class AAthenaCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Movement;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacterTestFunctions.HasAnyoneGotInputBindings
struct UAthenaCharacterTestFunctions_HasAnyoneGotInputBindings_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacterTestFunctions.GetLocalAthenaCharacter
struct UAthenaCharacterTestFunctions_GetLocalAthenaCharacter_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AAthenaPlayerCharacter*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacterTestFunctions.GetClientPlayerCharacter
struct UAthenaCharacterTestFunctions_GetClientPlayerCharacter_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ClientId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SplitScreenIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AAthenaPlayerCharacter*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacterTestFunctions.GetClientCharacter
struct UAthenaCharacterTestFunctions_GetClientCharacter_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ClientId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SplitScreenIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AAthenaCharacter*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacterTestFunctions.ForceInteract
struct UAthenaCharacterTestFunctions_ForceInteract_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	class AAthenaCharacter*                            AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Interactable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WaitUntilFullyDocked;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacterTestFunctions.CreateAndEquipItemDesc
struct UAthenaCharacterTestFunctions_CreateAndEquipItemDesc_Params
{
	class AAthenaCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemDesc;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AItemInfo*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacterTestFunctions.CreateAndAddItemDescToInventory
struct UAthenaCharacterTestFunctions_CreateAndAddItemDescToInventory_Params
{
	class AAthenaCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemDesc;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AItemInfo*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaCharacterTestFunctions.ClearInputBindings
struct UAthenaCharacterTestFunctions_ClearInputBindings_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaCharacterTestFunctions.ClearCharacterInteractionPolicies
struct UAthenaCharacterTestFunctions_ClearCharacterInteractionPolicies_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaGameInstance.SetClientOnboardingEnabledForCurrentPirate
struct UAthenaGameInstance_SetClientOnboardingEnabledForCurrentPirate_Params
{
	bool                                               Enabled;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaGameInstance.GetLocalPlayerId
struct UAthenaGameInstance_GetLocalPlayerId_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.ReplenishableInterface.SetShouldRefresh
struct UReplenishableInterface_SetShouldRefresh_Params
{
	bool                                               InShouldRefresh;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ReplenishableInterface.Replenish
struct UReplenishableInterface_Replenish_Params
{
};

// Function Athena.ReplenishableInterface.RefreshFromSpawner
struct UReplenishableInterface_RefreshFromSpawner_Params
{
};

// Function Athena.ReplenishableInterface.IsAtMaxCapacity
struct UReplenishableInterface_IsAtMaxCapacity_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ReplenishableInterface.GetShouldRefresh
struct UReplenishableInterface_GetShouldRefresh_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ReplenishableInterface.FillWithDefaultDesc
struct UReplenishableInterface_FillWithDefaultDesc_Params
{
	TArray<struct FStorageContainerNode>               Nodes;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Athena.ReplenishableInterface.Deplete
struct UReplenishableInterface_Deplete_Params
{
};

// Function Athena.ReplenishableInterface.CanBeReplenished
struct UReplenishableInterface_CanBeReplenished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ReplenishableInterface.AddDefaultStockLevel
struct UReplenishableInterface_AddDefaultStockLevel_Params
{
};

// Function Athena.AthenaGameMode.SetStorageContainerRefreshInterval
struct AAthenaGameMode_SetStorageContainerRefreshInterval_Params
{
	float                                              InRefreshInterval;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaGameMode.SetRespawnTimer
struct AAthenaGameMode_SetRespawnTimer_Params
{
	float                                              InRespawnTimer;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaGameMode.ResetStorageContainers
struct AAthenaGameMode_ResetStorageContainers_Params
{
};

// Function Athena.AthenaGameMode.RequestDemoSessionReset
struct AAthenaGameMode_RequestDemoSessionReset_Params
{
	class AAthenaPlayerController*                     AthenaPlayerController;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InStartNewSession;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaGameMode.IsPlayerOnGhostShip
struct AAthenaGameMode_IsPlayerOnGhostShip_Params
{
	class APawn*                                       PlayerPawn;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaPlayerCharacterTestFunctions.ForceShipRegion
struct UAthenaPlayerCharacterTestFunctions_ForceShipRegion_Params
{
	class AAthenaPlayerCharacter*                      AthenaPlayerCharacter;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShipRegion>                           ShipRegion;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaPlayerCharacterTestFunctions.ForceReCalculateShipRegion
struct UAthenaPlayerCharacterTestFunctions_ForceReCalculateShipRegion_Params
{
	class AAthenaPlayerCharacter*                      AthenaPlayerCharacter;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaPlayerCharacterTestFunctions.DisableStatusResponse
struct UAthenaPlayerCharacterTestFunctions_DisableStatusResponse_Params
{
	class AAthenaPlayerCharacter*                      AthenaPlayerCharacter;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StatusResponseClass;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ControllableInterface.TakenControl
struct UControllableInterface_TakenControl_Params
{
	class AActor*                                      Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ControllableInterface.RequestStateChange
struct UControllableInterface_RequestStateChange_Params
{
	class AActor*                                      Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ControllableInterface.RequestRelinquishControl
struct UControllableInterface_RequestRelinquishControl_Params
{
};

// Function Athena.ControllableInterface.RelinquishedController
struct UControllableInterface_RelinquishedController_Params
{
	class AActor*                                      Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MountedWeaponInterface.GetYaw
struct UMountedWeaponInterface_GetYaw_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.MountedWeaponInterface.GetPitch
struct UMountedWeaponInterface_GetPitch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ReplicatedShipPartCustomizationComponent.OnReplicate_PartDesc
struct UReplicatedShipPartCustomizationComponent_OnReplicate_PartDesc_Params
{
};

// Function Athena.WheelInterface.GetWheelRate
struct UWheelInterface_GetWheelRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WheelInterface.GetWheelAngle
struct UWheelInterface_GetWheelAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WheelInterface.GetWantedWheelAngle
struct UWheelInterface_GetWantedWheelAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WheelInterface.GetServerWheelAngle
struct UWheelInterface_GetServerWheelAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WheelInterface.GetNormalizedWheelPosition
struct UWheelInterface_GetNormalizedWheelPosition_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WheelInterface.GetAnimationType
struct UWheelInterface_GetAnimationType_Params
{
	TEnumAsByte<EWheelAnimationType>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WheelInterface.GetAnimationTime
struct UWheelInterface_GetAnimationTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Wheel.Server_SetWheelAngle
struct AWheel_Server_SetWheelAngle_Params
{
	float                                              WheelAngleIncrement;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Wheel.OnWheelDescLoaded
struct AWheel_OnWheelDescLoaded_Params
{
	class UWheelDescAsset*                             WheelDesc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Wheel.OnRep_ServerWheelAngle
struct AWheel_OnRep_ServerWheelAngle_Params
{
};

// Function Athena.Wheel.Multicast_ForceSetWheelAngle
struct AWheel_Multicast_ForceSetWheelAngle_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Wheel.GetWheelMesh
struct AWheel_GetWheelMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.Wheel.GetMinWheelAngle
struct AWheel_GetMinWheelAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Wheel.GetMaxWheelAngle
struct AWheel_GetMaxWheelAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Wheel.ForceSetWheelAngle
struct AWheel_ForceSetWheelAngle_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Wheel.ApplyWheelInput
struct AWheel_ApplyWheelInput_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CapstanInterface.IsLocked
struct UCapstanInterface_IsLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CapstanInterface.GetCapstanState
struct UCapstanInterface_GetCapstanState_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CapstanInterface.GetCapstanRatioVelocity
struct UCapstanInterface_GetCapstanRatioVelocity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CapstanInterface.GetCapstanNumCurrentUsers
struct UCapstanInterface_GetCapstanNumCurrentUsers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CapstanInterface.GetCapstanMaxVelocityPerPlayer
struct UCapstanInterface_GetCapstanMaxVelocityPerPlayer_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CapstanInterface.GetCapstanMaxRatioVelocity
struct UCapstanInterface_GetCapstanMaxRatioVelocity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DamageableInterface.OnDamageableImpact
struct UDamageableInterface_OnDamageableImpact_Params
{
	struct FImpactDamageEvent                          ImpactDamageEvent;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DamageableInterface.CanApplyDamage
struct UDamageableInterface_CanApplyDamage_Params
{
	struct FImpactDamageEvent                          ImpactDamageEvent;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DamageableComponent.OnDamageableImpact
struct UDamageableComponent_OnDamageableImpact_Params
{
	struct FImpactDamageEvent                          ImpactDamageEvent;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipDamageableComponent.Multicast_DamageTriggered
struct UShipDamageableComponent_Multicast_DamageTriggered_Params
{
	struct FImpactDamageEvent                          DamageEvent;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function Athena.ShipPartInterface.SetShip
struct UShipPartInterface_SetShip_Params
{
	class AShip*                                       Ship;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ShipPartInterface.GetShip
struct UShipPartInterface_GetShip_Params
{
	class AShip*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipPartInterface.ClearShip
struct UShipPartInterface_ClearShip_Params
{
};

// Function Athena.Capstan.ReactToRepairableStateChanged
struct ACapstan_ReactToRepairableStateChanged_Params
{
	TEnumAsByte<ERepairableState>                      InNewState;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Capstan.ReactToDamageLevelChanged
struct ACapstan_ReactToDamageLevelChanged_Params
{
	int                                                DamageLevel;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Capstan.ReactToDamage
struct ACapstan_ReactToDamage_Params
{
	struct FImpactDamageEvent                          ImpactDamageEvent;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.Capstan.OnCapstanRepaired
struct ACapstan_OnCapstanRepaired_Params
{
	int                                                RemainingLevelOfDamage;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Capstan.OnCapstanDescLoaded
struct ACapstan_OnCapstanDescLoaded_Params
{
	class UCapstanDescAsset*                           CapstanDesc;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Capstan.OnCapstanDamaged
struct ACapstan_OnCapstanDamaged_Params
{
	int                                                CurrentLevelOfDamage;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Capstan.GetMaxLevelOfDamage
struct ACapstan_GetMaxLevelOfDamage_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Capstan.GetLevelOfDamage
struct ACapstan_GetLevelOfDamage_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Capstan.GetCapstanReleaseActor
struct ACapstan_GetCapstanReleaseActor_Params
{
	class ACapstanRelease*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Capstan.GetArms
struct ACapstan_GetArms_Params
{
	TArray<class ACapstanArm*>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.Capstan.ChanceDroppingTheAnchor
struct ACapstan_ChanceDroppingTheAnchor_Params
{
	float                                              InNormalisedChanceToDrop;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Capstan.BindToRepairableComponents
struct ACapstan_BindToRepairableComponents_Params
{
};

// Function Athena.Capstan.BindToDamageComponent
struct ACapstan_BindToDamageComponent_Params
{
};

// Function Athena.Capstan.ApplyDamage
struct ACapstan_ApplyDamage_Params
{
	struct FImpactDamageEvent                          ImpactDamageEvent;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.IntentCombinerComponent.SetIntentProviders
struct UIntentCombinerComponent_SetIntentProviders_Params
{
	TArray<class UControllableIntentComponent*>        InIntentProviders;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Athena.IntentCombinerComponent.GetCombinedIntent
struct UIntentCombinerComponent_GetCombinedIntent_Params
{
	bool                                               IsMoving;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LeakableInterface.GetLeakAmount
struct ULeakableInterface_GetLeakAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RepairableInterface.HandleDestroy
struct URepairableInterface_HandleDestroy_Params
{
};

// Function Athena.RepairableInterface.GetRepairType
struct URepairableInterface_GetRepairType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RepairableInterface.GetRepairTime
struct URepairableInterface_GetRepairTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RepairableInterface.GetRepairableState
struct URepairableInterface_GetRepairableState_Params
{
	TEnumAsByte<ERepairableState>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DamageZone.SetPreventLeakingForTesting
struct ADamageZone_SetPreventLeakingForTesting_Params
{
	bool                                               InPreventLeaking;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DamageZone.PlayHitVFX
struct ADamageZone_PlayHitVFX_Params
{
	class UParticleSystem*                             VFX;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DamageZone.OnUnderwaterStateChanged
struct ADamageZone_OnUnderwaterStateChanged_Params
{
};

// Function Athena.DamageZone.OnShipSet
struct ADamageZone_OnShipSet_Params
{
};

// Function Athena.DamageZone.OnShipCleared
struct ADamageZone_OnShipCleared_Params
{
};

// Function Athena.DamageZone.OnShipBeginsToSink
struct ADamageZone_OnShipBeginsToSink_Params
{
};

// Function Athena.DamageZone.OnRepairMounted
struct ADamageZone_OnRepairMounted_Params
{
};

// Function Athena.DamageZone.OnRepairableStateUpdate
struct ADamageZone_OnRepairableStateUpdate_Params
{
	TEnumAsByte<ERepairableState>                      InRepairableState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DamageZone.OnRep_DamageLevel
struct ADamageZone_OnRep_DamageLevel_Params
{
};

// Function Athena.DamageZone.OnRep_AuthorityRepairableState
struct ADamageZone_OnRep_AuthorityRepairableState_Params
{
};

// Function Athena.DamageZone.OnInitialise
struct ADamageZone_OnInitialise_Params
{
};

// Function Athena.DamageZone.Multicast_PlayDamageEffectsRPC
struct ADamageZone_Multicast_PlayDamageEffectsRPC_Params
{
	bool                                               PlaySfx;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayVFX;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DamageZone.IsOnSinkingShip
struct ADamageZone_IsOnSinkingShip_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DamageZone.IsAboutToBlow
struct ADamageZone_IsAboutToBlow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DamageZone.InitialiseInternalWaterSamplePositions
struct ADamageZone_InitialiseInternalWaterSamplePositions_Params
{
};

// Function Athena.DamageZone.GetShipOwner
struct ADamageZone_GetShipOwner_Params
{
	class AShip*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DamageZone.GetRepairMountLocation
struct ADamageZone_GetRepairMountLocation_Params
{
	class USceneComponent*                             MountLocation;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       MountSocket;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DamageZone.GetMaxDamageLevel
struct ADamageZone_GetMaxDamageLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DamageZone.GetLeakAmount
struct ADamageZone_GetLeakAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DamageZone.GetHoleDecalPositionWorldSpace
struct ADamageZone_GetHoleDecalPositionWorldSpace_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DamageZone.GetHoleDecalPositionLocalSpace
struct ADamageZone_GetHoleDecalPositionLocalSpace_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DamageZone.GetDamagePercentage
struct ADamageZone_GetDamagePercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DamageZone.GetDamageLevel
struct ADamageZone_GetDamageLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DamageZone.ApplyDamage
struct ADamageZone_ApplyDamage_Params
{
	struct FHullDamageHit                              InHit;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.HullDamage.ShouldHitGenerateDecal
struct AHullDamage_ShouldHitGenerateDecal_Params
{
	struct FVector                                     HitNormal;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitVelocity;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              HitStrength;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.HullDamage.GetDamageZonesByDamagerType
struct AHullDamage_GetDamageZonesByDamagerType_Params
{
	class UClass*                                      InDamagerType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InPosition;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                InNumDamageZones;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ADamageZone*>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.HullDamage.CalculateHitStrengthForImpact
struct AHullDamage_CalculateHitStrengthForImpact_Params
{
	struct FVector                                     HitNormal;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitVelocity;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              HitStrength;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LaunchableProjectile.TrailSfxIsActive
struct ALaunchableProjectile_TrailSfxIsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LaunchableProjectile.TrailIsActive
struct ALaunchableProjectile_TrailIsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LaunchableProjectile.OnStop
struct ALaunchableProjectile_OnStop_Params
{
	struct FHitResult                                  Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.LaunchableProjectile.OnReachedDeepWater
struct ALaunchableProjectile_OnReachedDeepWater_Params
{
};

// Function Athena.LaunchableProjectile.OnImpactEffects
struct ALaunchableProjectile_OnImpactEffects_Params
{
	struct FHitResult                                  Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.LaunchableProjectile.OnImpact
struct ALaunchableProjectile_OnImpact_Params
{
	struct FHitResult                                  Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.LaunchableProjectile.OnExitWater
struct ALaunchableProjectile_OnExitWater_Params
{
};

// Function Athena.LaunchableProjectile.OnEnterWater
struct ALaunchableProjectile_OnEnterWater_Params
{
};

// Function Athena.LaunchableProjectile.LaunchWithOffset
struct ALaunchableProjectile_LaunchWithOffset_Params
{
	struct FVector                                     LaunchVelocity;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     SpawnLaunchOffset;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.LaunchableProjectile.IsInWater
struct ALaunchableProjectile_IsInWater_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Cannon.Server_RequestAim
struct ACannon_Server_RequestAim_Params
{
	float                                              NewPitch;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewYaw;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Cannon.Server_Fire
struct ACannon_Server_Fire_Params
{
	float                                              InPitch;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InYaw;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Cannon.OnRep_ServerYaw
struct ACannon_OnRep_ServerYaw_Params
{
};

// Function Athena.Cannon.OnRep_ServerPitch
struct ACannon_OnRep_ServerPitch_Params
{
};

// Function Athena.Cannon.OnRep_LoadedItemInfo
struct ACannon_OnRep_LoadedItemInfo_Params
{
};

// Function Athena.Cannon.OnCannonDescLoaded
struct ACannon_OnCannonDescLoaded_Params
{
	class UCannonDescAsset*                            CannonDesc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Cannon.Multicast_FireProjectile
struct ACannon_Multicast_FireProjectile_Params
{
	class UClass*                                      ProjectileType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InInstigator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AuthoritySpawnLocation;                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     LaunchVelocity;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.Cannon.Multicast_FirePlayer
struct ACannon_Multicast_FirePlayer_Params
{
	class AActor*                                      InInstigator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InstigatorWasControllingActor;                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Cannon.IsReadyToFire
struct ACannon_IsReadyToFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Cannon.HandleYawInput
struct ACannon_HandleYawInput_Params
{
	float                                              YawInput;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Cannon.HandlePitchInput
struct ACannon_HandlePitchInput_Params
{
	float                                              PitchInput;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Cannon.GetNormalisedYawRate
struct ACannon_GetNormalisedYawRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Cannon.GetNormalisedPitchRate
struct ACannon_GetNormalisedPitchRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Cannon.ForceAimCannon
struct ACannon_ForceAimCannon_Params
{
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Cannon.Fire
struct ACannon_Fire_Params
{
};

// Function Athena.AthenaPlayerController.Server_ReportPlayerDelta
struct AAthenaPlayerController_Server_ReportPlayerDelta_Params
{
	struct FVector                                     InVector;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.AthenaPlayerController.Server_ExecuteCommand
struct AAthenaPlayerController_Server_ExecuteCommand_Params
{
	class FString                                      Command;                                                  // (Parm, ZeroConstructor)
};

// Function Athena.AthenaPlayerController.GetPlayerStreamingReferenceLocation
struct AAthenaPlayerController_GetPlayerStreamingReferenceLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaPlayerController.GetAthenaCheatManager
struct AAthenaPlayerController_GetAthenaCheatManager_Params
{
	class UAthenaCheatManager*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaPlayerController.EOS
struct AAthenaPlayerController_EOS_Params
{
	class FString                                      Command;                                                  // (Parm, ZeroConstructor)
};

// Function Athena.AthenaPlayerController.AddYawRotationInput
struct AAthenaPlayerController_AddYawRotationInput_Params
{
	float                                              Input;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELookAtRotationType>                   RotationType;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaPlayerController.AddPitchRotationInput
struct AAthenaPlayerController_AddPitchRotationInput_Params
{
	float                                              Input;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELookAtRotationType>                   RotationType;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.OnlineAthenaPlayerController.ModifyActiveState
struct AOnlineAthenaPlayerController_ModifyActiveState_Params
{
	bool                                               IsActive;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TestAthenaPlayerController.TestConsoleExecutableFunction
struct ATestAthenaPlayerController_TestConsoleExecutableFunction_Params
{
};

// Function Athena.TestAthenaPlayerController.GrantDebugMenuPermissions
struct ATestAthenaPlayerController_GrantDebugMenuPermissions_Params
{
	bool                                               AllowAccess;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TestAthenaPlayerController.FakeInput
struct ATestAthenaPlayerController_FakeInput_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function Athena.TestAthenaPlayerController.FakeAxisInput
struct ATestAthenaPlayerController_FakeAxisInput_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	float                                              Delta;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TestPlayerRelevancyAthenaPlayerController.QueryRelevancyService
struct ATestPlayerRelevancyAthenaPlayerController_QueryRelevancyService_Params
{
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaPlayerControllerTestFunctions.TestAthenaPlayerControllerDisableNormalInputHandling
struct UAthenaPlayerControllerTestFunctions_TestAthenaPlayerControllerDisableNormalInputHandling_Params
{
	class AAthenaPlayerController*                     AthenaPlayerController;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaPlayerControllerTestFunctions.AddEntitlementDescToInventory
struct UAthenaPlayerControllerTestFunctions_AddEntitlementDescToInventory_Params
{
	class AAthenaPlayerController*                     Controller;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      EntitlementDesc;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TestAthenaPlayerState.SetUniquePlayerID
struct ATestAthenaPlayerState_SetUniquePlayerID_Params
{
	class FString                                      InUniquePlayerId;                                         // (Parm, ZeroConstructor)
};

// Function Athena.AthenaPlayerZonePenetrationTrackerComponent.OnOverlapEnd
struct UAthenaPlayerZonePenetrationTrackerComponent_OnOverlapEnd_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaPlayerZonePenetrationTrackerComponent.OnOverlapBegin
struct UAthenaPlayerZonePenetrationTrackerComponent_OnOverlapBegin_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.AthenaTextRender.OnTextCanvasUpdate
struct AAthenaTextRender_OnTextCanvasUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AtmosphericPressureZoneInterface.GetPressureZoneParameters
struct UAtmosphericPressureZoneInterface_GetPressureZoneParameters_Params
{
	struct FAtmosphericPressureZoneParametersAndLocation ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AtmosphericPressureServiceInterface.UnregisterAtmosphericPressureZoneFromService
struct UAtmosphericPressureServiceInterface_UnregisterAtmosphericPressureZoneFromService_Params
{
	TScriptInterface<class UAtmosphericPressureZoneInterface> PressureZone;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AtmosphericPressureServiceInterface.RegisterAtmosphericPressureZoneWithService
struct UAtmosphericPressureServiceInterface_RegisterAtmosphericPressureZoneWithService_Params
{
	TScriptInterface<class UAtmosphericPressureZoneInterface> PressureZone;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AtmosphericPressureServiceInterface.GetNumberOfAtmosphericPressureZones
struct UAtmosphericPressureServiceInterface_GetNumberOfAtmosphericPressureZones_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AtmosphericPressureServiceInterface.GetAtmosphericPressureZone
struct UAtmosphericPressureServiceInterface_GetAtmosphericPressureZone_Params
{
	int                                                PressureZoneIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAtmosphericPressureZoneParametersAndLocation ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.AtmosphericPressureServiceInterface.GetAllAtmosphericPressureZones
struct UAtmosphericPressureServiceInterface_GetAllAtmosphericPressureZones_Params
{
	TArray<struct FAtmosphericPressureZoneParametersAndLocation> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.AudioEmitterPoolSourceInterface.GetAudioEmitterPool
struct UAudioEmitterPoolSourceInterface_GetAudioEmitterPool_Params
{
	class UWwiseObjectPoolWrapper*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AudioUtilities.UpdateCharacterWadingRtpc
struct UAudioUtilities_UpdateCharacterWadingRtpc_Params
{
	class AAthenaCharacter*                            AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FWwiseEmitter>                       Emitters;                                                 // (Parm, ZeroConstructor)
	struct FName                                       WadingRtpcName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SquelchRtpcName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinRtpcValue;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRtpcValue;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AudioUtilities.PlayFootstepSound
struct UAudioUtilities_PlayFootstepSound_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AAthenaCharacter*                            AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWwiseEmitter                               Emitter;                                                  // (Parm)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 Cue;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharacterSpeedRtpc;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinRtpcValue;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRtpcValue;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterFootImpactType>              FootImpactType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AudioUtilities.FilterLocalPlayerFootStepSounds
struct UAudioUtilities_FilterLocalPlayerFootStepSounds_Params
{
	TEnumAsByte<ECharacterFootImpactType>              FootImpactType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.BakedDecalComponent.GetTargetTexture
struct UBakedDecalComponent_GetTargetTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.BakedDecalComponent.FinishInitialisation
struct UBakedDecalComponent_FinishInitialisation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.BakedDecalComponent.FilterEdges
struct UBakedDecalComponent_FilterEdges_Params
{
};

// Function Athena.BakedDecalComponent.DrawDecal
struct UBakedDecalComponent_DrawDecal_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NearDistance;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FarDistance;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CullDistance;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  DecalTexture;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBlendMode>                            BlendMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LODIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.BakedDecalComponent.CopyToTargetTexture
struct UBakedDecalComponent_CopyToTargetTexture_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    SourceTexture;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.BakedDecalComponent.ClearTargetTexture
struct UBakedDecalComponent_ClearTargetTexture_Params
{
	struct FLinearColor                                ClearColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.BakedDecalComponent.AddMesh
struct UBakedDecalComponent_AddMesh_Params
{
	class UStaticMeshComponent*                        Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Athena.BlueprintStepBase.SignalComplete
struct UBlueprintStepBase_SignalComplete_Params
{
};

// Function Athena.BlueprintStepBase.OnParticipantLeave
struct UBlueprintStepBase_OnParticipantLeave_Params
{
	class AActor*                                      Participant;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.BlueprintStepBase.OnParticipantJoin
struct UBlueprintStepBase_OnParticipantJoin_Params
{
	class AActor*                                      Participant;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.BlueprintStepBase.OnEnd
struct UBlueprintStepBase_OnEnd_Params
{
};

// Function Athena.BlueprintStepBase.OnBegin
struct UBlueprintStepBase_OnBegin_Params
{
	TEnumAsByte<ETaleQuestStepBeginMode>               InBeginMode;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.BodyLightControllerComponent.GetTargetLight
struct UBodyLightControllerComponent_GetTargetLight_Params
{
	class UAmbientLightSourceComponent*                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.BodyLightControllerComponent.AssignTargetLight
struct UBodyLightControllerComponent_AssignTargetLight_Params
{
	class UAmbientLightSourceComponent*                InTargetLight;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Athena.PickupableInterface.HandleDestroy
struct UPickupableInterface_HandleDestroy_Params
{
};

// Function Athena.ItemProxy.PostSfxEvent
struct AItemProxy_PostSfxEvent_Params
{
	class UWwiseEvent*                                 SfxEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ItemProxy.PerformDropOnSurfaceFx
struct AItemProxy_PerformDropOnSurfaceFx_Params
{
	TEnumAsByte<EPhysicalSurface>                      ServerSurfaceType;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AttachVFXToItem;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OverrideVFXPos;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      ActorToParentVfxTo;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ItemProxy.Multicast_DropOnSurfaceRPC
struct AItemProxy_Multicast_DropOnSurfaceRPC_Params
{
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AttachVFXToItem;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OverrideVFXPos;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      ActorToParentVfxTo;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ItemProxy.GetItemInfo
struct AItemProxy_GetItemInfo_Params
{
	class AItemInfo*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FloatingItemProxy.OnRep_PhysicsState
struct AFloatingItemProxy_OnRep_PhysicsState_Params
{
};

// Function Athena.BoxedRpcDispatcherComponent.Server_SendRpc
struct UBoxedRpcDispatcherComponent_Server_SendRpc_Params
{
	struct FSerialisedRpc                              Event;                                                    // (ConstParm, Parm, ReferenceParm)
};

// Function Athena.BoxedRpcDispatcherComponent.Client_SendRpc
struct UBoxedRpcDispatcherComponent_Client_SendRpc_Params
{
	struct FSerialisedRpc                              Event;                                                    // (ConstParm, Parm, ReferenceParm)
};

// Function Athena.BTService_DetermineRecoveryMethod.OnDamageTaken
struct UBTService_DetermineRecoveryMethod_OnDamageTaken_Params
{
	struct FImpactDamageEvent                          Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.BTService_ObserveTargetMeleeAttacks.OnTargetActorDestroyed
struct UBTService_ObserveTargetMeleeAttacks_OnTargetActorDestroyed_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.BTService_ObserveTargetReceivedDamage.OnObservedActorDestroyed
struct UBTService_ObserveTargetReceivedDamage_OnObservedActorDestroyed_Params
{
	class AActor*                                      ObservedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.BuoyancyComponent.Sink
struct UBuoyancyComponent_Sink_Params
{
};

// Function Athena.BuoyancyComponent.ShouldBeStationary
struct UBuoyancyComponent_ShouldBeStationary_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.BuoyancyComponent.SetEnabled
struct UBuoyancyComponent_SetEnabled_Params
{
	bool                                               InEnabled;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.BuoyancyComponent.OnRigidBodyWake
struct UBuoyancyComponent_OnRigidBodyWake_Params
{
	struct FName                                       InBoneName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.BuoyancyComponent.OnRigidBodySleep
struct UBuoyancyComponent_OnRigidBodySleep_Params
{
	struct FName                                       InBoneName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.BuoyancyComponent.OnRep_State
struct UBuoyancyComponent_OnRep_State_Params
{
};

// Function Athena.BuoyancyComponent.IsStationary
struct UBuoyancyComponent_IsStationary_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.BuoyancyComponent.IsSinking
struct UBuoyancyComponent_IsSinking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.BuoyancyComponent.IsEnabled
struct UBuoyancyComponent_IsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.IslandServiceInterface.OnCrewSpawningOnIsland
struct UIslandServiceInterface_OnCrewSpawningOnIsland_Params
{
	struct FName                                       IslandName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.IslandServiceInterface.GetAllIslandNames
struct UIslandServiceInterface_GetAllIslandNames_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.IslandData.OnOverlapEnd
struct AIslandData_OnOverlapEnd_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.IslandData.OnOverlapBegin
struct AIslandData_OnOverlapBegin_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OverlapInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.IslandData.MakeFIsland
struct AIslandData_MakeFIsland_Params
{
	struct FIsland                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.IslandData.IsOnWorldMap
struct AIslandData_IsOnWorldMap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InteractableObject.Blueprint_OnInteract_Server
struct AInteractableObject_Blueprint_OnInteract_Server_Params
{
	class AActor*                                      InInteractor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.InteractableObject.Blueprint_OnInteract_Client
struct AInteractableObject_Blueprint_OnInteract_Client_Params
{
	class AActor*                                      InInteractor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.BuoyantStorageContainer.OnRep_PhysicsState
struct ABuoyantStorageContainer_OnRep_PhysicsState_Params
{
};

// Function Athena.BurpComponent.Multicast_Burp
struct UBurpComponent_Multicast_Burp_Params
{
	float                                              DurationRTPC;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TypeRTPC;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.BurpComponent.GetCurrentGasAmount
struct UBurpComponent_GetCurrentGasAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.BurpTestActor.WieldItemByActor
struct ABurpTestActor_WieldItemByActor_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UnwieldFast;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWieldItemReturnCode>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.BurpTestActor.ToggleWieldItem
struct ABurpTestActor_ToggleWieldItem_Params
{
};

// Function Athena.BurpTestActor.RemoveItem
struct ABurpTestActor_RemoveItem_Params
{
	class AItemInfo*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.BurpTestActor.QuickSelectItemOfType
struct ABurpTestActor_QuickSelectItemOfType_Params
{
	TEnumAsByte<EItemType>                             ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TypedItemIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.BurpTestActor.QuickSelectItemOfCategory
struct ABurpTestActor_QuickSelectItemOfCategory_Params
{
	class UClass*                                      Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IndexIntoCategory;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.BurpTestActor.QuickSelectItem
struct ABurpTestActor_QuickSelectItem_Params
{
	int                                                ItemIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.BurpTestActor.PickUpItem
struct ABurpTestActor_PickUpItem_Params
{
	class AItemInfo*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AndWield;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldNotifyClients;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.BurpTestActor.GetNumberOfItemsOfItemCategory
struct ABurpTestActor_GetNumberOfItemsOfItemCategory_Params
{
	class UClass*                                      ItemSlot;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.BurpTestActor.GetCurrentItemIndex
struct ABurpTestActor_GetCurrentItemIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.BurpTestActor.CycleItemUp
struct ABurpTestActor_CycleItemUp_Params
{
};

// Function Athena.BurpTestActor.CycleItemType
struct ABurpTestActor_CycleItemType_Params
{
	TEnumAsByte<EItemType>                             ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.BurpTestActor.CycleItemDown
struct ABurpTestActor_CycleItemDown_Params
{
};

// Function Athena.BurpTestActor.CycleItemCategory
struct ABurpTestActor_CycleItemCategory_Params
{
	class UClass*                                      Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.BurpTestActor.ConsumeItem
struct ABurpTestActor_ConsumeItem_Params
{
	class AItemInfo*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.BurpTestActor.CanAddItemOfItemCategory
struct ABurpTestActor_CanAddItemOfItemCategory_Params
{
	class UClass*                                      ItemSlot;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECanAddItemQueryResult>                ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.BurpTestActor.AddItem
struct ABurpTestActor_AddItem_Params
{
	class AItemInfo*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CameraFadeManagerTestFunctions.IsFadeComplete
struct UCameraFadeManagerTestFunctions_IsFadeComplete_Params
{
	class APlayerController*                           TargetController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CameraFadeManagerTestFunctions.IsFadeActive
struct UCameraFadeManagerTestFunctions_IsFadeActive_Params
{
	class APlayerController*                           TargetController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CameraFadeManagerTestFunctions.FireFadeAckRequestToClient
struct UCameraFadeManagerTestFunctions_FireFadeAckRequestToClient_Params
{
	class AAthenaPlayerController*                     TargetController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AckTimeout;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Campfire.OnRep_IsOnFire
struct ACampfire_OnRep_IsOnFire_Params
{
};

// Function Athena.CannonAnimInterface.SetCannonFiring
struct UCannonAnimInterface_SetCannonFiring_Params
{
	bool                                               CannonFiring;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CannonAnimInterface.GetCannonFiring
struct UCannonAnimInterface_GetCannonFiring_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CannonAnimInstance.GetCannonFiring
struct UCannonAnimInstance_GetCannonFiring_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.IterativeCanvasRenderTarget2D.ReceiveUpdate
struct UIterativeCanvasRenderTarget2D_ReceiveUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.IterativeCanvasRenderTarget2D.GetSize
struct UIterativeCanvasRenderTarget2D_GetSize_Params
{
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.IterativeCanvasRenderTarget2D.Create
struct UIterativeCanvasRenderTarget2D_Create_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CanvasRenderTarget2DClass;                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InClearColor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UIterativeCanvasRenderTarget2D*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CanvasWorldMapComponent.OnCanvasUpdate
struct UCanvasWorldMapComponent_OnCanvasUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CapstanArmInterface.SetIntent
struct UCapstanArmInterface_SetIntent_Params
{
	float                                              NewIntent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CapstanArmInterface.IsLocked
struct UCapstanArmInterface_IsLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CapstanArmInterface.IsArmInUse
struct UCapstanArmInterface_IsArmInUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CapstanArmInterface.GetCurrentIntent
struct UCapstanArmInterface_GetCurrentIntent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CapstanArmInterface.GetCapstanRatioVelocity
struct UCapstanArmInterface_GetCapstanRatioVelocity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CapstanTestFunctions.SetupCapstanTestServerSide
struct UCapstanTestFunctions_SetupCapstanTestServerSide_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CapstanClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ACapstan*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CapstanTestFunctions.SetupCapstanTestClientSide
struct UCapstanTestFunctions_SetupCapstanTestClientSide_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ACapstan*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CapstanTestFunctions.SetCapstanSpeed
struct UCapstanTestFunctions_SetCapstanSpeed_Params
{
	class ACapstan*                                    Capstan;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxPlayerVelocity;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxLoweringVelocity;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CapstanTestFunctions.GetCapstanArm
struct UCapstanTestFunctions_GetCapstanArm_Params
{
	class ACapstan*                                    Capstan;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ArmIndex;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ACapstanArm*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CapstanTestFunctions.ForceSetCapstanRatio
struct UCapstanTestFunctions_ForceSetCapstanRatio_Params
{
	class ACapstan*                                    Capstan;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetRatio;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CapturedByKrakenActionStateId.PushCharacterIntoCapturedByKrakenActionState
struct UCapturedByKrakenActionStateId_PushCharacterIntoCapturedByKrakenActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AKrakenAnimatedTentacle*                     Tentacle;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CapturedByKrakenActionStateId.PopCharacterOutOfCapturedByKrakenActionState
struct UCapturedByKrakenActionStateId_PopCharacterOutOfCapturedByKrakenActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CargoRunCrateComponent.OnRep_DropOffData
struct UCargoRunCrateComponent_OnRep_DropOffData_Params
{
};

// Function Athena.CarouselPirateDescConversion.ToPirateDescriptor
struct UCarouselPirateDescConversion_ToPirateDescriptor_Params
{
	struct FCarouselPirateDesc                         InParams;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FPirateDescription                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.CarouselPirateDescConversion.ToOutfit
struct UCarouselPirateDescConversion_ToOutfit_Params
{
	struct FCarouselPirateDesc                         InParams;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.CarouselPirateGenerator.RefreshCurrentPirateStatus
struct UCarouselPirateGenerator_RefreshCurrentPirateStatus_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CarouselPirateGenerator.GenerateSetOfPirates
struct UCarouselPirateGenerator_GenerateSetOfPirates_Params
{
	int                                                InSeed;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InCount;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FCarouselPirateGeneratorParams              InParams;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FCarouselPirateDesc>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.CarouselPirateGenerator.GenerateClothingItems
struct UCarouselPirateGenerator_GenerateClothingItems_Params
{
	int                                                InSeed;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FCarouselPirateGeneratorParams              InParams;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EIPGGender>                            InTargetGender;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIPGEthnicity>                         InTargetEthnicity;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.CharacterAudioComponent.SetNamedState
struct UCharacterAudioComponent_SetNamedState_Params
{
	struct FName                                       StateName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               Active;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CharacterAudioComponent.ResetNamedStates
struct UCharacterAudioComponent_ResetNamedStates_Params
{
};

// Function Athena.CharacterAudioComponent.GetSpaceRtpcValueFromRtpcName
struct UCharacterAudioComponent_GetSpaceRtpcValueFromRtpcName_Params
{
	struct FName                                       RTPCName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CharacterAudioComponent.GetNumberOfSkeletonsAffectingMusicSystem
struct UCharacterAudioComponent_GetNumberOfSkeletonsAffectingMusicSystem_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CharacterAudioComponent.GetEmitter
struct UCharacterAudioComponent_GetEmitter_Params
{
	struct FWwiseEmitter                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.CharacterAudioComponent.GetCurrentPlayerMusicState
struct UCharacterAudioComponent_GetCurrentPlayerMusicState_Params
{
	TEnumAsByte<EPlayerMusicState>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CharacterAudioComponent.Client_PostAudioEventToLocalClientOnly
struct UCharacterAudioComponent_Client_PostAudioEventToLocalClientOnly_Params
{
	class UWwiseEvent*                                 Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CharacterInteractionComponentTestFunctions.PushCanInteractValidatorToInteractionComponent
struct UCharacterInteractionComponentTestFunctions_PushCanInteractValidatorToInteractionComponent_Params
{
	class UCharacterInteractionComponent*              InCharacterInteractionComponent;                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Athena.CharacterInteractionComponentTestFunctions.CharacterInteractionComponentWithoutInteractors_WhenPolicyIsAdded_PolicyIsntCalled
struct UCharacterInteractionComponentTestFunctions_CharacterInteractionComponentWithoutInteractors_WhenPolicyIsAdded_PolicyIsntCalled_Params
{
	class UCharacterInteractionComponent*              InCharacterInteractionComponent;                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CharacterInteractionComponentTestFunctions.CharacterInteractionComponentWithInteractors_WhenPolicyIsAdded_PolicyIsCalled
struct UCharacterInteractionComponentTestFunctions_CharacterInteractionComponentWithInteractors_WhenPolicyIsAdded_PolicyIsCalled_Params
{
	class UCharacterInteractionComponent*              InCharacterInteractionComponent;                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CharacterInteractionComponentTestFunctions.CharacterInteractionComponentWithInteractor_TwoPolicies_HighestPriorityFirst
struct UCharacterInteractionComponentTestFunctions_CharacterInteractionComponentWithInteractor_TwoPolicies_HighestPriorityFirst_Params
{
	class UCharacterInteractionComponent*              InCharacterInteractionComponent;                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CharacterPossessedEventTestComponent.HasReceivedPlayerStateReplicatedEvent
struct UCharacterPossessedEventTestComponent_HasReceivedPlayerStateReplicatedEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CharacterSocketCollisionFunctionLibrary.NotEqual
struct UCharacterSocketCollisionFunctionLibrary_NotEqual_Params
{
	struct FCharacterSocketCollisionHandle             A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FCharacterSocketCollisionHandle             B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CharacterSocketCollisionFunctionLibrary.IsValid
struct UCharacterSocketCollisionFunctionLibrary_IsValid_Params
{
	struct FCharacterSocketCollisionHandle             Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CharacterSocketCollisionFunctionLibrary.Equal
struct UCharacterSocketCollisionFunctionLibrary_Equal_Params
{
	struct FCharacterSocketCollisionHandle             A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FCharacterSocketCollisionHandle             B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CharacterSocketCollisionServiceInterface.UnregisterSocket
struct UCharacterSocketCollisionServiceInterface_UnregisterSocket_Params
{
	struct FCharacterSocketCollisionHandle             Handle;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function Athena.CharacterSocketCollisionServiceInterface.RegisterSocket
struct UCharacterSocketCollisionServiceInterface_RegisterSocket_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCharacterSocketCollisionDesc               InDesc;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FCharacterSocketCollisionHandle             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.CharacterSocketCollisionServiceInterface.IsSocketRegistered
struct UCharacterSocketCollisionServiceInterface_IsSocketRegistered_Params
{
	struct FCharacterSocketCollisionHandle             Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ChatboxCompositeInputHandler.OnOpenChatbox
struct UChatboxCompositeInputHandler_OnOpenChatbox_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CinematicCameraController.SetFOV
struct ACinematicCameraController_SetFOV_Params
{
	float                                              NewFOV;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CinematicCameraController.GetFOV
struct ACinematicCameraController_GetFOV_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ClamberActionStateId.PushCharacterIntoClamberActionState
struct UClamberActionStateId_PushCharacterIntoClamberActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ClamberActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NormalisedInteractionWidth;                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClimbId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLadderBlendParams                          ClamberBlendParams;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.ClothingLoadoutControlInterface.UnequipClothing
struct UClothingLoadoutControlInterface_UnequipClothing_Params
{
	class UClass*                                      InDesc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ClothingLoadoutControlInterface.SetClothingLoadout
struct UClothingLoadoutControlInterface_SetClothingLoadout_Params
{
	struct FClothingLoadout                            InLoadout;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.ClothingLoadoutControlInterface.EquipClothing
struct UClothingLoadoutControlInterface_EquipClothing_Params
{
	class UClass*                                      InDesc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ClothingLoadoutViewInterface.GetClothingLoadout
struct UClothingLoadoutViewInterface_GetClothingLoadout_Params
{
	struct FClothingLoadout                            ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Athena.TitleLoadoutControlInterface.Client_UpdateTitleUI
struct UTitleLoadoutControlInterface_Client_UpdateTitleUI_Params
{
	class UClass*                                      InLoadout;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.TitleLoadoutViewInterface.GetTitleLoadout
struct UTitleLoadoutViewInterface_GetTitleLoadout_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ClothingLoadoutComponent.OnRep_Loadout
struct UClothingLoadoutComponent_OnRep_Loadout_Params
{
};

// Function Athena.CloudSystem.SetGlobalAtmosphericPressure
struct ACloudSystem_SetGlobalAtmosphericPressure_Params
{
	float                                              NewAtmosphericPressure;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CoastInterface.UnregisterCoast
struct UCoastInterface_UnregisterCoast_Params
{
	struct FBlueprintableIntegerHandle                 CoastHandle;                                              // (Parm)
};

// Function Athena.CoastInterface.RegisterCoast
struct UCoastInterface_RegisterCoast_Params
{
	class USplineComponent*                            CoastalSpline;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            InnerSpline;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     SplineOrigin;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBlueprintableIntegerHandle                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.CoastInterface.GetClosestPointOnClosestCoast
struct UCoastInterface_GetClosestPointOnClosestCoast_Params
{
	struct FVector                                     LookupPosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutClosestPoint;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsOnIsland;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CoastInterface.GetClosestIslandNameOfCoastlineForPointAndTolerance
struct UCoastInterface_GetClosestIslandNameOfCoastlineForPointAndTolerance_Params
{
	struct FVector                                     Pos;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              MaxDistFromCoast;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutClosestDistToShore;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CoastInterface.GetClosestCoastObjects
struct UCoastInterface_GetClosestCoastObjects_Params
{
	struct FVector                                     LookupPosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FCoastObject>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.CoherentBaseHUD.IsViewportValid
struct ACoherentBaseHUD_IsViewportValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ItemLoadoutControlInterface.SetItemLoadout
struct UItemLoadoutControlInterface_SetItemLoadout_Params
{
	struct FItemLoadout                                InItemLoadout;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.ItemLoadoutControlInterface.RemoveItem
struct UItemLoadoutControlInterface_RemoveItem_Params
{
	class AItemInfo*                                   InItem;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemLoadoutDestroyBehaviour>          InDestroyBehaviour;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ItemLoadoutControlInterface.PushItem
struct UItemLoadoutControlInterface_PushItem_Params
{
	class AItemInfo*                                   InItem;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ItemLoadoutControlInterface.EquipWeapon_Client
struct UItemLoadoutControlInterface_EquipWeapon_Client_Params
{
	class UClass*                                      InItemDesc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ItemLoadoutControlInterface.EquipWeapon
struct UItemLoadoutControlInterface_EquipWeapon_Params
{
	class UClass*                                      InItemDesc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ItemLoadoutControlInterface.EquipItem
struct UItemLoadoutControlInterface_EquipItem_Params
{
	class UClass*                                      InItemDesc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.QuickInventoryComponent.Server_InventoryEquipItem
struct UQuickInventoryComponent_Server_InventoryEquipItem_Params
{
	class UClass*                                      InItemDesc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaHUD.ShowTooltipsDetailedAtlas
struct AAthenaHUD_ShowTooltipsDetailedAtlas_Params
{
};

// Function Athena.AthenaHUD.ShowTooltipsAtlas
struct AAthenaHUD_ShowTooltipsAtlas_Params
{
};

// Function Athena.AthenaHUD.ShowNameplatesAtlas
struct AAthenaHUD_ShowNameplatesAtlas_Params
{
};

// Function Athena.AthenaHUD.HasInputFocus
struct AAthenaHUD_HasInputFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaHUD.AreInGameMenusActive
struct AAthenaHUD_AreInGameMenusActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AthenaHUD.AreAllViewScriptingReady
struct AAthenaHUD_AreAllViewScriptingReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CoherentUIGTInstancedComponent.ScriptingReadyEventReceived
struct UCoherentUIGTInstancedComponent_ScriptingReadyEventReceived_Params
{
};

// Function Athena.CoherentUIGTInstancedComponent.ReadyForBindingsEventReceived
struct UCoherentUIGTInstancedComponent_ReadyForBindingsEventReceived_Params
{
};

// Function Athena.CoherentUIGTInstancedComponent.OnScriptingReady
struct UCoherentUIGTInstancedComponent_OnScriptingReady_Params
{
};

// Function Athena.CoherentUIGTInstancedComponent.OnReadyForBindings
struct UCoherentUIGTInstancedComponent_OnReadyForBindings_Params
{
};

// Function Athena.CoherentUIGTInstancedComponent.IsScriptingReady
struct UCoherentUIGTInstancedComponent_IsScriptingReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CoherentUIGTInstancedComponent.GetHUDMaterial
struct UCoherentUIGTInstancedComponent_GetHUDMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CoherentUIGTInstancedComponent.FinishLoadEventReceived
struct UCoherentUIGTInstancedComponent_FinishLoadEventReceived_Params
{
	class FString                                      path;                                                     // (Parm, ZeroConstructor)
	bool                                               isMainFrame;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CoherentUIGTInstancedComponent.BindingsReleasedEventReceived
struct UCoherentUIGTInstancedComponent_BindingsReleasedEventReceived_Params
{
};

// Function Athena.CoherentBaseHUDComponent.OnScriptingReady
struct UCoherentBaseHUDComponent_OnScriptingReady_Params
{
};

// Function Athena.CoherentBaseHUDComponent.OnReadyForBindings
struct UCoherentBaseHUDComponent_OnReadyForBindings_Params
{
};

// Function Athena.CoherentBaseHUDComponent.HasInitializationErrorOccurred
struct UCoherentBaseHUDComponent_HasInitializationErrorOccurred_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FrontendHudComponent.SetFrontendMessagingDispatcher
struct UFrontendHudComponent_SetFrontendMessagingDispatcher_Params
{
	TScriptInterface<class UObjectMessagingDispatcherInterface> Dispatcher;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.FrontendHudComponent.OnReadyForBindings
struct UFrontendHudComponent_OnReadyForBindings_Params
{
};

// Function Athena.UIInputForwardComponent.TargetViewScriptingReady
struct UUIInputForwardComponent_TargetViewScriptingReady_Params
{
};

// Function Athena.UIInputForwardComponent.SetUIFocus
struct UUIInputForwardComponent_SetUIFocus_Params
{
	TEnumAsByte<EUIInputFocusType>                     FocusType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCoherentUIGTBaseComponent*                  TargetViewComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Athena.UIInputForwardComponent.SetTargetView
struct UUIInputForwardComponent_SetTargetView_Params
{
	class UCoherentUIGTBaseComponent*                  ViewComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Athena.UIInputForwardComponent.IsUIFocused
struct UUIInputForwardComponent_IsUIFocused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.UIInputForwardComponent.GetCurrentInputFocusType
struct UUIInputForwardComponent_GetCurrentInputFocusType_Params
{
	TEnumAsByte<EUIInputFocusType>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.UIInputForwardComponent.CentreMouseCursor
struct UUIInputForwardComponent_CentreMouseCursor_Params
{
};

// Function Athena.FrontendHUD.SetBootFlowMessagingDispatcher
struct AFrontendHUD_SetBootFlowMessagingDispatcher_Params
{
	TScriptInterface<class UObjectMessagingDispatcherInterface> Dispatcher;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.FrontendHUD.GetBootFlowMessagingDispatcher
struct AFrontendHUD_GetBootFlowMessagingDispatcher_Params
{
	TScriptInterface<class UObjectMessagingDispatcherInterface> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FrontendHUD.DeletePirate
struct AFrontendHUD_DeletePirate_Params
{
};

// Function Athena.FrontendHUD.AttachToBootFlowMessagingDispatcher
struct AFrontendHUD_AttachToBootFlowMessagingDispatcher_Params
{
};

// Function Athena.CoherentToWwiseEventComponent.IsPlayingAny
struct UCoherentToWwiseEventComponent_IsPlayingAny_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CoherentToWwiseEventComponent.GetEmitter
struct UCoherentToWwiseEventComponent_GetEmitter_Params
{
	struct FWwiseEmitter                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.CoherentUIGTHUDComponent.OnScriptingReady
struct UCoherentUIGTHUDComponent_OnScriptingReady_Params
{
};

// Function Athena.CoherentUIGTHUDComponent.OnReadyForBindings
struct UCoherentUIGTHUDComponent_OnReadyForBindings_Params
{
};

// Function Athena.CoherentUIGTInGameMenusComponent.OnReadyForBindings
struct UCoherentUIGTInGameMenusComponent_OnReadyForBindings_Params
{
};

// Function Athena.CoherentUIGTAtlasComponent.OnReadyForBindings
struct UCoherentUIGTAtlasComponent_OnReadyForBindings_Params
{
};

// Function Athena.CompanyNPCInterface.PurchaseWieldedBooty
struct UCompanyNPCInterface_PurchaseWieldedBooty_Params
{
	class AActor*                                      Vendor;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CompanyNPCInterface.CanPurchaseBootyOfType
struct UCompanyNPCInterface_CanPurchaseBootyOfType_Params
{
	TEnumAsByte<EBootyTypes>                           BootyType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ContestZone.OnRep_ContestZoneBoundary
struct AContestZone_OnRep_ContestZoneBoundary_Params
{
};

// Function Athena.ContestZoneService.SelectAndInitialiseContestZone
struct AContestZoneService_SelectAndInitialiseContestZone_Params
{
	struct FName                                       InContestZoneNameToSelect;                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.ContestZoneService.OnLevelAddedToWorld
struct AContestZoneService_OnLevelAddedToWorld_Params
{
	class ULevel*                                      InLevel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ContestZoneService.ActivateContestZone
struct AContestZoneService_ActivateContestZone_Params
{
};

// Function Athena.ContestManagerService.OnContestStart
struct AContestManagerService_OnContestStart_Params
{
};

// Function Athena.ContestManagerService.OnContestEnd
struct AContestManagerService_OnContestEnd_Params
{
};

// Function Athena.ContestManagerService.ContestVoyageComplete
struct AContestManagerService_ContestVoyageComplete_Params
{
	struct FGuid                                       InVoyageId;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               DoNotNotifyParticipantsOnVoyageComplete;                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ControlCapstanArmActionStateId.PushCharacterIntoControlCapstanArmActionState
struct UControlCapstanArmActionStateId_PushCharacterIntoControlCapstanArmActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ControlledObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ControllableMessagesInterface.TakenControlOfWheel
struct UControllableMessagesInterface_TakenControlOfWheel_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ControllableMessagesInterface.RelinquishedControl
struct UControllableMessagesInterface_RelinquishedControl_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ControllableObjectFunctionLibrary.GetAnyUncontrolledActor
struct UControllableObjectFunctionLibrary_GetAnyUncontrolledActor_Params
{
	TArray<class AActor*>                              Actors;                                                   // (Parm, ZeroConstructor)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ControllableObjectFunctionLibrary.FilterUncontrolledActors
struct UControllableObjectFunctionLibrary_FilterUncontrolledActors_Params
{
	TArray<class AActor*>                              Actors;                                                   // (Parm, OutParm, ZeroConstructor)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.ControllableObjectFunctionLibrary.FilterControllableActors
struct UControllableObjectFunctionLibrary_FilterControllableActors_Params
{
	TArray<class AActor*>                              Actors;                                                   // (Parm, OutParm, ZeroConstructor)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.ControlObjectActionStateId.PushCharacterIntoControlObjectActionState
struct UControlObjectActionStateId_PushCharacterIntoControlObjectActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ControlledObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ControlSailManipulatorActionStateId.PushCharacterIntoControlSailManipulatorActionState
struct UControlSailManipulatorActionStateId_PushCharacterIntoControlSailManipulatorActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ControlledObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EControllableObjectType>               ControllableType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnalogInputId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ControlWheelActionStateId.PushCharacterIntoControlWheelActionState
struct UControlWheelActionStateId_PushCharacterIntoControlWheelActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AWheel*                                      ControlledObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CrewFunctions.ResetCrewToSpawnLocation
struct UCrewFunctions_ResetCrewToSpawnLocation_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShipSpawnLocation*                          SpawnLocation;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CrewFunctions.ResetCrewToSafeSpawnLocation
struct UCrewFunctions_ResetCrewToSafeSpawnLocation_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActorLocation;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CrewFunctions.RemoveCharacterFromCrew
struct UCrewFunctions_RemoveCharacterFromCrew_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AAthenaCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CrewFunctions.IsCharacterMemberOfCrew
struct UCrewFunctions_IsCharacterMemberOfCrew_Params
{
	class AAthenaCharacter*                            Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CrewFunctions.IsActorMemberOfCharactersCrew
struct UCrewFunctions_IsActorMemberOfCharactersCrew_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AAthenaCharacter*                            Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CrewFunctions.GetShipSizeForCrewId
struct UCrewFunctions_GetShipSizeForCrewId_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CrewFunctions.GetShipSizeForActorsCrew
struct UCrewFunctions_GetShipSizeForActorsCrew_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CrewFunctions.GetCrewIdFromActor
struct UCrewFunctions_GetCrewIdFromActor_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CrewFunctions.CreateCrewWithSessionTemplate
struct UCrewFunctions_CreateCrewWithSessionTemplate_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FCrewSessionTemplate                        CrewSessionTemplate;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class AAthenaPlayerState*                          FirstMember;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESessionVisibility>                    SessionVisibility;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CrewFunctions.CreateCrew
struct UCrewFunctions_CreateCrew_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AAthenaPlayerState*                          FirstMember;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESessionVisibility>                    SessionVisibility;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CrewFunctions.AreInSameCrew
struct UCrewFunctions_AreInSameCrew_Params
{
	struct FGuid                                       CrewId1;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FGuid                                       CrewId2;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CrewFunctions.AreCharactersInSameCrew
struct UCrewFunctions_AreCharactersInSameCrew_Params
{
	class AAthenaCharacter*                            Player1;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AAthenaCharacter*                            Player2;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CrewFunctions.AddShipToCrew
struct UCrewFunctions_AddShipToCrew_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AShip*                                       Ship;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.CrewFunctions.AddCharacterToCrew
struct UCrewFunctions_AddCharacterToCrew_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AAthenaCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.CrewMembershipInterface.GetLastKnownCrewId
struct UCrewMembershipInterface_GetLastKnownCrewId_Params
{
	struct FGuid                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Athena.CrewMembershipInterface.GetCrewId
struct UCrewMembershipInterface_GetCrewId_Params
{
	struct FGuid                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Athena.ShipCustomizationLoadoutControlInterface.UnequipShipCustomization
struct UShipCustomizationLoadoutControlInterface_UnequipShipCustomization_Params
{
	class UClass*                                      InDesc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipCustomizationLoadoutControlInterface.SetShipCustomizationLoadout
struct UShipCustomizationLoadoutControlInterface_SetShipCustomizationLoadout_Params
{
	struct FShipCustomizationLoadout                   InLoadout;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.ShipCustomizationLoadoutControlInterface.SetInitialShipCustomizations
struct UShipCustomizationLoadoutControlInterface_SetInitialShipCustomizations_Params
{
	TArray<class UClass*>                              InInitialCustomizations;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipCustomizationLoadoutControlInterface.GetShipCustomizationLoadout
struct UShipCustomizationLoadoutControlInterface_GetShipCustomizationLoadout_Params
{
	struct FShipCustomizationLoadout                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.ShipCustomizationLoadoutControlInterface.EquipShipCustomization
struct UShipCustomizationLoadoutControlInterface_EquipShipCustomization_Params
{
	class UClass*                                      InDesc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InInstigator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipCustomizationLoadoutViewInterface.GetShipCustomizationLoadout
struct UShipCustomizationLoadoutViewInterface_GetShipCustomizationLoadout_Params
{
	struct FShipCustomizationLoadout                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Athena.ShipCustomizationLoadoutViewInterface.GetInitialShipCustomizations
struct UShipCustomizationLoadoutViewInterface_GetInitialShipCustomizations_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Athena.ShipCustomizationLoadoutViewInterface.GetActivePartCustomizations
struct UShipCustomizationLoadoutViewInterface_GetActivePartCustomizations_Params
{
	TArray<struct FPartDesc>                           ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Athena.ShipCustomizationLoadoutComponent.OnRep_Loadout
struct UShipCustomizationLoadoutComponent_OnRep_Loadout_Params
{
};

// Function Athena.CrewShipManifest.SetProposedVoyage
struct ACrewShipManifest_SetProposedVoyage_Params
{
	class UVoyageProposalDesc*                         Proposal;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CrewShipManifest.OnRep_VoyageSelectionVoteData
struct ACrewShipManifest_OnRep_VoyageSelectionVoteData_Params
{
};

// Function Athena.CrewShipManifest.OnRep_VoyageCancelVoteData
struct ACrewShipManifest_OnRep_VoyageCancelVoteData_Params
{
};

// Function Athena.CrewShipManifest.OnRep_ProposedVoyages
struct ACrewShipManifest_OnRep_ProposedVoyages_Params
{
};

// Function Athena.CrewShipManifest.OnRep_CurrentActiveVoyage
struct ACrewShipManifest_OnRep_CurrentActiveVoyage_Params
{
};

// Function Athena.CrewShipManifest.OnCrewUpdated
struct ACrewShipManifest_OnCrewUpdated_Params
{
};

// Function Athena.CrewShipManifest.IsCurrentVoyageActive
struct ACrewShipManifest_IsCurrentVoyageActive_Params
{
	class UVoyageProposalDesc*                         Proposal;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CrewShipManifest.HasPlayerProposedVoyage
struct ACrewShipManifest_HasPlayerProposedVoyage_Params
{
	class AAthenaPlayerState*                          Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CrewShipManifest.HasPlayerProposedParticularVoyage
struct ACrewShipManifest_HasPlayerProposedParticularVoyage_Params
{
	class AAthenaPlayerState*                          Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Proposal;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CrewShipManifest.GetProposedVoyages
struct ACrewShipManifest_GetProposedVoyages_Params
{
	TArray<struct FProposedVoyageEntry>                OutProposedVoyages;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function Athena.CrewVoyageParticipant.OnPlayerStateEndPlay
struct UCrewVoyageParticipant_OnPlayerStateEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        InReason;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CrewVoyageParticipant.OnPlayerStateDestroyed
struct UCrewVoyageParticipant_OnPlayerStateDestroyed_Params
{
};

// Function Athena.LauncherParentInterface.GetProjectileIgnoreActors
struct ULauncherParentInterface_GetProjectileIgnoreActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.LauncherParentInterface.GetInheritedLaunchVelocity
struct ULauncherParentInterface_GetInheritedLaunchVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipCurseComponent.OnRep_ActorsAffectedByToggleInteractionsCurse
struct UShipCurseComponent_OnRep_ActorsAffectedByToggleInteractionsCurse_Params
{
	TArray<class AActor*>                              PreviousActorsAffectedByToggleInteractionsCurse;          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Athena.ShipCurseComponent.OnRep_ActiveCurseFX
struct UShipCurseComponent_OnRep_ActiveCurseFX_Params
{
	TArray<struct FShipActiveCurseFXData>              PreviousActiveCurseFX;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Athena.ShipCurseComponent.ApplyIntentOnSails
struct UShipCurseComponent_ApplyIntentOnSails_Params
{
	float                                              InNewIntent;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TeleportLocationInterface.GetTeleportLocationForCharacter
struct UTeleportLocationInterface_GetTeleportLocationForCharacter_Params
{
	class AAthenaCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTeleportLocation                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.TeleportLocationInterface.GetAllTeleportLocationsForCharacter
struct UTeleportLocationInterface_GetAllTeleportLocationsForCharacter_Params
{
	class AAthenaCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTeleportLocation>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.RainZoneInterface.GetRainZoneParametersAtTime
struct URainZoneInterface_GetRainZoneParametersAtTime_Params
{
	double                                             InTime;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRainZoneParametersAndLocation              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.RainZoneInterface.GetRainZoneParameters
struct URainZoneInterface_GetRainZoneParameters_Params
{
	struct FRainZoneParametersAndLocation              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.RainZoneServiceInterface.UnregisterRainZoneFromService
struct URainZoneServiceInterface_UnregisterRainZoneFromService_Params
{
	TScriptInterface<class URainZoneInterface>         RainZone;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.RainZoneServiceInterface.RegisterRainZoneWithService
struct URainZoneServiceInterface_RegisterRainZoneWithService_Params
{
	TScriptInterface<class URainZoneInterface>         RainZone;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.RainZoneServiceInterface.GetRainZone
struct URainZoneServiceInterface_GetRainZone_Params
{
	int                                                RainZoneIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRainZoneParametersAndLocation              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.RainZoneServiceInterface.GetRainStrengthAtTime
struct URainZoneServiceInterface_GetRainStrengthAtTime_Params
{
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	double                                             InTime;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RainZoneServiceInterface.GetRainStrength
struct URainZoneServiceInterface_GetRainStrength_Params
{
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RainZoneServiceInterface.GetNumberOfRainZones
struct URainZoneServiceInterface_GetNumberOfRainZones_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RainZoneServiceInterface.GetAllRainZones
struct URainZoneServiceInterface_GetAllRainZones_Params
{
	TArray<struct FRainZoneParametersAndLocation>      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.SurfaceWaterComponent.SetSimulationActive
struct USurfaceWaterComponent_SetSimulationActive_Params
{
	bool                                               IsActive;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SurfaceWaterComponent.OnRep_AddWater
struct USurfaceWaterComponent_OnRep_AddWater_Params
{
};

// Function Athena.SurfaceWaterComponent.GetWaterTexture
struct USurfaceWaterComponent_GetWaterTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SurfaceWaterComponent.GetNormalTexture
struct USurfaceWaterComponent_GetNormalTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SurfaceWaterComponent.ConvertToWaterSpace
struct USurfaceWaterComponent_ConvertToWaterSpace_Params
{
	struct FVector                                     WorldSpacePosition;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SurfaceWaterComponent.ClearWaterTexture
struct USurfaceWaterComponent_ClearWaterTexture_Params
{
	struct FLinearColor                                ClearColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SurfaceWaterComponent.AddWater
struct USurfaceWaterComponent_AddWater_Params
{
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CheckBounds;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WaterModifierZoneInterface.GetWaterModifierZoneType
struct UWaterModifierZoneInterface_GetWaterModifierZoneType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WaterModifierZoneInterface.GetWaterModifierZoneParameters
struct UWaterModifierZoneInterface_GetWaterModifierZoneParameters_Params
{
	struct FWaterModifierZoneParametersAndLocation     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.WaterModifierZoneServiceInterface.UnregisterWaterModifierZoneFromService
struct UWaterModifierZoneServiceInterface_UnregisterWaterModifierZoneFromService_Params
{
	TScriptInterface<class UWaterModifierZoneInterface> WaterModifierZone;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WaterModifierZoneServiceInterface.RegisterWaterModifierZoneWithService
struct UWaterModifierZoneServiceInterface_RegisterWaterModifierZoneWithService_Params
{
	TScriptInterface<class UWaterModifierZoneInterface> WaterModifierZone;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WaterModifierZoneServiceInterface.GetWaterModifierZones
struct UWaterModifierZoneServiceInterface_GetWaterModifierZones_Params
{
	class UClass*                                      Type;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FWaterModifierZoneParametersAndLocation> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.WaterModifierZoneServiceInterface.GetWaterModifierZone
struct UWaterModifierZoneServiceInterface_GetWaterModifierZone_Params
{
	int                                                WaterModifierZoneIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWaterModifierZoneParametersAndLocation     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.WaterModifierZoneServiceInterface.GetWaterModifierStrength
struct UWaterModifierZoneServiceInterface_GetWaterModifierStrength_Params
{
	class UClass*                                      Type;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WaterModifierZoneServiceInterface.GetWaterModifierDrowningParams
struct UWaterModifierZoneServiceInterface_GetWaterModifierDrowningParams_Params
{
	class AAthenaCharacter*                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBlendableDrowningParams                    DefaultParams;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBlendableDrowningParams                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.WaterModifierZoneServiceInterface.GetNumberOfWaterModifierZonesByType
struct UWaterModifierZoneServiceInterface_GetNumberOfWaterModifierZonesByType_Params
{
	class UClass*                                      Type;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WaterModifierZoneServiceInterface.GetNumberOfWaterModifierZones
struct UWaterModifierZoneServiceInterface_GetNumberOfWaterModifierZones_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WaterModifierZoneServiceInterface.GetDragScalarAtLocation
struct UWaterModifierZoneServiceInterface_GetDragScalarAtLocation_Params
{
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WaterModifierZoneServiceInterface.GetAllWaterModifierZones
struct UWaterModifierZoneServiceInterface_GetAllWaterModifierZones_Params
{
	TArray<struct FWaterModifierZoneParametersAndLocation> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.DamageablePartsInterface.UnregisterDamageablePart
struct UDamageablePartsInterface_UnregisterDamageablePart_Params
{
	class AActor*                                      DamageableActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DamageablePartsInterface.RegisterDamageablePart
struct UDamageablePartsInterface_RegisterDamageablePart_Params
{
	class AActor*                                      DamageableActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DamageablePartsInterface.GetDamageableParts
struct UDamageablePartsInterface_GetDamageableParts_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.Ship.ToggleShipWaterReflections
struct AShip_ToggleShipWaterReflections_Params
{
	bool                                               EnableReflections;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Ship.SetVelocity
struct AShip_SetVelocity_Params
{
	struct FVector                                     Velocity;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Ship.SetDebugKeelOverSpeedScalar
struct AShip_SetDebugKeelOverSpeedScalar_Params
{
	float                                              Scalar;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Ship.Replenish
struct AShip_Replenish_Params
{
};

// Function Athena.Ship.ReduceWaterOcclusionZone
struct AShip_ReduceWaterOcclusionZone_Params
{
	float                                              ReduceWaterOcclusionZoneTime;                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Ship.OnShipSurface
struct AShip_OnShipSurface_Params
{
};

// Function Athena.Ship.OnShipPartUnregistered
struct AShip_OnShipPartUnregistered_Params
{
	struct FName                                       PartName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      PartActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Ship.OnShipPartRegistered
struct AShip_OnShipPartRegistered_Params
{
	struct FName                                       PartName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      PartActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Ship.OnShipDive
struct AShip_OnShipDive_Params
{
};

// Function Athena.Ship.OnRep_ShipSizeObject
struct AShip_OnRep_ShipSizeObject_Params
{
};

// Function Athena.Ship.OnRep_CrewShipManifest
struct AShip_OnRep_CrewShipManifest_Params
{
};

// Function Athena.Ship.OnOverlapEnd
struct AShip_OnOverlapEnd_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Ship.OnOverlapBegin
struct AShip_OnOverlapBegin_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.Ship.Multicast_DisableAllShipInteractables
struct AShip_Multicast_DisableAllShipInteractables_Params
{
};

// Function Athena.Ship.IsWorldSpacePositionBelowTopDeckPlane
struct AShip_IsWorldSpacePositionBelowTopDeckPlane_Params
{
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Ship.IsWorldSpacePositionBelowMidDeckPlane
struct AShip_IsWorldSpacePositionBelowMidDeckPlane_Params
{
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Ship.IsOcclusionZoneFullyReduced
struct AShip_IsOcclusionZoneFullyReduced_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Ship.GetShipLocatorPositionChecked
struct AShip_GetShipLocatorPositionChecked_Params
{
	TEnumAsByte<EShipLocation>                         LocatorID;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Ship.GetShipLocatorPosition
struct AShip_GetShipLocatorPosition_Params
{
	TEnumAsByte<EShipLocation>                         LocatorName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocatorPosition;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Ship.GetSampledSpeed
struct AShip_GetSampledSpeed_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Ship.GetRawHullSubmersedPercentage
struct AShip_GetRawHullSubmersedPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Ship.GetInternalWater
struct AShip_GetInternalWater_Params
{
	class AShipInternalWater*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Ship.GetHullSubmersedPercentage
struct AShip_GetHullSubmersedPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Ship.GetHullDamage
struct AShip_GetHullDamage_Params
{
	class AHullDamage*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Ship.GetHasShipEverSetSail
struct AShip_GetHasShipEverSetSail_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Ship.GetEmpiricalMaxShipSpeedInMPS
struct AShip_GetEmpiricalMaxShipSpeedInMPS_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Ship.GetDeckSurfaceWater
struct AShip_GetDeckSurfaceWater_Params
{
	class USurfaceWaterComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.Ship.GetCurrentVelocity
struct AShip_GetCurrentVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Ship.EnableCalmWaterBobbing
struct AShip_EnableCalmWaterBobbing_Params
{
	bool                                               bEnable;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Ship.Deplete
struct AShip_Deplete_Params
{
};

// Function Athena.Ship.CanBeReplenished
struct AShip_CanBeReplenished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Ship.AreShipInteractablesDisabled
struct AShip_AreShipInteractablesDisabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CustomisationPreviewShip.UpdateVisuals
struct ACustomisationPreviewShip_UpdateVisuals_Params
{
};

// Function Athena.CustomisationPreviewShip.SetShipCustomizationInfo
struct ACustomisationPreviewShip_SetShipCustomizationInfo_Params
{
	class UShipCustomizationInfo*                      NewShipCustomizationInfo;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CustomisationPreviewShip.SetLiveryCustomiser
struct ACustomisationPreviewShip_SetLiveryCustomiser_Params
{
};

// Function Athena.CustomisationPreviewShip.SetCategory
struct ACustomisationPreviewShip_SetCategory_Params
{
	struct FName                                       NewCategory;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CustomisationPreviewShip.GetShipCustomizationInfo
struct ACustomisationPreviewShip_GetShipCustomizationInfo_Params
{
	class UShipCustomizationInfo*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CustomisationPreviewShip.GetCategory
struct ACustomisationPreviewShip_GetCategory_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DamageBlueprintFunctionLibrary.TriggerShipImpactDamageFromLookAt
struct UDamageBlueprintFunctionLibrary_TriggerShipImpactDamageFromLookAt_Params
{
	class AAthenaPlayerCharacter*                      AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              IgnoreList;                                               // (ConstParm, Parm, ZeroConstructor)
};

// Function Athena.DamageBlueprintFunctionLibrary.TriggerShipImpactDamageFromLocationAndDirection
struct UDamageBlueprintFunctionLibrary_TriggerShipImpactDamageFromLocationAndDirection_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              IgnoreList;                                               // (ConstParm, Parm, ZeroConstructor)
};

// Function Athena.DamageBlueprintFunctionLibrary.TriggerShipImpactDamageAtLocation
struct UDamageBlueprintFunctionLibrary_TriggerShipImpactDamageAtLocation_Params
{
	class AShip*                                       Ship;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumHoles;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamagerType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DamageBlueprintFunctionLibrary.TriggerPlayerImpactDamageFromLookAt
struct UDamageBlueprintFunctionLibrary_TriggerPlayerImpactDamageFromLookAt_Params
{
	class AAthenaPlayerCharacter*                      AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              IgnoreList;                                               // (ConstParm, Parm, ZeroConstructor)
};

// Function Athena.DamageBlueprintFunctionLibrary.TriggerPlayerImpactDamageFromLocationAndDirection
struct UDamageBlueprintFunctionLibrary_TriggerPlayerImpactDamageFromLocationAndDirection_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              IgnoreList;                                               // (ConstParm, Parm, ZeroConstructor)
};

// Function Athena.DeadActionStateId.PushCharacterIntoDeadActionState
struct UDeadActionStateId_PushCharacterIntoDeadActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageInstance                             FinalBlow;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DebugFlyingActionStateId.PushCharacterIntoDebugFlyingActionState
struct UDebugFlyingActionStateId_PushCharacterIntoDebugFlyingActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DebugFlyingCompositeInputHandler.OnTurnRate
struct UDebugFlyingCompositeInputHandler_OnTurnRate_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DebugFlyingCompositeInputHandler.OnTurn
struct UDebugFlyingCompositeInputHandler_OnTurn_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DebugFlyingCompositeInputHandler.OnMoveUp
struct UDebugFlyingCompositeInputHandler_OnMoveUp_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DebugFlyingCompositeInputHandler.OnMoveRight
struct UDebugFlyingCompositeInputHandler_OnMoveRight_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DebugFlyingCompositeInputHandler.OnMoveForward
struct UDebugFlyingCompositeInputHandler_OnMoveForward_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DebugFlyingCompositeInputHandler.OnLookUpRate
struct UDebugFlyingCompositeInputHandler_OnLookUpRate_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DebugFlyingCompositeInputHandler.OnLookUp
struct UDebugFlyingCompositeInputHandler_OnLookUp_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DebugFlyingCompositeInputHandler.OnDisengageInput
struct UDebugFlyingCompositeInputHandler_OnDisengageInput_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DebugLandmarkLocation.EnableDrawingForAllMachines_RPC
struct ADebugLandmarkLocation_EnableDrawingForAllMachines_RPC_Params
{
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DebugShipControlActionStateId.PushCharacterIntoDebugShipControlActionState
struct UDebugShipControlActionStateId_PushCharacterIntoDebugShipControlActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class ADebugShipController*                        DebugShipController;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DebugShipControlCompositeInputHandler.OnTurnRate
struct UDebugShipControlCompositeInputHandler_OnTurnRate_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DebugShipControlCompositeInputHandler.OnMoveRight
struct UDebugShipControlCompositeInputHandler_OnMoveRight_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DebugShipControlCompositeInputHandler.OnLookUpRate
struct UDebugShipControlCompositeInputHandler_OnLookUpRate_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DebugShipControlCompositeInputHandler.OnJump
struct UDebugShipControlCompositeInputHandler_OnJump_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DebugShipFunctionLibrary.SetAllWheelAngle
struct UDebugShipFunctionLibrary_SetAllWheelAngle_Params
{
	class AActor*                                      Ship;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DebugShipFunctionLibrary.SetAllSailsLoweredProportion
struct UDebugShipFunctionLibrary_SetAllSailsLoweredProportion_Params
{
	class AActor*                                      Ship;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Proportion;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DebugShipFunctionLibrary.SetAllSailsDamageScalar
struct UDebugShipFunctionLibrary_SetAllSailsDamageScalar_Params
{
	class AActor*                                      Ship;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Proportion;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DebugShipFunctionLibrary.SetAllSailsAngle
struct UDebugShipFunctionLibrary_SetAllSailsAngle_Params
{
	class AActor*                                      Ship;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DebugShipFunctionLibrary.SetAllRuddersAngleRatio
struct UDebugShipFunctionLibrary_SetAllRuddersAngleRatio_Params
{
	class AActor*                                      Ship;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRudderAngleRatio;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DebugShipFunctionLibrary.SetAllCapstansPosition
struct UDebugShipFunctionLibrary_SetAllCapstansPosition_Params
{
	class AActor*                                      Ship;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DebugShipFunctionLibrary.SetAllCannonsAim
struct UDebugShipFunctionLibrary_SetAllCannonsAim_Params
{
	class AActor*                                      Ship;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DebugShipFunctionLibrary.SetAllAnchorsLoweredProportion
struct UDebugShipFunctionLibrary_SetAllAnchorsLoweredProportion_Params
{
	class AActor*                                      Ship;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InLoweredProportion;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DebugShipFunctionLibrary.RotateAllMastsSailAngles
struct UDebugShipFunctionLibrary_RotateAllMastsSailAngles_Params
{
	TArray<class AActor*>                              Masts;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PercentPerSec;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.DebugShipFunctionLibrary.FireEveryNthCannons
struct UDebugShipFunctionLibrary_FireEveryNthCannons_Params
{
	class AActor*                                      Ship;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EveryNthCannons;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DebugShipFunctionLibrary.FireCannonEveryXSecond
struct UDebugShipFunctionLibrary_FireCannonEveryXSecond_Params
{
	TArray<class AActor*>                              Cannons;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SecondsBetweenShots;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Accumulator;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                CannonIndex;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.DebugShipFunctionLibrary.FireAllCannons
struct UDebugShipFunctionLibrary_FireAllCannons_Params
{
	class AActor*                                      Ship;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DebugShipFunctionLibrary.CycleAllMastsSailLowered
struct UDebugShipFunctionLibrary_CycleAllMastsSailLowered_Params
{
	TArray<class AActor*>                              Masts;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PercentPerSec;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.DebugSuperSailorActionStateId.PushCharacterIntoDebugSuperSailorActionState
struct UDebugSuperSailorActionStateId_PushCharacterIntoDebugSuperSailorActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DebugSuperSailorCompositeInputHandler.OnRightTrigger
struct UDebugSuperSailorCompositeInputHandler_OnRightTrigger_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DebugSuperSailorCompositeInputHandler.OnMoveRight
struct UDebugSuperSailorCompositeInputHandler_OnMoveRight_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DebugSuperSailorCompositeInputHandler.OnMoveForward
struct UDebugSuperSailorCompositeInputHandler_OnMoveForward_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DebugSuperSailorCompositeInputHandler.OnDisengageInput
struct UDebugSuperSailorCompositeInputHandler_OnDisengageInput_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DebugTreasureLocation.EnableDrawingForAllMachines_RPC
struct ADebugTreasureLocation_EnableDrawingForAllMachines_RPC_Params
{
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DitherComponent.SetCurrentTransparency
struct UDitherComponent_SetCurrentTransparency_Params
{
	float                                              Val;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DitherComponent.FadeOut
struct UDitherComponent_FadeOut_Params
{
};

// Function Athena.DitherComponent.FadeIn
struct UDitherComponent_FadeIn_Params
{
};

// Function Athena.DitherFunctionLibrary.DisableDitheringOnMaterial
struct UDitherFunctionLibrary_DisableDitheringOnMaterial_Params
{
	class UMaterialInstance*                           Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DockToObjectCompositeInputHandler.OnDisengage
struct UDockToObjectCompositeInputHandler_OnDisengage_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DrawDebugService.OnRep_ReplicatedItems
struct ADrawDebugService_OnRep_ReplicatedItems_Params
{
};

// Function Athena.DrowningComponent.OnRep_CurrentState
struct UDrowningComponent_OnRep_CurrentState_Params
{
};

// Function Athena.DrowningComponent.OnRep_CurrentOxygen
struct UDrowningComponent_OnRep_CurrentOxygen_Params
{
};

// Function Athena.DrowningComponent.GetOxygenLevel
struct UDrowningComponent_GetOxygenLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DrunkennessComponent.TestForceVomiting
struct UDrunkennessComponent_TestForceVomiting_Params
{
	float                                              Duration;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DrunkennessComponent.SetTargetDrunkenness_RPC
struct UDrunkennessComponent_SetTargetDrunkenness_RPC_Params
{
	TEnumAsByte<EDrunkennessType>                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstantlySetActualToTarget;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DrunkennessComponent.SetTargetDrunkenness
struct UDrunkennessComponent_SetTargetDrunkenness_Params
{
	TEnumAsByte<EDrunkennessType>                      Type;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetDrunkeness;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DrunkennessComponent.Reset
struct UDrunkennessComponent_Reset_Params
{
};

// Function Athena.DrunkennessComponent.OnRep_RemainingAmountToSoberUpDueToWaterSplash
struct UDrunkennessComponent_OnRep_RemainingAmountToSoberUpDueToWaterSplash_Params
{
};

// Function Athena.DrunkennessComponent.OnRep_CurrentDrunkenness
struct UDrunkennessComponent_OnRep_CurrentDrunkenness_Params
{
};

// Function Athena.DrunkennessComponent.GetVomitComponent
struct UDrunkennessComponent_GetVomitComponent_Params
{
	class UVomitComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.DrunkennessComponent.GetStaggerAmplitude
struct UDrunkennessComponent_GetStaggerAmplitude_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DrunkennessComponent.GetOverallCurrentDrunkenness
struct UDrunkennessComponent_GetOverallCurrentDrunkenness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DrunkennessComponent.ChangeDrunkenness
struct UDrunkennessComponent_ChangeDrunkenness_Params
{
	TEnumAsByte<EDrunkennessType>                      Type;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DrunkennessChange;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DynamicFlowComponent.SetTexture
struct UDynamicFlowComponent_SetTexture_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    SourceTexture;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DynamicFlowComponent.GetTexture
struct UDynamicFlowComponent_GetTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DynamicFlowComponent.ClearTexture
struct UDynamicFlowComponent_ClearTexture_Params
{
	struct FLinearColor                                ClearColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.EmoteActionStateId.PushCharacterIntoEmoteActionState
struct UEmoteActionStateId_PushCharacterIntoEmoteActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       EmoteIdentifier;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ForcedEmote;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.EmoteCompositeInputHandler.OnZoomOut
struct UEmoteCompositeInputHandler_OnZoomOut_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.EmoteCompositeInputHandler.OnZoomMouse
struct UEmoteCompositeInputHandler_OnZoomMouse_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.EmoteCompositeInputHandler.OnZoomIn
struct UEmoteCompositeInputHandler_OnZoomIn_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.EmoteCompositeInputHandler.OnTurnRate
struct UEmoteCompositeInputHandler_OnTurnRate_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.EmoteCompositeInputHandler.OnTurn
struct UEmoteCompositeInputHandler_OnTurn_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.EmoteCompositeInputHandler.OnMoveRight
struct UEmoteCompositeInputHandler_OnMoveRight_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.EmoteCompositeInputHandler.OnMoveForward
struct UEmoteCompositeInputHandler_OnMoveForward_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.EmoteCompositeInputHandler.OnLookUpRate
struct UEmoteCompositeInputHandler_OnLookUpRate_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.EmoteCompositeInputHandler.OnLookUp
struct UEmoteCompositeInputHandler_OnLookUp_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.EmoteCompositeInputHandler.OnJump
struct UEmoteCompositeInputHandler_OnJump_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.EmoteCompositeInputHandler.OnCancel
struct UEmoteCompositeInputHandler_OnCancel_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.EmotesRadialComponent.GetNumSlots
struct UEmotesRadialComponent_GetNumSlots_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.EmotesRadialComponent.GetLastSelectedItem
struct UEmotesRadialComponent_GetLastSelectedItem_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.EmotesRadialComponent.DeactivateRadialInventory
struct UEmotesRadialComponent_DeactivateRadialInventory_Params
{
};

// Function Athena.EncounterService.StopListeningForEncounters
struct UEncounterService_StopListeningForEncounters_Params
{
	class AActor*                                      EncounterListenerActor;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Ensemble.OnRep_Instruments
struct AEnsemble_OnRep_Instruments_Params
{
};

// Function Athena.Ensemble.GetNumInstruments
struct AEnsemble_GetNumInstruments_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Ensemble.GetNumInstrumentData
struct AEnsemble_GetNumInstrumentData_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Ensemble.GetInstruments
struct AEnsemble_GetInstruments_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Athena.Ensemble.GetInstrumentDataPlaybackPosition
struct AEnsemble_GetInstrumentDataPlaybackPosition_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.HitReactionInterface.OnHitReactionImpact
struct UHitReactionInterface_OnHitReactionImpact_Params
{
	struct FImpactDamageEvent                          ImpactDamageEvent;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.ExplosiveComponent.Multicast_Explode
struct UExplosiveComponent_Multicast_Explode_Params
{
};

// Function Athena.FaceTargetComponent.OnRep_TargetActorToFace
struct UFaceTargetComponent_OnRep_TargetActorToFace_Params
{
	class AActor*                                      PrevTargetActorToFace;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Fauna.TestingSetWaterState
struct AFauna_TestingSetWaterState_Params
{
	TEnumAsByte<EFaunaInWaterState>                    NewInState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Fauna.SetAIStrategy
struct AFauna_SetAIStrategy_Params
{
	class UClass*                                      InStrategy;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Fauna.OnRep_TargetTurnAngle
struct AFauna_OnRep_TargetTurnAngle_Params
{
};

// Function Athena.Fauna.OnRep_IsPlayingStarvingAnim
struct AFauna_OnRep_IsPlayingStarvingAnim_Params
{
};

// Function Athena.Fauna.OnRep_IsCalm
struct AFauna_OnRep_IsCalm_Params
{
};

// Function Athena.Fauna.OnRep_IsAgitated
struct AFauna_OnRep_IsAgitated_Params
{
};

// Function Athena.Fauna.OnRep_InWaterState
struct AFauna_OnRep_InWaterState_Params
{
};

// Function Athena.Fauna.OnRep_CurrentAIStrategy
struct AFauna_OnRep_CurrentAIStrategy_Params
{
	class UClass*                                      OldAIStrategy;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Fauna.OnRep_CratedState
struct AFauna_OnRep_CratedState_Params
{
	TEnumAsByte<EFaunaCratedState>                     PreviousCratedState;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.Fauna.Multicast_PlayPutInCrateEffectsRPC
struct AFauna_Multicast_PlayPutInCrateEffectsRPC_Params
{
	class AActor*                                      Crate;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Fauna.Multicast_JustBeenFedRPC
struct AFauna_Multicast_JustBeenFedRPC_Params
{
	class AActor*                                      FedBy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Fauna.Multicast_HightlightLeader
struct AFauna_Multicast_HightlightLeader_Params
{
	bool                                               bIsLeader;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Fauna.Multicast_DespawnRPC
struct AFauna_Multicast_DespawnRPC_Params
{
};

// Function Athena.Fauna.GetAIStrategy
struct AFauna_GetAIStrategy_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Fauna.GenerateNewRandomAnimationSeed
struct AFauna_GenerateNewRandomAnimationSeed_Params
{
};

// Function Athena.Fauna.ActivateResponseRPC
struct AFauna_ActivateResponseRPC_Params
{
	float                                              InTargetTurnAngle;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetTurnRightAnimation
struct UFaunaAnimationInstance_GetTurnRightAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetTurnRate
struct UFaunaAnimationInstance_GetTurnRate_Params
{
	float                                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetTurnLeftAnimation
struct UFaunaAnimationInstance_GetTurnLeftAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetSurfaceOrientation
struct UFaunaAnimationInstance_GetSurfaceOrientation_Params
{
	float                                              NewPitch;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetStartledLowUnderwaterAnimation
struct UFaunaAnimationInstance_GetStartledLowUnderwaterAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetStartledLowOnSeaAnimation
struct UFaunaAnimationInstance_GetStartledLowOnSeaAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetStartledLowOnLandAnimation
struct UFaunaAnimationInstance_GetStartledLowOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetStartledHighUnderwaterAnimation
struct UFaunaAnimationInstance_GetStartledHighUnderwaterAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetStartledHighOnSeaAnimation
struct UFaunaAnimationInstance_GetStartledHighOnSeaAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetStartledHighOnLandAnimation
struct UFaunaAnimationInstance_GetStartledHighOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetSpecialUnderwaterAnimation
struct UFaunaAnimationInstance_GetSpecialUnderwaterAnimation_Params
{
	bool                                               LoopSpecial;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetSpecialSeaAnimation
struct UFaunaAnimationInstance_GetSpecialSeaAnimation_Params
{
	bool                                               LoopSpecial;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetSpecialLandAnimation
struct UFaunaAnimationInstance_GetSpecialLandAnimation_Params
{
	bool                                               LoopSpecial;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetSnakeStrikeOnLandAnimation
struct UFaunaAnimationInstance_GetSnakeStrikeOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetSnakeCharmStanceOutOnLandAnimation
struct UFaunaAnimationInstance_GetSnakeCharmStanceOutOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetSnakeCharmStanceLoopOnLandAnimation
struct UFaunaAnimationInstance_GetSnakeCharmStanceLoopOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetSnakeCharmStanceInOnLandAnimation
struct UFaunaAnimationInstance_GetSnakeCharmStanceInOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetSnakeAttackStanceOutOnLandAnimation
struct UFaunaAnimationInstance_GetSnakeAttackStanceOutOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetSnakeAttackStanceLoopOnLandAnimation
struct UFaunaAnimationInstance_GetSnakeAttackStanceLoopOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetSnakeAttackStanceInOnLandAnimation
struct UFaunaAnimationInstance_GetSnakeAttackStanceInOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetPigStarveStartledLowOnLandAnimation
struct UFaunaAnimationInstance_GetPigStarveStartledLowOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetPigStarveStartledHighOnLandAnimation
struct UFaunaAnimationInstance_GetPigStarveStartledHighOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetPigStarveOutOnLandAnimation
struct UFaunaAnimationInstance_GetPigStarveOutOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetPigStarveLoopOnLandAnimation
struct UFaunaAnimationInstance_GetPigStarveLoopOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetPigStarveInOnLandAnimation
struct UFaunaAnimationInstance_GetPigStarveInOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetPigStarveDeathOnLandAnimation
struct UFaunaAnimationInstance_GetPigStarveDeathOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetPigEatingUnderwaterAnimation
struct UFaunaAnimationInstance_GetPigEatingUnderwaterAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetPigEatingOnSeaAnimation
struct UFaunaAnimationInstance_GetPigEatingOnSeaAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetPigEatingOnLandAnimation
struct UFaunaAnimationInstance_GetPigEatingOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetLocomotionUnderwaterAnimationB
struct UFaunaAnimationInstance_GetLocomotionUnderwaterAnimationB_Params
{
	class UBlendSpace1D*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetLocomotionUnderwaterAnimationA
struct UFaunaAnimationInstance_GetLocomotionUnderwaterAnimationA_Params
{
	class UBlendSpace1D*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetLocomotionSeaAnimationB
struct UFaunaAnimationInstance_GetLocomotionSeaAnimationB_Params
{
	class UBlendSpace1D*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetLocomotionSeaAnimationA
struct UFaunaAnimationInstance_GetLocomotionSeaAnimationA_Params
{
	class UBlendSpace1D*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetLocomotionLandAnimationB
struct UFaunaAnimationInstance_GetLocomotionLandAnimationB_Params
{
	class UBlendSpace1D*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetLocomotionLandAnimationA
struct UFaunaAnimationInstance_GetLocomotionLandAnimationA_Params
{
	class UBlendSpace1D*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetImpactUnderwaterAnimation
struct UFaunaAnimationInstance_GetImpactUnderwaterAnimation_Params
{
	class UBlendSpace1D*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetImpactOnSeaAnimation
struct UFaunaAnimationInstance_GetImpactOnSeaAnimation_Params
{
	class UBlendSpace1D*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetImpactOnLandAnimation
struct UFaunaAnimationInstance_GetImpactOnLandAnimation_Params
{
	class UBlendSpace1D*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetIdleUnderwaterAnimationB
struct UFaunaAnimationInstance_GetIdleUnderwaterAnimationB_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetIdleUnderwaterAnimationA
struct UFaunaAnimationInstance_GetIdleUnderwaterAnimationA_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetIdleSeaAnimationB
struct UFaunaAnimationInstance_GetIdleSeaAnimationB_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetIdleSeaAnimationA
struct UFaunaAnimationInstance_GetIdleSeaAnimationA_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetIdleLandAnimationB
struct UFaunaAnimationInstance_GetIdleLandAnimationB_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetIdleLandAnimationA
struct UFaunaAnimationInstance_GetIdleLandAnimationA_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetDyingLoopUnderwaterAnimation
struct UFaunaAnimationInstance_GetDyingLoopUnderwaterAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetDyingLoopOnSeaAnimation
struct UFaunaAnimationInstance_GetDyingLoopOnSeaAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetDyingLoopOnLandAnimation
struct UFaunaAnimationInstance_GetDyingLoopOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetDeathUnderwaterAnimation
struct UFaunaAnimationInstance_GetDeathUnderwaterAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetDeathOnSeaAnimation
struct UFaunaAnimationInstance_GetDeathOnSeaAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GetDeathOnLandAnimation
struct UFaunaAnimationInstance_GetDeathOnLandAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.GenerateNewValidAnimationIndex
struct UFaunaAnimationInstance_GenerateNewValidAnimationIndex_Params
{
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFaunaAnimationLocation>               InLocation;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFaunaAnimationState>                  InState;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsIdleStateA;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.FaunaAnimationInstance.AssetArrayValidationCheck
struct UFaunaAnimationInstance_AssetArrayValidationCheck_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FeedingComponent.OnRep_ActorToFeed
struct UFeedingComponent_OnRep_ActorToFeed_Params
{
};

// Function Athena.FiredFromActorActionStateId.PushCharacterIntoFiredFromActorActionState
struct UFiredFromActorActionStateId_PushCharacterIntoFiredFromActorActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      FiringActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LaunchVelocity;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.FiredFromActorActionStateId.PopCharacterOutOfFiredFromActorActionState
struct UFiredFromActorActionStateId_PopCharacterOutOfFiredFromActorActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.FiredFromCannonActionStateId.PushCharacterIntoFiredFromCannonActionState
struct UFiredFromCannonActionStateId_PushCharacterIntoFiredFromCannonActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      FiringActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LaunchVelocity;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.FiredFromCannonActionStateId.PopCharacterOutOfFiredFromCannonActionState
struct UFiredFromCannonActionStateId_PopCharacterOutOfFiredFromCannonActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.FogBank.OnRep_Settings
struct AFogBank_OnRep_Settings_Params
{
};

// Function Athena.FOVHandlerFunctions.SetTargetFOV
struct UFOVHandlerFunctions_SetTargetFOV_Params
{
	class AAthenaPlayerCharacter*                      Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetFOV;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.FOVHandlerFunctions.SetBlendSpeed
struct UFOVHandlerFunctions_SetBlendSpeed_Params
{
	class AAthenaPlayerCharacter*                      Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendSpeed;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.FOVHandlerFunctions.ResetToDefault
struct UFOVHandlerFunctions_ResetToDefault_Params
{
	class AAthenaPlayerCharacter*                      Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.FOVHandlerFunctions.GetTargetFOV
struct UFOVHandlerFunctions_GetTargetFOV_Params
{
	class AAthenaPlayerCharacter*                      Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FOVHandlerFunctions.GetDefaultTargetFOV
struct UFOVHandlerFunctions_GetDefaultTargetFOV_Params
{
	class AAthenaPlayerCharacter*                      Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FOVHandlerFunctions.GetDefaultFOV
struct UFOVHandlerFunctions_GetDefaultFOV_Params
{
	class AAthenaPlayerCharacter*                      Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FOVHandlerFunctions.GetBlendSpeed
struct UFOVHandlerFunctions_GetBlendSpeed_Params
{
	class AAthenaPlayerCharacter*                      Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FrontendCameraComponent.SetMapTablePlaybackRate
struct UFrontendCameraComponent_SetMapTablePlaybackRate_Params
{
	float                                              InPlaybackRate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.FrontendCameraComponent.MapTableAnimationFinished
struct UFrontendCameraComponent_MapTableAnimationFinished_Params
{
};

// Function Athena.FrontendGameMode.BeginPreloading
struct AFrontendGameMode_BeginPreloading_Params
{
};

// Function Athena.OneShotUsable.Trigger
struct UOneShotUsable_Trigger_Params
{
	class UClass*                                      InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InTriggeringActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.OneShotUsable.CanTrigger
struct UOneShotUsable_CanTrigger_Params
{
	class AActor*                                      InTriggeringActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.FuseComponent.Server_RequestEnableFuse
struct UFuseComponent_Server_RequestEnableFuse_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.FuseComponent.OnRep_FuseEnabled
struct UFuseComponent_OnRep_FuseEnabled_Params
{
};

// Function Athena.FuseComponent.GetIsActive
struct UFuseComponent_GetIsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.GameAudioInterface.UnregisterShip
struct UGameAudioInterface_UnregisterShip_Params
{
	class AShip*                                       Ship;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.GameAudioInterface.RegisterShip
struct UGameAudioInterface_RegisterShip_Params
{
	class AShip*                                       Ship;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.GameAudioInterface.GetClosestNonCrewShipDistance
struct UGameAudioInterface_GetClosestNonCrewShipDistance_Params
{
	class AShip*                                       PlayerShip;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.GameplayEventSignal.DeactivateAndDestroy
struct AGameplayEventSignal_DeactivateAndDestroy_Params
{
};

// Function Athena.GameStateFunctionLibrary.GetAthenaGameStateFromWorld
struct UGameStateFunctionLibrary_GetAthenaGameStateFromWorld_Params
{
	class UWorld*                                      InWorld;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AAthenaGameState*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.GameStateFunctionLibrary.GetAthenaGameState
struct UGameStateFunctionLibrary_GetAthenaGameState_Params
{
	class UObject*                                     InWorldContextObject;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AAthenaGameState*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.GarbageGenerator.SetSizeOfPersistentSet
struct AGarbageGenerator_SetSizeOfPersistentSet_Params
{
	int                                                InSizeOfPersistentSet;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.GarbageGenerator.SetGarbageGenerationRatePerTick
struct AGarbageGenerator_SetGarbageGenerationRatePerTick_Params
{
	int                                                InAmountToGenerate;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.GenericPart.OnPartMeshLoaded
struct AGenericPart_OnPartMeshLoaded_Params
{
	class UStaticMesh*                                 Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.GenericPart.OnPartDescLoaded
struct AGenericPart_OnPartDescLoaded_Params
{
	class UGenericPartDescAsset*                       Desc;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.GhostShipDoor.Multicast_ResetForPlayer
struct AGhostShipDoor_Multicast_ResetForPlayer_Params
{
	class APawn*                                       Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.GhostShipDoor.Multicast_OpenForPlayer
struct AGhostShipDoor_Multicast_OpenForPlayer_Params
{
	class APawn*                                       Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.GhostShipDoor.Multicast_OnDoorFullyOpen
struct AGhostShipDoor_Multicast_OnDoorFullyOpen_Params
{
	class APawn*                                       Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.GhostShipTickManager.EnableActorsOnGhostShip
struct AGhostShipTickManager_EnableActorsOnGhostShip_Params
{
	bool                                               bEnable;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HandlesFunctionLibrary.NotEqual
struct UHandlesFunctionLibrary_NotEqual_Params
{
	struct FBlueprintableIntegerHandle                 A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBlueprintableIntegerHandle                 B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.HandlesFunctionLibrary.IsValid
struct UHandlesFunctionLibrary_IsValid_Params
{
	struct FBlueprintableIntegerHandle                 Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.HandlesFunctionLibrary.Equal
struct UHandlesFunctionLibrary_Equal_Params
{
	struct FBlueprintableIntegerHandle                 A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBlueprintableIntegerHandle                 B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.HealthComponent.ToggleGodMode
struct UHealthComponent_ToggleGodMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.HealthComponent.TakeDamage
struct UHealthComponent_TakeDamage_Params
{
	struct FDamageInstance                             DamageInstance;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.HealthComponent.StopContinuousHealthChange
struct UHealthComponent_StopContinuousHealthChange_Params
{
	TEnumAsByte<EHealthChangedReason>                  Reason;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthComponent.StartContinuousHealthChange
struct UHealthComponent_StartContinuousHealthChange_Params
{
	float                                              AmountPerSecond;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHealthChangedReason>                  Reason;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthComponent.SetHealth
struct UHealthComponent_SetHealth_Params
{
	float                                              Amount;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHealthChangedReason>                  Reason;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthComponent.ResetToMaxHealth
struct UHealthComponent_ResetToMaxHealth_Params
{
};

// Function Athena.HealthComponent.PreventAdjustmentFromHealthChangeReason
struct UHealthComponent_PreventAdjustmentFromHealthChangeReason_Params
{
	TEnumAsByte<EPreventDamageTypeLockReasons>         LockReason;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHealthChangedReason>                  HealthChangeReason;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthComponent.PredictHealthChange
struct UHealthComponent_PredictHealthChange_Params
{
	float                                              Change;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHealthChangedReason>                  Reason;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthComponent.OnRep_CurrentHealth
struct UHealthComponent_OnRep_CurrentHealth_Params
{
	float                                              PrevCurrentHealth;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthComponent.OnRep_ContinuousHealthChangeSources
struct UHealthComponent_OnRep_ContinuousHealthChangeSources_Params
{
	TArray<struct FContinuousHealthChange>             PrevContinuousDamageSources;                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Athena.HealthComponent.Multicast_SetHealthOnClients
struct UHealthComponent_Multicast_SetHealthOnClients_Params
{
	struct FHealthChange                               Instance;                                                 // (ConstParm, Parm)
};

// Function Athena.HealthComponent.IsGodModeActive
struct UHealthComponent_IsGodModeActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.HealthComponent.IsDamageTypePrevented
struct UHealthComponent_IsDamageTypePrevented_Params
{
	TEnumAsByte<EHealthChangedReason>                  HealthChangeReason;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.HealthComponent.GetMaxHealth
struct UHealthComponent_GetMaxHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.HealthComponent.GetCurrentHealth
struct UHealthComponent_GetCurrentHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.HealthComponent.EnableGodMode
struct UHealthComponent_EnableGodMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.HealthComponent.DisableGodMode
struct UHealthComponent_DisableGodMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.HealthComponent.CanAdjustHealth
struct UHealthComponent_CanAdjustHealth_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.HealthComponent.AllowAdjustmentFromHealthChangeReason
struct UHealthComponent_AllowAdjustmentFromHealthChangeReason_Params
{
	TEnumAsByte<EPreventDamageTypeLockReasons>         LockReason;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHealthChangedReason>                  HealthChangeReason;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthComponent.AdjustHealth
struct UHealthComponent_AdjustHealth_Params
{
	float                                              Amount;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHealthChangedReason>                  Reason;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthTestFunctions.MakeDamageInstance
struct UHealthTestFunctions_MakeDamageInstance_Params
{
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      From;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHealthChangedReason>                  Reason;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageInstance                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.HealthTestFunctions.EnableAdjustHealth_YetToBeInteractedWith
struct UHealthTestFunctions_EnableAdjustHealth_YetToBeInteractedWith_Params
{
	class UHealthComponent*                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsStrict;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthTestFunctions.EnableAdjustHealth_TavernPlayerCharacter
struct UHealthTestFunctions_EnableAdjustHealth_TavernPlayerCharacter_Params
{
	class UHealthComponent*                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsStrict;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthTestFunctions.EnableAdjustHealth_SkeletonShadowForm
struct UHealthTestFunctions_EnableAdjustHealth_SkeletonShadowForm_Params
{
	class UHealthComponent*                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsStrict;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthTestFunctions.EnableAdjustHealth_ServerMigration
struct UHealthTestFunctions_EnableAdjustHealth_ServerMigration_Params
{
	class UHealthComponent*                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsStrict;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthTestFunctions.EnableAdjustHealth_IsTeleporting
struct UHealthTestFunctions_EnableAdjustHealth_IsTeleporting_Params
{
	class UHealthComponent*                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsStrict;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthTestFunctions.EnableAdjustHealth_IsInert
struct UHealthTestFunctions_EnableAdjustHealth_IsInert_Params
{
	class UHealthComponent*                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsStrict;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthTestFunctions.EnableAdjustHealth_Invincible
struct UHealthTestFunctions_EnableAdjustHealth_Invincible_Params
{
	class UHealthComponent*                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsStrict;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthTestFunctions.EnableAdjustHealth_HidingObject
struct UHealthTestFunctions_EnableAdjustHealth_HidingObject_Params
{
	class UHealthComponent*                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsStrict;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthTestFunctions.EnableAdjustHealth_Dead
struct UHealthTestFunctions_EnableAdjustHealth_Dead_Params
{
	class UHealthComponent*                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsStrict;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthTestFunctions.DisableAdjustHealth_YetToBeInteractedWith
struct UHealthTestFunctions_DisableAdjustHealth_YetToBeInteractedWith_Params
{
	class UHealthComponent*                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsStrict;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthTestFunctions.DisableAdjustHealth_TavernPlayerCharacter
struct UHealthTestFunctions_DisableAdjustHealth_TavernPlayerCharacter_Params
{
	class UHealthComponent*                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsStrict;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthTestFunctions.DisableAdjustHealth_SkeletonShadowForm
struct UHealthTestFunctions_DisableAdjustHealth_SkeletonShadowForm_Params
{
	class UHealthComponent*                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsStrict;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthTestFunctions.DisableAdjustHealth_ServerMigration
struct UHealthTestFunctions_DisableAdjustHealth_ServerMigration_Params
{
	class UHealthComponent*                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsStrict;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthTestFunctions.DisableAdjustHealth_IsTeleporting
struct UHealthTestFunctions_DisableAdjustHealth_IsTeleporting_Params
{
	class UHealthComponent*                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsStrict;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthTestFunctions.DisableAdjustHealth_IsInert
struct UHealthTestFunctions_DisableAdjustHealth_IsInert_Params
{
	class UHealthComponent*                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsStrict;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthTestFunctions.DisableAdjustHealth_Invincible
struct UHealthTestFunctions_DisableAdjustHealth_Invincible_Params
{
	class UHealthComponent*                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsStrict;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthTestFunctions.DisableAdjustHealth_HidingObject
struct UHealthTestFunctions_DisableAdjustHealth_HidingObject_Params
{
	class UHealthComponent*                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsStrict;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HealthTestFunctions.DisableAdjustHealth_Dead
struct UHealthTestFunctions_DisableAdjustHealth_Dead_Params
{
	class UHealthComponent*                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsStrict;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HideInObjectActionStateId.PushCharacterIntoHideInObjectActionState
struct UHideInObjectActionStateId_PushCharacterIntoHideInObjectActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ObjectToHideIn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Dockable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HideInObjectActionStateId.PopCharacterOutOfHideInObjectActionState
struct UHideInObjectActionStateId_PopCharacterOutOfHideInObjectActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HideInObjectCompositeInputHandler.OnUseConcealingObjectNotificationRecieved
struct UHideInObjectCompositeInputHandler_OnUseConcealingObjectNotificationRecieved_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Hideout.OnPlayerInViewOfHideout
struct AHideout_OnPlayerInViewOfHideout_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OverlapInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.HideoutEntrance.OnBeginOverlap
struct AHideoutEntrance_OnBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.HideoutExit.OnBeginOverlap
struct AHideoutExit_OnBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.HitReactionComponent.OnHitReactionImpact
struct UHitReactionComponent_OnHitReactionImpact_Params
{
	struct FImpactDamageEvent                          ImpactDamageEvent;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.HitReactionComponent.Multicast_ProcessHitReaction
struct UHitReactionComponent_Multicast_ProcessHitReaction_Params
{
	struct FImpactDamageEvent                          DamageEvent;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function Athena.MockHitReactionComponent.SetServerAuthoritiveReactions
struct UMockHitReactionComponent_SetServerAuthoritiveReactions_Params
{
	bool                                               ServerAuthoritive;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MockHitReactionComponent.ResetMockHitReactionComponent
struct UMockHitReactionComponent_ResetMockHitReactionComponent_Params
{
};

// Function Athena.Hole.OnStateChanged
struct AHole_OnStateChanged_Params
{
	TEnumAsByte<EHoleState>                            InState;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Hole.OnRep_State
struct AHole_OnRep_State_Params
{
};

// Function Athena.ShovelHole.OnRep_ParallaxValue
struct AShovelHole_OnRep_ParallaxValue_Params
{
};

// Function Athena.ShipInternalWater.TryGetIntersectionPosition
struct AShipInternalWater_TryGetIntersectionPosition_Params
{
	struct FVector                                     StartPosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndPosition;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     IntersectionPosition;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipInternalWater.ShrinkWaterOcclusionVolume
struct AShipInternalWater_ShrinkWaterOcclusionVolume_Params
{
	float                                              Time;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ShipInternalWater.SetNormalizedWaterAmountLimit
struct AShipInternalWater_SetNormalizedWaterAmountLimit_Params
{
	float                                              NormalizedWaterAmount;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ShipInternalWater.SetNormalizedWaterAmount
struct AShipInternalWater_SetNormalizedWaterAmount_Params
{
	float                                              NoramlisedWaterAmount;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ShipInternalWater.RegisterComponents
struct AShipInternalWater_RegisterComponents_Params
{
	class UCurveFloat*                                 CurveFloat;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ShipInternalWater.OnRep_ServerWaterAmount
struct AShipInternalWater_OnRep_ServerWaterAmount_Params
{
};

// Function Athena.ShipInternalWater.IsWaterMeshVisible
struct AShipInternalWater_IsWaterMeshVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipInternalWater.IsOcclusionZoneFullyReduced
struct AShipInternalWater_IsOcclusionZoneFullyReduced_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipInternalWater.GetWaterAmount
struct AShipInternalWater_GetWaterAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipInternalWater.GetNormalizedWaterAmount
struct AShipInternalWater_GetNormalizedWaterAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipInternalWater.GetNormalizedVisualWaterAmount
struct AShipInternalWater_GetNormalizedVisualWaterAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipInternalWater.GetDistanceFromPosition
struct AShipInternalWater_GetDistanceFromPosition_Params
{
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipInternalWater.AddWaterAmount
struct AShipInternalWater_AddWaterAmount_Params
{
	float                                              WaterToAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.LeakerComponent.SetLeakState
struct ULeakerComponent_SetLeakState_Params
{
	int                                                InLeakId;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELeakState>                            InState;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.LeakerComponent.RemoveLeak
struct ULeakerComponent_RemoveLeak_Params
{
	int                                                InLeakId;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.LeakerComponent.GetLeakAmount
struct ULeakerComponent_GetLeakAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipLeakerComponent.Update
struct UShipLeakerComponent_Update_Params
{
	float                                              InDeltaTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShipLeakerUpdateType>                 InUpdateTpe;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ShipLeakerComponent.SetShip
struct UShipLeakerComponent_SetShip_Params
{
	class AShip*                                       InShip;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ShipLeakerComponent.AddLeak
struct UShipLeakerComponent_AddLeak_Params
{
	struct FTransform                                  InWhere;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              InAmount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FShipLeakParams                             InParams;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.HullDamage2.ReactToImpactOnServer
struct AHullDamage2_ReactToImpactOnServer_Params
{
	struct FImpactDamageEvent                          InImpact;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.HullDamage2.OnRep_Hits
struct AHullDamage2_OnRep_Hits_Params
{
};

// Function Athena.HullDamage2.Multicast_TriggerDamageFX
struct AHullDamage2_Multicast_TriggerDamageFX_Params
{
	int                                                InIndex;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InPlaySFX;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InPlayVFX;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.HullDamage2.MakeInternalHoleDecal
struct AHullDamage2_MakeInternalHoleDecal_Params
{
	struct FTransform                                  InTransform;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UDecalComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.HullDamage2.LookupParamsByIndex
struct AHullDamage2_LookupParamsByIndex_Params
{
	int                                                InIndex;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FHullDamageParamSet                         ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Athena.HullDamage2.IndexOfParamsForComponent
struct AHullDamage2_IndexOfParamsForComponent_Params
{
	class UActorComponent*                             InComponent;                                              // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.HullDamagePointProxy.ReactToRepairableStateChanged
struct UHullDamagePointProxy_ReactToRepairableStateChanged_Params
{
	TEnumAsByte<ERepairableState>                      InNewState;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ShantyInterface.RequestInstrumentStop
struct UShantyInterface_RequestInstrumentStop_Params
{
	class AActor*                                      InstrumentActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ShantyInterface.RequestInstrumentPlay
struct UShantyInterface_RequestInstrumentPlay_Params
{
	class AActor*                                      InstrumentActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UPlayerEntitlementViewInterface> EntitlementInterface;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EShantyEnsembleOption>                 ForceNewEnsemble;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ShantyInterface.GetNumberOfShantiesPlaying
struct UShantyInterface_GetNumberOfShantiesPlaying_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShantyInterface.GetNumberOfInstrumentsPlayingOnEnsemble
struct UShantyInterface_GetNumberOfInstrumentsPlayingOnEnsemble_Params
{
	int                                                EnsembleIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ImpactDecalParamModifier.SetParamValues
struct UImpactDecalParamModifier_SetParamValues_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UMaterialInstanceDynamic*                    DecalMatInstance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ImpactDecalParamModifierTime.SetParamValues
struct UImpactDecalParamModifierTime_SetParamValues_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UMaterialInstanceDynamic*                    DecalMatInstance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ImpactDecalParamModifierVomit.SetParamValues
struct UImpactDecalParamModifierVomit_SetParamValues_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UMaterialInstanceDynamic*                    DecalMatInstance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.IngestedByKrakenActionStateId.PushCharacterIntoIngestedByKrakenActionState
struct UIngestedByKrakenActionStateId_PushCharacterIntoIngestedByKrakenActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AKrakenAnimatedTentacle*                     Tentacle;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.IngestedByKrakenActionStateId.PopCharacterOutOfIngestedByKrakenActionState
struct UIngestedByKrakenActionStateId_PopCharacterOutOfIngestedByKrakenActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.IngestedByKrakenCompositeInputHandler.OnLookUpRate
struct UIngestedByKrakenCompositeInputHandler_OnLookUpRate_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.IngestedByKrakenCompositeInputHandler.OnLookUp
struct UIngestedByKrakenCompositeInputHandler_OnLookUp_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.IntentComponent.SetIntent
struct UIntentComponent_SetIntent_Params
{
	float                                              NewIntent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.IntentComponent.Server_SetIntent
struct UIntentComponent_Server_SetIntent_Params
{
	float                                              NewIntent;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.IntentComponent.GetIntent
struct UIntentComponent_GetIntent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ClimbingComponent.SetClimbId
struct UClimbingComponent_SetClimbId_Params
{
	unsigned char                                      InClimbId;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ClimbingComponent.IsClimbIdInSyncWithServer
struct UClimbingComponent_IsClimbIdInSyncWithServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ClimbingComponent.GetServerHeight
struct UClimbingComponent_GetServerHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ClimbingComponent.GetIsCurrentlyClimbing
struct UClimbingComponent_GetIsCurrentlyClimbing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ControllableIntentComponent.HasController
struct UControllableIntentComponent_HasController_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ControllableIntentComponent.GetIntent
struct UControllableIntentComponent_GetIntent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RepairableComponent.OnRep_DamageLevel
struct URepairableComponent_OnRep_DamageLevel_Params
{
};

// Function Athena.RepairableComponent.OnRep_AuthorityRepairableState
struct URepairableComponent_OnRep_AuthorityRepairableState_Params
{
};

// Function Athena.RepairableComponent.GetMountLocationOffset
struct URepairableComponent_GetMountLocationOffset_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Athena.RepairableComponent.ApplyDamage
struct URepairableComponent_ApplyDamage_Params
{
	int                                                InAmount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CapstanArm.UpdateIntactHandleMesh
struct ACapstanArm_UpdateIntactHandleMesh_Params
{
	class UStaticMesh*                                 NewStaticMesh;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CapstanArm.UpdateArmVisuals
struct ACapstanArm_UpdateArmVisuals_Params
{
};

// Function Athena.CapstanArm.ReactToRepairableStateChanged
struct ACapstanArm_ReactToRepairableStateChanged_Params
{
	TEnumAsByte<ERepairableState>                      InNewState;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CapstanArm.GetRepairableComponent
struct ACapstanArm_GetRepairableComponent_Params
{
	class URepairableComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.CapstanArm.GetLookAtPosBasisSpace
struct ACapstanArm_GetLookAtPosBasisSpace_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CapstanArm.GetLookAtPos
struct ACapstanArm_GetLookAtPos_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.DebugShipController.Server_RequestUpdateSailsLowered
struct ADebugShipController_Server_RequestUpdateSailsLowered_Params
{
	float                                              InRateOfChange;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DebugShipController.Server_RequestUpdateSailsAngle
struct ADebugShipController_Server_RequestUpdateSailsAngle_Params
{
	float                                              InRateOfChange;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.DebugShipController.Server_RequestToggleAnchorState
struct ADebugShipController_Server_RequestToggleAnchorState_Params
{
};

// Function Athena.DebugShipController.Server_RequestSetRuddersAngleRatio
struct ADebugShipController_Server_RequestSetRuddersAngleRatio_Params
{
	float                                              InRateOfChange;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.PlayerLoadingInteractionPoint.Server_NotifyInteractionPointUsed
struct APlayerLoadingInteractionPoint_Server_NotifyInteractionPointUsed_Params
{
	class AActor*                                      UsingActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SailManipulatorInterface.SetLocked
struct USailManipulatorInterface_SetLocked_Params
{
	bool                                               IsLocked;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SailManipulatorInterface.SetIntent
struct USailManipulatorInterface_SetIntent_Params
{
	float                                              NewIntent;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SailManipulatorInterface.IsLocked
struct USailManipulatorInterface_IsLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SailManipulatorInterface.GetTopMeshComponent
struct USailManipulatorInterface_GetTopMeshComponent_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.SailManipulatorInterface.GetCurrentIntent
struct USailManipulatorInterface_GetCurrentIntent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SailManipulatorInterface.GetBaseMeshComponent
struct USailManipulatorInterface_GetBaseMeshComponent_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.SailAngleInterface.GetSailTurnRate
struct USailAngleInterface_GetSailTurnRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SailAngleInterface.GetSailAngleRatio
struct USailAngleInterface_GetSailAngleRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SailHoistInterface.GetSailRaisedPercentage
struct USailHoistInterface_GetSailRaisedPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SailHoistInterface.GetSailMovementRate
struct USailHoistInterface_GetSailMovementRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RowingSeat.Server_SetOarInputState
struct ARowingSeat_Server_SetOarInputState_Params
{
	int                                                InOarIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOarInputState>                        InOarState;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.RowingSeat.OnRep_OarInputStates
struct ARowingSeat_OnRep_OarInputStates_Params
{
	TArray<TEnumAsByte<EOarInputState>>                OldInputStates;                                           // (Parm, ZeroConstructor)
};

// Function Athena.TestControllableObject.TestForceDisconnectIdleSecondsThreshold
struct ATestControllableObject_TestForceDisconnectIdleSecondsThreshold_Params
{
	float                                              DisconnectIdleThreshold;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TestControllableObject.TestForceCanDisconnectWhenIdle
struct ATestControllableObject_TestForceCanDisconnectWhenIdle_Params
{
	bool                                               CanDisconnect;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TestDamageZone.TestStopWaterLeakSfx
struct ATestDamageZone_TestStopWaterLeakSfx_Params
{
};

// Function Athena.TestDamageZone.TestStopWaterLeakRepairingSfx
struct ATestDamageZone_TestStopWaterLeakRepairingSfx_Params
{
};

// Function Athena.TestDamageZone.TestSetRepairableState
struct ATestDamageZone_TestSetRepairableState_Params
{
	TEnumAsByte<ERepairableState>                      InRepairableState;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TestDamageZone.TestPlayWaterLeakSfx
struct ATestDamageZone_TestPlayWaterLeakSfx_Params
{
};

// Function Athena.TestDamageZone.TestPlayWaterLeakRepairingSfx
struct ATestDamageZone_TestPlayWaterLeakRepairingSfx_Params
{
};

// Function Athena.TestDamageZone.IsWaterLeakSfxPlaying
struct ATestDamageZone_IsWaterLeakSfxPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.TestDamageZone.IsWaterLeakRepairSfxPlaying
struct ATestDamageZone_IsWaterLeakRepairSfxPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Beacon.OnRep_OnLightStateChanged
struct ABeacon_OnRep_OnLightStateChanged_Params
{
};

// Function Athena.Beacon.OnRep_OnFlameOfFateTypeChanged
struct ABeacon_OnRep_OnFlameOfFateTypeChanged_Params
{
};

// Function Athena.Bell.RingBell
struct ABell_RingBell_Params
{
	bool                                               IsInTurbulence;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.InteractableLight.OnRep_OnLightStateChanged
struct AInteractableLight_OnRep_OnLightStateChanged_Params
{
};

// Function Athena.InteractableLight.OnRep_OnFlameOfFateTypeChanged
struct AInteractableLight_OnRep_OnFlameOfFateTypeChanged_Params
{
};

// Function Athena.InteractableLight.LightStateChanged
struct AInteractableLight_LightStateChanged_Params
{
};

// Function Athena.InteractableLight.IsLightOn
struct AInteractableLight_IsLightOn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InteractableLight.FlameStateChanged
struct AInteractableLight_FlameStateChanged_Params
{
};

// Function Athena.Mermaid.OnRep_State
struct AMermaid_OnRep_State_Params
{
};

// Function Athena.Mermaid.Multicast_TeleportPlayerRPC
struct AMermaid_Multicast_TeleportPlayerRPC_Params
{
	class AAthenaPlayerCharacter*                      Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Mermaid.Multicast_SurfacedRPC
struct AMermaid_Multicast_SurfacedRPC_Params
{
};

// Function Athena.Mermaid.Multicast_DiveRPC
struct AMermaid_Multicast_DiveRPC_Params
{
};

// Function Athena.Mermaid.IsBeaconActive
struct AMermaid_IsBeaconActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Mermaid.GetUniqueMermaidId
struct AMermaid_GetUniqueMermaidId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Mermaid.GetCrewIdsResponsibleForSavingAsCopy
struct AMermaid_GetCrewIdsResponsibleForSavingAsCopy_Params
{
	TArray<struct FGuid>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.Mermaid.AddCrewResponsibleForSaving
struct AMermaid_AddCrewResponsibleForSaving_Params
{
	struct FGuid                                       CrewId;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MusicBox.OnRep_OnIsPlayingChanged
struct AMusicBox_OnRep_OnIsPlayingChanged_Params
{
	bool                                               WasPlaying;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ShipwrightOneShot.TestForceExpireAllRestockMoratoriums
struct AShipwrightOneShot_TestForceExpireAllRestockMoratoriums_Params
{
};

// Function Athena.ShipwrightOneShot.RestockShip
struct AShipwrightOneShot_RestockShip_Params
{
	class AActor*                                      InInteractor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ShipwrightOneShot.IsShipCloseAndSlowEnoughToRestock
struct AShipwrightOneShot_IsShipCloseAndSlowEnoughToRestock_Params
{
	class AShip*                                       Ship;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipwrightOneShot.GetTimeInSecondsUntilNextRestock
struct AShipwrightOneShot_GetTimeInSecondsUntilNextRestock_Params
{
	class AActor*                                      Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipwrightOneShot.GetHasRestockMoratoriumDataForPlayerCrew
struct AShipwrightOneShot_GetHasRestockMoratoriumDataForPlayerCrew_Params
{
	class AActor*                                      Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LandmarkReactionInterface.StopReaction
struct ULandmarkReactionInterface_StopReaction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LandmarkReactionInterface.StartReaction
struct ULandmarkReactionInterface_StartReaction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LandmarkReactionActor.StopReaction
struct ALandmarkReactionActor_StopReaction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LandmarkReactionActor.StartReaction
struct ALandmarkReactionActor_StartReaction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SkeletonFortDoor.ResetDoor
struct ASkeletonFortDoor_ResetDoor_Params
{
};

// Function Athena.SkeletonFortDoor.OpenDoor
struct ASkeletonFortDoor_OpenDoor_Params
{
};

// Function Athena.SkeletonFortDoor.OnRep_ServerDoorState
struct ASkeletonFortDoor_OnRep_ServerDoorState_Params
{
};

// Function Athena.LadderInterface.GetLadderHeight
struct ULadderInterface_GetLadderHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Ladder.GetTopLadderRungTransform
struct ALadder_GetTopLadderRungTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Athena.Ladder.GetBottomLadderRungTransform
struct ALadder_GetBottomLadderRungTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Athena.NPC.GetSkeletalMesh
struct ANPC_GetSkeletalMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.VoyageProposalContainer.SetManifest
struct AVoyageProposalContainer_SetManifest_Params
{
	class ACrewShipManifest*                           Manifest;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TreasureChestItemProxy.OnRep_State
struct ATreasureChestItemProxy_OnRep_State_Params
{
	TEnumAsByte<ETreasureChestProxyState>              OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TreasureChestItemProxy.OnRep_NumDigsLeft
struct ATreasureChestItemProxy_OnRep_NumDigsLeft_Params
{
	int                                                PrevNumDigsLeft;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MessageInABottleItemProxy.Multicast_Smash
struct AMessageInABottleItemProxy_Multicast_Smash_Params
{
};

// Function Athena.VotableObjectView.OnVoteRemoved
struct AVotableObjectView_OnVoteRemoved_Params
{
	TScriptInterface<class UVoterInterface>            Voter;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.VotableObjectView.OnVoteCompleted
struct AVotableObjectView_OnVoteCompleted_Params
{
	bool                                               IsWinner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.VotableObjectView.OnVoteAdded
struct AVotableObjectView_OnVoteAdded_Params
{
	TScriptInterface<class UVoterInterface>            Voter;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.VotableObjectView.GetVoter
struct AVotableObjectView_GetVoter_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UVoterInterface>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InteractablesTestFunctions.SpawnLargeShipForMPTesting
struct UInteractablesTestFunctions_SpawnLargeShipForMPTesting_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AShip*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InteractablesTestFunctions.SetupServerSideAndSpawnShip
struct UInteractablesTestFunctions_SetupServerSideAndSpawnShip_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CapstanPosition;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SailsLoweredPosition;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AShip*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InteractablesTestFunctions.SetupClientSide
struct UInteractablesTestFunctions_SetupClientSide_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AShip*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InteractionCompositeInputHandler.OnSecondaryInteractReleased
struct UInteractionCompositeInputHandler_OnSecondaryInteractReleased_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InteractionCompositeInputHandler.OnSecondaryInteract
struct UInteractionCompositeInputHandler_OnSecondaryInteract_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InteractionCompositeInputHandler.OnPrimaryInteractReleased
struct UInteractionCompositeInputHandler_OnPrimaryInteractReleased_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InteractionCompositeInputHandler.OnPrimaryInteract
struct UInteractionCompositeInputHandler_OnPrimaryInteract_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InteractionPoliciesTestFunctions.WithinInteractionAngleValidationPolicy_WithInteractorBehindTheObject_IsInvalidReturnsFalse
struct UInteractionPoliciesTestFunctions_WithinInteractionAngleValidationPolicy_WithInteractorBehindTheObject_IsInvalidReturnsFalse_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InInteractable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InteractionPoliciesTestFunctions.WithinInteractionAngleValidationPolicy_WithinInteractionAngleInteractor_IsValidReturnsTrue
struct UInteractionPoliciesTestFunctions_WithinInteractionAngleValidationPolicy_WithinInteractionAngleInteractor_IsValidReturnsTrue_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InInteractionRegionDegrees;                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UInteractableArea*                           InRegionInteractor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InteractionPoliciesTestFunctions.WithinInteractionAngleValidationPolicy_OutsideInteractionAngleInteractor_IsValidReturnsFalse
struct UInteractionPoliciesTestFunctions_WithinInteractionAngleValidationPolicy_OutsideInteractionAngleInteractor_IsValidReturnsFalse_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InInteractionRegionDegrees;                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UInteractableArea*                           InOutOfRegionInteractor;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InteractionPoliciesTestFunctions.ClosestToPlayerSortingPolicy_WithTwoInteractablesClosestAndFurthest_ClosestTakesHighestPrecedent
struct UInteractionPoliciesTestFunctions_ClosestToPlayerSortingPolicy_WithTwoInteractablesClosestAndFurthest_ClosestTakesHighestPrecedent_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UInteractableArea*                           InClosestInteractable;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UInteractableArea*                           InFurthestInteractable;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InteractionPoliciesTestFunctions.CenterOfScreenDistanceSortingPolicy_ExecuteTakesHighestPrecedent
struct UInteractionPoliciesTestFunctions_CenterOfScreenDistanceSortingPolicy_ExecuteTakesHighestPrecedent_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UInteractableArea*                           InLhsInteractor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UInteractableArea*                           InRhsInteractor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPlayerDistanceDelta;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InCenterDistanceDelta;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InteractionPoliciesTestFunctions.CanInteractValidationPolicy_WithCantInteractInteractor_IsValidReturnsFalse
struct UInteractionPoliciesTestFunctions_CanInteractValidationPolicy_WithCantInteractInteractor_IsValidReturnsFalse_Params
{
	class AActor*                                      InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UInteractableArea*                           InCanInteractInteractor;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InteractionPoliciesTestFunctions.CanInteractValidationPolicy_WithCanInteractInteractor_IsValidReturnsTrue
struct UInteractionPoliciesTestFunctions_CanInteractValidationPolicy_WithCanInteractInteractor_IsValidReturnsTrue_Params
{
	class AActor*                                      InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UInteractableArea*                           InCanInteractInteractor;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InteractionPoliciesTestFunctions.AirbornePolicy_ExecuteCanInteract
struct UInteractionPoliciesTestFunctions_AirbornePolicy_ExecuteCanInteract_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InInteractable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InteractObjectActionStateId.PushCharacterIntoInteractObjectActionState
struct UInteractObjectActionStateId_PushCharacterIntoInteractObjectActionState_Params
{
	struct FNetSubObjectPtr                            InteractObject;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.InventoryItemComponent.SetItemType
struct UInventoryItemComponent_SetItemType_Params
{
	TEnumAsByte<EItemType>                             InType;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.InventoryItemComponent.SetIconURL
struct UInventoryItemComponent_SetIconURL_Params
{
	struct FStringAssetReference                       InIconURL;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Athena.InventoryItemComponent.SetIconRotation
struct UInventoryItemComponent_SetIconRotation_Params
{
	float                                              InIconRotation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.InventoryItemComponent.OnAddedToInventory
struct UInventoryItemComponent_OnAddedToInventory_Params
{
};

// Function Athena.InventoryItemComponent.GetItemType
struct UInventoryItemComponent_GetItemType_Params
{
	TEnumAsByte<EItemType>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryItemComponent.GetIconURL
struct UInventoryItemComponent_GetIconURL_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.InventoryItemComponent.GetIconScale
struct UInventoryItemComponent_GetIconScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryItemComponent.GetIconRotation
struct UInventoryItemComponent_GetIconRotation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryItemComponent.GetBackgroundImageURL
struct UInventoryItemComponent_GetBackgroundImageURL_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.InventoryManipulatorComponent.WieldItemByActor
struct UInventoryManipulatorComponent_WieldItemByActor_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UnwieldFast;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWieldItemReturnCode>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryManipulatorComponent.WieldItem
struct UInventoryManipulatorComponent_WieldItem_Params
{
	int                                                ItemIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Fast;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.InventoryManipulatorComponent.ToggleWieldItem
struct UInventoryManipulatorComponent_ToggleWieldItem_Params
{
};

// Function Athena.InventoryManipulatorComponent.Server_DropItemRPC
struct UInventoryManipulatorComponent_Server_DropItemRPC_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.InventoryManipulatorComponent.RemoveItem
struct UInventoryManipulatorComponent_RemoveItem_Params
{
	class AItemInfo*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryManipulatorComponent.QuickSelectItemOfType
struct UInventoryManipulatorComponent_QuickSelectItemOfType_Params
{
	TEnumAsByte<EItemType>                             ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TypedItemIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.InventoryManipulatorComponent.QuickSelectItemOfCategory
struct UInventoryManipulatorComponent_QuickSelectItemOfCategory_Params
{
	class UClass*                                      Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IndexIntoCategory;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.InventoryManipulatorComponent.QuickSelectItem
struct UInventoryManipulatorComponent_QuickSelectItem_Params
{
	int                                                ItemIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.InventoryManipulatorComponent.PickUpItem
struct UInventoryManipulatorComponent_PickUpItem_Params
{
	class AItemInfo*                                   ItemInfo;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AndWield;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldNotifyClients;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryManipulatorComponent.Multicast_ItemPickedUpRPC
struct UInventoryManipulatorComponent_Multicast_ItemPickedUpRPC_Params
{
	TEnumAsByte<EWieldableItemSize>                    ItemSize;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasEmptyHanded;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.InventoryManipulatorComponent.Multicast_CurrentItemActorIndexChangedRPC
struct UInventoryManipulatorComponent_Multicast_CurrentItemActorIndexChangedRPC_Params
{
	int                                                NewIndex;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.InventoryManipulatorComponent.IsIdle
struct UInventoryManipulatorComponent_IsIdle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryManipulatorComponent.GetNumberOfItemsOfItemCategory
struct UInventoryManipulatorComponent_GetNumberOfItemsOfItemCategory_Params
{
	class UClass*                                      ItemSlot;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryManipulatorComponent.GetCurrentItemIndex
struct UInventoryManipulatorComponent_GetCurrentItemIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryManipulatorComponent.DropWieldedItem
struct UInventoryManipulatorComponent_DropWieldedItem_Params
{
	TEnumAsByte<EDropItemReturnCode>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryManipulatorComponent.DropOrDestroyLargeWieldedItem
struct UInventoryManipulatorComponent_DropOrDestroyLargeWieldedItem_Params
{
};

// Function Athena.InventoryManipulatorComponent.DetermineDropPos
struct UInventoryManipulatorComponent_DetermineDropPos_Params
{
	struct FVector                                     InSpawnPos;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryManipulatorComponent.CycleItemUp
struct UInventoryManipulatorComponent_CycleItemUp_Params
{
};

// Function Athena.InventoryManipulatorComponent.CycleItemType
struct UInventoryManipulatorComponent_CycleItemType_Params
{
	TEnumAsByte<EItemType>                             ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.InventoryManipulatorComponent.CycleItemDown
struct UInventoryManipulatorComponent_CycleItemDown_Params
{
};

// Function Athena.InventoryManipulatorComponent.CycleItemCategory
struct UInventoryManipulatorComponent_CycleItemCategory_Params
{
	class UClass*                                      Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.InventoryManipulatorComponent.ConsumeItem
struct UInventoryManipulatorComponent_ConsumeItem_Params
{
	class AItemInfo*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryManipulatorComponent.CanDropWieldedItem
struct UInventoryManipulatorComponent_CanDropWieldedItem_Params
{
	TEnumAsByte<EDropItemReturnCode>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryManipulatorComponent.CanAddItemOfItemCategory
struct UInventoryManipulatorComponent_CanAddItemOfItemCategory_Params
{
	class UClass*                                      ItemSlot;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECanAddItemQueryResult>                ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryManipulatorComponent.AddItem
struct UInventoryManipulatorComponent_AddItem_Params
{
	class AItemInfo*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.InventoryManipulatorComponentMock.ForceDroppedItemToAttachToHitActor
struct UInventoryManipulatorComponentMock_ForceDroppedItemToAttachToHitActor_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.AthenaGameState.OnRep_ServiceStatusNotificationsService
struct AAthenaGameState_OnRep_ServiceStatusNotificationsService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedWindService
struct AAthenaGameState_OnRep_ReplicatedWindService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedWaterService
struct AAthenaGameState_OnRep_ReplicatedWaterService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedWatercraftService
struct AAthenaGameState_OnRep_ReplicatedWatercraftService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedTinySharkService
struct AAthenaGameState_OnRep_ReplicatedTinySharkService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedTimeService
struct AAthenaGameState_OnRep_ReplicatedTimeService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedStormService
struct AAthenaGameState_OnRep_ReplicatedStormService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedShipwrightService
struct AAthenaGameState_OnRep_ReplicatedShipwrightService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedShipService
struct AAthenaGameState_OnRep_ReplicatedShipService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedPlayerManagerService
struct AAthenaGameState_OnRep_ReplicatedPlayerManagerService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedNPCService
struct AAthenaGameState_OnRep_ReplicatedNPCService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedKrakenService
struct AAthenaGameState_OnRep_ReplicatedKrakenService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedIslandService
struct AAthenaGameState_OnRep_ReplicatedIslandService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedDrawDebugService
struct AAthenaGameState_OnRep_ReplicatedDrawDebugService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedCrewService
struct AAthenaGameState_OnRep_ReplicatedCrewService_Params
{
};

// Function Athena.AthenaGameState.OnRep_ReplicatedAllianceService
struct AAthenaGameState_OnRep_ReplicatedAllianceService_Params
{
};

// Function Athena.IslandLocationVerifierInterface.VerifyLocation
struct UIslandLocationVerifierInterface_VerifyLocation_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresNavMesh;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FIslandLocationVerifierResult               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.IslandSalvageSpawnerManager.SetAllowNewSpawnRequests
struct AIslandSalvageSpawnerManager_SetAllowNewSpawnRequests_Params
{
	bool                                               InAllowNewSpawnRequests;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.IslandService.OnRep_ReplicatedIslandArray
struct AIslandService_OnRep_ReplicatedIslandArray_Params
{
};

// Function Athena.IslandService.CollectLandmarksFromWorld
struct AIslandService_CollectLandmarksFromWorld_Params
{
};

// Function Athena.IslandService.CollectIslandDataFromWorld
struct AIslandService_CollectIslandDataFromWorld_Params
{
};

// Function Athena.ItemDiggingComponent.OnRep_State
struct UItemDiggingComponent_OnRep_State_Params
{
	TEnumAsByte<EDiggingState>                         OldState;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ItemDiggingComponent.OnRep_NumDigsLeft
struct UItemDiggingComponent_OnRep_NumDigsLeft_Params
{
	int                                                PrevNumDigsLeft;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ItemFactoryFunctions.SpawnItemAsWieldable
struct UItemFactoryFunctions_SpawnItemAsWieldable_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      What;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Where;                                                    // (Parm, IsPlainOldData)
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AWieldableItem*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ItemFactoryFunctions.SpawnItemAsProxy
struct UItemFactoryFunctions_SpawnItemAsProxy_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      What;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Where;                                                    // (Parm, IsPlainOldData)
	class AItemProxy*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ItemFactoryFunctions.SpawnItem
struct UItemFactoryFunctions_SpawnItem_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      What;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Where;                                                    // (Parm, IsPlainOldData)
	class AItemInfo*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.UsableInterface.UpdateUsage
struct UUsableInterface_UpdateUsage_Params
{
	float                                              DeltaTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.UsableInterface.StopUsing
struct UUsableInterface_StopUsing_Params
{
	class UClass*                                      InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.UsableInterface.StartUsing
struct UUsableInterface_StartUsing_Params
{
	class UClass*                                      InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.UsableInterface.IsBeingUsed
struct UUsableInterface_IsBeingUsed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.UsableInterface.CanBeUsed
struct UUsableInterface_CanBeUsed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.NamedNotificationInputInterface.GetNotificationInputDisplayName
struct UNamedNotificationInputInterface_GetNotificationInputDisplayName_Params
{
	class UClass*                                      InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.ItemLoadoutComponent.OnRep_Slots
struct UItemLoadoutComponent_OnRep_Slots_Params
{
};

// Function Athena.ItemLoadoutComponent.OnItemDestroyed
struct UItemLoadoutComponent_OnItemDestroyed_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ItemPickupBlueprintFunctionLibrary.IsActorWieldingLargeItem
struct UItemPickupBlueprintFunctionLibrary_IsActorWieldingLargeItem_Params
{
	class AActor*                                      WieldingActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.KrakenAnimatedTentacle.TestToggleInstantStateSwitching
struct AKrakenAnimatedTentacle_TestToggleInstantStateSwitching_Params
{
};

// Function Athena.KrakenAnimatedTentacle.SetMinHoldingTargetTime
struct AKrakenAnimatedTentacle_SetMinHoldingTargetTime_Params
{
	float                                              HoldingTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.KrakenAnimatedTentacle.SetCurrentTarget
struct AKrakenAnimatedTentacle_SetCurrentTarget_Params
{
	class AAthenaCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.KrakenAnimatedTentacle.RequestState
struct AKrakenAnimatedTentacle_RequestState_Params
{
	class UClass*                                      NewState;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.KrakenAnimatedTentacle.RequestIdleState
struct AKrakenAnimatedTentacle_RequestIdleState_Params
{
	class UClass*                                      IdleState;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.KrakenAnimatedTentacle.OnRep_TentacleYaw
struct AKrakenAnimatedTentacle_OnRep_TentacleYaw_Params
{
	float                                              OldTentacleYaw;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.KrakenAnimatedTentacle.OnRep_TentacleWorldLocation
struct AKrakenAnimatedTentacle_OnRep_TentacleWorldLocation_Params
{
	struct FVector                                     OldTentacleWorldLocation;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.KrakenAnimatedTentacle.OnRep_PendingState
struct AKrakenAnimatedTentacle_OnRep_PendingState_Params
{
};

// Function Athena.KrakenAnimatedTentacle.OnRep_CurrentTarget
struct AKrakenAnimatedTentacle_OnRep_CurrentTarget_Params
{
};

// Function Athena.KrakenAnimatedTentacle.OnRep_CurrentState
struct AKrakenAnimatedTentacle_OnRep_CurrentState_Params
{
};

// Function Athena.KrakenAnimatedTentacle.OnRep_AnimationProgression
struct AKrakenAnimatedTentacle_OnRep_AnimationProgression_Params
{
};

// Function Athena.KrakenAnimatedTentacle.IsAnimationLooping
struct AKrakenAnimatedTentacle_IsAnimationLooping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.KrakenAnimatedTentacle.GetCurrentTarget
struct AKrakenAnimatedTentacle_GetCurrentTarget_Params
{
	class AAthenaCharacter*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.KrakenAnimatedTentacle.GetCurrentState
struct AKrakenAnimatedTentacle_GetCurrentState_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.KrakenAnimatedTentacle.DockToActor
struct AKrakenAnimatedTentacle_DockToActor_Params
{
	class AActor*                                      ActorToDockTo;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.KrakenAnimatedTentacleRecordingAnimationInstance.StartRecordingAllAnimations
struct UKrakenAnimatedTentacleRecordingAnimationInstance_StartRecordingAllAnimations_Params
{
};

// Function Athena.KrakenDebugFunctionLibrary.SpawnTentacleAndSuckTarget
struct UKrakenDebugFunctionLibrary_SpawnTentacleAndSuckTarget_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	class UClass*                                      TentacleClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AAthenaCharacter*                            AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AnimPlayRate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SuckingTellTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AKrakenAnimatedTentacle*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.KrakenDebugFunctionLibrary.SetTimeUntilNextKrakenSpawnAttempt
struct UKrakenDebugFunctionLibrary_SetTimeUntilNextKrakenSpawnAttempt_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.KrakenDebugFunctionLibrary.RequestKrakenWithShip
struct UKrakenDebugFunctionLibrary_RequestKrakenWithShip_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AShip*                                       ShipTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.KrakenDebugFunctionLibrary.OverridePlayRateScaleInKrakenServiceParams
struct UKrakenDebugFunctionLibrary_OverridePlayRateScaleInKrakenServiceParams_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverridePlayRateScale;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.KrakenDebugFunctionLibrary.OverrideNumberOfTentaclesSpawnedInKrakenServiceParams
struct UKrakenDebugFunctionLibrary_OverrideNumberOfTentaclesSpawnedInKrakenServiceParams_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OverrideNumberOfTentacles;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.KrakenDebugFunctionLibrary.OverrideNewTargetTimeoutInKrakenServiceParams
struct UKrakenDebugFunctionLibrary_OverrideNewTargetTimeoutInKrakenServiceParams_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideNewTargetTimeout;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.KrakenDebugFunctionLibrary.GenerateKrakenSpawnLocationDistribution
struct UKrakenDebugFunctionLibrary_GenerateKrakenSpawnLocationDistribution_Params
{
	TArray<struct FKrakenSpawnLocationExclusionZone>   SeaRockExclusionZones;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FKrakenSpawnLocationExclusionZone>   IslandExclusionZones;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              DistributionWidth;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistributionHeight;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinDistanceBetweenSamplePoints;                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FKrakenSpawnLocationParams                  SpawnLocationParams;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.LadderBlueprintFunctionLibrary.GetRelativePositionAtHeight
struct ULadderBlueprintFunctionLibrary_GetRelativePositionAtHeight_Params
{
	TScriptInterface<class ULadderInterface>           LadderInterface;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Height;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.OverlapTriggerComponent.OnActivationRegionOverlapEnd
struct UOverlapTriggerComponent_OnActivationRegionOverlapEnd_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.OverlapTriggerComponent.OnActivationRegionOverlapBegin
struct UOverlapTriggerComponent_OnActivationRegionOverlapBegin_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OverlapInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.Landmark.TriggerLandmarkReactionForNearbyPlayersExplicitList
struct ALandmark_TriggerLandmarkReactionForNearbyPlayersExplicitList_Params
{
	int                                                LandmarkReactionIndex;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AAthenaPlayerCharacter*>              Players;                                                  // (Parm, ZeroConstructor)
};

// Function Athena.VomitProjectile.SetImpactCallback
struct AVomitProjectile_SetImpactCallback_Params
{
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Athena.VomitProjectile.SetChannelToIgnoreInShip
struct AVomitProjectile_SetChannelToIgnoreInShip_Params
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.VomitProjectile.LaunchVomitProjectile
struct AVomitProjectile_LaunchVomitProjectile_Params
{
	class AActor*                                      Vomiter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LaunchSocketName;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AdditionalLiftAngle;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AVomitProjectile*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LaunchedFromKrakenActionStateId.PushCharacterIntoLaunchedFromKrakenActionState
struct ULaunchedFromKrakenActionStateId_PushCharacterIntoLaunchedFromKrakenActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      FiringActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AKrakenAnimatedTentacle*                     Tentacle;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.LaunchedFromKrakenActionStateId.PopCharacterOutOfLaunchedFromKrakenActionState
struct ULaunchedFromKrakenActionStateId_PopCharacterOutOfLaunchedFromKrakenActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SimpleLeakerComponent.AddLeak
struct USimpleLeakerComponent_AddLeak_Params
{
	struct FTransform                                  InWhere;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              InAmount;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LeaveGhostShipActionStateId.PushCharacterIntoLeaveGhostShipActionState
struct ULeaveGhostShipActionStateId_PushCharacterIntoLeaveGhostShipActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.LightingControllerSettings.GetOutput
struct ULightingControllerSettings_GetOutput_Params
{
	class ULightingControllerSettings*                 Settings;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Input;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLightingControllerSettingsOutput           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.LightingZoneInterface.GetLightingZoneParameters
struct ULightingZoneInterface_GetLightingZoneParameters_Params
{
	struct FLightingZoneParametersAndLocation          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.LightingController.IsPlayingInEditor
struct ALightingController_IsPlayingInEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LightingController.IsPlayerInBoatSpace
struct ALightingController_IsPlayerInBoatSpace_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LightingController.GetZoneWeights
struct ALightingController_GetZoneWeights_Params
{
	TArray<struct FLightingZoneBlendValues>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.LightingController.GetRainWeight
struct ALightingController_GetRainWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LightingZoneServiceInterface.UnregisterLightingZoneFromService
struct ULightingZoneServiceInterface_UnregisterLightingZoneFromService_Params
{
	TScriptInterface<class ULightingZoneInterface>     LightingZone;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.LightingZoneServiceInterface.RegisterLightingZoneWithService
struct ULightingZoneServiceInterface_RegisterLightingZoneWithService_Params
{
	TScriptInterface<class ULightingZoneInterface>     LightingZone;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.LightingZoneServiceInterface.GetNumberOfLightingZones
struct ULightingZoneServiceInterface_GetNumberOfLightingZones_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LightingZoneServiceInterface.GetLightingZone
struct ULightingZoneServiceInterface_GetLightingZone_Params
{
	int                                                LightingZoneIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLightingZoneParametersAndLocation          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.LightingZoneServiceInterface.GetAllLightingZones
struct ULightingZoneServiceInterface_GetAllLightingZones_Params
{
	TArray<struct FLightingZoneParametersAndLocation>  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.LimpingComponent.TestForceLimpingOffLocally
struct ULimpingComponent_TestForceLimpingOffLocally_Params
{
};

// Function Athena.LimpingComponent.StartLimping
struct ULimpingComponent_StartLimping_Params
{
};

// Function Athena.LimpingComponent.PredictStartLimping
struct ULimpingComponent_PredictStartLimping_Params
{
};

// Function Athena.LimpingComponent.OnRep_IsLimping
struct ULimpingComponent_OnRep_IsLimping_Params
{
};

// Function Athena.LimpingComponent.IsLimpingPredicted
struct ULimpingComponent_IsLimpingPredicted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LimpingComponent.IsLimping
struct ULimpingComponent_IsLimping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LimpingComponent.GetHasActiveCameraModifiers
struct ULimpingComponent_GetHasActiveCameraModifiers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LimpingComponent.GetCheatPenaltyTimeLeft
struct ULimpingComponent_GetCheatPenaltyTimeLeft_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LimpingComponent.EndLimpingIndefinitely
struct ULimpingComponent_EndLimpingIndefinitely_Params
{
};

// Function Athena.LimpingComponent.BeginLimpingIndefinitely
struct ULimpingComponent_BeginLimpingIndefinitely_Params
{
};

// Function Athena.LiquidContainerInterface.SetLiquidLevel
struct ULiquidContainerInterface_SetLiquidLevel_Params
{
	float                                              Level;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.LiquidContainerInterface.GetWantedLiquidLevel
struct ULiquidContainerInterface_GetWantedLiquidLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LiquidContainerInterface.GetLiquidLevel
struct ULiquidContainerInterface_GetLiquidLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LiquidContainerComponent.SetLiquidType
struct ULiquidContainerComponent_SetLiquidType_Params
{
	TEnumAsByte<ELiquidType>                           LiquidType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.LiquidContainerComponent.SetLiquidLevel
struct ULiquidContainerComponent_SetLiquidLevel_Params
{
	float                                              Level;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.LiquidContainerComponent.GetLiquidLevel
struct ULiquidContainerComponent_GetLiquidLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LiquidContainerComponent.CollectLiquidMaterials
struct ULiquidContainerComponent_CollectLiquidMaterials_Params
{
	class UMeshComponent*                              MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Athena.LoadableInterface.IsLoaded
struct ULoadableInterface_IsLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LoadableInterface.CanBeUnloaded
struct ULoadableInterface_CanBeUnloaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LoadableInterface.CanBeLoaded
struct ULoadableInterface_CanBeLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LoadableComponent.OnRepLoadableComponentState
struct ULoadableComponent_OnRepLoadableComponentState_Params
{
	struct FLoadableComponentState                     PrevLoadableComponentState;                               // (Parm)
};

// Function Athena.LoadItemActionStateId.PushCharacterIntoLoadItemActionState
struct ULoadItemActionStateId_PushCharacterIntoLoadItemActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      LoadableActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Interactable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DefaultItemDesc;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.LoadItemActionStateId.PopCharacterOutOfLoadItemActionState
struct ULoadItemActionStateId_PopCharacterOutOfLoadItemActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.LoadoutControlInterface.IsRequestLoadoutCompleted
struct ULoadoutControlInterface_IsRequestLoadoutCompleted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LoadPlayerActionStateId.PushCharacterIntoLoadPlayerActionState
struct ULoadPlayerActionStateId_PushCharacterIntoLoadPlayerActionState_Params
{
	class AActor*                                      InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InLoadable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InInteractable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.LocomotionActionStateId.PushCharacterIntoLocomotionActionState
struct ULocomotionActionStateId_PushCharacterIntoLocomotionActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnWalkActivate
struct ULocomotionCompositeInputHandler_OnWalkActivate_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnTurnToPreviousPage
struct ULocomotionCompositeInputHandler_OnTurnToPreviousPage_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnTurnToNextPage
struct ULocomotionCompositeInputHandler_OnTurnToNextPage_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnTurnRate
struct ULocomotionCompositeInputHandler_OnTurnRate_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnTurn
struct ULocomotionCompositeInputHandler_OnTurn_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnToggleItem
struct ULocomotionCompositeInputHandler_OnToggleItem_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnSprintActivate
struct ULocomotionCompositeInputHandler_OnSprintActivate_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnSecondaryItemUseReleased
struct ULocomotionCompositeInputHandler_OnSecondaryItemUseReleased_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnSecondaryItemUsePressed
struct ULocomotionCompositeInputHandler_OnSecondaryItemUsePressed_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickSwitchWeapon
struct ULocomotionCompositeInputHandler_OnQuickSwitchWeapon_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickSwitchSecondaryWeapon
struct ULocomotionCompositeInputHandler_OnQuickSwitchSecondaryWeapon_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickSwitchPrimaryWeapon
struct ULocomotionCompositeInputHandler_OnQuickSwitchPrimaryWeapon_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickSelectItemOfCategory
struct ULocomotionCompositeInputHandler_OnQuickSelectItemOfCategory_Params
{
	class UClass*                                      Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IndexIntoCategory;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToWoodPlank
struct ULocomotionCompositeInputHandler_OnQuickCycleToWoodPlank_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToTankard
struct ULocomotionCompositeInputHandler_OnQuickCycleToTankard_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToSpyglass
struct ULocomotionCompositeInputHandler_OnQuickCycleToSpyglass_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToSpeakingTrumpet
struct ULocomotionCompositeInputHandler_OnQuickCycleToSpeakingTrumpet_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToShovel
struct ULocomotionCompositeInputHandler_OnQuickCycleToShovel_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToPocketWatch
struct ULocomotionCompositeInputHandler_OnQuickCycleToPocketWatch_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToLantern
struct ULocomotionCompositeInputHandler_OnQuickCycleToLantern_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToInstrument
struct ULocomotionCompositeInputHandler_OnQuickCycleToInstrument_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToFruit
struct ULocomotionCompositeInputHandler_OnQuickCycleToFruit_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToCompass
struct ULocomotionCompositeInputHandler_OnQuickCycleToCompass_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToCannonball
struct ULocomotionCompositeInputHandler_OnQuickCycleToCannonball_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleToBucket
struct ULocomotionCompositeInputHandler_OnQuickCycleToBucket_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnQuickCycleItemsOfCategory
struct ULocomotionCompositeInputHandler_OnQuickCycleItemsOfCategory_Params
{
	class UClass*                                      Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnPrimaryItemUseReleased
struct ULocomotionCompositeInputHandler_OnPrimaryItemUseReleased_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnPrimaryItemUsePressed
struct ULocomotionCompositeInputHandler_OnPrimaryItemUsePressed_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnMoveRight
struct ULocomotionCompositeInputHandler_OnMoveRight_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnMoveForward
struct ULocomotionCompositeInputHandler_OnMoveForward_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnLookUpRate
struct ULocomotionCompositeInputHandler_OnLookUpRate_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnLookUp
struct ULocomotionCompositeInputHandler_OnLookUp_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnJump
struct ULocomotionCompositeInputHandler_OnJump_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnDropLargeWieldedItem
struct ULocomotionCompositeInputHandler_OnDropLargeWieldedItem_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnCycleItemUp
struct ULocomotionCompositeInputHandler_OnCycleItemUp_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LocomotionCompositeInputHandler.OnCycleItemDown
struct ULocomotionCompositeInputHandler_OnCycleItemDown_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LookAtOffsetCompositeInputHandler.OnYawRate
struct ULookAtOffsetCompositeInputHandler_OnYawRate_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LookAtOffsetCompositeInputHandler.OnYaw
struct ULookAtOffsetCompositeInputHandler_OnYaw_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LookAtOffsetCompositeInputHandler.OnPitchRate
struct ULookAtOffsetCompositeInputHandler_OnPitchRate_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LookAtOffsetCompositeInputHandler.OnPitch
struct ULookAtOffsetCompositeInputHandler_OnPitch_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ControlIntentCompositeInputHandler.OnRightTriggerAnalog
struct UControlIntentCompositeInputHandler_OnRightTriggerAnalog_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ControlIntentCompositeInputHandler.OnChangeIntent
struct UControlIntentCompositeInputHandler_OnChangeIntent_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ControlWheelCompositeInputHandler.OnRightTrigger
struct UControlWheelCompositeInputHandler_OnRightTrigger_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ControlWheelCompositeInputHandler.OnMoveRight
struct UControlWheelCompositeInputHandler_OnMoveRight_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RowingCompositeInputHandler.OnUseRightOar
struct URowingCompositeInputHandler_OnUseRightOar_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RowingCompositeInputHandler.OnUseLeftOar
struct URowingCompositeInputHandler_OnUseLeftOar_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RowingCompositeInputHandler.OnStopUseRightOar
struct URowingCompositeInputHandler_OnStopUseRightOar_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RowingCompositeInputHandler.OnStopUseLeftOar
struct URowingCompositeInputHandler_OnStopUseLeftOar_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RowingCompositeInputHandler.OnBrakeRightOar
struct URowingCompositeInputHandler_OnBrakeRightOar_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RowingCompositeInputHandler.OnBrakeLeftOar
struct URowingCompositeInputHandler_OnBrakeLeftOar_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.UseLadderCompositeInputHandler.OnClimbLadder
struct UUseLadderCompositeInputHandler_OnClimbLadder_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LookAtOffsetFunctions.IsLookAtEnabled
struct ULookAtOffsetFunctions_IsLookAtEnabled_Params
{
	struct FLookAtOffset                               LookAtOffset;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LookAtOffsetFunctions.GetLookAtYaw
struct ULookAtOffsetFunctions_GetLookAtYaw_Params
{
	struct FLookAtOffset                               LookAtOffset;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LookAtOffsetFunctions.GetLookAtWorldLocation
struct ULookAtOffsetFunctions_GetLookAtWorldLocation_Params
{
	struct FLookAtOffset                               LookAtOffset;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LookAtOffsetFunctions.GetLookAtPitch
struct ULookAtOffsetFunctions_GetLookAtPitch_Params
{
	struct FLookAtOffset                               LookAtOffset;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.LookAtOffsetFunctions.AddYawInput
struct ULookAtOffsetFunctions_AddYawInput_Params
{
	struct FLookAtOffset                               LookAtOffset;                                             // (Parm, OutParm, ReferenceParm)
	float                                              YawInput;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.LookAtOffsetFunctions.AddPitchInput
struct ULookAtOffsetFunctions_AddPitchInput_Params
{
	struct FLookAtOffset                               LookAtOffset;                                             // (Parm, OutParm, ReferenceParm)
	float                                              PitchInput;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.LPVReferenceFrameAdaptationFunctionLibrary.TickLPVAdaptation
struct ULPVReferenceFrameAdaptationFunctionLibrary_TickLPVAdaptation_Params
{
	struct FLPVAdaptationState                         InOutLPVAdaptationState;                                  // (Parm, OutParm, ReferenceParm)
	struct FPostProcessSettings                        InOutPostProcessSettings;                                 // (Parm, OutParm, ReferenceParm)
	struct FTransform                                  InCurrentShipTransform;                                   // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.LPVReferenceFrameAdaptationFunctionLibrary.SetLPVAdaptationState
struct ULPVReferenceFrameAdaptationFunctionLibrary_SetLPVAdaptationState_Params
{
	struct FLPVAdaptationState                         InOutLPVAdaptationState;                                  // (Parm, OutParm, ReferenceParm)
	struct FVector                                     InPlayerPawnLocation;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTransform                                  InCurrentShipTransform;                                   // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bInIsPlayerInLPVRefFrameArea;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.LPVReferenceFrameAdaptationFunctionLibrary.InitializeLPVAdaptationStateDefaultOptions
struct ULPVReferenceFrameAdaptationFunctionLibrary_InitializeLPVAdaptationStateDefaultOptions_Params
{
	struct FLPVAdaptationState                         InOutLPVAdaptationState;                                  // (Parm, OutParm, ReferenceParm)
	TEnumAsByte<ELPVAdaptationType>                    InAdaptationType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRotationBlendTime;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTranslationBlendTime;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InAdditionalBlendTime;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MapTable.Server_SetPins
struct AMapTable_Server_SetPins_Params
{
	TArray<struct FVector2D>                           InMapPins;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Athena.MapTable.Server_MoveMap
struct AMapTable_Server_MoveMap_Params
{
	struct FVector2D                                   CentreLocation;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ZoomLevel;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MapTable.Server_LeaveTable
struct AMapTable_Server_LeaveTable_Params
{
	class AActor*                                      Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MapTable.Server_JoinTable
struct AMapTable_Server_JoinTable_Params
{
	class AActor*                                      Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MapTable.OnRep_ZoomLevel
struct AMapTable_OnRep_ZoomLevel_Params
{
};

// Function Athena.MapTable.OnRep_TrackedShips
struct AMapTable_OnRep_TrackedShips_Params
{
};

// Function Athena.MapTable.OnRep_MapPins
struct AMapTable_OnRep_MapPins_Params
{
};

// Function Athena.MapTable.OnRep_CentreLocation
struct AMapTable_OnRep_CentreLocation_Params
{
};

// Function Athena.MapTable.OnMapMove
struct AMapTable_OnMapMove_Params
{
	struct FVector2D                                   CentreLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ZoomLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MapTable.OnMapActivate
struct AMapTable_OnMapActivate_Params
{
	bool                                               IsMapActive;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MapTableTestFunctions.ZoomOut
struct UMapTableTestFunctions_ZoomOut_Params
{
	class AMapTable*                                   MapTable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ZoomValue;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MapTableTestFunctions.ZoomIn
struct UMapTableTestFunctions_ZoomIn_Params
{
	class AMapTable*                                   MapTable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ZoomValue;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MapTableTestFunctions.SetMinZoom
struct UMapTableTestFunctions_SetMinZoom_Params
{
	class AMapTable*                                   MapTable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MapTableTestFunctions.SetMinPan
struct UMapTableTestFunctions_SetMinPan_Params
{
	class AMapTable*                                   MapTable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MinValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MapTableTestFunctions.SetMaxZoom
struct UMapTableTestFunctions_SetMaxZoom_Params
{
	class AMapTable*                                   MapTable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MapTableTestFunctions.SetMaxPan
struct UMapTableTestFunctions_SetMaxPan_Params
{
	class AMapTable*                                   MapTable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MaxValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MapTableTestFunctions.PanY
struct UMapTableTestFunctions_PanY_Params
{
	class AMapTable*                                   MapTable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PanValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MapTableTestFunctions.PanX
struct UMapTableTestFunctions_PanX_Params
{
	class AMapTable*                                   MapTable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PanValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MapTableTestFunctions.IsUnderLocalControl
struct UMapTableTestFunctions_IsUnderLocalControl_Params
{
	class AMapTable*                                   MapTable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.MapTableTestFunctions.IsLocationDirty
struct UMapTableTestFunctions_IsLocationDirty_Params
{
	class AMapTable*                                   MapTable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.MapTableTestFunctions.GetControlPoint
struct UMapTableTestFunctions_GetControlPoint_Params
{
	class AMapTable*                                   MapTable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PointIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AMapTableControlPoint*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.MapTableTestFunctions.ConsumeLocationChange
struct UMapTableTestFunctions_ConsumeLocationChange_Params
{
	class AMapTable*                                   MapTable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWorldMapSetLocation                        Event;                                                    // (Parm, OutParm)
};

// Function Athena.MastAnimInterface.SetMastAngle
struct UMastAnimInterface_SetMastAngle_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MastAnimInterface.InitializeMast
struct UMastAnimInterface_InitializeMast_Params
{
	float                                              FallingLimit;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MaterialInformationServiceBlueprintFunctions.GetVFXInformationForSurface
struct UMaterialInformationServiceBlueprintFunctions_GetVFXInformationForSurface_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FMaterialInformationVFXData                 VFXSurfaceData;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.MaterialInformationServiceBlueprintFunctions.GetAudioInformationForSurface
struct UMaterialInformationServiceBlueprintFunctions_GetAudioInformationForSurface_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FMaterialInformationAudioData               AudioSurfaceData;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.MatineeUtility.Multicast_BroadcastStop
struct AMatineeUtility_Multicast_BroadcastStop_Params
{
	class AMatineeActor*                               MatineeActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MatineeUtility.Multicast_BroadcastSetPosition
struct AMatineeUtility_Multicast_BroadcastSetPosition_Params
{
	class AMatineeActor*                               MatineeActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationPosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Jump;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MatineeUtility.Multicast_BroadcastPlay
struct AMatineeUtility_Multicast_BroadcastPlay_Params
{
	class AMatineeActor*                               MatineeActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MatineeUtility.HandleCharacterEndPlay
struct AMatineeUtility_HandleCharacterEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MatineeUtility.HandleCharacterDestroyed
struct AMatineeUtility_HandleCharacterDestroyed_Params
{
};

// Function Athena.MatineeUtility.BroadcastStop
struct AMatineeUtility_BroadcastStop_Params
{
	class AMatineeActor*                               MatineeActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MatineeUtility.BroadcastSetPosition
struct AMatineeUtility_BroadcastSetPosition_Params
{
	class AMatineeActor*                               MatineeActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationPosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Jump;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MatineeUtility.BroadcastPlay
struct AMatineeUtility_BroadcastPlay_Params
{
	class AMatineeActor*                               MatineeActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MeleeAttackProcessorComponent.Multicast_RespondToHit
struct UMeleeAttackProcessorComponent_Multicast_RespondToHit_Params
{
	struct FMeleeAttackHitResponseData                 HitResponseData;                                          // (ConstParm, Parm, ReferenceParm)
};

// Function Athena.MeleeAttackProcessorComponent.Client_AttackCompleted
struct UMeleeAttackProcessorComponent_Client_AttackCompleted_Params
{
	class UMeleeAttackDataAsset*                       AttackCompleted;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MeleeBlockingActionStateId.PushCharacterIntoMeleeBlockingActionState
struct UMeleeBlockingActionStateId_PushCharacterIntoMeleeBlockingActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlockMovementTime;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MeleeBlockingActionStateId.PopCharacterOutOfMeleeBlockingActionState
struct UMeleeBlockingActionStateId_PopCharacterOutOfMeleeBlockingActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MeleeBlockingCompositeInputHandler.OnDodge
struct UMeleeBlockingCompositeInputHandler_OnDodge_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.MemoryTestPawn.Server_SetActorLocationAndRotation
struct AMemoryTestPawn_Server_SetActorLocationAndRotation_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MemoryTestPawn.IsFinished
struct AMemoryTestPawn_IsFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.MenuInputHandler.OnOpenQuickMenu
struct UMenuInputHandler_OnOpenQuickMenu_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.MenuInputHandler.OnOpenEscapeMenu
struct UMenuInputHandler_OnOpenEscapeMenu_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.MerchantCrateProviderInterface.CollectCrate
struct UMerchantCrateProviderInterface_CollectCrate_Params
{
	class AActor*                                      Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CrateDesc;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.MermaidServiceInterface.SpawnMermaidForCrewWhoLostShip
struct UMermaidServiceInterface_SpawnMermaidForCrewWhoLostShip_Params
{
	struct FGuid                                       CrewId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     LostShipPos;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.MermaidServiceInterface.DebugEnableMermaidSpawning
struct UMermaidServiceInterface_DebugEnableMermaidSpawning_Params
{
	bool                                               Flag;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MermaidService.SetParams
struct AMermaidService_SetParams_Params
{
	struct FMermaidServiceParams                       P;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.MermaidService.IsMermaidActive
struct AMermaidService_IsMermaidActive_Params
{
	class AMermaid*                                    M;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.MermaidService.GetParams
struct AMermaidService_GetParams_Params
{
	struct FMermaidServiceParams                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function Athena.MermaidService.GetNumActiveMermaids
struct AMermaidService_GetNumActiveMermaids_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.MigrationActionStateId.PushCharacterIntoMigrationActionState
struct UMigrationActionStateId_PushCharacterIntoMigrationActionState_Params
{
	class AAthenaCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MigrationUIComponent.OnTextCanvasUpdate
struct UMigrationUIComponent_OnTextCanvasUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Shovel.Server_RequestDigRPC
struct AShovel_Server_RequestDigRPC_Params
{
};

// Function Athena.Shovel.Multicast_DigRPC
struct AShovel_Multicast_DigRPC_Params
{
	TEnumAsByte<EShovelDigType>                        NewDigType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBuriedItemType>                       DigUnearthingType;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DigUnearthingClass;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Shovel.GetShouldWielderBeLocked
struct AShovel_GetShouldWielderBeLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Shovel.GetLastKnownDigTypeOnServer
struct AShovel_GetLastKnownDigTypeOnServer_Params
{
	TEnumAsByte<EShovelDigType>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Shovel.GetCurrentDigType
struct AShovel_GetCurrentDigType_Params
{
	TEnumAsByte<EShovelDigType>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.MockTelemetryDispatcher.ValidateGameEndTelemetryEvent
struct UMockTelemetryDispatcher_ValidateGameEndTelemetryEvent_Params
{
	struct FPlayerGameEndTelemetryEvent                Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                MinIdleDuration;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinActiveDuration;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinVoiceChatDuration;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.MockTelemetryDispatcher.SeamlessTravelTo
struct UMockTelemetryDispatcher_SeamlessTravelTo_Params
{
	class AAthenaPlayerController*                     Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MockTelemetryDispatcher.OnUIScreenTransitionTelemetryEvent
struct UMockTelemetryDispatcher_OnUIScreenTransitionTelemetryEvent_Params
{
	struct FUIScreenTransitionTelemetryEvent           Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.MockTelemetryDispatcher.OnShovelTelemetryEvent
struct UMockTelemetryDispatcher_OnShovelTelemetryEvent_Params
{
	struct FShovelTelemetryEvent                       Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.MockTelemetryDispatcher.OnShipSpawnedTelemetryEvent
struct UMockTelemetryDispatcher_OnShipSpawnedTelemetryEvent_Params
{
	struct FShipSpawnedTelemetryEvent                  Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.MockTelemetryDispatcher.OnShipHeartbeatTelemetryEvent
struct UMockTelemetryDispatcher_OnShipHeartbeatTelemetryEvent_Params
{
	struct FShipHeartbeatTelemetryEvent                Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.MockTelemetryDispatcher.OnShipDestroyedTelemetryEvent
struct UMockTelemetryDispatcher_OnShipDestroyedTelemetryEvent_Params
{
	struct FShipDestroyedTelemetryEvent                Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.MockTelemetryDispatcher.OnShipDamagedTelemetryEvent
struct UMockTelemetryDispatcher_OnShipDamagedTelemetryEvent_Params
{
	struct FShipDamagedTelemetryEvent                  Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.MockTelemetryDispatcher.OnPlayerSpawnTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerSpawnTelemetryEvent_Params
{
	struct FPlayerSpawnTelemetryEvent                  Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.MockTelemetryDispatcher.OnPlayerObjectUsageStartTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerObjectUsageStartTelemetryEvent_Params
{
	struct FPlayerObjectUsageStartTelemetryEvent       Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.MockTelemetryDispatcher.OnPlayerObjectUsageEndTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerObjectUsageEndTelemetryEvent_Params
{
	struct FPlayerObjectUsageEndTelemetryEvent         Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.MockTelemetryDispatcher.OnPlayerItemRetrievalFromContainerTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerItemRetrievalFromContainerTelemetryEvent_Params
{
	struct FPlayerItemRetrievalFromContainerTelemetryEvent Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.MockTelemetryDispatcher.OnPlayerItemEquipTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerItemEquipTelemetryEvent_Params
{
	struct FPlayerItemEquipTelemetryEvent              Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.MockTelemetryDispatcher.OnPlayerHealthChangeTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerHealthChangeTelemetryEvent_Params
{
	struct FPlayerHealthChangeTelemetryEvent           Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.MockTelemetryDispatcher.OnPlayerGameStartTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerGameStartTelemetryEvent_Params
{
	struct FPlayerGameStartTelemetryEvent              Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.MockTelemetryDispatcher.OnPlayerGameEndTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerGameEndTelemetryEvent_Params
{
	struct FPlayerGameEndTelemetryEvent                Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.MockTelemetryDispatcher.OnPlayerCapstanUsageStartTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerCapstanUsageStartTelemetryEvent_Params
{
	struct FPlayerCapstanUsageStartTelemetryEvent      Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.MockTelemetryDispatcher.OnPlayerCapstanUsageEndTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerCapstanUsageEndTelemetryEvent_Params
{
	struct FPlayerCapstanUsageEndTelemetryEvent        Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.MockTelemetryDispatcher.OnPlayerAttackTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerAttackTelemetryEvent_Params
{
	struct FPlayerAttackTelemetryEvent                 Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.MockTelemetryDispatcher.OnPlayerActionTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerActionTelemetryEvent_Params
{
	struct FPlayerActionTelemetryEvent                 Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.MockTelemetryDispatcher.OnPlayerActionCannonTelemetryEvent
struct UMockTelemetryDispatcher_OnPlayerActionCannonTelemetryEvent_Params
{
	struct FPlayerActionCannonTelemetryEvent           Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.MockTelemetryDispatcher.OnLoadingTelemetryEvent
struct UMockTelemetryDispatcher_OnLoadingTelemetryEvent_Params
{
	struct FLoadingTelemetryEvent                      Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.MockTelemetryDispatcher.OnCrewPlayerLeftTelemetryEvent
struct UMockTelemetryDispatcher_OnCrewPlayerLeftTelemetryEvent_Params
{
	struct FCrewPlayerLeftTelemetryEvent               Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.MockTelemetryDispatcher.OnCrewPlayerJoinedTelemetryEvent
struct UMockTelemetryDispatcher_OnCrewPlayerJoinedTelemetryEvent_Params
{
	struct FCrewPlayerJoinedTelemetryEvent             Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.MockTelemetryDispatcher.OnCrewDestroyedTelemetryEvent
struct UMockTelemetryDispatcher_OnCrewDestroyedTelemetryEvent_Params
{
	struct FCrewDestroyedTelemetryEvent                Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.MockTelemetryDispatcher.OnCrewCreatedTelemetryEvent
struct UMockTelemetryDispatcher_OnCrewCreatedTelemetryEvent_Params
{
	struct FCrewCreatedTelemetryEvent                  Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.MockTelemetryDispatcher.IsHeartbeatValid
struct UMockTelemetryDispatcher_IsHeartbeatValid_Params
{
	class AAthenaPlayerController*                     Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ArmoryChestInteraction.Server_ArmoryChestEquipWeapon
struct AArmoryChestInteraction_Server_ArmoryChestEquipWeapon_Params
{
	class UClass*                                      InItemDesc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ClothingChestInteraction.Server_ClothingChestUnequipItem
struct AClothingChestInteraction_Server_ClothingChestUnequipItem_Params
{
	class UClass*                                      InDesc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ClothingChestInteraction.Server_ClothingChestEquipItem
struct AClothingChestInteraction_Server_ClothingChestEquipItem_Params
{
	class UClass*                                      InDesc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ClothingChestInteraction.Server_ClothingChestChangeClothing
struct AClothingChestInteraction_Server_ClothingChestChangeClothing_Params
{
	TArray<class UClass*>                              InAdds;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              InRemoves;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Athena.ClothingChestInteraction.OnRep_Loadout
struct AClothingChestInteraction_OnRep_Loadout_Params
{
};

// Function Athena.EquipmentChestInteraction.Server_EquipmentChestEquipItem
struct AEquipmentChestInteraction_Server_EquipmentChestEquipItem_Params
{
	class UClass*                                      InItemDesc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ShipCustomizationChestInteraction.Server_ShipCustomizationChestUnequipItem
struct AShipCustomizationChestInteraction_Server_ShipCustomizationChestUnequipItem_Params
{
	class UClass*                                      InDesc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ShipCustomizationChestInteraction.Server_ShipCustomizationChestEquipItem
struct AShipCustomizationChestInteraction_Server_ShipCustomizationChestEquipItem_Params
{
	class UClass*                                      InDesc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.VoyageProposalContainerInteraction.Server_VoyageProposalSelected
struct AVoyageProposalContainerInteraction_Server_VoyageProposalSelected_Params
{
	class FString                                      ProposalDescName;                                         // (Parm, ZeroConstructor)
};

// Function Athena.ModalInteractionActionStateId.PushCharacterIntoModalInteractionActionState
struct UModalInteractionActionStateId_PushCharacterIntoModalInteractionActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AModalInteractionProxy*                      InInteractionProxy;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ModalInteractionCompositeInputHandler.OnDisengage
struct UModalInteractionCompositeInputHandler_OnDisengage_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.MountableComponent.OnRep_ReplicatedMountpoint
struct UMountableComponent_OnRep_ReplicatedMountpoint_Params
{
};

// Function Athena.MountpointComponent.OnRep_ReplicatedMountedItem
struct UMountpointComponent_OnRep_ReplicatedMountedItem_Params
{
	class UObject*                                     PrevReplicatedMountedItem;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.NameplateComponent.GetWorldPosition
struct UNameplateComponent_GetWorldPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.AINameplateComponent.OnRep_DisplayName
struct UAINameplateComponent_OnRep_DisplayName_Params
{
};

// Function Athena.AINameplateComponent.OnRep_DebugDisplayText
struct UAINameplateComponent_OnRep_DebugDisplayText_Params
{
};

// Function Athena.NetDormancyHelpers.SetNetDormancy
struct UNetDormancyHelpers_SetNetDormancy_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetDormancy>                          DormancyMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.NetDormancyHelpers.FlushNetDormancy
struct UNetDormancyHelpers_FlushNetDormancy_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.NetProxy.OnRep_OwningActor
struct ANetProxy_OnRep_OwningActor_Params
{
};

// Function Athena.NetProxy.OnOwningActorDestroyed
struct ANetProxy_OnOwningActorDestroyed_Params
{
};

// Function Athena.ShipNetProxy.OnRep_LanternBits
struct AShipNetProxy_OnRep_LanternBits_Params
{
};

// Function Athena.ShipNetProxy.OnOwningActorDestroyed
struct AShipNetProxy_OnOwningActorDestroyed_Params
{
};

// Function Athena.ShipNetProxy.OnLanternStateChanged
struct AShipNetProxy_OnLanternStateChanged_Params
{
	unsigned char                                      LanternStateBits;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ShipNetProxy.GetLanternBits
struct AShipNetProxy_GetLanternBits_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.NetworkTriggeredVFXComponent.Multicast_PlayVFXRPC
struct UNetworkTriggeredVFXComponent_Multicast_PlayVFXRPC_Params
{
	int                                                VFXIndex;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.NPCAnimInstance.UseHeldObject
struct UNPCAnimInstance_UseHeldObject_Params
{
	TEnumAsByte<EAthenaNPCSpawnHand>                   SpawnHand;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAthenaNPCObjectSlot>                  ObjectSlot;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.NPCAnimInstance.DetachHeldObject
struct UNPCAnimInstance_DetachHeldObject_Params
{
	TEnumAsByte<EAthenaNPCSpawnHand>                   SpawnHand;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.NPCAnimInstance.DestroyHeldObject
struct UNPCAnimInstance_DestroyHeldObject_Params
{
	TEnumAsByte<EAthenaNPCSpawnHand>                   SpawnHand;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.NPCAnimInstance.AttachHeldObject
struct UNPCAnimInstance_AttachHeldObject_Params
{
	TEnumAsByte<EAthenaNPCSpawnHand>                   SpawnHand;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Runnable.Run
struct URunnable_Run_Params
{
	class UObject*                                     Runner;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.NPCReactionBound.OnActivationRegionOverlapEnd
struct UNPCReactionBound_OnActivationRegionOverlapEnd_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.NPCReactionBound.OnActivationRegionOverlapBegin
struct UNPCReactionBound_OnActivationRegionOverlapBegin_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OverlapInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.ObjectUtilities.GetDefaultObject
struct UObjectUtilities_GetDefaultObject_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ObjectUtilities.CreateObject
struct UObjectUtilities_CreateObject_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.OffBottomTransitionLadderActionStateId.PushCharacterIntoOffBottomTransitionLadderActionState
struct UOffBottomTransitionLadderActionStateId_PushCharacterIntoOffBottomTransitionLadderActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      LadderActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InteractingHeight;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClimbId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELadderTransitionMode>                 LadderTransitionMode;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLadderDefinition                           LadderDefinition;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.OffTopTransitionLadderActionStateId.PushCharacterIntoOffTopTransitionLadderActionState
struct UOffTopTransitionLadderActionStateId_PushCharacterIntoOffTopTransitionLadderActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      LadderActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InteractingHeight;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClimbId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELadderTransitionMode>                 LadderTransitionMode;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLadderDefinition                           LadderDefinition;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.OnBottomTransitionLadderActionStateId.PushCharacterIntoOnBottomTransitionLadderActionState
struct UOnBottomTransitionLadderActionStateId_PushCharacterIntoOnBottomTransitionLadderActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      LadderActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InteractingHeight;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClimbId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELadderTransitionMode>                 LadderTransitionMode;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLadderDefinition                           LadderDefinition;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.OnTopTransitionLadderActionStateId.PushCharacterIntoOnTopTransitionLadderActionState
struct UOnTopTransitionLadderActionStateId_PushCharacterIntoOnTopTransitionLadderActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      LadderActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InteractingHeight;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClimbId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELadderTransitionMode>                 LadderTransitionMode;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLadderDefinition                           LadderDefinition;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.PacingComponent.StopPacing
struct UPacingComponent_StopPacing_Params
{
};

// Function Athena.PacingComponent.StartPacing
struct UPacingComponent_StartPacing_Params
{
};

// Function Athena.PacingComponent.IsPacing
struct UPacingComponent_IsPacing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PartConnectionMock.Tick
struct UPartConnectionMock_Tick_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.PartConnectionMock.AddMultipleConnection
struct UPartConnectionMock_AddMultipleConnection_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMockShipConnectionPartType>           ConnectionType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorFromList;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      ActorTo;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.PartConnectionMock.AddConnection
struct UPartConnectionMock_AddConnection_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMockShipConnectionPartType>           ConnectionType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorFrom;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorTo;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.PhysicsCollisionFunctions.IsWorldSpacePositionInsideVolume
struct UPhysicsCollisionFunctions_IsWorldSpacePositionInsideVolume_Params
{
	class UStaticMeshComponent*                        Volume;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PickupObjectActionStateId.PushCharacterIntoPickupObjectActionState
struct UPickupObjectActionStateId_PushCharacterIntoPickupObjectActionState_Params
{
	class AActor*                                      InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InPickupableObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.PirateGeneratorServiceInterface.BakeFromDescriptionAsync
struct UPirateGeneratorServiceInterface_BakeFromDescriptionAsync_Params
{
	struct FPirateDescription                          Desc;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EPirateBakeFlags>                      Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FScriptDelegate                             AsyncResult;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Athena.PirateIdentityBlueprintFunctionLibrary.GetServicesScopeId
struct UPirateIdentityBlueprintFunctionLibrary_GetServicesScopeId_Params
{
	struct FPirateIdentity                             InPirateIdentity;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.PirateIdentityBlueprintFunctionLibrary.GetPirateIdentity
struct UPirateIdentityBlueprintFunctionLibrary_GetPirateIdentity_Params
{
	class AActor*                                      InPawn;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FPirateIdentity                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.PiratePreviewInterface.PreCreatePreview
struct UPiratePreviewInterface_PreCreatePreview_Params
{
};

// Function Athena.PirateSelector.WaitForTavernTimerTick
struct UPirateSelector_WaitForTavernTimerTick_Params
{
};

// Function Athena.PirateSelector.RequestOpenAccountPicker
struct UPirateSelector_RequestOpenAccountPicker_Params
{
};

// Function Athena.PirateSelector.QuitGame
struct UPirateSelector_QuitGame_Params
{
};

// Function Athena.PirateSelector.OnPirateGenerateRequested
struct UPirateSelector_OnPirateGenerateRequested_Params
{
};

// Function Athena.PirateSelector.IsSelectedPirateSet
struct UPirateSelector_IsSelectedPirateSet_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PirateSelector.IsInPirateSelectionState
struct UPirateSelector_IsInPirateSelectionState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PirateSelector.GetSelectedPirateOutfit
struct UPirateSelector_GetSelectedPirateOutfit_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.PirateSelector.GetSelectedPirateDescription
struct UPirateSelector_GetSelectedPirateDescription_Params
{
	struct FPirateDescription                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.PirateSelector.EndCelebration
struct UPirateSelector_EndCelebration_Params
{
};

// Function Athena.PirateSelector.ConfirmAndSavePirate
struct UPirateSelector_ConfirmAndSavePirate_Params
{
	struct FPirateDescription                          Description;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class UClass*>                              Outfit;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Athena.PlayerAtmosphericsAudioComponent.GetPoolDensityFactor
struct UPlayerAtmosphericsAudioComponent_GetPoolDensityFactor_Params
{
	class UWwiseObjectPoolWrapper*                     PoolDensityWrapper;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PlayerAtmosphericsAudioComponent.GetPoolDensityAveragePosition
struct UPlayerAtmosphericsAudioComponent_GetPoolDensityAveragePosition_Params
{
	class UWwiseObjectPoolWrapper*                     PoolDensityWrapper;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PlayerAtmosphericsAudioComponent.GetIsWindAudioPlaying
struct UPlayerAtmosphericsAudioComponent_GetIsWindAudioPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PlayerCrewComponent.Server_VoteOnSendPlayerToBrig
struct UPlayerCrewComponent_Server_VoteOnSendPlayerToBrig_Params
{
	class AAthenaPlayerState*                          PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SendIn;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.PlayerCrewComponent.Server_VoteOnScuttleShip
struct UPlayerCrewComponent_Server_VoteOnScuttleShip_Params
{
	bool                                               Scuttle;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.PlayerCrewComponent.Server_VoteOnReleasePlayerFromBrig
struct UPlayerCrewComponent_Server_VoteOnReleasePlayerFromBrig_Params
{
	class AAthenaPlayerState*                          PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Release;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.PlayerCrewComponent.Server_VoteOnChangeMatchmakingVisibility
struct UPlayerCrewComponent_Server_VoteOnChangeMatchmakingVisibility_Params
{
	bool                                               Change;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.PlayerCrewComponent.OnRep_CrewShip
struct UPlayerCrewComponent_OnRep_CrewShip_Params
{
};

// Function Athena.PlayerCrewComponent.OnRep_CrewMembers
struct UPlayerCrewComponent_OnRep_CrewMembers_Params
{
};

// Function Athena.PlayerCrewComponent.OnRep_CrewMatchmakingVisibility
struct UPlayerCrewComponent_OnRep_CrewMatchmakingVisibility_Params
{
};

// Function Athena.PlayerCurseComponent.OnRep_ActiveCurseForFX
struct UPlayerCurseComponent_OnRep_ActiveCurseForFX_Params
{
	TEnumAsByte<EPlayerCurseTag>                       PreviousValue;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.PlayerCurseComponent.OnMovementModeChanged
struct UPlayerCurseComponent_OnMovementModeChanged_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.PlayerEntitlementBlueprintFunctionLibrary.GetEntitlements
struct UPlayerEntitlementBlueprintFunctionLibrary_GetEntitlements_Params
{
	TScriptInterface<class UPlayerEntitlementViewInterface> InPlayerEntitlementViewInterface;                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UClass*                                      InEntitlementType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.PlayerEntitlementComponent.ServerRequestEntitlements
struct UPlayerEntitlementComponent_ServerRequestEntitlements_Params
{
	TEnumAsByte<ERequestEntitlementBehaviour>          InBehaviour;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.PlayerEntitlementComponent.OnRep_Entitlements
struct UPlayerEntitlementComponent_OnRep_Entitlements_Params
{
};

// Function Athena.PlayerFunctionLibrary.DebugRemoveLocalPlayer
struct UPlayerFunctionLibrary_DebugRemoveLocalPlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControllerId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.PlayerHeroStatsComponent.Client_UpdateValue
struct UPlayerHeroStatsComponent_Client_UpdateValue_Params
{
	uint32_t                                           PlayerStatId;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           AbsoluteValue;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.PlayerNonVerbalComponent.Server_SendText
struct UPlayerNonVerbalComponent_Server_SendText_Params
{
	struct FText                                       Message;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function Athena.PlayerNonVerbalComponent.Server_SendPhrase
struct UPlayerNonVerbalComponent_Server_SendPhrase_Params
{
	class FString                                      PhraseKey;                                                // (Parm, ZeroConstructor)
};

// Function Athena.PlayerNonVerbalComponent.Client_ReceiveText
struct UPlayerNonVerbalComponent_Client_ReceiveText_Params
{
	class AAthenaPlayerState*                          SenderPlayerState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function Athena.PlayerNonVerbalComponent.Client_ReceivePhrase
struct UPlayerNonVerbalComponent_Client_ReceivePhrase_Params
{
	class AAthenaPlayerState*                          SenderPlayerState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      PhraseKey;                                                // (Parm, ZeroConstructor)
};

// Function Athena.PlayerOceanAudioComponent.GetIsUnderwater
struct UPlayerOceanAudioComponent_GetIsUnderwater_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PlayerOceanAudioComponent.GetIsPlaying
struct UPlayerOceanAudioComponent_GetIsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PlayerOceanAudioComponent.GetIsOnIsland
struct UPlayerOceanAudioComponent_GetIsOnIsland_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PlayerOceanAudioComponent.GetEmitterPosition
struct UPlayerOceanAudioComponent_GetEmitterPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.TestPlayerPermissionsComponent.SetAllowExecuteOnServer
struct UTestPlayerPermissionsComponent_SetAllowExecuteOnServer_Params
{
	bool                                               AllowAccess;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TestPlayerPermissionsComponent.SetAllowDebugMenuButtonShortcutsAccess
struct UTestPlayerPermissionsComponent_SetAllowDebugMenuButtonShortcutsAccess_Params
{
	bool                                               AllowAccess;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TestPlayerPermissionsComponent.SetAllowDebugMenuAccess
struct UTestPlayerPermissionsComponent_SetAllowDebugMenuAccess_Params
{
	bool                                               AllowAccess;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TestPlayerPermissionsComponent.GrantDebugMenuPermissions
struct UTestPlayerPermissionsComponent_GrantDebugMenuPermissions_Params
{
	bool                                               AllowAccess;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.PlayerWalletComponent.ServerRequestBalance
struct UPlayerWalletComponent_ServerRequestBalance_Params
{
};

// Function Athena.PlayerWalletComponent.OnRep_BalanceUpdated
struct UPlayerWalletComponent_OnRep_BalanceUpdated_Params
{
};

// Function Athena.PosablePirate.OnEndGeneratingPirate
struct APosablePirate_OnEndGeneratingPirate_Params
{
};

// Function Athena.PosablePirate.OnBeginGeneratingPirate
struct APosablePirate_OnBeginGeneratingPirate_Params
{
};

// Function Athena.PosablePirate.IsPirateLoaded
struct APosablePirate_IsPirateLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PosablePirate.GetCurrentOutfit
struct APosablePirate_GetCurrentOutfit_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.PosablePirate.GetCurrentDescription
struct APosablePirate_GetCurrentDescription_Params
{
	struct FPirateDescription                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.PosablePirate.BeginGeneratingPirate
struct APosablePirate_BeginGeneratingPirate_Params
{
	struct FPirateDescription                          Desc;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class UClass*>                              Outfit;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Athena.PrimitiveComponentTestFunctionLibrary.CheckWeldParentMatches
struct UPrimitiveComponentTestFunctionLibrary_CheckWeldParentMatches_Params
{
	class UPrimitiveComponent*                         TestComponent;                                            // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         ExpectedParentComponent;                                  // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Athena.ProjectileWeapon.ScopeTick
struct AProjectileWeapon_ScopeTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ProjectileWeapon.ScopeOn
struct AProjectileWeapon_ScopeOn_Params
{
};

// Function Athena.ProjectileWeapon.ScopeOffImmediate
struct AProjectileWeapon_ScopeOffImmediate_Params
{
};

// Function Athena.ProjectileWeapon.ScopeOff
struct AProjectileWeapon_ScopeOff_Params
{
};

// Function Athena.ProjectileWeapon.RadialBlurOn
struct AProjectileWeapon_RadialBlurOn_Params
{
};

// Function Athena.ProjectileWeapon.RadialBlurOff
struct AProjectileWeapon_RadialBlurOff_Params
{
};

// Function Athena.ProjectileWeapon.OnWeaponFired
struct AProjectileWeapon_OnWeaponFired_Params
{
};

// Function Athena.ProjectileWeapon.OnRep_State
struct AProjectileWeapon_OnRep_State_Params
{
};

// Function Athena.ProjectileWeapon.OnRep_AmmoLeft
struct AProjectileWeapon_OnRep_AmmoLeft_Params
{
	int                                                PreviousAmmo;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ProjectileWeapon.Multicast_ReceiveFire
struct AProjectileWeapon_Multicast_ReceiveFire_Params
{
	struct FFireBroadcast                              Broadcast;                                                // (Parm)
};

// Function Athena.ProjectileWeapon.Multicast_ReceiveDryFire
struct AProjectileWeapon_Multicast_ReceiveDryFire_Params
{
};

// Function Athena.ProjectileWeapon.GlintOn
struct AProjectileWeapon_GlintOn_Params
{
};

// Function Athena.ProjectileWeapon.GlintOff
struct AProjectileWeapon_GlintOff_Params
{
};

// Function Athena.ProjectileWeapon.GetNumShotsLeftInClip
struct AProjectileWeapon_GetNumShotsLeftInClip_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ProjectileWeapon.GetLastAttackId
struct AProjectileWeapon_GetLastAttackId_Params
{
	struct FGuid                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ProjectileWeapon.Client_RequestDenied
struct AProjectileWeapon_Client_RequestDenied_Params
{
};

// Function Athena.ProjectileWeapon.Client_CorrectPredictedMiss
struct AProjectileWeapon_Client_CorrectPredictedMiss_Params
{
	TArray<struct FHitResult>                          CorrectedServerHits;                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Athena.ProjectileWeapon.CanFire
struct AProjectileWeapon_CanFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ProjectileWeapon.AddBulletsToClip
struct AProjectileWeapon_AddBulletsToClip_Params
{
	int                                                NumBullets;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DoClipSizeCheck;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ProjectileWeaponValidationFunctionLibrary.ClampAimPositionToWeapon
struct UProjectileWeaponValidationFunctionLibrary_ClampAimPositionToWeapon_Params
{
	class AProjectileWeapon*                           ProjectileWeapon;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FProjectileAim                              InAim;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	double                                             RewindTime;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FProjectileAim                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.EmotesRadialCompositeInputHandler.OnEmotesRadialTriggerNextSetOfPhrases
struct UEmotesRadialCompositeInputHandler_OnEmotesRadialTriggerNextSetOfPhrases_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.EmotesRadialCompositeInputHandler.OnEmotesRadialDeactivatedKeyboard
struct UEmotesRadialCompositeInputHandler_OnEmotesRadialDeactivatedKeyboard_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.EmotesRadialCompositeInputHandler.OnEmotesRadialDeactivatedGamepad
struct UEmotesRadialCompositeInputHandler_OnEmotesRadialDeactivatedGamepad_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.EmotesRadialCompositeInputHandler.OnEmotesRadialActivatedKeyboard
struct UEmotesRadialCompositeInputHandler_OnEmotesRadialActivatedKeyboard_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.EmotesRadialCompositeInputHandler.OnEmotesRadialActivatedGamepad
struct UEmotesRadialCompositeInputHandler_OnEmotesRadialActivatedGamepad_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PhrasesRadialCompositeInputHandler.OnPhrasesRadialTriggerNextSetOfPhrases
struct UPhrasesRadialCompositeInputHandler_OnPhrasesRadialTriggerNextSetOfPhrases_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PhrasesRadialCompositeInputHandler.OnPhrasesRadialInventoryDeactivatedKeyboard
struct UPhrasesRadialCompositeInputHandler_OnPhrasesRadialInventoryDeactivatedKeyboard_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PhrasesRadialCompositeInputHandler.OnPhrasesRadialInventoryDeactivatedGamepad
struct UPhrasesRadialCompositeInputHandler_OnPhrasesRadialInventoryDeactivatedGamepad_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PhrasesRadialCompositeInputHandler.OnPhrasesRadialInventoryActivatedKeyboard
struct UPhrasesRadialCompositeInputHandler_OnPhrasesRadialInventoryActivatedKeyboard_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PhrasesRadialCompositeInputHandler.OnPhrasesRadialInventoryActivatedGamepad
struct UPhrasesRadialCompositeInputHandler_OnPhrasesRadialInventoryActivatedGamepad_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.PhrasesRadialCompositeInputHandler.OnBlock
struct UPhrasesRadialCompositeInputHandler_OnBlock_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryCompositeInputHandler.OnMapRadialInventoryDeactivatedKeyboard
struct URadialInventoryCompositeInputHandler_OnMapRadialInventoryDeactivatedKeyboard_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryCompositeInputHandler.OnMapRadialInventoryDeactivatedGamepad
struct URadialInventoryCompositeInputHandler_OnMapRadialInventoryDeactivatedGamepad_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryCompositeInputHandler.OnMapRadialInventoryActivatedKeyboard
struct URadialInventoryCompositeInputHandler_OnMapRadialInventoryActivatedKeyboard_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryCompositeInputHandler.OnMapRadialInventoryActivatedGamepad
struct URadialInventoryCompositeInputHandler_OnMapRadialInventoryActivatedGamepad_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryCompositeInputHandler.OnItemRadialTriggerNextSetOfItems
struct URadialInventoryCompositeInputHandler_OnItemRadialTriggerNextSetOfItems_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryCompositeInputHandler.OnItemRadialInventoryDeactivatedKeyboard
struct URadialInventoryCompositeInputHandler_OnItemRadialInventoryDeactivatedKeyboard_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryCompositeInputHandler.OnItemRadialInventoryDeactivatedGamepad
struct URadialInventoryCompositeInputHandler_OnItemRadialInventoryDeactivatedGamepad_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryCompositeInputHandler.OnItemRadialInventoryActivatedKeyboard
struct URadialInventoryCompositeInputHandler_OnItemRadialInventoryActivatedKeyboard_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RadialInventoryCompositeInputHandler.OnItemRadialInventoryActivatedGamepad
struct URadialInventoryCompositeInputHandler_OnItemRadialInventoryActivatedGamepad_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CustomCategoryRadialInventoryComponent.GetMaxNumOfPages
struct UCustomCategoryRadialInventoryComponent_GetMaxNumOfPages_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.CustomCategoryRadialInventoryComponent.DeactivateRadialInventory
struct UCustomCategoryRadialInventoryComponent_DeactivateRadialInventory_Params
{
};

// Function Athena.RendererSettingsFunctionLibrary.UpdateRendererSettings
struct URendererSettingsFunctionLibrary_UpdateRendererSettings_Params
{
};

// Function Athena.RepairingInterface.GetRepairType
struct URepairingInterface_GetRepairType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RepairObjectActionStateId.PushCharacterIntoRepairObjectActionState
struct URepairObjectActionStateId_PushCharacterIntoRepairObjectActionState_Params
{
	struct FNetSubObjectPtr                            Repairable;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.RepairObjectActionStateId.PopCharacterOutOfRepairObjectActionState
struct URepairObjectActionStateId_PopCharacterOutOfRepairObjectActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ReplenishableComponent.TestReplenish
struct UReplenishableComponent_TestReplenish_Params
{
};

// Function Athena.ReplenishableComponent.SetShouldRefresh
struct UReplenishableComponent_SetShouldRefresh_Params
{
	bool                                               InShouldRefresh;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ReplenishableComponent.Replenish
struct UReplenishableComponent_Replenish_Params
{
};

// Function Athena.ReplenishableComponent.RefreshFromSpawner
struct UReplenishableComponent_RefreshFromSpawner_Params
{
};

// Function Athena.ReplenishableComponent.IsAtMaxCapacity
struct UReplenishableComponent_IsAtMaxCapacity_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ReplenishableComponent.GetShouldRefresh
struct UReplenishableComponent_GetShouldRefresh_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ReplenishableComponent.FillWithDefaultDesc
struct UReplenishableComponent_FillWithDefaultDesc_Params
{
	TArray<struct FStorageContainerNode>               Nodes;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Athena.ReplenishableComponent.Deplete
struct UReplenishableComponent_Deplete_Params
{
};

// Function Athena.ReplenishableComponent.CanBeReplenished
struct UReplenishableComponent_CanBeReplenished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ReplenishableComponent.AddDefaultStockLevel
struct UReplenishableComponent_AddDefaultStockLevel_Params
{
};

// Function Athena.RewardComponent.Client_OnRewardRequestSucceededEvent
struct URewardComponent_Client_OnRewardRequestSucceededEvent_Params
{
	struct FRewardRequestSucceededEvent                RewardRequestSucceededEvent;                              // (ConstParm, Parm, ReferenceParm)
};

// Function Athena.RewardComponent.Client_OnRewardRequestFailedEvent
struct URewardComponent_Client_OnRewardRequestFailedEvent_Params
{
	struct FRewardRequestFailedEvent                   RewardRequestFailedEvent;                                 // (ConstParm, Parm, ReferenceParm)
};

// Function Athena.Rudder.SetRudderAngleRatio
struct ARudder_SetRudderAngleRatio_Params
{
	float                                              InRudderAngleRatio;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Rudder.GetServerAngleRatio
struct ARudder_GetServerAngleRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.RumbleHandlerComponent.EventFired
struct URumbleHandlerComponent_EventFired_Params
{
	struct FName                                       InTag;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.Sail.SetTurbulence
struct ASail_SetTurbulence_Params
{
	float                                              InTurbulence;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Sail.SetSailLoweredProportion
struct ASail_SetSailLoweredProportion_Params
{
	float                                              Proportion;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Sail.SetSailAngleRatio
struct ASail_SetSailAngleRatio_Params
{
	float                                              AngleRatio;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Sail.SetForceScalarFromBPParams
struct ASail_SetForceScalarFromBPParams_Params
{
	float                                              Scalar;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Sail.SetDamageScalar
struct ASail_SetDamageScalar_Params
{
	float                                              Scalar;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Sail.SetBillowAmount
struct ASail_SetBillowAmount_Params
{
	float                                              InBillowingAmount;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Sail.GetVisualBillowAmount
struct ASail_GetVisualBillowAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Sail.GetSailLoweredProportion
struct ASail_GetSailLoweredProportion_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Sail.GetSailAngleRatio
struct ASail_GetSailAngleRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Sail.GetSailAngle
struct ASail_GetSailAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Sail.GetMaxRotation
struct ASail_GetMaxRotation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Sail.GetBillowAmount
struct ASail_GetBillowAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Sail.CalculateFurlValue
struct ASail_CalculateFurlValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SailAnimInterface.UpdateParameters
struct USailAnimInterface_UpdateParameters_Params
{
	float                                              Turning;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Billow;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WindStrength;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SailHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Falling;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FallingAnimation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SailAnimInterface.InitialiseSail
struct USailAnimInterface_InitialiseSail_Params
{
	float                                              PlayRateMultiplier;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MainSail;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SailAnimInterface.InitialiseMast
struct USailAnimInterface_InitialiseMast_Params
{
	float                                              MastFallingLimit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SailHoistTestFunctions.SetupSailHoistServerSide
struct USailHoistTestFunctions_SetupSailHoistServerSide_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SailHoistClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ASailHoist*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SailHoistTestFunctions.SetupSailHoistClientSideWithProvidedHoist
struct USailHoistTestFunctions_SetupSailHoistClientSideWithProvidedHoist_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ASailHoist*                                  Hoist;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SailHoistTestFunctions.SetupSailHoistClientSide
struct USailHoistTestFunctions_SetupSailHoistClientSide_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ASailHoist*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SailManipulatorBlueprintFunctions.SetupHoistControl
struct USailManipulatorBlueprintFunctions_SetupHoistControl_Params
{
	class ASailHoist*                                  Hoist;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MastLookatPath;                                           // (Parm, ZeroConstructor)
	struct FName                                       MastLookatScoket;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class URiggingSystemComponent*                     Rigging;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       RiggingLineGroup;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RiggingRopeIndex;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SailManipulatorBlueprintFunctions.SetupAngleControl
struct USailManipulatorBlueprintFunctions_SetupAngleControl_Params
{
	class ASailAngle*                                  Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MastLookatPath;                                           // (Parm, ZeroConstructor)
	struct FName                                       MastLookatScoket;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class URiggingSystemComponent*                     Rigging;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       RiggingLineGroup;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RiggingLeftRopeIndex;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RiggingRightRopeIndex;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Seagulls.Multicast_DismissSeagulls
struct ASeagulls_Multicast_DismissSeagulls_Params
{
};

// Function Athena.Seagulls.FadeOut
struct ASeagulls_FadeOut_Params
{
};

// Function Athena.Seagulls.FadeIn
struct ASeagulls_FadeIn_Params
{
};

// Function Athena.ServiceProviderInterfaceTestFunctions.TestRegisterAndGetService
struct UServiceProviderInterfaceTestFunctions_TestRegisterAndGetService_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ServiceProviderInterfaceTestFunctions.TestGetServiceUnregistered
struct UServiceProviderInterfaceTestFunctions_TestGetServiceUnregistered_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ServiceStatusNotificationsService.OnRep_ActiveNotifications
struct AServiceStatusNotificationsService_OnRep_ActiveNotifications_Params
{
	TArray<struct FServiceStatusNotification>          LastActiveNotifications;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Athena.ShipDescConversionFunctions.ShipDescToJson
struct UShipDescConversionFunctions_ShipDescToJson_Params
{
	struct FShipDesc                                   ShipDesc;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      JsonString;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipDescConversionFunctions.ShipDescFromJson
struct UShipDescConversionFunctions_ShipDescFromJson_Params
{
	class FString                                      JsonString;                                               // (Parm, ZeroConstructor)
	struct FShipDesc                                   ShipDesc;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipDescGeneratorTestFunctionLibrary.GenerateShipDescForTestLargeShip
struct UShipDescGeneratorTestFunctionLibrary_GenerateShipDescForTestLargeShip_Params
{
	struct FShipDesc                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.ShipFactory.SpawnSyncWithDatabase
struct UShipFactory_SpawnSyncWithDatabase_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FShipDesc                                   Desc;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TScriptInterface<class UShipAssetClassDatabaseInterface> ShipAssetClassDatabaseInterface;                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipFactory.SpawnSync
struct UShipFactory_SpawnSync_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FShipDesc                                   Desc;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipFactory.MakeShipFactory
struct UShipFactory_MakeShipFactory_Params
{
	class UShipFactory*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipFactorySpawnCallbackCounter.OnSuccess
struct UShipFactorySpawnCallbackCounter_OnSuccess_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ShipFactorySpawnCallbackCounter.OnFailure
struct UShipFactorySpawnCallbackCounter_OnFailure_Params
{
};

// Function Athena.ShipFunctionLibrary.SpawnShip
struct UShipFunctionLibrary_SpawnShip_Params
{
	struct FVector                                     Pos;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipFunctionLibrary.SpawnFunctioningSmallShipWithCrewId
struct UShipFunctionLibrary_SpawnFunctioningSmallShipWithCrewId_Params
{
	struct FVector                                     Pos;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.ShipFunctionLibrary.SpawnFunctioningSmallShip
struct UShipFunctionLibrary_SpawnFunctioningSmallShip_Params
{
	struct FVector                                     Pos;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ShipFunctionLibrary.SpawnFunctioningLargeShip
struct UShipFunctionLibrary_SpawnFunctioningLargeShip_Params
{
	struct FVector                                     Pos;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ShipFunctionLibrary.GetWheels
struct UShipFunctionLibrary_GetWheels_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AWheel*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.ShipFunctionLibrary.GetSailHoists
struct UShipFunctionLibrary_GetSailHoists_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ASailHoist*>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.ShipFunctionLibrary.GetSailAnglers
struct UShipFunctionLibrary_GetSailAnglers_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ASailAngle*>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.ShipFunctionLibrary.GetLadders
struct UShipFunctionLibrary_GetLadders_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ALadder*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.ShipFunctionLibrary.GetInteractablesOfClass
struct UShipFunctionLibrary_GetInteractablesOfClass_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.ShipFunctionLibrary.GetInteractables
struct UShipFunctionLibrary_GetInteractables_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.ShipFunctionLibrary.GetCannons
struct UShipFunctionLibrary_GetCannons_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ACannon*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.ShipHullCollisionComponent.StopShipImpactSfx_RPC
struct UShipHullCollisionComponent_StopShipImpactSfx_RPC_Params
{
};

// Function Athena.ShipHullCollisionComponent.PlayShipImpactSfx_RPC
struct UShipHullCollisionComponent_PlayShipImpactSfx_RPC_Params
{
};

// Function Athena.ShipHullCollisionComponent.IsWorldSpacePositionInsideHull
struct UShipHullCollisionComponent_IsWorldSpacePositionInsideHull_Params
{
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipHullCollisionComponent.IsWorldSpacePositionInsideCabin
struct UShipHullCollisionComponent_IsWorldSpacePositionInsideCabin_Params
{
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipHullCollisionComponent.GetIsShipInContactWithSolidHits
struct UShipHullCollisionComponent_GetIsShipInContactWithSolidHits_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipHullCollisionComponent.GetIsShipInContactWithLand
struct UShipHullCollisionComponent_GetIsShipInContactWithLand_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipLightComponent.OnRep_OnLightStateChanged
struct UShipLightComponent_OnRep_OnLightStateChanged_Params
{
};

// Function Athena.ShipLightComponent.LightStateChanged
struct UShipLightComponent_LightStateChanged_Params
{
};

// Function Athena.ShipPartCustomization.MakeSyncShipPartCustomization
struct UShipPartCustomization_MakeSyncShipPartCustomization_Params
{
	class UShipPartCustomization*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipPartCustomization.MakeAsyncShipPartCustomization
struct UShipPartCustomization_MakeAsyncShipPartCustomization_Params
{
	class UShipPartCustomization*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipPartCustomization.Customize
struct UShipPartCustomization_Customize_Params
{
	class AShip*                                       InShip;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPartDesc                                   PartDesc;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             OnSuccessCallback;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             OnFailureCallback;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Athena.ShipPartCustomizationTestCallbacks.OnSuccess
struct UShipPartCustomizationTestCallbacks_OnSuccess_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ShipPartCustomizationTestCallbacks.OnFailure
struct UShipPartCustomizationTestCallbacks_OnFailure_Params
{
	TEnumAsByte<EShipPartCustomizationErrorCode>       InErrorCode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ShipPartCustomizationTestLibrary.ApplyCustomization
struct UShipPartCustomizationTestLibrary_ApplyCustomization_Params
{
	class UShipPartCustomizationComponent*             CustomizationComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FPartDesc                                   InPartDesc;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipService.IsWorldPosInsideHull
struct AShipService_IsWorldPosInsideHull_Params
{
	struct FVector                                     Pos;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AShip*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipService.IsWorldPosInsideCabin
struct AShipService_IsWorldPosInsideCabin_Params
{
	struct FVector                                     Pos;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AShip*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipStuckDetectionComponent.GetDoesShipAppearCurrentlyStuck
struct UShipStuckDetectionComponent_GetDoesShipAppearCurrentlyStuck_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipTelemetryComponent.SetShipHeartbeatInterval
struct UShipTelemetryComponent_SetShipHeartbeatInterval_Params
{
	float                                              Interval;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.ShipTelemetryComponent.GetShipIdForWebServices
struct UShipTelemetryComponent_GetShipIdForWebServices_Params
{
	struct FGuid                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.ShipTrackerComponent.IsPlayerAbandoned
struct UShipTrackerComponent_IsPlayerAbandoned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Shipwreck.OnResetTo
struct AShipwreck_OnResetTo_Params
{
};

// Function Athena.Shipwreck.OnOverlapEnd
struct AShipwreck_OnOverlapEnd_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Shipwreck.OnOverlapBegin
struct AShipwreck_OnOverlapBegin_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OverlapInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.ShipwreckSiteGeneratorSimulator.SetIslands
struct AShipwreckSiteGeneratorSimulator_SetIslands_Params
{
};

// Function Athena.ShipwreckSiteGeneratorSimulator.ResetShipwrecks
struct AShipwreckSiteGeneratorSimulator_ResetShipwrecks_Params
{
};

// Function Athena.ShipwreckSiteGeneratorSimulator.ResetDebugDrawing
struct AShipwreckSiteGeneratorSimulator_ResetDebugDrawing_Params
{
};

// Function Athena.ShipwreckSiteGeneratorSimulator.GetIslands
struct AShipwreckSiteGeneratorSimulator_GetIslands_Params
{
	TArray<struct FIsland>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.ShipwreckSiteGeneratorSimulator.GenerateWreck
struct AShipwreckSiteGeneratorSimulator_GenerateWreck_Params
{
};

// Function Athena.SinkingComponent.SinkShip
struct USinkingComponent_SinkShip_Params
{
};

// Function Athena.SinkingComponent.SetSinkingParams
struct USinkingComponent_SetSinkingParams_Params
{
	struct FSinkingShipParams                          Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.SinkingComponent.SetDebugKeelOverConfigIndexOverride
struct USinkingComponent_SetDebugKeelOverConfigIndexOverride_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SinkingComponent.OnRep_ShipState
struct USinkingComponent_OnRep_ShipState_Params
{
	unsigned char                                      PreviousState;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SinkingComponent.IsSinking
struct USinkingComponent_IsSinking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SinkingComponent.IsKeeledOver
struct USinkingComponent_IsKeeledOver_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SinkingComponent.IsDeepEnoughInWaterToSink
struct USinkingComponent_IsDeepEnoughInWaterToSink_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SinkingComponent.GetSinkingParams
struct USinkingComponent_GetSinkingParams_Params
{
	struct FSinkingShipParams                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.SinkingComponent.GetShipState
struct USinkingComponent_GetShipState_Params
{
	TEnumAsByte<EShipState>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SinkingComponent.ForceSinkShip
struct USinkingComponent_ForceSinkShip_Params
{
};

// Function Athena.SinkingComponent.BeginningToSinkRPC
struct USinkingComponent_BeginningToSinkRPC_Params
{
};

// Function Athena.SittingActionStateId.PushCharacterIntoSittingActionState
struct USittingActionStateId_PushCharacterIntoSittingActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ControlledObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSittingActionStateParams                   SittingActionStateParams;                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.SkeletonThrone.Multicast_PlaySatOnStatFiredReactions
struct ASkeletonThrone_Multicast_PlaySatOnStatFiredReactions_Params
{
};

// Function Athena.SkellyFort.Multicast_OnWaveGroupSpawned
struct ASkellyFort_Multicast_OnWaveGroupSpawned_Params
{
	struct FBountySpawnerNewWaveGroupSpawnedEvent      Ev;                                                       // (ConstParm, Parm, ReferenceParm)
	class UWwiseEvent*                                 AudioEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SkellyFort.Multicast_OnFortComplete
struct ASkellyFort_Multicast_OnFortComplete_Params
{
	struct FVector                                     DeathLocation;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWwiseEvent*                                 AudioEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.StaggerComponent.SetStaggerStrength
struct UStaggerComponent_SetStaggerStrength_Params
{
	float                                              UnaryStrength;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStaggerReason>                        Reason;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.StatusEffectComponentProviderInterface.GetStatusEffectComponent
struct UStatusEffectComponentProviderInterface_GetStatusEffectComponent_Params
{
	class UStatusEffectComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.StatusEffectComponent.OnRep_StatusEffect
struct UStatusEffectComponent_OnRep_StatusEffect_Params
{
};

// Function Athena.StorageContainerInterface.TakeItem
struct UStorageContainerInterface_TakeItem_Params
{
	class AActor*                                      Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NodeIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.StorageContainerInterface.GetContainerDisplayName
struct UStorageContainerInterface_GetContainerDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Athena.StorageContainerInterface.AddItem
struct UStorageContainerInterface_AddItem_Params
{
	class AActor*                                      Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InItemDesc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.StorageContainerComponent.TakeItem
struct UStorageContainerComponent_TakeItem_Params
{
	class AActor*                                      Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NodeIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.StorageContainerComponent.OnRep_ContentsChanged
struct UStorageContainerComponent_OnRep_ContentsChanged_Params
{
	struct FStorageContainerBackingStore               InOldItemCount;                                           // (Parm)
};

// Function Athena.StorageContainerComponent.Multicast_DetachAllPlayersRPC
struct UStorageContainerComponent_Multicast_DetachAllPlayersRPC_Params
{
};

// Function Athena.StorageContainerComponent.GetContainerDisplayName
struct UStorageContainerComponent_GetContainerDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Athena.StorageContainerComponent.AddItem
struct UStorageContainerComponent_AddItem_Params
{
	class AActor*                                      Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InItemDesc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Storm.Multicast_QueueLightning
struct AStorm_Multicast_QueueLightning_Params
{
	struct FLightningImpact                            LightningImpact;                                          // (ConstParm, Parm, ReferenceParm)
};

// Function Athena.StunnedActionStateId.PushCharacterIntoStunnedActionState
struct UStunnedActionStateId_PushCharacterIntoStunnedActionState_Params
{
	class AAthenaCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStunnedActionStateParams                   Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.SunkenCurseArtefact.Multicast_WasDefeated
struct ASunkenCurseArtefact_Multicast_WasDefeated_Params
{
	class AActor*                                      InInstigator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SwallowedByKrakenActionStateId.PushCharacterIntoSwallowedByKrakenActionState
struct USwallowedByKrakenActionStateId_PushCharacterIntoSwallowedByKrakenActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AKrakenAnimatedTentacle*                     Tentacle;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SwallowedByKrakenActionStateId.PopCharacterOutOfSwallowedByKrakenActionState
struct USwallowedByKrakenActionStateId_PopCharacterOutOfSwallowedByKrakenActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SwimmingCreatureAnimationInstance.RunningOnServer
struct USwimmingCreatureAnimationInstance_RunningOnServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SwimmingCreatureMovementComponent.SetSwimmingMode
struct USwimmingCreatureMovementComponent_SetSwimmingMode_Params
{
	TEnumAsByte<ESwimmingMode>                         InSwimmingMode;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SwimmingCreatureMovementComponent.OnRep_ReplicatedSwimmingMode
struct USwimmingCreatureMovementComponent_OnRep_ReplicatedSwimmingMode_Params
{
};

// Function Athena.SwimmingCreatureMovementComponent.OnHasSolidHit
struct USwimmingCreatureMovementComponent_OnHasSolidHit_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.SwimmingCreatureMovementComponent.GetSwimmingMode
struct USwimmingCreatureMovementComponent_GetSwimmingMode_Params
{
	TEnumAsByte<ESwimmingMode>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SwimmingCreatureMovementComponent.GetMovementPropertiesForAIStrategy
struct USwimmingCreatureMovementComponent_GetMovementPropertiesForAIStrategy_Params
{
	class UClass*                                      AIStrategy;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSwimmingCreatureAIStrategyMovementProperties ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.SwimmingCreatureMovementComponent.GetCurrentYawTurnRate
struct USwimmingCreatureMovementComponent_GetCurrentYawTurnRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SwimmingCreatureMovementComponent.GetCurrentVelocity
struct USwimmingCreatureMovementComponent_GetCurrentVelocity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SwimmingCreatureMovementComponent.GetComponentDistanceFromWaterHeight
struct USwimmingCreatureMovementComponent_GetComponentDistanceFromWaterHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SwimmingCreaturePawn.SetAIStrategy
struct ASwimmingCreaturePawn_SetAIStrategy_Params
{
	class UClass*                                      InStrategy;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SwimmingCreaturePawn.OnRep_CurrentAIStrategy
struct ASwimmingCreaturePawn_OnRep_CurrentAIStrategy_Params
{
	class UClass*                                      OldAIStrategy;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SwimmingCreaturePawn.Multicast_DespawnRPC
struct ASwimmingCreaturePawn_Multicast_DespawnRPC_Params
{
};

// Function Athena.SwimmingCreaturePawn.GetCreatureDistanceFromWaterHeight
struct ASwimmingCreaturePawn_GetCreatureDistanceFromWaterHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SwimmingCreaturePawn.GetAIStrategy
struct ASwimmingCreaturePawn_GetAIStrategy_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SharkPawn.Multicast_PlayMontageRPC
struct ASharkPawn_Multicast_PlayMontageRPC_Params
{
	int                                                AnimIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayAsDynamicMontage;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.SharkPawn.IsDoingQuickDeath
struct ASharkPawn_IsDoingQuickDeath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.SharkPawn.GetIndexForMontage
struct ASharkPawn_GetIndexForMontage_Params
{
	class UObject*                                     Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.TalkToNPCActionStateId.PopCharOutOfActionState
struct UTalkToNPCActionStateId_PopCharOutOfActionState_Params
{
	class UNPCDialogComponent*                         NPCDialogComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TavernStepsTrigger.OnRep_StepsState
struct ATavernStepsTrigger_OnRep_StepsState_Params
{
	TEnumAsByte<EStepsTriggerState>                    LastState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TavernStepsTrigger.OnEndOverlapTavern
struct ATavernStepsTrigger_OnEndOverlapTavern_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TavernStepsTrigger.OnEndOverlapStepsListener
struct ATavernStepsTrigger_OnEndOverlapStepsListener_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TavernStepsTrigger.OnBeginOverlapTavern
struct ATavernStepsTrigger_OnBeginOverlapTavern_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.TavernStepsTrigger.OnBeginOverlapStepsListener
struct ATavernStepsTrigger_OnBeginOverlapStepsListener_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.TavernStepsTrigger.Multicast_StartAnimatedStepsOpen
struct ATavernStepsTrigger_Multicast_StartAnimatedStepsOpen_Params
{
};

// Function Athena.TeleportActionStateId.PushCharacterIntoTeleportActionStateWithCustomTeleportLocation
struct UTeleportActionStateId_PushCharacterIntoTeleportActionStateWithCustomTeleportLocation_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTeleportLocation                           TeleportLocation;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETeleportActionStateFadeType>          TeleportFadeType;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETeleportActionStateConditions>        TeleportConditions;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StreamOutLevelId;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StreamInLevelId;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TeleportActionStateId.PushCharacterIntoTeleportActionState
struct UTeleportActionStateId_PushCharacterIntoTeleportActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETeleportActionStateFadeType>          TeleportFadeType;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETeleportActionStateConditions>        TeleportConditions;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StreamOutLevelId;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StreamInLevelId;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TeleportFunctions.SortTeleportLocationsByProximity
struct UTeleportFunctions_SortTeleportLocationsByProximity_Params
{
	TArray<struct FTeleportLocation>                   Locations;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Pivot;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TeleportFunctions.GetTeleportLocationsOnShip
struct UTeleportFunctions_GetTeleportLocationsOnShip_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AShip*                                       InShip;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTeleportLocation>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.TeleportFunctions.GetTeleportLocationsOnDeckOfShip
struct UTeleportFunctions_GetTeleportLocationsOnDeckOfShip_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AShip*                                       InShip;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShipDeck>                             InDeck;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTeleportLocation>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.TeleportFunctions.GetTeleportLocationOnShip
struct UTeleportFunctions_GetTeleportLocationOnShip_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AShip*                                       InShip;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTeleportLocation                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.TeleportFunctions.GetTeleportLocationAroundTarget
struct UTeleportFunctions_GetTeleportLocationAroundTarget_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InTarget;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InDistanceFromTarget;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTeleportLocation                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.TeleportFunctions.GetNearestTeleportLocationOnLand
struct UTeleportFunctions_GetNearestTeleportLocationOnLand_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTeleportLocation                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.TestControlObjectActionStateId.PushCharacterIntoTestControlObjectActionState
struct UTestControlObjectActionStateId_PushCharacterIntoTestControlObjectActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ControlledObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DockTime;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TestNetworkedEventsFunctionLibrary.FireTestEventToServer
struct UTestNetworkedEventsFunctionLibrary_FireTestEventToServer_Params
{
	class AAthenaPlayerController*                     PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TestEventData;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TestNetworkedEventsFunctionLibrary.FireTestEventToClient
struct UTestNetworkedEventsFunctionLibrary_FireTestEventToClient_Params
{
	class AAthenaPlayerController*                     PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TestEventData;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TestQuestProxy.Stop
struct ATestQuestProxy_Stop_Params
{
};

// Function Athena.TestQuestProxy.CreateXMarksTheSpotQuest
struct ATestQuestProxy_CreateXMarksTheSpotQuest_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FXMarksTheSpotQuestDesc                     QuestDesc;                                                // (Parm)
};

// Function Athena.TestQuestProxy.AddParticipant
struct ATestQuestProxy_AddParticipant_Params
{
	class AAthenaPlayerCharacter*                      Participant;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TestReturnCompleteAfterTimeoutPlayerRelevancyService.CreateTestReturnCompleteAfterTimeoutPlayerRelevancyService
struct UTestReturnCompleteAfterTimeoutPlayerRelevancyService_CreateTestReturnCompleteAfterTimeoutPlayerRelevancyService_Params
{
	float                                              InTimeoutWanted;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTestReturnCompleteAfterTimeoutPlayerRelevancyService* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.TestShipAssetClassDatabase.MakeTestShipAssetClassDatabase
struct UTestShipAssetClassDatabase_MakeTestShipAssetClassDatabase_Params
{
	class UTestShipAssetClassDatabase*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.TestStreamingTeleport.GetTeleportPoints
struct UTestStreamingTeleport_GetTeleportPoints_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     BlockingChannel;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CharacterRadius;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CharacterHalfHeight;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              IntervalSize;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MinExtents;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     MaxExtents;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FVector>                             Points;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function Athena.TextureFeedbackComponent.SetInputTexture1
struct UTextureFeedbackComponent_SetInputTexture1_Params
{
	class UTexture*                                    InRenderTargetTexture;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TextureFeedbackComponent.SetEffectActive
struct UTextureFeedbackComponent_SetEffectActive_Params
{
	bool                                               IsActive;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TextureFeedbackComponent.GetTexture
struct UTextureFeedbackComponent_GetTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.TextureFeedbackComponent.ClearTexture
struct UTextureFeedbackComponent_ClearTexture_Params
{
	struct FLinearColor                                ClearColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TinySharkDebugFunctionLibrary.OverrideTinySharkExperienceRepositionTimerParam
struct UTinySharkDebugFunctionLibrary_OverrideTinySharkExperienceRepositionTimerParam_Params
{
	class ATinySharkExperience*                        TinySharkExperience;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTime;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TrackedActorService.UnregisterActor
struct UTrackedActorService_UnregisterActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.BountyMap.RefreshContents
struct ABountyMap_RefreshContents_Params
{
};

// Function Athena.BountyMap.OnTextCanvasUpdate
struct ABountyMap_OnTextCanvasUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.BountyMap.OnRep_MapInventoryTexturePath
struct ABountyMap_OnRep_MapInventoryTexturePath_Params
{
};

// Function Athena.BountyMap.OnRep_Contents
struct ABountyMap_OnRep_Contents_Params
{
	struct FBountyMapContents                          InPreviousContents;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.CargoRunMap.RefreshContents
struct ACargoRunMap_RefreshContents_Params
{
};

// Function Athena.CargoRunMap.OnTextCanvasUpdate
struct ACargoRunMap_OnTextCanvasUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.CargoRunMap.OnRep_Contents
struct ACargoRunMap_OnRep_Contents_Params
{
	struct FCargoRunMapContents                        PreviousContents;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.MerchantMap.RefreshContents
struct AMerchantMap_RefreshContents_Params
{
};

// Function Athena.MerchantMap.OnTextCanvasUpdate
struct AMerchantMap_OnTextCanvasUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MerchantMap.OnRep_Contents
struct AMerchantMap_OnRep_Contents_Params
{
	struct FMerchantMapContents                        InPreviousContents;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.RiddleMap.TriggerMagicGlow_RPC
struct ARiddleMap_TriggerMagicGlow_RPC_Params
{
};

// Function Athena.RiddleMap.StartMagicGlowEffect
struct ARiddleMap_StartMagicGlowEffect_Params
{
};

// Function Athena.RiddleMap.RefreshContents
struct ARiddleMap_RefreshContents_Params
{
};

// Function Athena.RiddleMap.OnTextCanvasUpdate
struct ARiddleMap_OnTextCanvasUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.RiddleMap.OnRep_MapInventoryTexturePath
struct ARiddleMap_OnRep_MapInventoryTexturePath_Params
{
};

// Function Athena.RiddleMap.OnRep_Contents
struct ARiddleMap_OnRep_Contents_Params
{
	struct FRiddleMapContents                          InPreviousContents;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.RiddleMap.OnMaskCanvasUpdate
struct ARiddleMap_OnMaskCanvasUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.XMarksTheSpotMap.SetMapData
struct AXMarksTheSpotMap_SetMapData_Params
{
	TAssetPtr<class UTexture>                          InMapTextureAsset;                                        // (Parm)
	TAssetPtr<class UTexture>                          InMapInventoryTextureAsset;                               // (Parm)
	TArray<struct FXMarksTheSpotMapMark>               InMarks;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              InRotation;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.XMarksTheSpotMap.OnRep_Marks
struct AXMarksTheSpotMap_OnRep_Marks_Params
{
};

// Function Athena.XMarksTheSpotMap.OnRep_MapTexturePath
struct AXMarksTheSpotMap_OnRep_MapTexturePath_Params
{
};

// Function Athena.XMarksTheSpotMap.OnRep_MapInventoryTexturePath
struct AXMarksTheSpotMap_OnRep_MapInventoryTexturePath_Params
{
};

// Function Athena.XMarksTheSpotMap.OnCanvasUpdate
struct AXMarksTheSpotMap_OnCanvasUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.XMarksTheSpotMap.IsMapTextureLoaded
struct AXMarksTheSpotMap_IsMapTextureLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.XMarksTheSpotMap.GetRenderTarget
struct AXMarksTheSpotMap_GetRenderTarget_Params
{
	class UCanvasRenderTarget2D*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.XMarksTheSpotMap.GetMarks
struct AXMarksTheSpotMap_GetMarks_Params
{
	TArray<struct FXMarksTheSpotMapMark>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.XMarksTheSpotMap.GetMapTextureAsset
struct AXMarksTheSpotMap_GetMapTextureAsset_Params
{
	TAssetPtr<class UTexture>                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.XMarksTheSpotMap.GetDynamicMaterialThird
struct AXMarksTheSpotMap_GetDynamicMaterialThird_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.XMarksTheSpotMap.GetDynamicMaterialFirst
struct AXMarksTheSpotMap_GetDynamicMaterialFirst_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.TriggerObject.Trigger
struct ATriggerObject_Trigger_Params
{
	class AActor*                                      InTriggeringActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TriggerObject.OnTriggerServer
struct ATriggerObject_OnTriggerServer_Params
{
	class AActor*                                      InTriggeringActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TriggerObject.OnTriggerClient
struct ATriggerObject_OnTriggerClient_Params
{
	class AActor*                                      InTriggeringActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TriggerObject.MulticastTrigger
struct ATriggerObject_MulticastTrigger_Params
{
	class AActor*                                      InTriggeringActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TriggerObject.CanActorTrigger
struct ATriggerObject_CanActorTrigger_Params
{
	class AActor*                                      InTriggeringActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.TeleportTriggerObject.OnTriggerTeleportServer
struct ATeleportTriggerObject_OnTriggerTeleportServer_Params
{
	class AActor*                                      InTriggeringActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TutorialComponent.OnRep_HasBegun
struct UTutorialComponent_OnRep_HasBegun_Params
{
};

// Function Athena.UnifiedDelegateTestUnifiedDelegate.UnbindDelegate
struct UUnifiedDelegateTestUnifiedDelegate_UnbindDelegate_Params
{
};

// Function Athena.UnifiedDelegateTestUnifiedDelegate.MakeTestUnifiedDelegate
struct UUnifiedDelegateTestUnifiedDelegate_MakeTestUnifiedDelegate_Params
{
	class UUnifiedDelegateTestUnifiedDelegate*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.UnifiedDelegateTestUnifiedDelegate.IsDelegateBound
struct UUnifiedDelegateTestUnifiedDelegate_IsDelegateBound_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.UnifiedDelegateTestUnifiedDelegate.BindDelegate
struct UUnifiedDelegateTestUnifiedDelegate_BindDelegate_Params
{
	struct FScriptDelegate                             InDynamicDelegate;                                        // (Parm, ZeroConstructor)
};

// Function Athena.UnloadItemActionStateId.PushCharacterIntoUnloadItemActionState
struct UUnloadItemActionStateId_PushCharacterIntoUnloadItemActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      UnloadableActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Interactable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.UnloadItemActionStateId.PopCharacterOutOfUnloadItemActionState
struct UUnloadItemActionStateId_PopCharacterOutOfUnloadItemActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.UsableWieldableComponent.Server_TriggerOneShotUse
struct UUsableWieldableComponent_Server_TriggerOneShotUse_Params
{
	class UClass*                                      InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.UsableWieldableComponent.Multicast_TriggerOneShotUse
struct UUsableWieldableComponent_Multicast_TriggerOneShotUse_Params
{
	class UClass*                                      InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.UseCannonActionStateId.PushCharacterIntoUseCannonActionState
struct UUseCannonActionStateId_PushCharacterIntoUseCannonActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      CannonActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.UseCannonCompositeInputHandler.OnSecondaryInteractReleased
struct UUseCannonCompositeInputHandler_OnSecondaryInteractReleased_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.UseCannonCompositeInputHandler.OnSecondaryInteract
struct UUseCannonCompositeInputHandler_OnSecondaryInteract_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.UseCannonCompositeInputHandler.OnMoveYaw
struct UUseCannonCompositeInputHandler_OnMoveYaw_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.UseCannonCompositeInputHandler.OnMovePitch
struct UUseCannonCompositeInputHandler_OnMovePitch_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.UseCannonCompositeInputHandler.OnFireCannon
struct UUseCannonCompositeInputHandler_OnFireCannon_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.UseItemActionStateId.PushCharacterIntoUseItemActionState
struct UUseItemActionStateId_PushCharacterIntoUseItemActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Usable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.UseItemActionStateId.PopCharacterOutOfUseItemActionState
struct UUseItemActionStateId_PopCharacterOutOfUseItemActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.UseLadderActionStateId.PushCharacterIntoUseLadderActionState
struct UUseLadderActionStateId_PushCharacterIntoUseLadderActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      LadderActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InteractingHeight;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClimbId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLadderDefinition                           LadderDefinition;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.UseMapTableActionStateId.PushCharacterIntoUseMapTableActionState
struct UUseMapTableActionStateId_PushCharacterIntoUseMapTableActionState_Params
{
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      MapTableActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.UseMapTableCompositeInputHandler.OnZoomOut
struct UUseMapTableCompositeInputHandler_OnZoomOut_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.UseMapTableCompositeInputHandler.OnZoomIn
struct UUseMapTableCompositeInputHandler_OnZoomIn_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.UseMapTableCompositeInputHandler.OnTogglePin
struct UUseMapTableCompositeInputHandler_OnTogglePin_Params
{
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.UseMapTableCompositeInputHandler.OnPanY
struct UUseMapTableCompositeInputHandler_OnPanY_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.UseMapTableCompositeInputHandler.OnPanX
struct UUseMapTableCompositeInputHandler_OnPanX_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.UseMapTableCompositeInputHandler.OnMouseZoom
struct UUseMapTableCompositeInputHandler_OnMouseZoom_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.UseMapTableCompositeInputHandler.OnMousePanY
struct UUseMapTableCompositeInputHandler_OnMousePanY_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.UseMapTableCompositeInputHandler.OnMousePanX
struct UUseMapTableCompositeInputHandler_OnMousePanX_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputHandlerResult>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.VenomComponent.SprayVenomInDirection
struct UVenomComponent_SprayVenomInDirection_Params
{
	struct FVector                                     SourceLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.VenomComponent.SprayVenomAtClosestTarget
struct UVenomComponent_SprayVenomAtClosestTarget_Params
{
	struct FVector                                     SourceLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.VenomComponent.ApplyVenomToTarget
struct UVenomComponent_ApplyVenomToTarget_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.VfxFunctionLibrary.WithWorldOwner
struct UVfxFunctionLibrary_WithWorldOwner_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (Parm, OutParm, ReferenceParm)
};

// Function Athena.VfxFunctionLibrary.WithRelativeScale
struct UVfxFunctionLibrary_WithRelativeScale_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (Parm, OutParm, ReferenceParm)
	struct FVector                                     Scale3D;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.VfxFunctionLibrary.WithOwner
struct UVfxFunctionLibrary_WithOwner_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (Parm, OutParm, ReferenceParm)
	class UObject*                                     InOwner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InOwnerOnlySee;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InOwnerNoSee;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.VfxFunctionLibrary.WithEffect
struct UVfxFunctionLibrary_WithEffect_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (Parm, OutParm, ReferenceParm)
	class UObject*                                     InEmitterTemplate;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InAutoDestroy;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.VfxFunctionLibrary.WithCustomLocalSpaceDelegateForCharacter
struct UVfxFunctionLibrary_WithCustomLocalSpaceDelegateForCharacter_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (Parm, OutParm, ReferenceParm)
	class AAthenaPlayerCharacter*                      AthenaPlayerCharacter;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVfxCustomLocalSpaceMode>              CustomLocalSpaceMode;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.VfxFunctionLibrary.Spawn
struct UVfxFunctionLibrary_Spawn_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (Parm, OutParm, ReferenceParm)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.VfxFunctionLibrary.SetUnderwater
struct UVfxFunctionLibrary_SetUnderwater_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (Parm, OutParm, ReferenceParm)
	bool                                               IsUnderwater;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.VfxFunctionLibrary.SetCustomLocalSpaceDelegateForCharacter
struct UVfxFunctionLibrary_SetCustomLocalSpaceDelegateForCharacter_Params
{
	class UParticleSystemComponent*                    PSC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AAthenaCharacter*                            AthenaCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVfxCustomLocalSpaceMode>              CustomLocalSpaceMode;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.VfxFunctionLibrary.InVfxRegion
struct UVfxFunctionLibrary_InVfxRegion_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (Parm, OutParm, ReferenceParm)
	TEnumAsByte<EVfxRegion>                            InRegion;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.VfxFunctionLibrary.AttachedToSocket
struct UVfxFunctionLibrary_AttachedToSocket_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (Parm, OutParm, ReferenceParm)
	class USceneComponent*                             InAttachToComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InAttachPointName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       InLocationType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.VfxFunctionLibrary.AttachedToComponent
struct UVfxFunctionLibrary_AttachedToComponent_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (Parm, OutParm, ReferenceParm)
	class USceneComponent*                             InAttachToComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       InLocationType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.VfxFunctionLibrary.AtSocketLocation
struct UVfxFunctionLibrary_AtSocketLocation_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (Parm, OutParm, ReferenceParm)
	class USceneComponent*                             InSocketOwnerComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InRotation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.VfxFunctionLibrary.AtLocation
struct UVfxFunctionLibrary_AtLocation_Params
{
	struct FVfxSpawner                                 Spawner;                                                  // (Parm, OutParm, ReferenceParm)
	struct FVector                                     InLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InRotation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.VfxFunctionLibrary.AthenaSpawnShipRelativeEmitterAtSocketLocation
struct UVfxFunctionLibrary_AthenaSpawnShipRelativeEmitterAtSocketLocation_Params
{
	class UObject*                                     EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AAthenaPlayerCharacter*                      AthenaPlayerCharacter;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SocketOwnerComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOwnerOnlySee;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOwnerNoSee;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUnderwater;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVfxRegion>                            VfxRegion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.VfxFunctionLibrary.AthenaSpawnEmitterAttachedWithOwner
struct UVfxFunctionLibrary_AthenaSpawnEmitterAttachedWithOwner_Params
{
	class UObject*                                     EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOwnerOnlySee;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOwnerNoSee;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUnderwater;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVfxRegion>                            VfxRegion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.VfxFunctionLibrary.AthenaSpawnEmitterAttachedAndWorldOwned
struct UVfxFunctionLibrary_AthenaSpawnEmitterAttachedAndWorldOwned_Params
{
	class UObject*                                     EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUnderwater;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVfxRegion>                            VfxRegion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.VfxFunctionLibrary.AthenaSpawnEmitterAtLocationWithOwner
struct UVfxFunctionLibrary_AthenaSpawnEmitterAtLocationWithOwner_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOwnerOnlySee;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOwnerNoSee;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUnderwater;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVfxRegion>                            VfxRegion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.VfxFunctionLibrary.AthenaSpawnEmitterAtLocation
struct UVfxFunctionLibrary_AthenaSpawnEmitterAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUnderwater;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVfxRegion>                            VfxRegion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.VfxSelectorFunctionLibrary.SelectUpdateVfxWithOwner
struct UVfxSelectorFunctionLibrary_SelectUpdateVfxWithOwner_Params
{
	class UVfxSelectorDataAsset*                       SelectorAsset;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ExistingVfx;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOwnerOnlySee;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOwnerNoSee;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUnderwater;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.VfxSelectorFunctionLibrary.SelectSpawnVfxAttachedWithOwner
struct UVfxSelectorFunctionLibrary_SelectSpawnVfxAttachedWithOwner_Params
{
	class UVfxSelectorDataAsset*                       SelectorAsset;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOwnerOnlySee;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOwnerNoSee;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUnderwater;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.VfxSelectorFunctionLibrary.SelectSpawnVfx
struct UVfxSelectorFunctionLibrary_SelectSpawnVfx_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UVfxSelectorDataAsset*                       SelectorAsset;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOwnerOnlySee;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOwnerNoSee;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUnderwater;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Athena.VisualHealthResponseComponent.GetMaterialInstance
struct UVisualHealthResponseComponent_GetMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.VomitComponent.VomitActivate
struct UVomitComponent_VomitActivate_Params
{
	struct FName                                       VomitType;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Duration;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.VomitComponent.OnOverlapBegin
struct UVomitComponent_OnOverlapBegin_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.VomitComponent.Multicast_VomitImpact
struct UVomitComponent_Multicast_VomitImpact_Params
{
	struct FHitResult                                  Result;                                                   // (ConstParm, Parm, ReferenceParm)
};

// Function Athena.VomitComponent.Multicast_VomitActivate
struct UVomitComponent_Multicast_VomitActivate_Params
{
	struct FName                                       VomitType;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.VomitComponent.IsFaceCoveredWithVomit
struct UVomitComponent_IsFaceCoveredWithVomit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.VomitComponent.DidVomitVFXSpawn
struct UVomitComponent_DidVomitVFXSpawn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.VomitComponent.Client_VomitHit
struct UVomitComponent_Client_VomitHit_Params
{
};

// Function Athena.VotableWithSessionComponent.SetVoteDataIndex
struct UVotableWithSessionComponent_SetVoteDataIndex_Params
{
	int                                                InVoteDataIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.VotableWithSessionComponent.IsSessionLocked
struct UVotableWithSessionComponent_IsSessionLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.VotableWithSessionComponent.GetVoteDataIndex
struct UVotableWithSessionComponent_GetVoteDataIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.BindToParentShipCrewVotingSession.OnRep_Manifest
struct UBindToParentShipCrewVotingSession_OnRep_Manifest_Params
{
};

// Function Athena.VoyageGeneratorSim.SimulateVoyageChain
struct AVoyageGeneratorSim_SimulateVoyageChain_Params
{
	int                                                Count;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxHistory;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartingLocation;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FIsland>                             Islands;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UVoyageRecipeDataAsset*                      Recipe;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.VoyageGeneratorSim.ProcessSimulatedVoyage
struct AVoyageGeneratorSim_ProcessSimulatedVoyage_Params
{
	class UVoyageGeneratorSimResult*                   Voyage;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.VoyageGeneratorSim.OnEndSimulationRun
struct AVoyageGeneratorSim_OnEndSimulationRun_Params
{
};

// Function Athena.VoyageGeneratorSim.OnBeginSimulationRun
struct AVoyageGeneratorSim_OnBeginSimulationRun_Params
{
};

// Function Athena.VoyageGeneratorSimBlackboardFunctions.PrintBlackboard
struct UVoyageGeneratorSimBlackboardFunctions_PrintBlackboard_Params
{
	struct FVoyageGeneratorSimBlackboard               Blackboard;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.VoyageGeneratorSimBlackboardFunctions.GetValuesFromBlackboardByNameInt
struct UVoyageGeneratorSimBlackboardFunctions_GetValuesFromBlackboardByNameInt_Params
{
	struct FVoyageGeneratorSimBlackboard               Blackboard;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.VoyageGeneratorSimBlackboardFunctions.GetValuesFromBlackboardByName
struct UVoyageGeneratorSimBlackboardFunctions_GetValuesFromBlackboardByName_Params
{
	struct FVoyageGeneratorSimBlackboard               Blackboard;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.VoyageGeneratorSimBlackboardFunctions.CombineBlackboards
struct UVoyageGeneratorSimBlackboardFunctions_CombineBlackboards_Params
{
	struct FVoyageGeneratorSimBlackboard               A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVoyageGeneratorSimBlackboard               B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVoyageGeneratorSimBlackboard               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.VoyageGeneratorSimFunctions.GetIslandLocation
struct UVoyageGeneratorSimFunctions_GetIslandLocation_Params
{
	TArray<struct FIsland>                             Islands;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       InName;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.VoyageGeneratorSimFunctions.GenerateVoyageFromRecipe
struct UVoyageGeneratorSimFunctions_GenerateVoyageFromRecipe_Params
{
	struct FVector                                     StartingLocation;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UVoyageRecipeDataAsset*                      Recipe;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FIsland>                             Islands;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Seed;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UVoyageGeneratorSimResult*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.VoyageGeneratorSimFunctions.GenerateDistributionFromRecipe
struct UVoyageGeneratorSimFunctions_GenerateDistributionFromRecipe_Params
{
	class UVoyageRecipeDataAsset*                      Recipe;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.VoyageGeneratorSimResult.VisitChapter
struct UVoyageGeneratorSimResult_VisitChapter_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVoyageGeneratorSimBlackboard               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.VoyageGeneratorSimResult.Visit
struct UVoyageGeneratorSimResult_Visit_Params
{
	struct FVoyageGeneratorSimBlackboard               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.VoyageGeneratorSimResult.GetTitle
struct UVoyageGeneratorSimResult_GetTitle_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.VoyageGeneratorSimResult.GetNumQuests
struct UVoyageGeneratorSimResult_GetNumQuests_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.VoyageGeneratorSimResult.GetNumChapters
struct UVoyageGeneratorSimResult_GetNumChapters_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WaitForDemoResetActionStateId.PushCharacterIntoWaitForDemoResetActionState
struct UWaitForDemoResetActionStateId_PushCharacterIntoWaitForDemoResetActionState_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WaitingToSpawnActionStateId.PushCharacterIntoWaitingToSpawnActionState
struct UWaitingToSpawnActionStateId_PushCharacterIntoWaitingToSpawnActionState_Params
{
	class AAthenaCharacter*                            InCharacter;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InStartSpot;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InReceiveLoadout;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InReceiveEntitlement;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InWaitForRelevancy;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InStreamOutLevel;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InStreamInLevel;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WaterExposureComponent.OnRep_SubmergedState
struct UWaterExposureComponent_OnRep_SubmergedState_Params
{
	TEnumAsByte<ESubmergedState>                       OriginalSubmergedState;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WaterExposureComponent.OnRep_InRain
struct UWaterExposureComponent_OnRep_InRain_Params
{
	bool                                               OriginalInRain;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WaterHeightProviderInterface.HasValidWaterHeight
struct UWaterHeightProviderInterface_HasValidWaterHeight_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WaterHeightProviderInterface.GetWaterHeight
struct UWaterHeightProviderInterface_GetWaterHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WaterHeightProviderInterface.GetValidWaterHeightAtomic
struct UWaterHeightProviderInterface_GetValidWaterHeightAtomic_Params
{
	float                                              OutWaterHeight;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WaterHeightProviderComponent.HasValidWaterHeight
struct UWaterHeightProviderComponent_HasValidWaterHeight_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WaterHeightProviderComponent.GetWaterHeight
struct UWaterHeightProviderComponent_GetWaterHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WaterHeightProviderComponent.GetValidWaterHeightAtomic
struct UWaterHeightProviderComponent_GetValidWaterHeightAtomic_Params
{
	float                                              OutWaterHeight;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.MurkWaterModifierZoneComponent.OnRep_State
struct UMurkWaterModifierZoneComponent_OnRep_State_Params
{
	TEnumAsByte<EMurkWaterModifierZoneState>           PreviousState;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Athena.WaterSplashComponent.OnWaterSplashReachedDeepWaterDelegate__DelegateSignature
struct UWaterSplashComponent_OnWaterSplashReachedDeepWaterDelegate__DelegateSignature_Params
{
};

// DelegateFunction Athena.WaterSplashComponent.OnWaterSplashExitWaterDelegate__DelegateSignature
struct UWaterSplashComponent_OnWaterSplashExitWaterDelegate__DelegateSignature_Params
{
};

// DelegateFunction Athena.WaterSplashComponent.OnWaterSplashEnterWaterDelegate__DelegateSignature
struct UWaterSplashComponent_OnWaterSplashEnterWaterDelegate__DelegateSignature_Params
{
};

// Function Athena.WaterVolume.RegisterComponents
struct AWaterVolume_RegisterComponents_Params
{
	class UFlatWaterMeshComponent*                     FlatWaterMesh;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFlatWaterPlaneComponent*                    FlatWaterPlane;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Athena.WeakActorHandleTestsFunctionLib.TestCreatingWeakActorHandleFromConsoleStringWithValidNetGuidInvalidName
struct UWeakActorHandleTestsFunctionLib_TestCreatingWeakActorHandleFromConsoleStringWithValidNetGuidInvalidName_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WeepingComponent.OnRep_State
struct UWeepingComponent_OnRep_State_Params
{
};

// Function Athena.WetnessComponent.SetWet
struct UWetnessComponent_SetWet_Params
{
	struct FVector                                     WorldSpaceWaterPos;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FullyWet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WetnessComponent.OnRep_WetData
struct UWetnessComponent_OnRep_WetData_Params
{
};

// Function Athena.WetnessComponent.GetWet
struct UWetnessComponent_GetWet_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WheelInteractableFunctionLib.UpdateAdditiveIdles
struct UWheelInteractableFunctionLib_UpdateAdditiveIdles_Params
{
	float                                              Rate;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AnimationTime;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FWheelAdditiveProperties                    WithinRange;                                              // (ConstParm, Parm)
	struct FWheelAdditiveAlphaSets                     SetAdditiveIdles;                                         // (Parm)
	struct FBlendAdditiveValues                        SetAdditiveBlendValues;                                   // (ConstParm, Parm)
	TEnumAsByte<EWheelAnimationType>                   WheelTurnType;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FWheelAdditiveAlphaSets                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.WheelInteractableFunctionLib.CharacterWheelAnimationUpdate
struct UWheelInteractableFunctionLib_CharacterWheelAnimationUpdate_Params
{
	class AActor*                                      Wheel;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FSocketId                                   LeftHandSocketName;                                       // (ConstParm, Parm)
	struct FSocketId                                   RightHandSocketName;                                      // (ConstParm, Parm)
	struct FTransform                                  LeftHandTransform;                                        // (Parm, OutParm, IsPlainOldData)
	struct FTransform                                  RightHandTransform;                                       // (Parm, OutParm, IsPlainOldData)
	float                                              WheelTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LeftArm;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RightArm;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWheelAnimationType>                   WheelTurnType;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FWheelArmIKDownWithinRange                  WithinRange;                                              // (ConstParm, Parm)
	struct FWheelArmIKBoolSets                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.WheelMock.GetNormalizedWheelPosition
struct AWheelMock_GetNormalizedWheelPosition_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.MusicalInstrument.TriggerMagicGlow_Multicast_RPC
struct AMusicalInstrument_TriggerMagicGlow_Multicast_RPC_Params
{
};

// Function Athena.MusicalInstrument.StartMagicGlowEffect
struct AMusicalInstrument_StartMagicGlowEffect_Params
{
};

// Function Athena.Bucket.Server_OnThrow
struct ABucket_Server_OnThrow_Params
{
	struct FProjectileAim                              AimData;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function Athena.Bucket.OnRep_FillState
struct ABucket_OnRep_FillState_Params
{
};

// Function Athena.Bucket.Multicast_Throw
struct ABucket_Multicast_Throw_Params
{
};

// Function Athena.Bucket.Multicast_Scoop
struct ABucket_Multicast_Scoop_Params
{
};

// Function Athena.Bucket.FillWithVomit
struct ABucket_FillWithVomit_Params
{
};

// Function Athena.Bucket.CanBeVomitedInto
struct ABucket_CanBeVomitedInto_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.TestProjectileWeapon.TestGetState
struct ATestProjectileWeapon_TestGetState_Params
{
	TEnumAsByte<EProjectileWeaponState>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.TestProjectileWeapon.SpoofFireRequest
struct ATestProjectileWeapon_SpoofFireRequest_Params
{
	struct FFireRequest                                Request;                                                  // (Parm)
};

// Function Athena.TestProjectileWeapon.RegisterAndWield
struct ATestProjectileWeapon_RegisterAndWield_Params
{
	class AActor*                                      TargetOwner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.TestProjectileWeapon.GenerateAndFireProjectiles
struct ATestProjectileWeapon_GenerateAndFireProjectiles_Params
{
	TArray<struct FHitResult>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.TestProjectileWeapon.FireInstantly
struct ATestProjectileWeapon_FireInstantly_Params
{
};

// Function Athena.Spyglass.ScopeOn
struct ASpyglass_ScopeOn_Params
{
};

// Function Athena.Spyglass.ScopeOff
struct ASpyglass_ScopeOff_Params
{
};

// Function Athena.Spyglass.GlintOn
struct ASpyglass_GlintOn_Params
{
};

// Function Athena.Spyglass.GlintOff
struct ASpyglass_GlintOff_Params
{
};

// Function Athena.Spyglass.ForceScopeOff
struct ASpyglass_ForceScopeOff_Params
{
};

// Function Athena.Fruit.Multicast_EatRPC
struct AFruit_Multicast_EatRPC_Params
{
};

// Function Athena.Lantern.TriggerGlow
struct ALantern_TriggerGlow_Params
{
};

// Function Athena.Lantern.Server_RequestChangeLight
struct ALantern_Server_RequestChangeLight_Params
{
	bool                                               InLightOn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Raised;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Lantern.Server_ExternalLightFactorChange
struct ALantern_Server_ExternalLightFactorChange_Params
{
	float                                              ExternalLightFactor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Lantern.ReceiveWieldThirdPerson
struct ALantern_ReceiveWieldThirdPerson_Params
{
};

// Function Athena.Lantern.ReceiveWieldFirstPerson
struct ALantern_ReceiveWieldFirstPerson_Params
{
};

// Function Athena.Lantern.ReceiveTurnOnOffOneshotFx
struct ALantern_ReceiveTurnOnOffOneshotFx_Params
{
	bool                                               On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Lantern.ReceiveLightChange
struct ALantern_ReceiveLightChange_Params
{
};

// Function Athena.Lantern.ReceiveFlameChange
struct ALantern_ReceiveFlameChange_Params
{
};

// Function Athena.Lantern.PreMeshChangedBPEvent
struct ALantern_PreMeshChangedBPEvent_Params
{
};

// Function Athena.Lantern.PostMeshChangedBPEvent
struct ALantern_PostMeshChangedBPEvent_Params
{
};

// Function Athena.Lantern.OnRep_Raised
struct ALantern_OnRep_Raised_Params
{
};

// Function Athena.Lantern.OnRep_OnFlameOfFateTypeChanged
struct ALantern_OnRep_OnFlameOfFateTypeChanged_Params
{
};

// Function Athena.Lantern.OnRep_LightOn
struct ALantern_OnRep_LightOn_Params
{
};

// Function Athena.Lantern.Multicast_PlayTurnOnOffOneshotFx
struct ALantern_Multicast_PlayTurnOnOffOneshotFx_Params
{
	bool                                               TurnOn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Lantern.GetUnaryRaisedBlendFactor
struct ALantern_GetUnaryRaisedBlendFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Lantern.GetUnaryActiveBlendFactor
struct ALantern_GetUnaryActiveBlendFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Lantern.FlareLight_Multicast_RPC
struct ALantern_FlareLight_Multicast_RPC_Params
{
};

// Function Athena.MeleeWeapon.Server_RequestAttack
struct AMeleeWeapon_Server_RequestAttack_Params
{
	TEnumAsByte<EMeleeWeaponAttackType>                Type;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MeleeWeapon.OnBlockedAttack
struct AMeleeWeapon_OnBlockedAttack_Params
{
	struct FEventBlocked                               Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Athena.MeleeWeapon.Multicast_TriggerAttack
struct AMeleeWeapon_Multicast_TriggerAttack_Params
{
	TEnumAsByte<EMeleeWeaponAttackType>                Type;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.MeleeWeapon.Client_RequestAttackResponse
struct AMeleeWeapon_Client_RequestAttackResponse_Params
{
	bool                                               Accepted;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.QuestBook.Server_TurnToPage
struct AQuestBook_Server_TurnToPage_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.QuestBook.OnRightPageCanvasUpdate
struct AQuestBook_OnRightPageCanvasUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.QuestBook.OnRep_LeftPageIndex
struct AQuestBook_OnRep_LeftPageIndex_Params
{
	int                                                PreviousLeftPageIndex;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.QuestBook.OnRep_BookContents
struct AQuestBook_OnRep_BookContents_Params
{
	TArray<struct FPageContents>                       InPreviousContents;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Athena.QuestBook.OnLeftPageCanvasUpdate
struct AQuestBook_OnLeftPageCanvasUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Tankard.SetLiquidLevel
struct ATankard_SetLiquidLevel_Params
{
	float                                              Level;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.Tankard.OnRep_RemainingVolume
struct ATankard_OnRep_RemainingVolume_Params
{
};

// Function Athena.Tankard.GetWantedLiquidLevel
struct ATankard_GetWantedLiquidLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.Tankard.GetLiquidLevel
struct ATankard_GetLiquidLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.VoyageInAContainerWieldableItem.Multicast_Opened
struct AVoyageInAContainerWieldableItem_Multicast_Opened_Params
{
};

// Function Athena.WieldableItemAnimationInterface.TriggerOneShotAnimation
struct UWieldableItemAnimationInterface_TriggerOneShotAnimation_Params
{
	class UClass*                                      InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WieldableItemAnimationInterface.StartUnequipAnimation
struct UWieldableItemAnimationInterface_StartUnequipAnimation_Params
{
};

// Function Athena.WieldableItemAnimationInterface.StartOutOfContinuousUseAnimation
struct UWieldableItemAnimationInterface_StartOutOfContinuousUseAnimation_Params
{
	class UClass*                                      InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WieldableItemAnimationInterface.StartIntoContinuousAnimation
struct UWieldableItemAnimationInterface_StartIntoContinuousAnimation_Params
{
	class UClass*                                      InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WieldableItemAnimationInterface.StartEquipAnimation
struct UWieldableItemAnimationInterface_StartEquipAnimation_Params
{
};

// Function Athena.WieldableItemAnimationInterface.StartContinuousAnimation
struct UWieldableItemAnimationInterface_StartContinuousAnimation_Params
{
	class UClass*                                      InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WieldableItemAnimationInterface.ReturnToIdle
struct UWieldableItemAnimationInterface_ReturnToIdle_Params
{
};

// Function Athena.WieldableItemAnimationInterface.IsEquipAnimationPlaying
struct UWieldableItemAnimationInterface_IsEquipAnimationPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemAnimationInstance.OnUseStopped
struct UWieldableItemAnimationInstance_OnUseStopped_Params
{
	class UClass*                                      InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WieldableItemAnimationInstance.OnUseStarted
struct UWieldableItemAnimationInstance_OnUseStarted_Params
{
	class UClass*                                      InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWieldableItemActionVisuals                 ActionVisuals;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.WieldableItemAnimationInstance.OnOneShotUseTriggered
struct UWieldableItemAnimationInstance_OnOneShotUseTriggered_Params
{
	class UClass*                                      InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWieldableItemActionVisuals                 ActionVisuals;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Athena.WieldablePetAnimationInstance.GetPetRoamingAnimations
struct UWieldablePetAnimationInstance_GetPetRoamingAnimations_Params
{
	struct FPetAnimationDataRoaming                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.WieldablePetAnimationInstance.GetPetHeldAnimations
struct UWieldablePetAnimationInstance_GetPetHeldAnimations_Params
{
	struct FPetAnimationDataBeingHeld                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.WieldablePetAnimationInstance.AssignNewPetUniqueAnimation
struct UWieldablePetAnimationInstance_AssignNewPetUniqueAnimation_Params
{
};

// Function Athena.WieldablePetAnimationInstance.AssignNewPetIdleAnimation
struct UWieldablePetAnimationInstance_AssignNewPetIdleAnimation_Params
{
	bool                                               IsIdleA;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAthenaAnimationPetSpawnState>         OverrideState;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WieldablePetAnimationInstance.AssignNewPetCurrentRoamingState
struct UWieldablePetAnimationInstance_AssignNewPetCurrentRoamingState_Params
{
	TEnumAsByte<EAthenaAnimationPetRoamingState>       WantedRoamingState;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WieldablePetAnimationInstance.AssignNewPetCurrentHeldState
struct UWieldablePetAnimationInstance_AssignNewPetCurrentHeldState_Params
{
	TEnumAsByte<EAthenaAnimationPetHeldState>          WantedHeldState;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WieldableItemFunctionLibrary.IsThirdPersonMeshComponentTickEnabled
struct UWieldableItemFunctionLibrary_IsThirdPersonMeshComponentTickEnabled_Params
{
	class AWieldableItem*                              InWieldable;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemFunctionLibrary.IsFirstPersonMeshComponentTickEnabled
struct UWieldableItemFunctionLibrary_IsFirstPersonMeshComponentTickEnabled_Params
{
	class AWieldableItem*                              InWieldable;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetComponent.RemoveItem
struct UWieldableItemSetComponent_RemoveItem_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetComponent.OnRep_Items
struct UWieldableItemSetComponent_OnRep_Items_Params
{
};

// Function Athena.WieldableItemSetComponent.OnItemDestroyed
struct UWieldableItemSetComponent_OnItemDestroyed_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WieldableItemSetComponent.GetSlotForItem
struct UWieldableItemSetComponent_GetSlotForItem_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetComponent.GetNumItemsOfType
struct UWieldableItemSetComponent_GetNumItemsOfType_Params
{
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetComponent.GetNumItems
struct UWieldableItemSetComponent_GetNumItems_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetComponent.GetItemsOfCategory
struct UWieldableItemSetComponent_GetItemsOfCategory_Params
{
	class UClass*                                      ItemCategory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.WieldableItemSetComponent.GetItemIndexInCategorySet
struct UWieldableItemSetComponent_GetItemIndexInCategorySet_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemCategory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetComponent.GetItemIndex
struct UWieldableItemSetComponent_GetItemIndex_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetComponent.GetItemFromSlot
struct UWieldableItemSetComponent_GetItemFromSlot_Params
{
	class UClass*                                      ItemCategory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetComponent.GetItem
struct UWieldableItemSetComponent_GetItem_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetComponent.ContainsItemOfType
struct UWieldableItemSetComponent_ContainsItemOfType_Params
{
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetComponent.Contains
struct UWieldableItemSetComponent_Contains_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetComponent.AddItemToSlot
struct UWieldableItemSetComponent_AddItemToSlot_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemCategory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableItemSetComponent.AddItem
struct UWieldableItemSetComponent_AddItem_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldableTestFunctions.ChangeItemSize
struct UWieldableTestFunctions_ChangeItemSize_Params
{
	class AWieldableItem*                              InWieldable;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWieldableItemSize>                    InNewSize;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WieldedItemComponent.WieldItem
struct UWieldedItemComponent_WieldItem_Params
{
	TScriptInterface<class UWieldableInterface>        Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Fast;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWieldItemReturnCode>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldedItemComponent.UnstashItem
struct UWieldedItemComponent_UnstashItem_Params
{
	TEnumAsByte<EStashReason>                          Reason;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WieldedItemComponent.StashItem
struct UWieldedItemComponent_StashItem_Params
{
	TEnumAsByte<EStashReason>                          Reason;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WieldedItemComponent.SlowStashItem
struct UWieldedItemComponent_SlowStashItem_Params
{
	TEnumAsByte<EStashReason>                          Reason;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WieldedItemComponent.Server_WieldRPC
struct UWieldedItemComponent_Server_WieldRPC_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InEpochId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WieldedItemComponent.OnRep_HeldItem
struct UWieldedItemComponent_OnRep_HeldItem_Params
{
};

// Function Athena.WieldedItemComponent.IsItemWielded
struct UWieldedItemComponent_IsItemWielded_Params
{
	class AActor*                                      ItemActor;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldedItemComponent.IsItemStashed
struct UWieldedItemComponent_IsItemStashed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldedItemComponent.GetWieldedItemIfNotStashed
struct UWieldedItemComponent_GetWieldedItemIfNotStashed_Params
{
	TScriptInterface<class UWieldableInterface>        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldedItemComponent.GetWieldedItem
struct UWieldedItemComponent_GetWieldedItem_Params
{
	TScriptInterface<class UWieldableInterface>        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.WieldedItemComponent.Client_WieldItemCorrectionRPC
struct UWieldedItemComponent_Client_WieldItemCorrectionRPC_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WieldedItemComponent.Client_WieldItem
struct UWieldedItemComponent_Client_WieldItem_Params
{
	struct FNetActorPtr                                Item;                                                     // (Parm)
	int                                                InEpochId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Fast;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena.WorldRegionBlueprintFunctionLibrary.GetSeaIdFromWorldSpaceLocation
struct UWorldRegionBlueprintFunctionLibrary_GetSeaIdFromWorldSpaceLocation_Params
{
	struct FVector                                     InLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena.NamedObjectInterface.GetObjectDisplayName
struct UNamedObjectInterface_GetObjectDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena.TelemetrySubjectInterface.GetSubjectName
struct UTelemetrySubjectInterface_GetSubjectName_Params
{
	class FString                                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Athena.TelemetrySubjectInterface.GetSubjectId
struct UTelemetrySubjectInterface_GetSubjectId_Params
{
	class FString                                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
