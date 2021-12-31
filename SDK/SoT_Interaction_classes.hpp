#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Interaction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Interaction.InteractableComponent
// 0x0050 (0x0118 - 0x00C8)
class UInteractableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	FName                                              FeatureFlag;                                              // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FVector                                            BoxExtent;                                                // 0x00D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FVector                                            BoxOrigin;                                                // 0x00E4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FRotator                                           BoxRotation;                                              // 0x00F0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MayBeGrouped : 1;                                         // 0x00FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      ProxyForActorInteraction : 1;                             // 0x00FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	bool                                               RequiresFacingFront;                                      // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresNotAirborne;                                      // 0x0101(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresNotSwimming;                                      // 0x0102(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0103(0x0001) MISSED OFFSET
	float                                              InteractionRadius;                                        // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UInteractableArea*                                 InteractableArea;                                         // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EInteractableState>                    CurrentInteractionState;                                  // 0x0110(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0111(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Interaction.InteractableComponent"));
		return ptr;
	}


	void SetBoxOrigin(const FVector& IntBoxOrigin);
	void SetBoxExtent(const FVector& InBoxExtent);
	UInteractableArea* GetInteractableArea();
	FVector GetBoxWorldOrigin();
	float GetBoxSphereRadius();
	FVector GetBoxOrigin();
	FVector GetBoxExtent();
};


// Class Interaction.InteractionValidatorSetterInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractionValidatorSetterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Interaction.InteractionValidatorSetterInterface"));
		return ptr;
	}

};


// Class Interaction.CharacterInteractionComponent
// 0x00C0 (0x0680 - 0x05C0)
class UCharacterInteractionComponent : public UBoxComponent
{
public:
	UInteractableArea*                                 CurrentOptimalInteractable;                               // 0x05C0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x05C8(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Interaction.CharacterInteractionComponent"));
		return ptr;
	}


	bool IsInteractionValid(UObject* InInteractable);
	void InvalidateOptimalObject();
	UInteractableArea* GetOptimalFocusObject();
	void ClearAllPolicies();
};


// Class Interaction.GroupedInteractableAreaComponent
// 0x0000 (0x00C8 - 0x00C8)
class UGroupedInteractableAreaComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Interaction.GroupedInteractableAreaComponent"));
		return ptr;
	}

};


// Class Interaction.InteractableArea
// 0x0038 (0x0060 - 0x0028)
class UInteractableArea : public UObject
{
public:
	FBoxSphereBounds                                   Bounds;                                                   // 0x0028(0x001C) (ZeroConstructor, IsPlainOldData)
	FName                                              Name;                                                     // 0x0044(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	UObject*                                           Interactable;                                             // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	AActor*                                            Parent;                                                   // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Interaction.InteractableArea"));
		return ptr;
	}


	void SetParent(AActor* InParent);
	void SetInteractable(UObject* InInteractable);
	void SetAreaName(const FName& InName);
	void SetAreaBounds(const FBoxSphereBounds& InBounds);
	AActor* GetParent();
	UObject* GetInteractable();
	FName GetAreaName();
	FVector GetAreaLocation();
	FBoxSphereBounds GetAreaBounds();
};


// Class Interaction.InteractableInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Interaction.InteractableInterface"));
		return ptr;
	}


	bool ShouldDrawTooltipInWorldSpace(AActor* InInteractor, FVector* DesiredTooltipWorldPosition);
	bool IsInteractableDisabled();
	void Interact(AActor* InInteractor, UClass* NotificationInputId);
	TEnumAsByte<EInteractableState> GetInteractionState();
	FVector GetFrontFacingVector();
	FVector GetClosestInteractionPoint(const FVector& ReferencePosition, float* OutInteractionPointRadius);
	void GetActorsToIgnoreDuringOcclusionChecker(TArray<AActor*>* ActorsToIgnore);
	UActionRulesComponent* GetActionRulesComponent();
	bool DoesRequireNotSwimming();
	bool DoesRequireNotBeingAirborne();
	bool DoesRequireFacingFront();
	bool CanInteractWithNotificationInputId(AActor* InInteractor, UClass* NotificationInputId);
	bool CanInteract(AActor* InInteractor);
};


// Class Interaction.InteractableBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UInteractableBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Interaction.InteractableBlueprintFunctionLibrary"));
		return ptr;
	}


	static void SetInteractionState(AActor* InteractableActor, TEnumAsByte<EInteractableState> NewInteractableState);
};


// Class Interaction.InteractableIdentifierInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractableIdentifierInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Interaction.InteractableIdentifierInterface"));
		return ptr;
	}

};


// Class Interaction.InteractableServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractableServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Interaction.InteractableServiceInterface"));
		return ptr;
	}

};


// Class Interaction.InteractableService
// 0x0048 (0x0070 - 0x0028)
class UInteractableService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TArray<UInteractableArea*>                         InteractableAreas;                                        // 0x0038(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Interaction.InteractableService"));
		return ptr;
	}

};


// Class Interaction.InteractionValidatorOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractionValidatorOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Interaction.InteractionValidatorOwnerInterface"));
		return ptr;
	}

};


// Class Interaction.InteractorInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Interaction.InteractorInterface"));
		return ptr;
	}

};


// Class Interaction.MockActorWithCharacterInteractionComponent
// 0x00B0 (0x0690 - 0x05E0)
class AMockActorWithCharacterInteractionComponent : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05E0(0x0008) MISSED OFFSET
	UCharacterInteractionComponent*                    CharacterInteractionComponent;                            // 0x05E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x05F0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Interaction.MockActorWithCharacterInteractionComponent"));
		return ptr;
	}

};


// Class Interaction.MockInteractableService
// 0x0018 (0x0040 - 0x0028)
class UMockInteractableService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Interaction.MockInteractableService"));
		return ptr;
	}

};


// Class Interaction.MockInteractorActor
// 0x0030 (0x0400 - 0x03D0)
class AMockInteractorActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	UObject*                                           FocusedInteractable;                                      // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	UObject*                                           InteractedObject;                                         // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	UClass*                                            InteractNotificationType;                                 // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<UClass*>                                    ValidInteractNotificationIds;                             // 0x03F0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Interaction.MockInteractorActor"));
		return ptr;
	}

};


// Class Interaction.SelfInteractionInterface
// 0x0000 (0x0028 - 0x0028)
class USelfInteractionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Interaction.SelfInteractionInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
