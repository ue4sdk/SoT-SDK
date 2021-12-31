#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Interaction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Interaction.InteractableComponent.SetBoxOrigin
struct UInteractableComponent_SetBoxOrigin_Params
{
	FVector                                            IntBoxOrigin;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Interaction.InteractableComponent.SetBoxExtent
struct UInteractableComponent_SetBoxExtent_Params
{
	FVector                                            InBoxExtent;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Interaction.InteractableComponent.GetInteractableArea
struct UInteractableComponent_GetInteractableArea_Params
{
	UInteractableArea*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Interaction.InteractableComponent.GetBoxWorldOrigin
struct UInteractableComponent_GetBoxWorldOrigin_Params
{
	FVector                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Interaction.InteractableComponent.GetBoxSphereRadius
struct UInteractableComponent_GetBoxSphereRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Interaction.InteractableComponent.GetBoxOrigin
struct UInteractableComponent_GetBoxOrigin_Params
{
	FVector                                            ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Interaction.InteractableComponent.GetBoxExtent
struct UInteractableComponent_GetBoxExtent_Params
{
	FVector                                            ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Interaction.CharacterInteractionComponent.IsInteractionValid
struct UCharacterInteractionComponent_IsInteractionValid_Params
{
	UObject*                                           InInteractable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Interaction.CharacterInteractionComponent.InvalidateOptimalObject
struct UCharacterInteractionComponent_InvalidateOptimalObject_Params
{
};

// Function Interaction.CharacterInteractionComponent.GetOptimalFocusObject
struct UCharacterInteractionComponent_GetOptimalFocusObject_Params
{
	UInteractableArea*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Interaction.CharacterInteractionComponent.ClearAllPolicies
struct UCharacterInteractionComponent_ClearAllPolicies_Params
{
};

// Function Interaction.InteractableArea.SetParent
struct UInteractableArea_SetParent_Params
{
	AActor*                                            InParent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interaction.InteractableArea.SetInteractable
struct UInteractableArea_SetInteractable_Params
{
	UObject*                                           InInteractable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interaction.InteractableArea.SetAreaName
struct UInteractableArea_SetAreaName_Params
{
	FName                                              InName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Interaction.InteractableArea.SetAreaBounds
struct UInteractableArea_SetAreaBounds_Params
{
	FBoxSphereBounds                                   InBounds;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Interaction.InteractableArea.GetParent
struct UInteractableArea_GetParent_Params
{
	AActor*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Interaction.InteractableArea.GetInteractable
struct UInteractableArea_GetInteractable_Params
{
	UObject*                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Interaction.InteractableArea.GetAreaName
struct UInteractableArea_GetAreaName_Params
{
	FName                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Interaction.InteractableArea.GetAreaLocation
struct UInteractableArea_GetAreaLocation_Params
{
	FVector                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Interaction.InteractableArea.GetAreaBounds
struct UInteractableArea_GetAreaBounds_Params
{
	FBoxSphereBounds                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Interaction.InteractableInterface.ShouldDrawTooltipInWorldSpace
struct UInteractableInterface_ShouldDrawTooltipInWorldSpace_Params
{
	AActor*                                            InInteractor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            DesiredTooltipWorldPosition;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Interaction.InteractableInterface.IsInteractableDisabled
struct UInteractableInterface_IsInteractableDisabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Interaction.InteractableInterface.Interact
struct UInteractableInterface_Interact_Params
{
	AActor*                                            InInteractor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            NotificationInputId;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interaction.InteractableInterface.GetInteractionState
struct UInteractableInterface_GetInteractionState_Params
{
	TEnumAsByte<EInteractableState>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Interaction.InteractableInterface.GetFrontFacingVector
struct UInteractableInterface_GetFrontFacingVector_Params
{
	FVector                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Interaction.InteractableInterface.GetClosestInteractionPoint
struct UInteractableInterface_GetClosestInteractionPoint_Params
{
	FVector                                            ReferencePosition;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              OutInteractionPointRadius;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FVector                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Interaction.InteractableInterface.GetActorsToIgnoreDuringOcclusionChecker
struct UInteractableInterface_GetActorsToIgnoreDuringOcclusionChecker_Params
{
	TArray<AActor*>                                    ActorsToIgnore;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function Interaction.InteractableInterface.GetActionRulesComponent
struct UInteractableInterface_GetActionRulesComponent_Params
{
	UActionRulesComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Interaction.InteractableInterface.DoesRequireNotSwimming
struct UInteractableInterface_DoesRequireNotSwimming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Interaction.InteractableInterface.DoesRequireNotBeingAirborne
struct UInteractableInterface_DoesRequireNotBeingAirborne_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Interaction.InteractableInterface.DoesRequireFacingFront
struct UInteractableInterface_DoesRequireFacingFront_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Interaction.InteractableInterface.CanInteractWithNotificationInputId
struct UInteractableInterface_CanInteractWithNotificationInputId_Params
{
	AActor*                                            InInteractor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            NotificationInputId;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Interaction.InteractableInterface.CanInteract
struct UInteractableInterface_CanInteract_Params
{
	AActor*                                            InInteractor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Interaction.InteractableBlueprintFunctionLibrary.SetInteractionState
struct UInteractableBlueprintFunctionLibrary_SetInteractionState_Params
{
	AActor*                                            InteractableActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractableState>                    NewInteractableState;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
