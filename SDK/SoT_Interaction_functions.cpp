// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Interaction_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interaction.InteractableComponent.SetBoxOrigin
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FVector                        IntBoxOrigin                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UInteractableComponent::SetBoxOrigin(const FVector& IntBoxOrigin)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableComponent.SetBoxOrigin"));

	UInteractableComponent_SetBoxOrigin_Params params;
	params.IntBoxOrigin = IntBoxOrigin;

	UObject::ProcessEvent(fn, &params);
}


// Function Interaction.InteractableComponent.SetBoxExtent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FVector                        InBoxExtent                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UInteractableComponent::SetBoxExtent(const FVector& InBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableComponent.SetBoxExtent"));

	UInteractableComponent_SetBoxExtent_Params params;
	params.InBoxExtent = InBoxExtent;

	UObject::ProcessEvent(fn, &params);
}


// Function Interaction.InteractableComponent.GetInteractableArea
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UInteractableArea*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UInteractableArea* UInteractableComponent::GetInteractableArea()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableComponent.GetInteractableArea"));

	UInteractableComponent_GetInteractableArea_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableComponent.GetBoxWorldOrigin
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector UInteractableComponent::GetBoxWorldOrigin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableComponent.GetBoxWorldOrigin"));

	UInteractableComponent_GetBoxWorldOrigin_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableComponent.GetBoxSphereRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInteractableComponent::GetBoxSphereRadius()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableComponent.GetBoxSphereRadius"));

	UInteractableComponent_GetBoxSphereRadius_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableComponent.GetBoxOrigin
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FVector                        ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

FVector UInteractableComponent::GetBoxOrigin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableComponent.GetBoxOrigin"));

	UInteractableComponent_GetBoxOrigin_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableComponent.GetBoxExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FVector                        ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

FVector UInteractableComponent::GetBoxExtent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableComponent.GetBoxExtent"));

	UInteractableComponent_GetBoxExtent_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.CharacterInteractionComponent.IsInteractionValid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UObject*                       InInteractable                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterInteractionComponent::IsInteractionValid(UObject* InInteractable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.CharacterInteractionComponent.IsInteractionValid"));

	UCharacterInteractionComponent_IsInteractionValid_Params params;
	params.InInteractable = InInteractable;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.CharacterInteractionComponent.InvalidateOptimalObject
// (Final, Native, Public, BlueprintCallable)

void UCharacterInteractionComponent::InvalidateOptimalObject()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.CharacterInteractionComponent.InvalidateOptimalObject"));

	UCharacterInteractionComponent_InvalidateOptimalObject_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Interaction.CharacterInteractionComponent.GetOptimalFocusObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UInteractableArea*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UInteractableArea* UCharacterInteractionComponent::GetOptimalFocusObject()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.CharacterInteractionComponent.GetOptimalFocusObject"));

	UCharacterInteractionComponent_GetOptimalFocusObject_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.CharacterInteractionComponent.ClearAllPolicies
// (Final, Native, Public, BlueprintCallable)

void UCharacterInteractionComponent::ClearAllPolicies()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.CharacterInteractionComponent.ClearAllPolicies"));

	UCharacterInteractionComponent_ClearAllPolicies_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Interaction.InteractableArea.SetParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// AActor*                        InParent                       (Parm, ZeroConstructor, IsPlainOldData)

void UInteractableArea::SetParent(AActor* InParent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableArea.SetParent"));

	UInteractableArea_SetParent_Params params;
	params.InParent = InParent;

	UObject::ProcessEvent(fn, &params);
}


// Function Interaction.InteractableArea.SetInteractable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UObject*                       InInteractable                 (Parm, ZeroConstructor, IsPlainOldData)

void UInteractableArea::SetInteractable(UObject* InInteractable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableArea.SetInteractable"));

	UInteractableArea_SetInteractable_Params params;
	params.InInteractable = InInteractable;

	UObject::ProcessEvent(fn, &params);
}


// Function Interaction.InteractableArea.SetAreaName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FName                          InName                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UInteractableArea::SetAreaName(const FName& InName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableArea.SetAreaName"));

	UInteractableArea_SetAreaName_Params params;
	params.InName = InName;

	UObject::ProcessEvent(fn, &params);
}


// Function Interaction.InteractableArea.SetAreaBounds
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FBoxSphereBounds               InBounds                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UInteractableArea::SetAreaBounds(const FBoxSphereBounds& InBounds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableArea.SetAreaBounds"));

	UInteractableArea_SetAreaBounds_Params params;
	params.InBounds = InBounds;

	UObject::ProcessEvent(fn, &params);
}


// Function Interaction.InteractableArea.GetParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AActor*                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

AActor* UInteractableArea::GetParent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableArea.GetParent"));

	UInteractableArea_GetParent_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableArea.GetInteractable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UObject*                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UObject* UInteractableArea::GetInteractable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableArea.GetInteractable"));

	UInteractableArea_GetInteractable_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableArea.GetAreaName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FName                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FName UInteractableArea::GetAreaName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableArea.GetAreaName"));

	UInteractableArea_GetAreaName_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableArea.GetAreaLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector UInteractableArea::GetAreaLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableArea.GetAreaLocation"));

	UInteractableArea_GetAreaLocation_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableArea.GetAreaBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FBoxSphereBounds               ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

FBoxSphereBounds UInteractableArea::GetAreaBounds()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableArea.GetAreaBounds"));

	UInteractableArea_GetAreaBounds_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.ShouldDrawTooltipInWorldSpace
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// AActor*                        InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        DesiredTooltipWorldPosition    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInteractableInterface::ShouldDrawTooltipInWorldSpace(AActor* InInteractor, FVector* DesiredTooltipWorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableInterface.ShouldDrawTooltipInWorldSpace"));

	UInteractableInterface_ShouldDrawTooltipInWorldSpace_Params params;
	params.InInteractor = InInteractor;

	UObject::ProcessEvent(fn, &params);

	if (DesiredTooltipWorldPosition != nullptr)
		*DesiredTooltipWorldPosition = params.DesiredTooltipWorldPosition;

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.IsInteractableDisabled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInteractableInterface::IsInteractableDisabled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableInterface.IsInteractableDisabled"));

	UInteractableInterface_IsInteractableDisabled_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.Interact
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// AActor*                        InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        NotificationInputId            (Parm, ZeroConstructor, IsPlainOldData)

void UInteractableInterface::Interact(AActor* InInteractor, UClass* NotificationInputId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableInterface.Interact"));

	UInteractableInterface_Interact_Params params;
	params.InInteractor = InInteractor;
	params.NotificationInputId = NotificationInputId;

	UObject::ProcessEvent(fn, &params);
}


// Function Interaction.InteractableInterface.GetInteractionState
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EInteractableState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EInteractableState> UInteractableInterface::GetInteractionState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableInterface.GetInteractionState"));

	UInteractableInterface_GetInteractionState_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.GetFrontFacingVector
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector UInteractableInterface::GetFrontFacingVector()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableInterface.GetFrontFacingVector"));

	UInteractableInterface_GetFrontFacingVector_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.GetClosestInteractionPoint
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FVector                        ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector UInteractableInterface::GetClosestInteractionPoint(const FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableInterface.GetClosestInteractionPoint"));

	UInteractableInterface_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	UObject::ProcessEvent(fn, &params);

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.GetActorsToIgnoreDuringOcclusionChecker
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<AActor*>                ActorsToIgnore                 (Parm, OutParm, ZeroConstructor)

void UInteractableInterface::GetActorsToIgnoreDuringOcclusionChecker(TArray<AActor*>* ActorsToIgnore)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableInterface.GetActorsToIgnoreDuringOcclusionChecker"));

	UInteractableInterface_GetActorsToIgnoreDuringOcclusionChecker_Params params;

	UObject::ProcessEvent(fn, &params);

	if (ActorsToIgnore != nullptr)
		*ActorsToIgnore = params.ActorsToIgnore;
}


// Function Interaction.InteractableInterface.GetActionRulesComponent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// UActionRulesComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

UActionRulesComponent* UInteractableInterface::GetActionRulesComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableInterface.GetActionRulesComponent"));

	UInteractableInterface_GetActionRulesComponent_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.DoesRequireNotSwimming
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInteractableInterface::DoesRequireNotSwimming()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableInterface.DoesRequireNotSwimming"));

	UInteractableInterface_DoesRequireNotSwimming_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.DoesRequireNotBeingAirborne
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInteractableInterface::DoesRequireNotBeingAirborne()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableInterface.DoesRequireNotBeingAirborne"));

	UInteractableInterface_DoesRequireNotBeingAirborne_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.DoesRequireFacingFront
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInteractableInterface::DoesRequireFacingFront()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableInterface.DoesRequireFacingFront"));

	UInteractableInterface_DoesRequireFacingFront_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.CanInteractWithNotificationInputId
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// AActor*                        InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        NotificationInputId            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInteractableInterface::CanInteractWithNotificationInputId(AActor* InInteractor, UClass* NotificationInputId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableInterface.CanInteractWithNotificationInputId"));

	UInteractableInterface_CanInteractWithNotificationInputId_Params params;
	params.InInteractor = InInteractor;
	params.NotificationInputId = NotificationInputId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.CanInteract
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// AActor*                        InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInteractableInterface::CanInteract(AActor* InInteractor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableInterface.CanInteract"));

	UInteractableInterface_CanInteract_Params params;
	params.InInteractor = InInteractor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableBlueprintFunctionLibrary.SetInteractionState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AActor*                        InteractableActor              (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractableState> NewInteractableState           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UInteractableBlueprintFunctionLibrary::SetInteractionState(AActor* InteractableActor, TEnumAsByte<EInteractableState> NewInteractableState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableBlueprintFunctionLibrary.SetInteractionState"));

	UInteractableBlueprintFunctionLibrary_SetInteractionState_Params params;
	params.InteractableActor = InteractableActor;
	params.NewInteractableState = NewInteractableState;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
