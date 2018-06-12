// Sea of Thieves (1.1.1) SDK

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
// struct FVector                 IntBoxOrigin                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UInteractableComponent::SetBoxOrigin(const struct FVector& IntBoxOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.SetBoxOrigin");

	UInteractableComponent_SetBoxOrigin_Params params;
	params.IntBoxOrigin = IntBoxOrigin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interaction.InteractableComponent.SetBoxExtent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InBoxExtent                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UInteractableComponent::SetBoxExtent(const struct FVector& InBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.SetBoxExtent");

	UInteractableComponent_SetBoxExtent_Params params;
	params.InBoxExtent = InBoxExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interaction.InteractableComponent.GetInteractableArea
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInteractableArea*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UInteractableArea* UInteractableComponent::GetInteractableArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.GetInteractableArea");

	UInteractableComponent_GetInteractableArea_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Interaction.InteractableComponent.GetBoxWorldOrigin
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UInteractableComponent::GetBoxWorldOrigin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.GetBoxWorldOrigin");

	UInteractableComponent_GetBoxWorldOrigin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Interaction.InteractableComponent.GetBoxSphereRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInteractableComponent::GetBoxSphereRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.GetBoxSphereRadius");

	UInteractableComponent_GetBoxSphereRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Interaction.InteractableComponent.GetBoxOrigin
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector UInteractableComponent::GetBoxOrigin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.GetBoxOrigin");

	UInteractableComponent_GetBoxOrigin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Interaction.InteractableComponent.GetBoxExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector UInteractableComponent::GetBoxExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.GetBoxExtent");

	UInteractableComponent_GetBoxExtent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Interaction.CharacterInteractionComponent.IsInteractionValid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InInteractable                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterInteractionComponent::IsInteractionValid(class AActor* InInteractable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.CharacterInteractionComponent.IsInteractionValid");

	UCharacterInteractionComponent_IsInteractionValid_Params params;
	params.InInteractable = InInteractable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Interaction.CharacterInteractionComponent.InvalidateOptimalObject
// (Final, Native, Public, BlueprintCallable)

void UCharacterInteractionComponent::InvalidateOptimalObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.CharacterInteractionComponent.InvalidateOptimalObject");

	UCharacterInteractionComponent_InvalidateOptimalObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interaction.CharacterInteractionComponent.GetOptimalFocusObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInteractableArea*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UInteractableArea* UCharacterInteractionComponent::GetOptimalFocusObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.CharacterInteractionComponent.GetOptimalFocusObject");

	UCharacterInteractionComponent_GetOptimalFocusObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Interaction.CharacterInteractionComponent.ClearAllPolicies
// (Final, Native, Public, BlueprintCallable)

void UCharacterInteractionComponent::ClearAllPolicies()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.CharacterInteractionComponent.ClearAllPolicies");

	UCharacterInteractionComponent_ClearAllPolicies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interaction.InteractableArea.SetParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InParent                       (Parm, ZeroConstructor, IsPlainOldData)

void UInteractableArea::SetParent(class AActor* InParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.SetParent");

	UInteractableArea_SetParent_Params params;
	params.InParent = InParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interaction.InteractableArea.SetInteractable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InInteractable                 (Parm, ZeroConstructor, IsPlainOldData)

void UInteractableArea::SetInteractable(class AActor* InInteractable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.SetInteractable");

	UInteractableArea_SetInteractable_Params params;
	params.InInteractable = InInteractable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interaction.InteractableArea.SetAreaName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UInteractableArea::SetAreaName(const struct FName& InName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.SetAreaName");

	UInteractableArea_SetAreaName_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interaction.InteractableArea.SetAreaBounds
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBoxSphereBounds        InBounds                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UInteractableArea::SetAreaBounds(const struct FBoxSphereBounds& InBounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.SetAreaBounds");

	UInteractableArea_SetAreaBounds_Params params;
	params.InBounds = InBounds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interaction.InteractableArea.GetParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UInteractableArea::GetParent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.GetParent");

	UInteractableArea_GetParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Interaction.InteractableArea.GetInteractable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UInteractableArea::GetInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.GetInteractable");

	UInteractableArea_GetInteractable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Interaction.InteractableArea.GetAreaName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UInteractableArea::GetAreaName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.GetAreaName");

	UInteractableArea_GetAreaName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Interaction.InteractableArea.GetAreaBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBoxSphereBounds        ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FBoxSphereBounds UInteractableArea::GetAreaBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.GetAreaBounds");

	UInteractableArea_GetAreaBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.ShouldDrawTooltipInWorldSpace
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DesiredTooltipWorldPosition    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInteractableInterface::ShouldDrawTooltipInWorldSpace(class AActor* InInteractor, struct FVector* DesiredTooltipWorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.ShouldDrawTooltipInWorldSpace");

	UInteractableInterface_ShouldDrawTooltipInWorldSpace_Params params;
	params.InInteractor = InInteractor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredTooltipWorldPosition != nullptr)
		*DesiredTooltipWorldPosition = params.DesiredTooltipWorldPosition;

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.SetInteractionsDisabled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Disabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UInteractableInterface::SetInteractionsDisabled(bool Disabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.SetInteractionsDisabled");

	UInteractableInterface_SetInteractionsDisabled_Params params;
	params.Disabled = Disabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interaction.InteractableInterface.InteractionsCanBeDisabled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInteractableInterface::InteractionsCanBeDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.InteractionsCanBeDisabled");

	UInteractableInterface_InteractionsCanBeDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.Interact
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  NotificationInputId            (Parm, ZeroConstructor, IsPlainOldData)

void UInteractableInterface::Interact(class AActor* InInteractor, class UClass* NotificationInputId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.Interact");

	UInteractableInterface_Interact_Params params;
	params.InInteractor = InInteractor;
	params.NotificationInputId = NotificationInputId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interaction.InteractableInterface.GetInteractionsDisabled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInteractableInterface::GetInteractionsDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.GetInteractionsDisabled");

	UInteractableInterface_GetInteractionsDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.GetFrontFacingVector
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UInteractableInterface::GetFrontFacingVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.GetFrontFacingVector");

	UInteractableInterface_GetFrontFacingVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.GetClosestInteractionPoint
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UInteractableInterface::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.GetClosestInteractionPoint");

	UInteractableInterface_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.GetActorsToIgnoreDuringOcclusionChecker
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          ActorsToIgnore                 (Parm, OutParm, ZeroConstructor)

void UInteractableInterface::GetActorsToIgnoreDuringOcclusionChecker(TArray<class AActor*>* ActorsToIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.GetActorsToIgnoreDuringOcclusionChecker");

	UInteractableInterface_GetActorsToIgnoreDuringOcclusionChecker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorsToIgnore != nullptr)
		*ActorsToIgnore = params.ActorsToIgnore;
}


// Function Interaction.InteractableInterface.GetActionRulesComponent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UActionRulesComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActionRulesComponent* UInteractableInterface::GetActionRulesComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.GetActionRulesComponent");

	UInteractableInterface_GetActionRulesComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.DoesRequireNotBeingAirborne
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInteractableInterface::DoesRequireNotBeingAirborne()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.DoesRequireNotBeingAirborne");

	UInteractableInterface_DoesRequireNotBeingAirborne_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.DoesRequireFacingFront
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInteractableInterface::DoesRequireFacingFront()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.DoesRequireFacingFront");

	UInteractableInterface_DoesRequireFacingFront_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.CanInteractWithNotificationInputId
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  NotificationInputId            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInteractableInterface::CanInteractWithNotificationInputId(class AActor* InInteractor, class UClass* NotificationInputId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.CanInteractWithNotificationInputId");

	UInteractableInterface_CanInteractWithNotificationInputId_Params params;
	params.InInteractor = InInteractor;
	params.NotificationInputId = NotificationInputId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.CanInteract
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInteractableInterface::CanInteract(class AActor* InInteractor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.CanInteract");

	UInteractableInterface_CanInteract_Params params;
	params.InInteractor = InInteractor;

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
