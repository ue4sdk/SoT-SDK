// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Interaction_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableComponent.SetBoxOrigin"));

	struct
	{
		struct FVector                 IntBoxOrigin;
	} params;

	params.IntBoxOrigin = IntBoxOrigin;

	UObject::ProcessEvent(fn, &params);
}


// Function Interaction.InteractableComponent.SetBoxExtent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InBoxExtent                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UInteractableComponent::SetBoxExtent(const struct FVector& InBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableComponent.SetBoxExtent"));

	struct
	{
		struct FVector                 InBoxExtent;
	} params;

	params.InBoxExtent = InBoxExtent;

	UObject::ProcessEvent(fn, &params);
}


// Function Interaction.InteractableComponent.GetInteractableArea
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInteractableArea*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UInteractableArea* UInteractableComponent::GetInteractableArea()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableComponent.GetInteractableArea"));

	struct
	{
		class UInteractableArea*       ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableComponent.GetBoxWorldOrigin
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UInteractableComponent::GetBoxWorldOrigin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableComponent.GetBoxWorldOrigin"));

	struct
	{
		struct FVector                 ReturnValue;
	} params;


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

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableComponent.GetBoxOrigin
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector UInteractableComponent::GetBoxOrigin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableComponent.GetBoxOrigin"));

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableComponent.GetBoxExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector UInteractableComponent::GetBoxExtent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableComponent.GetBoxExtent"));

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.CharacterInteractionComponent.IsInteractionValid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 InInteractable                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterInteractionComponent::IsInteractionValid(class UObject* InInteractable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.CharacterInteractionComponent.IsInteractionValid"));

	struct
	{
		class UObject*                 InInteractable;
		bool                           ReturnValue;
	} params;

	params.InInteractable = InInteractable;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.CharacterInteractionComponent.InvalidateOptimalObject
// (Final, Native, Public, BlueprintCallable)

void UCharacterInteractionComponent::InvalidateOptimalObject()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.CharacterInteractionComponent.InvalidateOptimalObject"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Interaction.CharacterInteractionComponent.GetOptimalFocusObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInteractableArea*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UInteractableArea* UCharacterInteractionComponent::GetOptimalFocusObject()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.CharacterInteractionComponent.GetOptimalFocusObject"));

	struct
	{
		class UInteractableArea*       ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.CharacterInteractionComponent.ClearAllPolicies
// (Final, Native, Public, BlueprintCallable)

void UCharacterInteractionComponent::ClearAllPolicies()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.CharacterInteractionComponent.ClearAllPolicies"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Interaction.InteractableArea.SetParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InParent                       (Parm, ZeroConstructor, IsPlainOldData)

void UInteractableArea::SetParent(class AActor* InParent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableArea.SetParent"));

	struct
	{
		class AActor*                  InParent;
	} params;

	params.InParent = InParent;

	UObject::ProcessEvent(fn, &params);
}


// Function Interaction.InteractableArea.SetInteractable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 InInteractable                 (Parm, ZeroConstructor, IsPlainOldData)

void UInteractableArea::SetInteractable(class UObject* InInteractable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableArea.SetInteractable"));

	struct
	{
		class UObject*                 InInteractable;
	} params;

	params.InInteractable = InInteractable;

	UObject::ProcessEvent(fn, &params);
}


// Function Interaction.InteractableArea.SetAreaName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UInteractableArea::SetAreaName(const struct FName& InName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableArea.SetAreaName"));

	struct
	{
		struct FName                   InName;
	} params;

	params.InName = InName;

	UObject::ProcessEvent(fn, &params);
}


// Function Interaction.InteractableArea.SetAreaBounds
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBoxSphereBounds        InBounds                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UInteractableArea::SetAreaBounds(const struct FBoxSphereBounds& InBounds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableArea.SetAreaBounds"));

	struct
	{
		struct FBoxSphereBounds        InBounds;
	} params;

	params.InBounds = InBounds;

	UObject::ProcessEvent(fn, &params);
}


// Function Interaction.InteractableArea.GetParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UInteractableArea::GetParent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableArea.GetParent"));

	struct
	{
		class AActor*                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableArea.GetInteractable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UInteractableArea::GetInteractable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableArea.GetInteractable"));

	struct
	{
		class UObject*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableArea.GetAreaName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UInteractableArea::GetAreaName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableArea.GetAreaName"));

	struct
	{
		struct FName                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableArea.GetAreaLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UInteractableArea::GetAreaLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableArea.GetAreaLocation"));

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableArea.GetAreaBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBoxSphereBounds        ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FBoxSphereBounds UInteractableArea::GetAreaBounds()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableArea.GetAreaBounds"));

	struct
	{
		struct FBoxSphereBounds        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableInterface.ShouldDrawTooltipInWorldSpace"));

	struct
	{
		class AActor*                  InInteractor;
		struct FVector                 DesiredTooltipWorldPosition;
		bool                           ReturnValue;
	} params;

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

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.Interact
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  NotificationInputId            (Parm, ZeroConstructor, IsPlainOldData)

void UInteractableInterface::Interact(class AActor* InInteractor, class UClass* NotificationInputId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableInterface.Interact"));

	struct
	{
		class AActor*                  InInteractor;
		class UClass*                  NotificationInputId;
	} params;

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

	struct
	{
		TEnumAsByte<EInteractableState> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.GetFrontFacingVector
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UInteractableInterface::GetFrontFacingVector()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableInterface.GetFrontFacingVector"));

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableInterface.GetClosestInteractionPoint"));

	struct
	{
		struct FVector                 ReferencePosition;
		float                          OutInteractionPointRadius;
		struct FVector                 ReturnValue;
	} params;

	params.ReferencePosition = ReferencePosition;

	UObject::ProcessEvent(fn, &params);

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableInterface.GetActorsToIgnoreDuringOcclusionChecker"));

	struct
	{
		TArray<class AActor*>          ActorsToIgnore;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ActorsToIgnore != nullptr)
		*ActorsToIgnore = params.ActorsToIgnore;
}


// Function Interaction.InteractableInterface.GetActionRulesComponent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UActionRulesComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActionRulesComponent* UInteractableInterface::GetActionRulesComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableInterface.GetActionRulesComponent"));

	struct
	{
		class UActionRulesComponent*   ReturnValue;
	} params;


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

	struct
	{
		bool                           ReturnValue;
	} params;


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

	struct
	{
		bool                           ReturnValue;
	} params;


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

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableInterface.CanInteractWithNotificationInputId"));

	struct
	{
		class AActor*                  InInteractor;
		class UClass*                  NotificationInputId;
		bool                           ReturnValue;
	} params;

	params.InInteractor = InInteractor;
	params.NotificationInputId = NotificationInputId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.CanInteract
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInteractableInterface::CanInteract(class AActor* InInteractor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interaction.InteractableInterface.CanInteract"));

	struct
	{
		class AActor*                  InInteractor;
		bool                           ReturnValue;
	} params;

	params.InInteractor = InInteractor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
