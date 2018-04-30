#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Engine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Engine.Actor
// 0x0448 (0x0470 - 0x0028)
class AActor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	unsigned char                                      bAutoDestroyWhenFinished : 1;                             // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bAllowReceiveTickEventOnDedicatedServer : 1;              // 0x01E3(0x0001)
	unsigned char                                      bAllowRemovalFromServerWhenCollisionMerged : 1;           // 0x01E3(0x0001) (Edit)
	bool                                               bDoOverlapNotifiesOnLoad;                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bExchangedRoles : 1;                                      // 0x01E3(0x0001) (Transient)
	unsigned char                                      bHidden : 1;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      bCanBeDamaged : 1;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bPendingNetUpdate : 1;                                    // 0x01E3(0x0001) (Transient)
	unsigned char                                      bNetTemporary : 1;                                        // 0x01E3(0x0001)
	unsigned char                                      bActorIsBeingDestroyed : 1;                               // 0x01E3(0x0001) (Transient, DuplicateTransient)
	unsigned char                                      bNetLoadOnClient : 1;                                     // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bNetStartup : 1;                                          // 0x01E3(0x0001)
	unsigned char                                      bCollideWhenPlacing : 1;                                  // 0x01E3(0x0001)
	struct FActorTickFunction                          PrimaryActorTick;                                         // 0x01E3(0x0050) (Edit, DisableEditOnInstance)
	float                                              CustomTimeDilation;                                       // 0x01E3(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 4;                                        // 0x01E3(0x0001)
	unsigned char                                      bOnlyRelevantToOwner : 1;                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<class UActorComponent*>                     BlueprintCreatedComponents;                               // 0x01E3(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02 : 3;                                        // 0x01E3(0x0001)
	unsigned char                                      bNetUseOwnerRelevancy : 1;                                // 0x01E3(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      bReplicates : 1;                                          // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnPreNetOwnershipChange;                                  // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TEnumAsByte<ENetRole>                              RemoteRole;                                               // 0x01E3(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      Owner;                                                    // 0x01E3(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EActorSpawnRestrictions>               SpawnRestrictions;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRepMovement                                ReplicatedMovement;                                       // 0x01E3(0x0034) (Edit, Net, DisableEditOnInstance)
	struct FRepAttachment                              AttachmentReplication;                                    // 0x01E3(0x0040) (Net, Transient)
	TEnumAsByte<ENetRole>                              Role;                                                     // 0x01E3(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAutoReceiveInput>                     AutoReceiveInput;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                InputPriority;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UInputComponent*                             InputComponent;                                           // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EInputConsumeOptions>                  InputConsumeOption;                                       // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              NetCullDistanceSquared;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NetTag;                                                   // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              NetUpdateTime;                                            // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NetUpdateFrequency;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetPriority;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastNetUpdateTime;                                        // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       NetDriverName;                                            // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03 : 7;                                        // 0x01E3(0x0001)
	unsigned char                                      bTearOff : 1;                                             // 0x01E3(0x0001)
	TEnumAsByte<ESpawnActorCollisionHandlingMethod>    SpawnCollisionHandlingMethod;                             // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APawn*                                       Instigator;                                               // 0x01E3(0x0008) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Children;                                                 // 0x01E3(0x0010) (ZeroConstructor, Transient)
	class USceneComponent*                             RootComponent;                                            // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AMatineeActor*>                       ControllingMatineeActors;                                 // 0x01E3(0x0010) (ZeroConstructor, Transient)
	float                                              InitialLifeSpan;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Layers;                                                   // 0x01E3(0x0010) (ZeroConstructor)
	struct FActorPtr                                   ParentComponentActor;                                     // 0x01E3(0x0008)
	TArray<TWeakObjectPtr<class AActor>>               ChildComponentActors;                                     // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FName>                               Tags;                                                     // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       Feature;                                                  // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	uint64_t                                           HiddenEditorViews;                                        // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnTakeAnyDamage;                                          // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTakePointDamage;                                        // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActorBeginOverlap;                                      // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActorEndOverlap;                                        // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginCursorOver;                                        // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndCursorOver;                                          // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReleased;                                               // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInputTouchBegin;                                        // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInputTouchEnd;                                          // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInputTouchEnter;                                        // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInputTouchLeave;                                        // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActorHit;                                               // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDestroyed;                                              // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndPlay;                                                // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04 : 4;                                        // 0x01E3(0x0001)
	unsigned char                                      bBlockInput : 1;                                          // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bFindCameraComponentWhenViewTarget : 1;                   // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bActorSeamlessTraveled : 1;                               // 0x01E3(0x0001)
	unsigned char                                      bAlwaysRelevant : 1;                                      // 0x01E3(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      bIgnoresOriginShifting : 1;                               // 0x01E3(0x0001) (Edit)
	unsigned char                                      bRelevantForNetworkReplays : 1;                           // 0x01E3(0x0001)
	unsigned char                                      bEnableAutoLODGeneration : 1;                             // 0x01E3(0x0001) (Edit)
	unsigned char                                      bReplicateMovement : 1;                                   // 0x01E3(0x0001) (Edit, Net, DisableEditOnInstance)
	unsigned char                                      bActorEnableCollision : 1;                                // 0x01E3(0x0001)
	unsigned char                                      UnknownData05[0x28C];                                     // 0x01E4(0x028C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Actor");
		return ptr;
	}


	void UserConstructionScript();
	void TearOff();
	void SnapRootComponentTo(class AActor* InParentActor, const struct FName& InSocketName);
	void SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);
	void SetTickableWhenPaused(bool bTickableWhenPaused);
	void SetReplicates(bool bInReplicates);
	void SetReplicateMovement(bool bInReplicateMovement);
	void SetOwner(class AActor* NewOwner);
	void SetLifeSpan(float InLifespan);
	void SetIgnoreNetTransformUpdates(bool bInIgnoreNetTransformUpdates);
	void SetActorTickEnabled(bool bEnabled);
	void SetActorScale3D(const struct FVector& NewScale3D);
	bool SetActorRotation(const struct FRotator& NewRotation);
	void SetActorRelativeScale3D(const struct FVector& NewRelativeScale);
	void SetActorHiddenInGame(bool bNewHidden);
	void SetActorEnableCollision(bool bNewActorEnableCollision);
	void RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveActorOnReleased();
	void ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnClicked();
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveActorEndCursorOver();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorBeginCursorOver();
	void OnRep_Role();
	void OnRep_ReplicateMovement();
	void OnRep_ReplicatedMovement();
	void OnRep_Instigator();
	void OnRep_AttachmentReplication();
	void OnDestroyedDynamicMulticastEvent__DelegateSignature(class AActor* DeletedActor);
	void MakeNoise(float Loudness, class APawn* NoiseInstigator, const struct FVector& NoiseLocation, float MaxRange, const struct FName& Tag);
	class UMaterialInstanceDynamic* MakeMIDForMaterial(class UMaterialInterface* Parent);
	bool K2_TeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation);
	bool K2_SetActorTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetActorRelativeTransform(const struct FTransform& NewRelativeTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetActorRelativeRotation(const struct FRotator& NewRelativeRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetActorRelativeLocation(const struct FVector& NewRelativeLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_OnReset();
	void K2_OnEndViewTarget(class APlayerController* PC);
	void K2_OnBecomeViewTarget(class APlayerController* PC);
	class USceneComponent* K2_GetRootComponent();
	struct FRotator K2_GetActorRotation();
	struct FVector K2_GetActorLocation();
	void K2_DestroyComponent(class UActorComponent* Component);
	void K2_DestroyActor();
	void K2_AttachRootComponentToActor(class AActor* InParentActor, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);
	void K2_AttachRootComponentTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);
	void K2_AddActorWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool IsOverlappingActor(class AActor* Other);
	bool IsChildActor();
	bool IsActorTickEnabled();
	bool IsActorBeingDestroyed();
	bool HasNetOwner();
	bool HasAuthority();
	float GetVerticalDistanceTo(class AActor* OtherActor);
	struct FVector GetVelocity();
	struct FTransform GetTransform();
	bool GetTickableWhenPaused();
	class AActor* GetParentActor();
	class AActor* GetOwner();
	void GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents);
	void GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors);
	float GetLifeSpan();
	class UObject* GetInterfaceImplementer(class UClass* InterfaceClass);
	class AController* GetInstigatorController();
	class APawn* GetInstigator();
	struct FVector GetInputVectorAxisValue(const struct FKey& InputAxisKey);
	float GetInputAxisValue(const struct FName& InputAxisName);
	float GetInputAxisKeyValue(const struct FKey& InputAxisKey);
	float GetHorizontalDotProductTo(class AActor* OtherActor);
	float GetHorizontalDistanceTo(class AActor* OtherActor);
	float GetDotProductTo(class AActor* OtherActor);
	float GetDistanceTo(class AActor* OtherActor);
	TArray<class UActorComponent*> GetComponentsByTag(class UClass* ComponentClass, const struct FName& Tag);
	TArray<class UActorComponent*> GetComponentsByClass(class UClass* ComponentClass);
	void GetComponentInterfacesByClass(class UClass* InterfaceClass, TArray<class UActorComponent*>* OutInterfaces);
	class UActorComponent* GetComponentInterfaceByClass(class UClass* InterfaceClass);
	class UActorComponent* GetComponentByClass(class UClass* ComponentClass);
	class AActor* GetAttachParentActor();
	struct FVector GetActorUpVector();
	float GetActorTimeDilation();
	struct FVector GetActorScale3D();
	struct FVector GetActorRightVector();
	struct FVector GetActorRelativeScale3D();
	struct FVector GetActorForwardVector();
	void GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation);
	bool GetActorEnableCollision();
	void GetActorBounds(bool bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent);
	void ForceNetUpdate();
	void FlushNetDormancy();
	void EnableInput(class APlayerController* PlayerController);
	void DisableInput(class APlayerController* PlayerController);
	void DetachRootComponentFromParent(bool bMaintainWorldPosition);
	void AttachRootComponentToNoReplication(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);
	void AttachActorToActorNoReplication(class AActor* InParentActor, const struct FName& InSocketName, bool bWeldSimulatedBodies);
	void AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor* PrerequisiteActor);
	class UActorComponent* AddComponent(const struct FName& TemplateName, bool bManualAttachment, const struct FTransform& RelativeTransform, class UObject* ComponentTemplateContext);
	bool ActorHasTag(const struct FName& Tag);
};


// Class Engine.DataAsset
// 0x0000 (0x0028 - 0x0028)
class UDataAsset : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataAsset");
		return ptr;
	}

};


// Class Engine.BlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintFunctionLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintFunctionLibrary");
		return ptr;
	}

};


// Class Engine.ActorComponent
// 0x00A8 (0x00D0 - 0x0028)
class UActorComponent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FActorComponentTickFunction                 PrimaryComponentTick;                                     // 0x01E3(0x0050) (Edit, DisableEditOnInstance)
	TArray<struct FName>                               ComponentTags;                                            // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAssetUserData*>                      AssetUserData;                                            // 0x01E3(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      bAutoActivate : 1;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsActive : 1;                                            // 0x01E3(0x0001) (Net, Transient)
	unsigned char                                      bEditableWhenInherited : 1;                               // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bReplicates : 1;                                          // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	unsigned char                                      bNeedsLoadForClient : 1;                                  // 0x01E3(0x0001) (Edit)
	unsigned char                                      bNetAddressable : 1;                                      // 0x01E3(0x0001)
	unsigned char                                      bWantsBeginPlay : 1;                                      // 0x01E3(0x0001)
	unsigned char                                      bNeedsLoadForServer : 1;                                  // 0x01E3(0x0001) (Edit)
	unsigned char                                      UnknownData01 : 1;                                        // 0x01E3(0x0001)
	unsigned char                                      bCreatedByConstructionScript : 1;                         // 0x01E3(0x0001) (Deprecated)
	unsigned char                                      bInstanceComponent : 1;                                   // 0x01E3(0x0001) (Deprecated)
	TEnumAsByte<EComponentCreationMethod>              CreationMethod;                                           // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorComponent");
		return ptr;
	}


	void ToggleActive();
	void SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);
	void SetTickableWhenPaused(bool bTickableWhenPaused);
	void SetIsReplicated(bool ShouldReplicate);
	void SetComponentTickEnabled(bool bEnabled);
	void SetActive(bool bNewActive, bool bReset);
	void RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void OnRep_IsActive();
	void K2_DestroyComponent(class UObject* Object);
	bool IsComponentTickEnabled();
	bool IsBeingDestroyed();
	bool IsActive();
	class AActor* GetOwner();
	void Deactivate();
	bool ComponentHasTag(const struct FName& Tag);
	void AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor* PrerequisiteActor);
	void Activate(bool bReset);
};


// Class Engine.SceneComponent
// 0x0220 (0x02F0 - 0x00D0)
class USceneComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class USceneComponent*                             AttachParent;                                             // 0x01E3(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class USceneComponent*>                     AttachChildren;                                           // 0x01E3(0x0010) (ExportObject, ZeroConstructor, Transient)
	struct FName                                       AttachSocketName;                                         // 0x01E3(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRequiresCustomLocation : 1;                              // 0x01E3(0x0001)
	unsigned char                                      bBoundsChangeTriggersStreamingDataRebuild : 1;            // 0x01E3(0x0001)
	unsigned char                                      bAbsoluteLocation : 1;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, Net)
	unsigned char                                      bUseAttachParentBound : 1;                                // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAbsoluteTranslation : 1;                                 // 0x01E3(0x0001) (Deprecated)
	unsigned char                                      bComponentIsUnionOfChildren : 1;                          // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAbsoluteRotation : 1;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, Net)
	unsigned char                                      bAbsoluteScale : 1;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible, Net)
	unsigned char                                      bWorldToComponentUpdated : 1;                             // 0x01E3(0x0001) (Transient)
	unsigned char                                      bVisible : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      bHiddenInGame : 1;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bShouldUpdatePhysicsVolume : 1;                           // 0x01E3(0x0001) (Edit, BlueprintVisible)
	TWeakObjectPtr<class APhysicsVolume>               PhysicsVolume;                                            // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeScale3D;                                          // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeTranslation;                                      // 0x01E3(0x000C) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    Mobility;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDetailMode>                           DetailMode;                                               // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentVelocity;                                        // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    PhysicsVolumeChangedDelegate;                             // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               CacheRootVelocity;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SocketVelocitiesToCache;                                  // 0x01E3(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0xFD];                                      // 0x01F3(0x00FD) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneComponent");
		return ptr;
	}


	void ToggleVisibility(bool bPropagateToChildren);
	void SnapTo(class USceneComponent* InParent, const struct FName& InSocketName);
	bool SharesBasis(class USceneComponent* Other);
	void SetWorldScale3D(const struct FVector& NewScale);
	void SetVisibility(bool bNewVisibility, bool bPropagateToChildren);
	void SetRelativeScale3D(const struct FVector& NewScale3D);
	void SetHiddenInGame(bool NewHidden, bool bPropagateToChildren);
	void SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale);
	void ResetRelativeTransform();
	void OnRep_Visibility(bool OldValue);
	void OnRep_Transform();
	bool K2_TryGetCachedSocketVelocity(const struct FName& SocketName, struct FVector* OutVelocity);
	void K2_SetWorldTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetWorldRotation(const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetWorldLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetWorldLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetRelativeTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetRelativeRotation(const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetRelativeLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetRelativeLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	struct FTransform K2_GetComponentToWorld();
	struct FVector K2_GetComponentScale();
	struct FRotator K2_GetComponentRotation();
	struct FVector K2_GetComponentLocation();
	void K2_AttachTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachType, bool bWeldSimulatedBodies);
	void K2_AddWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddRelativeRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddRelativeLocation(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddLocalTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool IsVisible();
	bool IsSimulatingPhysics(const struct FName& BoneName);
	bool IsAnySimulatingPhysics();
	struct FVector GetUpVector();
	struct FTransform GetSocketTransform(const struct FName& InSocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace);
	struct FRotator GetSocketRotation(const struct FName& InSocketName);
	struct FQuat GetSocketQuaternion(const struct FName& InSocketName);
	struct FVector GetSocketLocation(const struct FName& InSocketName);
	struct FVector GetRightVector();
	struct FTransform GetRelativeTransform();
	class APhysicsVolume* GetPhysicsVolume();
	void GetParentComponents(TArray<class USceneComponent*>* Parents);
	int GetNumChildrenComponents();
	struct FVector GetForwardVector();
	struct FVector GetComponentVelocity();
	void GetChildrenComponents(bool bIncludeAllDescendants, TArray<class USceneComponent*>* Children);
	class USceneComponent* GetChildComponent(int ChildIndex);
	class USceneComponent* GetAttachParent();
	struct FTransform GetAttachedBasisTransform();
	TArray<struct FName> GetAllSocketNames();
	bool DoesSocketExist(const struct FName& InSocketName);
	void DetachFromParent(bool bMaintainWorldPosition, bool bCallModify);
};


// Class Engine.AnimNotify
// 0x0008 (0x0030 - 0x0028)
class UAnimNotify : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	class FString GetNotifyName();
};


// Class Engine.AnimInstance
// 0x0418 (0x0440 - 0x0028)
class UAnimInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              DeltaTime;                                                // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USkeleton*                                   CurrentSkeleton;                                          // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FAnimTickRecord>                     UngroupedActivePlayers;                                   // 0x01E3(0x0010) (ZeroConstructor, Transient)
	TArray<struct FAnimGroupInstance>                  SyncGroups;                                               // 0x01E3(0x0010) (ZeroConstructor, Transient)
	TArray<struct FActiveVertexAnim>                   VertexAnims;                                              // 0x01E3(0x0010) (ZeroConstructor, Transient)
	TEnumAsByte<ERootMotionMode>                       RootMotionMode;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWarnAboutBlueprintUsage;                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMontageBlendingOut;                                     // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMontageStarted;                                         // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMontageEnded;                                           // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateEntered;                                           // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateExited;                                            // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateInitialised;                                       // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAnimUpdated;                                            // 0x01E3(0x0010) (ZeroConstructor, InstancedReference)
	bool                                               bQueueMontageEvents;                                      // 0x01E3(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FAnimNotifyEvent>                    ActiveAnimNotifyState;                                    // 0x01E3(0x0010) (ZeroConstructor, Transient)
	int16_t                                            SlotNodeInitializationCounter;                            // 0x01E3(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
	int16_t                                            GraphTraversalCounter;                                    // 0x01E3(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x25B];                                     // 0x01E5(0x025B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimInstance");
		return ptr;
	}


	void UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic);
	class APawn* TryGetPawnOwner();
	void StopSlotAnimation(float InBlendOutTime, const struct FName& SlotNodeName);
	void SetMorphTarget(const struct FName& MorphTargetName, float Value);
	class UAnimMontage* PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount, float BlendOutTriggerTime);
	float PlaySlotAnimation(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount);
	void Montage_Stop(float InBlendOutTime, class UAnimMontage* Montage);
	void Montage_SetPlayRate(class UAnimMontage* Montage, float NewPlayRate);
	void Montage_SetNextSection(const struct FName& SectionNameToChange, const struct FName& NextSection, class UAnimMontage* Montage);
	float Montage_Play(class UAnimMontage* MontageToPlay, float InPlayRate);
	void Montage_Pause(class UAnimMontage* Montage);
	void Montage_JumpToSectionsEnd(const struct FName& SectionName, class UAnimMontage* Montage);
	void Montage_JumpToSection(const struct FName& SectionName, class UAnimMontage* Montage);
	bool Montage_IsPlaying(class UAnimMontage* Montage);
	bool Montage_IsActive(class UAnimMontage* Montage);
	struct FName Montage_GetCurrentSection(class UAnimMontage* Montage);
	void LockAIResources(bool bLockMovement, bool LockAILogic);
	bool IsPlayingSlotAnimation(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName);
	float GetSyncGroupPosition(const struct FName& Name);
	float GetStateWeight(int MachineIndex, int StateIndex);
	float GetRelevantAnimTimeRemainingFraction(int MachineIndex, int StateIndex);
	float GetRelevantAnimTimeRemaining(int MachineIndex, int StateIndex);
	float GetRelevantAnimTimeFraction(int MachineIndex, int StateIndex);
	float GetRelevantAnimTime(int MachineIndex, int StateIndex);
	float GetRelevantAnimLength(int MachineIndex, int StateIndex);
	class USkeletalMeshComponent* GetOwningComponent();
	class AActor* GetOwningActor();
	float GetMaxPlayingAnimTimeRemaining(int MachineIndex, int StateIndex);
	float GetMaxAnimTimeRemaining(int MachineIndex, int StateIndex);
	float GetInstanceTransitionTimeElapsedFraction(int MachineIndex, int TransitionIndex);
	float GetInstanceTransitionTimeElapsed(int MachineIndex, int TransitionIndex);
	float GetInstanceTransitionCrossfadeDuration(int MachineIndex, int TransitionIndex);
	float GetInstanceStateWeight(int MachineIndex, int StateIndex);
	float GetInstanceCurrentStateElapsedTime(int MachineIndex);
	float GetInstanceAssetPlayerTimeFromEndFraction(int AssetPlayerIndex);
	float GetInstanceAssetPlayerTimeFromEnd(int AssetPlayerIndex);
	float GetInstanceAssetPlayerTimeFraction(int AssetPlayerIndex);
	float GetInstanceAssetPlayerTime(int AssetPlayerIndex);
	float GetInstanceAssetPlayerLength(int AssetPlayerIndex);
	float GetCurveValue(const struct FName& CurveName);
	struct FName GetCurrentStateName(int MachineIndex);
	float GetCurrentStateElapsedTime(int MachineIndex);
	float STATIC_GetAnimAssetPlayerTimeFromEndFraction(class UAnimationAsset* AnimAsset, float CurrentTime);
	float GetAnimAssetPlayerTimeFromEnd(class UAnimationAsset* AnimAsset, float CurrentTime);
	float STATIC_GetAnimAssetPlayerTimeFraction(class UAnimationAsset* AnimAsset, float CurrentTime);
	float STATIC_GetAnimAssetPlayerLength(class UAnimationAsset* AnimAsset);
	void ClearMorphTargets();
	float CalculateDirection(const struct FVector& Velocity, const struct FRotator& BaseRotation);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintUninitializeAnimation();
	void BlueprintPostEvaluateAnimation();
	void BlueprintInitializeAnimation();
	void AnimNotify_Sound(class UAnimNotify* Notify);
};


// Class Engine.CameraComponent
// 0x0560 (0x0850 - 0x02F0)
class UCameraComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x560];                                     // 0x02F0(0x0560) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraComponent");
		return ptr;
	}


	struct FVector ProjectWorldLocation(const struct FVector& WorldLocation, const struct FIntPoint& ViewDimensions);
	void GetCameraView(float DeltaTime, struct FMinimalViewInfo* DesiredView);
	void AddOrUpdateBlendable(const TScriptInterface<class UBlendableInterface>& InBlendableObject, float InWeight);
};


// Class Engine.Pawn
// 0x0060 (0x04D0 - 0x0470)
class APawn : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0470(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Pawn");
		return ptr;
	}


	void SpawnDefaultController();
	void SetCanAffectNavigationGeneration(bool bNewValue);
	void ReceiveUnpossessed(class AController* OldController);
	void ReceivePossessed(class AController* NewController);
	void PawnMakeNoise(float Loudness, const struct FVector& NoiseLocation, bool bUseNoiseMakerLocation, class AActor* NoiseMaker);
	void OnRep_PlayerState();
	void OnRep_Controller();
	void LaunchPawn(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	struct FVector K2_GetMovementInputVector();
	bool IsMoveInputIgnored();
	bool IsLocallyControlled();
	bool IsControlled();
	struct FVector GetPendingMovementInputVector();
	struct FVector GetNavAgentLocation();
	class UPawnMovementComponent* GetMovementComponent();
	class AActor* STATIC_GetMovementBaseActor(class APawn* Pawn);
	struct FVector GetLastMovementInputVector();
	struct FRotator GetControlRotation();
	class AController* GetController();
	struct FRotator GetBaseAimRotation();
	void DetachFromControllerPendingDestroy();
	struct FVector ConsumeMovementInputVector();
	void AddMovementInput(const struct FVector& WorldDirection, float ScaleValue, bool bForce);
	void AddControllerYawInput(float Val);
	void AddControllerRollInput(float Val);
	void AddControllerPitchInput(float Val);
};


// Class Engine.Character
// 0x0190 (0x0660 - 0x04D0)
class ACharacter : public APawn
{
public:
	unsigned char                                      UnknownData00[0x190];                                     // 0x04D0(0x0190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Character");
		return ptr;
	}


	void UnCrouch(bool bClientSimulation);
	void StopJumping();
	void StopAnimMontage(class UAnimMontage* AnimMontage);
	void SetReplicateMovement(bool bInReplicateMovement);
	float PlayAnimMontage(class UAnimMontage* AnimMontage, float InPlayRate, const struct FName& StartSectionName);
	void OnWalkingOffLedge(const struct FVector& PreviousFloorImpactNormal, const struct FVector& PreviousFloorContactNormal, const struct FVector& PreviousLocation, float TimeDelta);
	void OnRep_RootMotion();
	void OnRep_ReplicatedBasedMovement();
	void OnRep_IsCrouched();
	void OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	void OnLanded(const struct FHitResult& Hit);
	void OnJumped();
	void LaunchCharacter(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	void K2_UpdateCustomMovement(float DeltaTime);
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void Jump();
	bool IsPlayingRootMotion();
	bool IsPlayingNetworkedRootMotionMontage();
	bool IsJumpProvidingForce();
	class UAnimMontage* GetCurrentMontage();
	void Crouch(bool bClientSimulation);
	void ClientCheatWalk();
	void ClientCheatGhost();
	void ClientCheatFly();
	bool CanJumpInternal();
	bool CanJump();
};


// Class Engine.MovementComponent
// 0x0048 (0x0118 - 0x00D0)
class UMovementComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class USceneComponent*                             UpdatedComponent;                                         // 0x01E3(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         UpdatedPrimitive;                                         // 0x01E3(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, DuplicateTransient, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bConstrainToPlane : 1;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bSnapToPlaneAtStart : 1;                                  // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TEnumAsByte<EPlaneConstraintAxisSetting>           PlaneConstraintAxisSetting;                               // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlaneConstraintNormal;                                    // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlaneConstraintOrigin;                                    // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUpdateOnlyIfRendered : 1;                                // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAutoUpdateTickRegistration : 1;                          // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAutoRegisterUpdatedComponent : 1;                        // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MovementComponent");
		return ptr;
	}


	void StopMovementImmediately();
	void SnapUpdatedComponentToPlane();
	void SetUpdatedComponent(class USceneComponent* NewUpdatedComponent);
	void SetPlaneConstraintOrigin(const struct FVector& PlaneOrigin);
	void SetPlaneConstraintNormal(const struct FVector& PlaneNormal);
	void SetPlaneConstraintFromVectors(const struct FVector& Forward, const struct FVector& Up);
	void SetPlaneConstraintEnabled(bool bEnabled);
	void SetPlaneConstraintAxisSetting(TEnumAsByte<EPlaneConstraintAxisSetting> NewAxisSetting);
	void PhysicsVolumeChanged(class APhysicsVolume* NewVolume);
	bool K2_MoveUpdatedComponent(const struct FVector& Delta, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* OutHit);
	float K2_GetModifiedMaxSpeed();
	float K2_GetMaxSpeedModifier();
	bool IsExceedingMaxSpeed(float MaxSpeed);
	struct FVector GetPlaneConstraintOrigin();
	struct FVector GetPlaneConstraintNormal();
	TEnumAsByte<EPlaneConstraintAxisSetting> GetPlaneConstraintAxisSetting();
	class APhysicsVolume* GetPhysicsVolume();
	float GetMaxSpeed();
	float GetGravityZ();
	struct FVector ConstrainNormalToPlane(const struct FVector& Normal);
	struct FVector ConstrainLocationToPlane(const struct FVector& Location);
	struct FVector ConstrainDirectionToPlane(const struct FVector& Direction);
};


// Class Engine.NavMovementComponent
// 0x0038 (0x0150 - 0x0118)
class UNavMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0xCB];                                      // 0x0118(0x00CB) MISSED OFFSET
	struct FNavAgentProperties                         NavAgentProps;                                            // 0x01E3(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      bUpdateNavAgentWithOwnersCollision : 1;                   // 0x01E3(0x0001) (Edit)
	struct FMovementProperties                         MovementState;                                            // 0x01E3(0x0004)
	bool                                               UseDefaultNavWalkingSearchRadiusScale;                    // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseDefaultNavWalkingSearchHeightScale;                    // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMovementComponent");
		return ptr;
	}


	void StopMovementKeepPathing();
	void StopActiveMovement();
	bool IsSwimming();
	bool IsMovingOnGround();
	bool IsFlying();
	bool IsFalling();
	bool IsCrouching();
	struct FVector GetActorFeetLocation();
};


// Class Engine.PawnMovementComponent
// 0x0008 (0x0158 - 0x0150)
class UPawnMovementComponent : public UNavMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x93];                                      // 0x0150(0x0093) MISSED OFFSET
	class APawn*                                       PawnOwner;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PawnMovementComponent");
		return ptr;
	}


	struct FVector K2_GetInputVector();
	bool IsMoveInputIgnored();
	struct FVector GetPendingInputVector();
	class APawn* GetPawnOwner();
	struct FVector GetLastInputVector();
	struct FVector ConsumeInputVector();
	void AddInputVector(const struct FVector& WorldVector, bool bForce);
};


// Class Engine.CharacterMovementComponent
// 0x03D8 (0x0530 - 0x0158)
class UCharacterMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8B];                                      // 0x0158(0x008B) MISSED OFFSET
	unsigned char                                      bUseControllerDesiredRotation : 1;                        // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAlwaysCheckFloor : 1;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bMovementUpdateReceived : 1;                              // 0x01E3(0x0001) (Transient)
	unsigned char                                      bMaintainHorizontalGroundVelocity : 1;                    // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanWalkOffLedges : 1;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOrientRotationToMovement : 1;                            // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanWalkOffLedgesWhenCrouching : 1;                       // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bNetworkMovementModeChanged : 1;                          // 0x01E3(0x0001) (Transient)
	unsigned char                                      bImpartBaseVelocityX : 1;                                 // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseFlatBaseForFloorChecks : 1;                           // 0x01E3(0x0001) (Edit, BlueprintVisible)
	float                                              GravityScale;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxStepHeight;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpZVelocity;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpOffJumpZFactor;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WalkableFloorAngle;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkableFloorZ;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x01E3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CustomMovementMode;                                       // 0x01E3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GroundFriction;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkSpeed;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkSpeedBackwards;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WalkBackwardsMinAngle;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkBackwardsMaxAngle;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkSpeedCrouched;                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSwimSpeed;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlySpeed;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxCustomMovementSpeed;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAcceleration;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxChargeAcceleration;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingFrictionFactor;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingFriction;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseSeparateBrakingFriction : 1;                          // 0x01E3(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BrakingDecelerationWalking;                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationFalling;                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationSwimming;                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationFlying;                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirControl;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirControlBoostMultiplier;                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirControlBoostVelocityThreshold;                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallingLateralFriction;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrouchedHalfHeight;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Buoyancy;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PerchRadiusThreshold;                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PerchAdditionalHeight;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationRate;                                             // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 2;                                        // 0x01E3(0x0001)
	unsigned char                                      bMovementInProgress : 1;                                  // 0x01E3(0x0001)
	unsigned char                                      bDeferUpdateMoveComponent : 1;                            // 0x01E3(0x0001)
	class USceneComponent*                             DeferredUpdatedMoveComponent;                             // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MaxOutOfWaterStepHeight;                                  // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OutofWaterZ;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnablePhysicsInteraction;                                // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTouchForceScaledToMass;                                  // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPushForceScaledToMass;                                   // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bScalePushForceToVelocity;                                // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StandingDownwardForceScale;                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InitialPushForceFactor;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PushForceFactor;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PushForcePointZOffsetFactor;                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TouchForceFactor;                                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinTouchForce;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTouchForce;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RepulsionForce;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NetMoveDelta;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bForceBraking : 1;                                        // 0x01E3(0x0001) (Deprecated)
	float                                              CrouchedSpeedMultiplier;                                  // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              UpperImpactNormalScale;                                   // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     Acceleration;                                             // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastUpdateLocation;                                       // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PendingImpulseToApply;                                    // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PendingForceToApply;                                      // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              AnalogInputModifier;                                      // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxSimulationTimeStep;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxSimulationIterations;                                  // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NetworkSimulatedSmoothLocationTime;                       // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetworkSimulatedSmoothRotationTime;                       // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LedgeCheckThreshold;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpOutOfWaterPitch;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFindFloorResult                            CurrentFloor;                                             // 0x01E3(0x008C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	TEnumAsByte<EMovementMode>                         DefaultLandMovementMode;                                  // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         DefaultWaterMovementMode;                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         GroundMovementMode;                                       // 0x01E3(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02 : 2;                                        // 0x01E3(0x0001)
	unsigned char                                      bImpartBaseVelocityY : 1;                                 // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bNotifyApex : 1;                                          // 0x01E3(0x0001) (Edit, BlueprintVisible)
	class ACharacter*                                  CharacterOwner;                                           // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03 : 2;                                        // 0x01E3(0x0001)
	unsigned char                                      bPerformingJumpOff : 1;                                   // 0x01E3(0x0001)
	unsigned char                                      bWantsToLeaveNavWalking : 1;                              // 0x01E3(0x0001)
	unsigned char                                      bUseRVOAvoidance : 1;                                     // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bRequestedMoveUseAcceleration : 1;                        // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bPreventSimulatedFloorChecks : 1;                         // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bPreventNavMeshFalling : 1;                               // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bHasRequestedVelocity : 1;                                // 0x01E3(0x0001) (Transient)
	unsigned char                                      bRequestedMoveWithMaxSpeed : 1;                           // 0x01E3(0x0001) (Transient)
	unsigned char                                      bWasAvoidanceUpdated : 1;                                 // 0x01E3(0x0001) (Transient)
	unsigned char                                      UnknownData04 : 2;                                        // 0x01E3(0x0001)
	unsigned char                                      bProjectNavMeshWalking : 1;                               // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              AvoidanceConsiderationRadius;                             // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RequestedVelocity;                                        // 0x01E3(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                AvoidanceUID;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceWeight;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PendingLaunchVelocity;                                    // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              NavMeshProjectionInterval;                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavMeshProjectionTimer;                                   // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              NavMeshProjectionInterpSpeed;                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePlaneBasedNavMeshProjectionInterpSystem;              // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAllowedZOffsetFromCurrentPlane;                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxZDiffFromPrevPlane;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavMeshProjectionHeightScaleUp;                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavMeshProjectionHeightScaleDown;                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseControllerRotationInNavWalkingMoveComponent;           // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FCharacterMovementComponentPreClothTickFunction PreClothComponentTick;                                    // 0x01E3(0x0050)
	float                                              MinTimeBetweenTimeStampResets;                            // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRootMotionMovementParams                   RootMotionParams;                                         // 0x01E3(0x0040) (Transient)
	bool                                               bWasSimulatingRootMotion;                                 // 0x01E3(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05 : 3;                                        // 0x01E3(0x0001)
	unsigned char                                      bCheatFlying : 1;                                         // 0x01E3(0x0001)
	unsigned char                                      bEnableScopedMovementUpdates : 1;                         // 0x01E3(0x0001) (Edit)
	unsigned char                                      bImpartBaseVelocityZ : 1;                                 // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bImpartBaseAngularVelocity : 1;                           // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bForceMaxAccel : 1;                                       // 0x01E3(0x0001)
	unsigned char                                      bWantsToCrouch : 1;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      bJustTeleported : 1;                                      // 0x01E3(0x0001) (Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst)
	unsigned char                                      bRunPhysicsWithNoController : 1;                          // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCrouchMaintainsBaseLocation : 1;                         // 0x01E3(0x0001) (Edit, BlueprintVisible, DisableEditOnTemplate, EditConst)
	unsigned char                                      bNetworkUpdateReceived : 1;                               // 0x01E3(0x0001) (Transient)
	unsigned char                                      bForceNextFloorCheck : 1;                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, DisableEditOnTemplate, EditConst)
	unsigned char                                      bIgnoreBaseRotation : 1;                                  // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bBasedMovementUpdateReceived : 1;                         // 0x01E3(0x0001) (Transient)
	unsigned char                                      bFastAttachedMove : 1;                                    // 0x01E3(0x0001)
	unsigned char                                      bShrinkProxyCapsule : 1;                                  // 0x01E3(0x0001)
	unsigned char                                      UnknownData06[0x34C];                                     // 0x01E4(0x034C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CharacterMovementComponent");
		return ptr;
	}


	void SetWalkableFloorZ(float InWalkableFloorZ);
	void SetWalkableFloorAngle(float InWalkableFloorAngle);
	void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode);
	void SetGroupsToIgnore(int GroupFlags);
	void SetGroupsToAvoid(int GroupFlags);
	void SetAvoidanceGroup(int GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	void ServerMoveOld(float OldTimeStamp, const struct FVector_NetQuantize10& OldAccel, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char OldMoveFlags);
	void ServerMoveDualHybridRootMotion(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	void ServerMoveDual(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	void ServerMove(float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	float K2_GetWalkableFloorZ();
	float K2_GetWalkableFloorAngle();
	float K2_GetModifiedMaxAcceleration();
	bool IsWalking();
	bool IsWalkable(const struct FHitResult& Hit);
	float GetValidPerchRadius();
	float GetPerchRadiusThreshold();
	class UPrimitiveComponent* GetMovementBase();
	float GetMaxJumpHeight();
	float GetMaxAcceleration();
	struct FVector GetImpartedMovementBaseVelocity();
	struct FVector GetCurrentAcceleration();
	class ACharacter* GetCharacterOwner();
	float GetAnalogInputModifier();
	void DisableMovement();
	void ClientVeryShortAdjustPosition(float TimeStamp, const struct FVector& NewLoc, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustRootMotionPosition(float TimeStamp, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustPosition(float TimeStamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAckGoodMove(float TimeStamp);
	void CapsuleTouched(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration);
	void AddImpulse(const struct FVector& Impulse, bool bVelocityChange);
	void AddForce(const struct FVector& Force);
};


// Class Engine.Controller
// 0x0060 (0x04D0 - 0x0470)
class AController : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0470(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Controller");
		return ptr;
	}


	void UnPossess();
	void StopMovement();
	void SetInitialLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	void SetControlRotation(const struct FRotator& NewRotation);
	void ReceiveInstigatedAnyDamage(float Damage, class UDamageType* DamageType, class AActor* DamagedActor, class AActor* DamageCauser);
	void Possess(class APawn* InPawn);
	void OnRep_PlayerState();
	void OnRep_Pawn();
	bool LineOfSightTo(class AActor* Other, const struct FVector& ViewPoint, bool bAlternateChecks);
	class APawn* K2_GetPawn();
	bool IsLocalPlayerController();
	bool IsLocalController();
	class AActor* GetViewTarget();
	struct FRotator GetDesiredRotation();
	struct FRotator GetControlRotation();
	void ClientSetRotation(const struct FRotator& NewRotation, bool bResetCamera);
	void ClientSetLocation(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	class APlayerController* CastToPlayerController();
};


// Class Engine.PlayerController
// 0x0290 (0x0760 - 0x04D0)
class APlayerController : public AController
{
public:
	unsigned char                                      UnknownData00[0x290];                                     // 0x04D0(0x0290) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerController");
		return ptr;
	}


	bool WasInputKeyJustReleased(const struct FKey& Key);
	bool WasInputKeyJustPressed(const struct FKey& Key);
	void ToggleSpeaking(bool bInSpeaking);
	void SwitchLevel(const class FString& URL);
	void StopHapticEffect(TEnumAsByte<EControllerHand> Hand);
	void StartFire(unsigned char FireModeNum);
	void SetVirtualJoystickVisibility(bool bVisible);
	void SetViewTargetWithBlend(class AActor* NewViewTarget, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);
	void SetName(const class FString& S);
	void SetIgnoreMoveInput(bool bNewMoveInput);
	void SetIgnoreLookInput(bool bNewLookInput);
	void SetHapticsByValue(float Frequency, float Amplitude, TEnumAsByte<EControllerHand> Hand);
	void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
	void SetAudioListenerOverride(class USceneComponent* AttachToComponent, const struct FVector& Location, const struct FRotator& Rotation);
	void ServerViewSelf(const struct FViewTargetTransitionParams& TransitionParams);
	void ServerViewPrevPlayer();
	void ServerViewNextPlayer();
	void ServerVerifyViewTarget();
	void ServerUpdateCamera(const struct FVector_NetQuantize& CamLoc, int CamPitchAndYaw);
	void ServerUnmutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	void ServerToggleAILogging();
	void ServerShortTimeout();
	void ServerSetSpectatorWaiting(bool bWaiting);
	void ServerSetSpectatorLocation(const struct FVector& NewLoc, const struct FRotator& NewRot);
	void ServerRestartPlayer();
	void ServerPause();
	void ServerNotifyLoadedWorld(const struct FName& WorldPackageName);
	void ServerMutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	void ServerCheckClientPossessionReliable();
	void ServerCheckClientPossession();
	void ServerChangeName(const class FString& S);
	void ServerCamera(const struct FName& NewMode);
	void ServerAcknowledgePossession(class APawn* P);
	void SendToConsole(const class FString& Command);
	void RestartLevel();
	void ResetIgnoreMoveInput();
	void ResetIgnoreLookInput();
	void ResetIgnoreInputFlags();
	bool ProjectWorldLocationToScreen(const struct FVector& WorldLocation, struct FVector2D* ScreenLocation);
	void PlayHapticEffect(class UHapticFeedbackEffect* HapticEffect, TEnumAsByte<EControllerHand> Hand, float Scale);
	void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, TEnumAsByte<EDynamicForceFeedbackAction> Action, const struct FLatentActionInfo& LatentInfo);
	void Pause();
	void OnServerStartedVisualLogger(bool bIsLogging);
	void LocalTravel(const class FString& URL);
	bool IsSeamlessTravelInProgress();
	bool IsPossessingServerAcknowledgedPawn();
	bool IsMoveInputIgnored();
	bool IsLookInputIgnored();
	bool IsInputKeyDown(const struct FKey& Key);
	void GetViewportSize(int* SizeX, int* SizeY);
	class ASpectatorPawn* GetSpectatorPawn();
	bool GetMousePosition(float* LocationX, float* LocationY);
	struct FVector GetInputVectorKeyState(const struct FKey& Key);
	void GetInputTouchState(TEnumAsByte<ETouchIndex> FingerIndex, float* LocationX, float* LocationY, bool* bIsCurrentlyPressed);
	void GetInputMouseDelta(float* DeltaX, float* DeltaY);
	void GetInputMotionState(struct FVector* Tilt, struct FVector* RotationRate, struct FVector* Gravity, struct FVector* Acceleration);
	float GetInputKeyTimeDown(const struct FKey& Key);
	void GetInputAnalogStickState(TEnumAsByte<EControllerAnalogStick> WhichStick, float* StickX, float* StickY);
	float GetInputAnalogKeyState(const struct FKey& Key);
	class AHUD* GetHUD();
	bool GetHitResultUnderFingerForObjects(TEnumAsByte<ETouchIndex> FingerIndex, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderFingerByChannel(TEnumAsByte<ETouchIndex> FingerIndex, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderFinger(TEnumAsByte<ETouchIndex> FingerIndex, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderCursorForObjects(TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderCursorByChannel(TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderCursor(TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult);
	struct FVector GetFocalLocation();
	void FOV(float NewFOV);
	void EnableCheats();
	bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, struct FVector* WorldLocation, struct FVector* WorldDirection);
	bool DeprojectMousePositionToWorld(struct FVector* WorldLocation, struct FVector* WorldDirection);
	void ConsoleKey(const struct FKey& Key);
	void ClientWasKicked(const struct FText& KickReason);
	void ClientVoiceHandshakeComplete();
	void ClientUpdateLevelStreamingStatus(const struct FName& PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int LODIndex);
	void ClientUnmutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	void ClientTravelInternal(const class FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, const struct FGuid& MapPackageGuid);
	void ClientTravel(const class FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, const struct FGuid& MapPackageGuid);
	void ClientTeamMessage(class APlayerState* SenderPlayerState, const class FString& S, const struct FName& Type, float MsgLifeTime);
	void ClientStopForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, const struct FName& Tag);
	void ClientStopCameraShake(class UClass* Shake);
	void ClientStopCameraAnim(class UCameraAnim* AnimToStop);
	void ClientStartOnlineSession();
	void ClientSpawnCameraLensEffect(class UClass* LensEffectEmitterClass);
	void ClientSetViewTarget(class AActor* A, const struct FViewTargetTransitionParams& TransitionParams);
	void ClientSetSpectatorWaiting(bool bWaiting);
	void ClientSetHUD(class UClass* NewHUDClass);
	void ClientSetForceMipLevelsToBeResident(class UMaterialInterface* Material, float ForceDuration, int CinematicTextureGroups);
	void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD);
	void ClientSetCameraMode(const struct FName& NewCamMode);
	void ClientSetCameraFade(bool bEnableFading, const struct FColor& FadeColor, const struct FVector2D& FadeAlpha, float FadeTime, bool bFadeAudio);
	void ClientSetBlockOnAsyncLoading();
	void ClientSeamlessTravelComplete();
	void ClientReturnToMainMenu(const class FString& ReturnReason);
	void ClientRetryClientRestart(class APawn* NewPawn);
	void ClientRestart(class APawn* NewPawn);
	void ClientReset();
	void ClientRepObjRef(class UObject* Object);
	void ClientReceiveLocalizedMessage(class UClass* Message, int Switch, class APlayerState* RelatedPlayerState_2, class APlayerState* RelatedPlayerState_3, class UObject* OptionalObject);
	void ClientPrestreamTextures(class AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int CinematicTextureGroups);
	void ClientPrepareMapChange(const struct FName& LevelName, bool bFirst, bool bLast);
	void ClientPlaySoundAtLocation(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, float PitchMultiplier);
	void ClientPlaySound(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier);
	void ClientPlayForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, const struct FName& Tag);
	void ClientPlayCameraShake(class UClass* Shake, float Scale, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot);
	void ClientPlayCameraAnim(class UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, TEnumAsByte<ECameraAnimPlaySpace> Space, const struct FRotator& CustomPlaySpace);
	void ClientMutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	void ClientMessage(const class FString& S, const struct FName& Type, float MsgLifeTime);
	void ClientIgnoreMoveInput(bool bIgnore);
	void ClientIgnoreLookInput(bool bIgnore);
	void ClientGotoState(const struct FName& NewState);
	void ClientGameEnded(class AActor* EndGameFocus, bool bIsWinner);
	void ClientForceGarbageCollection();
	void ClientFlushLevelStreaming();
	void ClientEndOnlineSession();
	void ClientEnableNetworkVoice(bool bEnable);
	void ClientCommitMapChange();
	void ClientClearCameraLensEffects();
	void ClientCapBandwidth(int Cap);
	void ClientCancelPendingMapChange();
	void ClientAddTextureStreamingLoc(const struct FVector& InLoc, float Duration, bool bOverrideLocation);
	void ClearAudioListenerOverride();
	void Camera(const struct FName& NewMode);
	void AddYawInput(float Val);
	void AddRollInput(float Val);
	void AddPitchInput(float Val);
	void ActivateTouchInterface(class UTouchInterface* NewTouchInterface);
};


// Class Engine.CheatManager
// 0x0050 (0x0078 - 0x0028)
class UCheatManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class ADebugCameraController*                      DebugCameraControllerRef;                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CheatManager");
		return ptr;
	}


	void WidgetReflector();
	void Walk();
	void ViewSelf();
	void ViewPlayer(const class FString& S);
	void ViewClass(class UClass* DesiredClass);
	void ViewActor(const struct FName& ActorName);
	void ToggleDebugCamera();
	void ToggleAILogging();
	void TextureAtlasVisualizer();
	void TestCollisionDistance();
	void Teleport();
	void Summon(const class FString& ClassName);
	void StreamLevelOut(const struct FName& PackageName);
	void StreamLevelIn(const struct FName& PackageName);
	void Slomo(float T);
	void SetWorldOrigin();
	void SetNavDrawDistance(float DrawDistance);
	void SetMouseSensitivityToDefault();
	void ServerToggleAILogging();
	void RebuildNavigation();
	void PlayersOnly();
	void OnlyLoadLevel(const struct FName& PackageName);
	void LogLoc();
	void InvertMouse();
	void God();
	void Ghost();
	void FreezeFrame(float Delay);
	void FontAtlasVisualizer();
	void Fly();
	void FlushLog();
	void DumpVoiceMutingState();
	void DumpPartyState();
	void DumpOnlineSessionState();
	void DestroyTarget();
	void DestroyPawns(class UClass* aClass);
	void DestroyAllPawnsExceptTarget();
	void DestroyAll(class UClass* aClass);
	void DebugCapsuleSweepSize(float HalfHeight, float Radius);
	void DebugCapsuleSweepPawn();
	void DebugCapsuleSweepComplex(bool bTraceComplex);
	void DebugCapsuleSweepClear();
	void DebugCapsuleSweepChannel(TEnumAsByte<ECollisionChannel> Channel);
	void DebugCapsuleSweepCapture();
	void DebugCapsuleSweep();
	void DamageTarget(float DamageAmount);
	void ChangeSize(float F);
	void BugItStringCreator(const struct FVector& ViewLocation, const struct FRotator& ViewRotation, class FString* GoString, class FString* LocString);
	void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
	void BugIt(const class FString& ScreenShotDescription);
};


// Class Engine.Engine
// 0x09E0 (0x0A08 - 0x0028)
class UEngine : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UFont*                                       TinyFont;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       TinyFontName;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	class UFont*                                       SmallFont;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       SmallFontName;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	class UFont*                                       MediumFont;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       MediumFontName;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	class UFont*                                       LargeFont;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       LargeFontName;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	class UFont*                                       MonoFont;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       MonoFontName;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	class UFont*                                       SubtitleFont;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       SubtitleFontName;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	TArray<class UFont*>                               AdditionalFonts;                                          // 0x01E3(0x0010) (ZeroConstructor)
	TArray<class FString>                              AdditionalFontNames;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	class UClass*                                      ConsoleClass;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringClassReference                       ConsoleClassName;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, NoClear)
	class UClass*                                      GameViewportClientClass;                                  // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringClassReference                       GameViewportClientClassName;                              // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, NoClear)
	class UClass*                                      LocalPlayerClass;                                         // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringClassReference                       LocalPlayerClassName;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, NoClear)
	class UClass*                                      WorldSettingsClass;                                       // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringClassReference                       WorldSettingsClassName;                                   // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, NoClear)
	struct FStringClassReference                       NavigationSystemClassName;                                // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig, NoClear)
	class UClass*                                      NavigationSystemClass;                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringClassReference                       AvoidanceManagerClassName;                                // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig, NoClear)
	class UClass*                                      AvoidanceManagerClass;                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      PhysicsCollisionHandlerClass;                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringClassReference                       PhysicsCollisionHandlerClassName;                         // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, NoClear)
	struct FStringClassReference                       GameUserSettingsClassName;                                // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig, NoClear)
	class UClass*                                      GameUserSettingsClass;                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringClassReference                       AIControllerClassName;                                    // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig, NoClear)
	class UGameUserSettings*                           GameUserSettings;                                         // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      LevelScriptActorClass;                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringClassReference                       LevelScriptActorClassName;                                // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, NoClear)
	struct FStringClassReference                       DefaultBlueprintBaseClassName;                            // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, NoClear)
	struct FStringClassReference                       GameSingletonClassName;                                   // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, NoClear)
	class UObject*                                     GameSingleton;                                            // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTireType*                                   DefaultTireType;                                          // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       DefaultTireTypeName;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	class UClass*                                      DefaultPreviewPawnClass;                                  // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringClassReference                       DefaultPreviewPawnClassName;                              // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, NoClear)
	class FString                                      PlayOnConsoleSaveDir;                                     // 0x01E3(0x0010) (ZeroConstructor, Config)
	class UTexture2D*                                  DefaultTexture;                                           // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       DefaultTextureName;                                       // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UTexture*                                    DefaultDiffuseTexture;                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       DefaultDiffuseTextureName;                                // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UTexture2D*                                  DefaultBSPVertexTexture;                                  // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       DefaultBSPVertexTextureName;                              // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UTexture2D*                                  HighFrequencyNoiseTexture;                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       HighFrequencyNoiseTextureName;                            // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UTexture2D*                                  DefaultBokehTexture;                                      // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       DefaultBokehTextureName;                                  // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UMaterial*                                   WireframeMaterial;                                        // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      WireframeMaterialName;                                    // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UMaterial*                                   DebugMeshMaterial;                                        // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       DebugMeshMaterialName;                                    // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UMaterial*                                   LevelColorationLitMaterial;                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      LevelColorationLitMaterialName;                           // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UMaterial*                                   LevelColorationUnlitMaterial;                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      LevelColorationUnlitMaterialName;                         // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UMaterial*                                   LightingTexelDensityMaterial;                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      LightingTexelDensityName;                                 // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UMaterial*                                   ShadedLevelColorationLitMaterial;                         // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      ShadedLevelColorationLitMaterialName;                     // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UMaterial*                                   ShadedLevelColorationUnlitMaterial;                       // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      ShadedLevelColorationUnlitMaterialName;                   // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UMaterial*                                   RemoveSurfaceMaterial;                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       RemoveSurfaceMaterialName;                                // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UMaterial*                                   VertexColorMaterial;                                      // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      VertexColorMaterialName;                                  // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UMaterial*                                   VertexColorViewModeMaterial_ColorOnly;                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      VertexColorViewModeMaterialName_ColorOnly;                // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UMaterial*                                   VertexColorViewModeMaterial_AlphaAsColor;                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      VertexColorViewModeMaterialName_AlphaAsColor;             // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UMaterial*                                   VertexColorViewModeMaterial_RedOnly;                      // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      VertexColorViewModeMaterialName_RedOnly;                  // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UMaterial*                                   VertexColorViewModeMaterial_GreenOnly;                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      VertexColorViewModeMaterialName_GreenOnly;                // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UMaterial*                                   VertexColorViewModeMaterial_BlueOnly;                     // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      VertexColorViewModeMaterialName_BlueOnly;                 // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UMaterial*                                   ConstraintLimitMaterial;                                  // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ConstraintLimitMaterialX;                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ConstraintLimitMaterialY;                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ConstraintLimitMaterialZ;                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       ConstraintLimitMaterialName;                              // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UMaterial*                                   InvalidLightmapSettingsMaterial;                          // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       InvalidLightmapSettingsMaterialName;                      // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UMaterial*                                   PreviewShadowsIndicatorMaterial;                          // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       PreviewShadowsIndicatorMaterialName;                      // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	class UMaterial*                                   ArrowMaterial;                                            // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       ArrowMaterialName;                                        // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	struct FLinearColor                                LightingOnlyBrightness;                                   // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TArray<struct FColor>                              LightComplexityColors;                                    // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	TArray<struct FLinearColor>                        ShaderComplexityColors;                                   // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	TArray<struct FLinearColor>                        StationaryLightOverlapColors;                             // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	TArray<struct FLinearColor>                        LODColorationColors;                                      // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	float                                              MaxPixelShaderAdditiveComplexityCount;                    // 0x01E3(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              MaxES2PixelShaderAdditiveComplexityCount;                 // 0x01E3(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              MinLightMapDensity;                                       // 0x01E3(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              IdealLightMapDensity;                                     // 0x01E3(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              MaxLightMapDensity;                                       // 0x01E3(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      bRenderLightMapDensityGrayscale : 1;                      // 0x01E3(0x0001) (Config, GlobalConfig)
	float                                              RenderLightMapDensityGrayscaleScale;                      // 0x01E3(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              RenderLightMapDensityColorScale;                          // 0x01E3(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	struct FLinearColor                                LightMapDensityVertexMappedColor;                         // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	struct FLinearColor                                LightMapDensitySelectedColor;                             // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TArray<struct FStatColorMapping>                   StatColorMappings;                                        // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                      // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       DefaultPhysMaterialName;                                  // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	TArray<struct FGameNameRedirect>                   ActiveGameNameRedirects;                                  // 0x01E3(0x0010) (ZeroConstructor, Config)
	TArray<struct FClassRedirect>                      ActiveClassRedirects;                                     // 0x01E3(0x0010) (ZeroConstructor, Config)
	TArray<struct FPluginRedirect>                     ActivePluginRedirects;                                    // 0x01E3(0x0010) (ZeroConstructor, Config)
	TArray<struct FStructRedirect>                     ActiveStructRedirects;                                    // 0x01E3(0x0010) (ZeroConstructor, Config)
	class UTexture2D*                                  PreIntegratedSkinBRDFTexture;                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       PreIntegratedSkinBRDFTextureName;                         // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UTexture2D*                                  MiniFontTexture;                                          // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       MiniFontTextureName;                                      // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UTexture*                                    WeightMapPlaceholderTexture;                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       WeightMapPlaceholderTextureName;                          // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UTexture2D*                                  LightMapDensityTexture;                                   // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       LightMapDensityTextureName;                               // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	class UGameViewportClient*                         GameViewport;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              DeferredCommands;                                         // 0x01E3(0x0010) (ZeroConstructor)
	int                                                TickCycles;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GameCycles;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ClientCycles;                                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NearClipPlane;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bHardwareSurveyEnabled : 1;                               // 0x01E3(0x0001) (Deprecated)
	unsigned char                                      bSubtitlesEnabled : 1;                                    // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      bSubtitlesForcedOff : 1;                                  // 0x01E3(0x0001) (Edit, Config)
	int                                                MaximumLoopIterationCount;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bCanBlueprintsTickByDefault : 1;                          // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      bOptimizeAnimBlueprintMemberVariableAccess : 1;           // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      bEnableEditorPSysRealtimeLOD : 1;                         // 0x01E3(0x0001) (Config)
	unsigned char                                      UnknownData01 : 1;                                        // 0x01E3(0x0001)
	unsigned char                                      bSmoothFrameRate : 1;                                     // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      bUseFixedFrameRate : 1;                                   // 0x01E3(0x0001) (Edit, Config)
	float                                              FixedFrameRate;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FFloatRange                                 SmoothedFrameRateRange;                                   // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bCheckForMultiplePawnsSpawnedInAFrame : 1;                // 0x01E3(0x0001) (Config)
	int                                                NumPawnsAllowedToBeSpawnedInAFrame;                       // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bShouldGenerateLowQualityLightmaps : 1;                   // 0x01E3(0x0001) (Config, GlobalConfig)
	struct FColor                                      C_WorldBox;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      C_BrushWire;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      C_AddWire;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      C_SubtractWire;                                           // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      C_SemiSolidWire;                                          // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      C_NonSolidWire;                                           // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      C_WireBackground;                                         // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      C_ScaleBoxHi;                                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      C_VolumeCollision;                                        // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      C_BSPCollision;                                           // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      C_OrthoBackground;                                        // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      C_Volume;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      C_BrushShape;                                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StreamingDistanceFactor;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETransitionType>                       TransitionType;                                           // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	class FString                                      TransitionDescription;                                    // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      TransitionGameMode;                                       // 0x01E3(0x0010) (ZeroConstructor)
	float                                              MeshLODRange;                                             // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bAllowMatureLanguage : 1;                                 // 0x01E3(0x0001) (Config)
	float                                              CameraRotationThreshold;                                  // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraTranslationThreshold;                               // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              PrimitiveProbablyVisibleTime;                             // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxOcclusionPixelsFraction;                               // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bPauseOnLossOfFocus : 1;                                  // 0x01E3(0x0001) (Config)
	int                                                MaxParticleResize;                                        // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxParticleResizeWarn;                                    // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FDropNoteInfo>                       PendingDroppedNotes;                                      // 0x01E3(0x0010) (ZeroConstructor, Transient)
	struct FRigidBodyErrorCorrection                   PhysicErrorCorrection;                                    // 0x01E3(0x001C) (Config)
	float                                              NetClientTicksPerSecond;                                  // 0x01E3(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      bHasPendingGlobalReregister : 1;                          // 0x01E3(0x0001) (Transient)
	float                                              DisplayGamma;                                             // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MinDesiredFrameRate;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FLinearColor                                DefaultSelectedMaterialColor;                             // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	struct FLinearColor                                SelectedMaterialColor;                                    // 0x01E3(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	struct FLinearColor                                SelectionOutlineColor;                                    // 0x01E3(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	struct FLinearColor                                SubduedSelectionOutlineColor;                             // 0x01E3(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	struct FLinearColor                                SelectedMaterialColorOverride;                            // 0x01E3(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsOverridingSelectedColor;                               // 0x01E3(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bEnableOnScreenDebugMessages : 1;                         // 0x01E3(0x0001) (Config, GlobalConfig)
	unsigned char                                      bEnableOnScreenDebugMessagesDisplay : 1;                  // 0x01E3(0x0001) (Transient)
	unsigned char                                      bSuppressMapWarnings : 1;                                 // 0x01E3(0x0001) (Config, GlobalConfig)
	unsigned char                                      bCookSeparateSharedMPGameContent : 1;                     // 0x01E3(0x0001) (Config, GlobalConfig)
	unsigned char                                      bDisableAILogging : 1;                                    // 0x01E3(0x0001) (Config, GlobalConfig)
	uint32_t                                           bEnableVisualLogRecordingOnStart;                         // 0x01E3(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                ScreenSaverInhibitorSemaphore;                            // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bLockReadOnlyLevels : 1;                                  // 0x01E3(0x0001) (Transient)
	class FString                                      ParticleEventManagerClassPath;                            // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	float                                              SelectionHighlightIntensity;                              // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BSPSelectionHighlightIntensity;                           // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              HoverHighlightIntensity;                                  // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              SelectionHighlightIntensityBillboards;                    // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FNetDriverDefinition>                NetDriverDefinitions;                                     // 0x01E3(0x0010) (ZeroConstructor, Transient, Config)
	TArray<class FString>                              ServerActors;                                             // 0x01E3(0x0010) (ZeroConstructor, Config)
	TArray<class FString>                              RuntimeServerActors;                                      // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      bStartedLoadMapMovie : 1;                                 // 0x01E3(0x0001) (Transient)
	unsigned char                                      UnknownData02[0x824];                                     // 0x01E4(0x0824) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Engine");
		return ptr;
	}

};


// Class Engine.GameEngine
// 0x0078 (0x0A80 - 0x0A08)
class UGameEngine : public UEngine
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0A08(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameEngine");
		return ptr;
	}

};


// Class Engine.GameInstance
// 0x0060 (0x0088 - 0x0028)
class UGameInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<class ULocalPlayer*>                        LocalPlayers;                                             // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameInstance");
		return ptr;
	}


	void ReceiveShutdown();
	void ReceiveInit();
	void DebugRemovePlayer(int ControllerId);
	void DebugCreatePlayer(int ControllerId);
};


// Class Engine.Info
// 0x0000 (0x0470 - 0x0470)
class AInfo : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Info");
		return ptr;
	}

};


// Class Engine.GameMode
// 0x00F8 (0x0568 - 0x0470)
class AGameMode : public AInfo
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0470(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameMode");
		return ptr;
	}


	void StartPlay();
	void StartMatch();
	class APawn* SpawnDefaultPawnFor(class AController* NewPlayer, class AActor* StartSpot);
	bool ShouldReset(class AActor* ActorToReset);
	void SetBandwidthLimit(float AsyncIOBandwidthLimit);
	void ReturnToMainMenuHost();
	void RestartGame();
	void ResetLevel();
	bool ReadyToStartMatch();
	bool ReadyToEndMatch();
	bool PlayerCanRestart(class APlayerController* Player);
	bool MustSpectate(class APlayerController* NewPlayerController);
	void K2_PostLogin(class APlayerController* NewPlayer);
	void K2_OnSwapPlayerControllers(class APlayerController* OldPC, class APlayerController* NewPC);
	void K2_OnSetMatchState(const struct FName& NewState);
	void K2_OnRestartPlayer(class AController* NewPlayer);
	void K2_OnLogout(class AController* ExitingController);
	void K2_OnChangeName(class AController* Other, const class FString& NewName, bool bNameChange);
	class AActor* K2_FindPlayerStart(class AController* Player);
	bool IsMatchInProgress();
	void InitStartSpot(class AActor* StartSpot, class AController* NewPlayer);
	bool HasMatchStarted();
	bool HasMatchEnded();
	int GetNumPlayers();
	struct FName GetMatchState();
	class UClass* GetDefaultPawnClassForController(class AController* InController);
	class AActor* FindPlayerStart(class AController* Player, const class FString& IncomingName);
	void EndMatch();
	class AActor* ChoosePlayerStart(class AController* Player);
	void ChangeName(class AController* Controller, const class FString& NewName, bool bNameChange);
	bool CanSpectate(class APlayerController* Viewer, class APlayerState* ViewTarget);
	void AbortMatch();
};


// Class Engine.PrimitiveComponent
// 0x0380 (0x0670 - 0x02F0)
class UPrimitiveComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x380];                                     // 0x02F0(0x0380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrimitiveComponent");
		return ptr;
	}


	void WakeRigidBody(const struct FName& BoneName);
	void WakeAllRigidBodies();
	void SetWalkableSlopeOverride(const struct FWalkableSlopeOverride& NewOverride);
	void SetTranslucentSortPriority(int NewTranslucentSortPriority);
	void SetSimulatePhysics(bool bSimulate);
	void SetRenderInMainPass(bool bValue);
	void SetRenderCustomDepth(bool bValue);
	void SetPhysMaterialOverride(class UPhysicalMaterial* NewPhysMaterial);
	void SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, const struct FName& BoneName);
	void SetPhysicsLinearVelocity(const struct FVector& NewVel, bool bAddToCurrent, const struct FName& BoneName);
	void SetPhysicsAngularVelocity(const struct FVector& NewAngVel, bool bAddToCurrent, const struct FName& BoneName);
	void SetOwnerNoSee(bool bNewOwnerNoSee);
	void SetOnlyOwnerSee(bool bNewOnlyOwnerSee);
	void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision);
	void SetMaterial(int ElementIndex, class UMaterialInterface* Material);
	void SetMassScale(const struct FName& BoneName, float InMassScale);
	void SetMassOverrideInKg(const struct FName& BoneName, float MassInKg, bool bOverrideMass);
	void SetLockedAxis(TEnumAsByte<EDOFMode> LockedAxis);
	void SetLinearDamping(float InDamping);
	void SetGenerateOverlapEvents(bool bEnable);
	void SetEnableGravity(bool bGravityEnabled);
	void SetCustomDepthStencilValue(int Value);
	void SetCullDistance(float NewCullDistance);
	void SetConstraintMode(TEnumAsByte<EDOFMode> ConstraintMode);
	void SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);
	void SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse> NewResponse);
	void SetCollisionProfileName(const struct FName& InCollisionProfileName);
	void SetCollisionObjectType(TEnumAsByte<ECollisionChannel> Channel);
	void SetCollisionEnabled(TEnumAsByte<ECollisionEnabled> NewType);
	void SetCenterOfMass(const struct FVector& CenterOfMassOffset, const struct FName& BoneName);
	void SetCastShadow(bool NewCastShadow);
	void SetAngularDamping(float InDamping);
	void SetAllPhysicsLinearVelocity(const struct FVector& NewVel, bool bAddToCurrent);
	void SetAllMassScale(float InMassScale);
	struct FVector ScaleByMomentOfInertia(const struct FVector& InputVector, const struct FName& BoneName);
	void PutRigidBodyToSleep(const struct FName& BoneName);
	bool K2_LineTraceComponent(const struct FVector& TraceStart, const struct FVector& TraceEnd, bool bTraceComplex, bool bShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName);
	bool IsOverlappingComponent(class UPrimitiveComponent* OtherComp);
	bool IsOverlappingActor(class AActor* Other);
	bool IsGravityEnabled();
	void IgnoreActorWhenMoving(class AActor* Actor, bool bShouldIgnore);
	struct FWalkableSlopeOverride GetWalkableSlopeOverride();
	struct FVector GetPhysicsLinearVelocityAtPoint(const struct FVector& Point, const struct FName& BoneName);
	struct FVector GetPhysicsLinearVelocity(const struct FName& BoneName);
	struct FVector GetPhysicsAngularVelocity(const struct FName& BoneName);
	void GetOverlappingComponents(TArray<class UPrimitiveComponent*>* InOverlappingComponents);
	void GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors);
	TArray<struct FOverlapInfo> GetOverlapInfos();
	int GetNumMaterials();
	class UMaterialInterface* GetMaterial(int ElementIndex);
	float GetMassScale(const struct FName& BoneName);
	float GetMass();
	float GetLinearDamping();
	struct FVector GetInertiaTensor(const struct FName& BoneName);
	TEnumAsByte<ECollisionResponse> GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel);
	struct FName GetCollisionProfileName();
	TEnumAsByte<ECollisionChannel> GetCollisionObjectType();
	float GetClosestPointOnCollision(const struct FVector& Point, const struct FName& BoneName, struct FVector* OutPointOnBody);
	struct FVector GetCenterOfMass(const struct FName& BoneName);
	float GetAngularDamping();
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int ElementIndex, class UMaterialInterface* SourceMaterial);
	class UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int ElementIndex, class UMaterialInterface* Parent);
	class UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int ElementIndex);
	TArray<class AActor*> CopyArrayOfMoveIgnoreActors();
	void ClearMoveIgnoreActors();
	bool CanCharacterStepUp(class APawn* Pawn);
	void AddTorque(const struct FVector& Torque, const struct FName& BoneName, bool bAccelChange);
	void AddRadialImpulse(const struct FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bVelChange);
	void AddRadialForce(const struct FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bAccelChange);
	void AddImpulseAtLocation(const struct FVector& Impulse, const struct FVector& Location, const struct FName& BoneName);
	void AddImpulse(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange);
	void AddForceAtLocation(const struct FVector& Force, const struct FVector& Location, const struct FName& BoneName);
	void AddForce(const struct FVector& Force, const struct FName& BoneName, bool bAccelChange);
	void AddAngularImpulse(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange);
};


// Class Engine.GameUserSettings
// 0x0050 (0x0078 - 0x0028)
class UGameUserSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	bool                                               bUseVSync;                                                // 0x01E3(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ResolutionSizeX;                                          // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ResolutionSizeY;                                          // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           LastUserConfirmedResolutionSizeX;                         // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           LastUserConfirmedResolutionSizeY;                         // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                WindowPosX;                                               // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                WindowPosY;                                               // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseDesktopResolutionForFullscreen;                       // 0x01E3(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	int                                                FullscreenMode;                                           // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                LastConfirmedFullscreenMode;                              // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           Version;                                                  // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameUserSettings");
		return ptr;
	}

};


// Class Engine.ScriptViewportClient
// 0x0008 (0x0030 - 0x0028)
class UScriptViewportClient : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ScriptViewportClient");
		return ptr;
	}

};


// Class Engine.GameViewportClient
// 0x0338 (0x0368 - 0x0030)
class UGameViewportClient : public UScriptViewportClient
{
public:
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	class UConsole*                                    ViewportConsole;                                          // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FDebugDisplayProperty>               DebugProperties;                                          // 0x01E3(0x0010) (ZeroConstructor)
	class UWorld*                                      World;                                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17D];                                     // 0x01EB(0x017D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameViewportClient");
		return ptr;
	}


	void SSSwapControllers();
	void ShowTitleSafeArea();
	void SetConsoleTarget(int PlayerIndex);
};


// Class Engine.Player
// 0x0020 (0x0048 - 0x0028)
class UPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class APlayerController*                           PlayerController;                                         // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                CurrentNetSpeed;                                          // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ConfiguredInternetSpeed;                                  // 0x01E3(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Player");
		return ptr;
	}

};


// Class Engine.LocalPlayer
// 0x01B8 (0x0200 - 0x0048)
class ULocalPlayer : public UPlayer
{
public:
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	class UGameViewportClient*                         ViewportClient;                                           // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAspectRatioAxisConstraint>            AspectRatioAxisConstraint;                                // 0x01E3(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	class UClass*                                      PendingLevelPlayerControllerClass;                        // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSentSplitJoin : 1;                                       // 0x01E3(0x0001) (Edit, Transient, EditConst)
	float                                              MinimumAspectRatio;                                       // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x19];                                      // 0x01E7(0x0019) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalPlayer");
		return ptr;
	}

};


// Class Engine.PlayerCameraManager
// 0x1800 (0x1C70 - 0x0470)
class APlayerCameraManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1800];                                    // 0x0470(0x1800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerCameraManager");
		return ptr;
	}


	void StopCameraShake(class UCameraShake* ShakeInstance);
	void StopCameraFade();
	void StopCameraAnimInst(class UCameraAnimInst* AnimInst, bool bImmediate);
	void StopAllInstancesOfCameraShake(class UClass* Shake);
	void StopAllInstancesOfCameraAnim(class UCameraAnim* Anim, bool bImmediate);
	void StopAllCameraShakes();
	void StopAllCameraAnims(bool bImmediate);
	void StartCameraFade(float FromAlpha, float ToAlpha, float Duration, const struct FLinearColor& Color, bool bShouldFadeAudio, bool bHoldWhenFinished);
	void SetManualCameraFade(float InFadeAmount, const struct FLinearColor& Color, bool bInFadeAudio);
	bool RemoveCameraModifier(class UCameraModifier* ModifierToRemove);
	void RemoveCameraLensEffect(class AEmitterCameraLensEffectBase* Emitter);
	class UCameraShake* PlayCameraShake(class UClass* ShakeClass, float Scale, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot);
	class UCameraAnimInst* PlayCameraAnim(class UCameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot);
	bool IsScreenFullyOccluded();
	bool IsFadeInProgress();
	class APlayerController* GetOwningPlayerController();
	float GetFOVAngle();
	struct FRotator GetCameraRotation();
	struct FVector GetCameraLocation();
	class UCameraModifier* FindCameraModifierByClass(class UClass* ModifierClass);
	void ClearCameraLensEffects();
	bool BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector* NewCameraLocation, struct FRotator* NewCameraRotation, float* NewCameraFOV);
	class UCameraModifier* AddNewCameraModifier(class UClass* ModifierClass);
	class AEmitterCameraLensEffectBase* AddCameraLensEffect(class UClass* LensEffectEmitterClass);
};


// Class Engine.PlayerState
// 0x0090 (0x0500 - 0x0470)
class APlayerState : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0470(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerState");
		return ptr;
	}


	void OnRep_UniqueId();
	void OnRep_Score();
	void OnRep_PlayerName();
	void OnRep_bIsInactive();
};


// Class Engine.SpringArmComponent
// 0x0080 (0x0370 - 0x02F0)
class USpringArmComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x02F0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpringArmComponent");
		return ptr;
	}

};


// Class Engine.StaticMeshActor
// 0x0010 (0x0480 - 0x0470)
class AStaticMeshActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0470(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshActor");
		return ptr;
	}

};


// Class Engine.WorldSettings
// 0x01A8 (0x0618 - 0x0470)
class AWorldSettings : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0470(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WorldSettings");
		return ptr;
	}


	void OnRep_WorldGravityZ();
};


// Class Engine.CameraModifier
// 0x0020 (0x0048 - 0x0028)
class UCameraModifier : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	unsigned char                                      bDebug : 1;                                               // 0x01E3(0x0001) (Edit)
	unsigned char                                      bExclusive : 1;                                           // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      Priority;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APlayerCameraManager*                        CameraOwner;                                              // 0x01E3(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              AlphaInTime;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AlphaOutTime;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraModifier");
		return ptr;
	}


	bool IsDisabled();
	class AActor* GetViewTarget();
	void EnableModifier();
	void DisableModifier(bool bImmediate);
	void BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings);
	void BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV);
};


// Class Engine.Texture
// 0x0110 (0x0138 - 0x0028)
class UTexture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	int                                                LODBias;                                                  // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumCinematicMipLevels;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SRGB : 1;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      NeverStream : 1;                                          // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bNoTiling : 1;                                            // 0x01E3(0x0001)
	unsigned char                                      bUseCinematicMipLevels : 1;                               // 0x01E3(0x0001) (Transient)
	unsigned char                                      CompressionNone : 1;                                      // 0x01E3(0x0001) (Edit)
	unsigned char                                      bUAV : 1;                                                 // 0x01E3(0x0001)
	uint32_t                                           MaxQualityReduction;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CachedCombinedLODBias;                                    // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bAsyncResourceReleaseHasBeenStarted : 1;                  // 0x01E3(0x0001) (Transient)
	TEnumAsByte<ETextureCompressionSettings>           CompressionSettings;                                      // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureFilter>                        Filter;                                                   // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureGroup>                         LODGroup;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StreamingPriorityBoost;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture");
		return ptr;
	}

};


// Class Engine.TextureRenderTarget
// 0x0008 (0x0140 - 0x0138)
class UTextureRenderTarget : public UTexture
{
public:
	unsigned char                                      UnknownData00[0xAB];                                      // 0x0138(0x00AB) MISSED OFFSET
	float                                              TargetGamma;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTarget");
		return ptr;
	}

};


// Class Engine.TextureRenderTarget2D
// 0x0028 (0x0168 - 0x0140)
class UTextureRenderTarget2D : public UTextureRenderTarget
{
public:
	unsigned char                                      UnknownData00[0xA3];                                      // 0x0140(0x00A3) MISSED OFFSET
	int                                                SizeX;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SizeY;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ClearColor;                                               // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressX;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressY;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bForceLinearGamma : 1;                                    // 0x01E3(0x0001)
	unsigned char                                      bHDR : 1;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAutoGenerateMips : 1;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EPixelFormat>                          OverrideFormat;                                           // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDontClearOnCreation;                                     // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTarget2D");
		return ptr;
	}

};


// Class Engine.DebugCameraController
// 0x0050 (0x07B0 - 0x0760)
class ADebugCameraController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0760(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugCameraController");
		return ptr;
	}


	void ShowDebugSelectedInfo();
	void IncreaseFOV();
	void IncreaseCameraSpeed();
	void DecreaseFOV();
	void DecreaseCameraSpeed();
};


// Class Engine.MeshComponent
// 0x0010 (0x0680 - 0x0670)
class UMeshComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0670(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshComponent");
		return ptr;
	}


	void ResetDefaultMaterials();
	TArray<class UMaterialInterface*> GetMaterials();
};


// Class Engine.StaticMeshComponent
// 0x0070 (0x06F0 - 0x0680)
class UStaticMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0680(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshComponent");
		return ptr;
	}


	bool SetStaticMesh(class UStaticMesh* NewMesh);
	void SetForcedLodModel(int NewForcedLodModel);
	void OnRep_StaticMesh(class UStaticMesh* OldStaticMesh);
	void GetLocalBounds(struct FVector* Min, struct FVector* Max);
	void EnableAutomaticInstancing();
};


// Class Engine.HUD
// 0x00F8 (0x0568 - 0x0470)
class AHUD : public AActor
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0470(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HUD");
		return ptr;
	}


	void ShowHUD();
	void ShowDebugToggleSubCategory(const struct FName& Category);
	void ShowDebugForReticleTargetToggle(class UClass* DesiredClass);
	void ShowDebug(const struct FName& DebugType);
	void RemoveDebugText(class AActor* SrcActor, bool bLeaveDurationText);
	void RemoveAllDebugStrings();
	void ReceiveHitBoxRelease(const struct FName& BoxName);
	void ReceiveHitBoxEndCursorOver(const struct FName& BoxName);
	void ReceiveHitBoxClick(const struct FName& BoxName);
	void ReceiveHitBoxBeginCursorOver(const struct FName& BoxName);
	void ReceiveDrawHUD(int SizeX, int SizeY);
	struct FVector Project(const struct FVector& Location);
	void GetTextSize(const class FString& Text, class UFont* Font, float Scale, float* OutWidth, float* OutHeight);
	class APlayerController* GetOwningPlayerController();
	class APawn* GetOwningPawn();
	void GetActorsInSelectionRectangle(class UClass* ClassFilter, const struct FVector2D& FirstPoint, const struct FVector2D& SecondPoint, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed, TArray<class AActor*>* OutActors);
	void DrawTextureSimple(class UTexture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition);
	void DrawTexture(class UTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, const struct FLinearColor& TintColor, TEnumAsByte<EBlendMode> BlendMode, float Scale, bool bScalePosition, float Rotation, const struct FVector2D& RotPivot);
	void DrawText(const class FString& Text, const struct FLinearColor& TextColor, float ScreenX, float ScreenY, class UFont* Font, float Scale, bool bScalePosition);
	void DrawRect(const struct FLinearColor& RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH);
	void DrawMaterialTriangle(class UMaterialInterface* Material, const struct FVector2D& V0_Pos, const struct FVector2D& V1_Pos, const struct FVector2D& V2_Pos, const struct FVector2D& V0_UV, const struct FVector2D& V1_UV, const struct FVector2D& V2_UV, const struct FLinearColor& V0_Color, const struct FLinearColor& V1_Color, const struct FLinearColor& V2_Color);
	void DrawMaterialSimple(class UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition);
	void DrawMaterial(class UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, const struct FVector2D& RotPivot);
	void DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, const struct FLinearColor& LineColor);
	void Deproject(float ScreenX, float ScreenY, struct FVector* WorldPosition, struct FVector* WorldDirection);
	void AddHitBox(const struct FVector2D& Position, const struct FVector2D& Size, const struct FName& InName, bool bConsumesInput, int Priority);
	void AddDebugText(const class FString& DebugText, class AActor* SrcActor, float Duration, const struct FVector& Offset, const struct FVector& DesiredOffset, const struct FColor& TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, class UFont* InFont, float FontScale, bool bDrawShadow);
};


// Class Engine.LevelScriptActor
// 0x0008 (0x0478 - 0x0470)
class ALevelScriptActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelScriptActor");
		return ptr;
	}


	void WorldOriginLocationChanged(const struct FIntVector& OldOriginLocation, const struct FIntVector& NewOriginLocation);
	void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
	bool RemoteEvent(const struct FName& EventName);
	void MatchStarted();
	void LevelReset();
	void InitialNetRelevantActorsCreated();
};


// Class Engine.NavigationObjectBase
// 0x0028 (0x0498 - 0x0470)
class ANavigationObjectBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0470(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationObjectBase");
		return ptr;
	}

};


// Class Engine.PlayerStart
// 0x0008 (0x04A0 - 0x0498)
class APlayerStart : public ANavigationObjectBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0498(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerStart");
		return ptr;
	}

};


// Class Engine.ShapeComponent
// 0x0020 (0x0690 - 0x0670)
class UShapeComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0670(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShapeComponent");
		return ptr;
	}

};


// Class Engine.SphereComponent
// 0x0010 (0x06A0 - 0x0690)
class USphereComponent : public UShapeComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0690(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereComponent");
		return ptr;
	}


	void SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps);
	float GetUnscaledSphereRadius();
	float GetShapeScale();
	float GetScaledSphereRadius();
};


// Class Engine.GameState
// 0x0058 (0x04C8 - 0x0470)
class AGameState : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0470(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameState");
		return ptr;
	}


	void OnRep_SpectatorClass();
	void OnRep_ReplicatedWorldTimeSeconds();
	void OnRep_MatchState();
	void OnRep_GameModeClass();
	void OnRep_ElapsedTime();
	float GetServerWorldTimeSeconds();
};


// Class Engine.CapsuleComponent
// 0x0010 (0x06A0 - 0x0690)
class UCapsuleComponent : public UShapeComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0690(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CapsuleComponent");
		return ptr;
	}


	void SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps);
	void SetCapsuleRadius(float Radius, bool bUpdateOverlaps);
	void SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps);
	void GetUnscaledCapsuleSize(float* OutRadius, float* OutHalfHeight);
	float GetUnscaledCapsuleRadius();
	float GetUnscaledCapsuleHalfHeight();
	float GetShapeScale();
	void GetScaledCapsuleSize(float* OutRadius, float* OutHalfHeight);
	float GetScaledCapsuleRadius();
	float GetScaledCapsuleHalfHeight();
};


// Class Engine.ThreadedActor
// 0x0000 (0x0470 - 0x0470)
class AThreadedActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ThreadedActor");
		return ptr;
	}

};


// Class Engine.MaterialInterface
// 0x0030 (0x0058 - 0x0028)
class UMaterialInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class USubsurfaceProfile*                          SubsurfaceProfile;                                        // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInterface");
		return ptr;
	}


	class UPhysicalMaterial* GetPhysicalMaterial();
	class UMaterial* GetBaseMaterial();
};


// Class Engine.Material
// 0x0A08 (0x0A60 - 0x0058)
class UMaterial : public UMaterialInterface
{
public:
	unsigned char                                      UnknownData00[0x18B];                                     // 0x0058(0x018B) MISSED OFFSET
	unsigned char                                      bTranslucentBeforeTranslucency : 1;                       // 0x01E3(0x0001) (Edit)
	unsigned char                                      bBlendedOITAfterTranslucency : 1;                         // 0x01E3(0x0001) (Edit)
	unsigned char                                      bDisableDepthTest : 1;                                    // 0x01E3(0x0001) (Edit)
	unsigned char                                      bEnableSeparateTranslucency : 1;                          // 0x01E3(0x0001) (Edit)
	unsigned char                                      bEnableResponsiveAA : 1;                                  // 0x01E3(0x0001) (Edit)
	unsigned char                                      bScreenSpaceReflections : 1;                              // 0x01E3(0x0001) (Edit)
	unsigned char                                      TwoSided : 1;                                             // 0x01E3(0x0001) (Edit)
	struct FColorMaterialInput                         DiffuseColor;                                             // 0x01E3(0x0040) (Deprecated)
	struct FColorMaterialInput                         SpecularColor;                                            // 0x01E3(0x0040) (Deprecated)
	struct FColorMaterialInput                         BaseColor;                                                // 0x01E3(0x0040)
	struct FScalarMaterialInput                        Metallic;                                                 // 0x01E3(0x0040)
	struct FScalarMaterialInput                        Specular;                                                 // 0x01E3(0x0040)
	struct FScalarMaterialInput                        Roughness;                                                // 0x01E3(0x0040)
	struct FVectorMaterialInput                        Normal;                                                   // 0x01E3(0x0048)
	struct FColorMaterialInput                         EmissiveColor;                                            // 0x01E3(0x0040)
	struct FScalarMaterialInput                        Opacity;                                                  // 0x01E3(0x0040)
	struct FScalarMaterialInput                        OpacityMask;                                              // 0x01E3(0x0040)
	TEnumAsByte<EMaterialDomain>                       MaterialDomain;                                           // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBlendMode>                            BlendMode;                                                // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDecalBlendMode>                       DecalBlendMode;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMaterialDecalResponse>                MaterialDecalResponse;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMaterialShadingModel>                 ShadingModel;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OpacityMaskClipValue;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DepthWeightScale;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DepthWeightExponent;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DepthWeightBase;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 1;                                        // 0x01E3(0x0001)
	unsigned char                                      bForceResolution : 1;                                     // 0x01E3(0x0001) (Edit)
	TEnumAsByte<ELowResTranslucencyCascade>            ForcedResolution;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FirstSplitDistance;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SecondSplitDistance;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PopPerParticle : 1;                                       // 0x01E3(0x0001) (Edit)
	struct FVectorMaterialInput                        WorldPositionOffset;                                      // 0x01E3(0x0048)
	struct FVectorMaterialInput                        WorldDisplacement;                                        // 0x01E3(0x0048)
	struct FScalarMaterialInput                        TessellationMultiplier;                                   // 0x01E3(0x0040)
	struct FColorMaterialInput                         SubsurfaceColor;                                          // 0x01E3(0x0040)
	struct FScalarMaterialInput                        ClearCoat;                                                // 0x01E3(0x0040)
	struct FScalarMaterialInput                        ClearCoatRoughness;                                       // 0x01E3(0x0040)
	struct FScalarMaterialInput                        AmbientOcclusion;                                         // 0x01E3(0x0040)
	struct FScalarMaterialInput                        Refraction;                                               // 0x01E3(0x0040)
	struct FColorMaterialInput                         BillboardColor;                                           // 0x01E3(0x0040)
	struct FVectorMaterialInput                        BillboardParams;                                          // 0x01E3(0x0048)
	struct FVector2MaterialInput                       CustomizedUVs[0x8];                                       // 0x01E3(0x0048)
	struct FMaterialAttributesInput                    MaterialAttributes;                                       // 0x01E3(0x0038) (ZeroConstructor)
	struct FScalarMaterialInput                        PixelDepthOffset;                                         // 0x01E3(0x0040)
	unsigned char                                      UnknownData02 : 5;                                        // 0x01E3(0x0001)
	unsigned char                                      DitheredLODTransition : 1;                                // 0x01E3(0x0001) (Edit)
	TEnumAsByte<EConstantMaterial>                     ConstantMaterial;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SkyLightWhenOccluded;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CloudShadowsInfluence;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumCustomizedUVs;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETranslucencyLightingMode>             TranslucencyLightingMode;                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TranslucencyDirectionalLightingIntensity;                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LightColorInfluence;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AmbientLightColorInfluence;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LightIntensityInfluence;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AmbientLightIntensityInfluence;                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AlternativeAmbientLightColorInfluence;                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AlternativeAmbientLightIntensityInfluence;                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEvaluateLightningAtParticleCenter : 1;                   // 0x01E3(0x0001) (Edit)
	float                                              TranslucencyScaleForReflection;                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bObjectFadeEnabled : 1;                                   // 0x01E3(0x0001) (Edit)
	float                                              ObjectFadeRate;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ObjectFadeDistanceThreshold;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TranslucentShadowDensityScale;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TranslucentSelfShadowDensityScale;                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TranslucentSelfShadowSecondDensityScale;                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TranslucentSelfShadowSecondOpacity;                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TranslucentBackscatteringExponent;                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TranslucentMultipleScatteringExtinction;                  // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TranslucentShadowStartOffset;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03 : 1;                                        // 0x01E3(0x0001)
	unsigned char                                      bGenerateSphericalParticleNormals : 1;                    // 0x01E3(0x0001) (Edit)
	unsigned char                                      bDontRenderWhenPlayerInsideShip : 1;                      // 0x01E3(0x0001) (Edit)
	unsigned char                                      bTangentSpaceNormal : 1;                                  // 0x01E3(0x0001) (Edit)
	unsigned char                                      bUseEmissiveForDynamicAreaLighting : 1;                   // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bBlockGI : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUsedAsSpecialEngineMaterial : 1;                         // 0x01E3(0x0001) (DuplicateTransient)
	unsigned char                                      bUsedWithSkeletalMesh : 1;                                // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithEditorCompositing : 1;                           // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithLandscape : 1;                                   // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithParticleSprites : 1;                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithCPUParticleSprites : 1;                          // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithStaticMesh : 1;                                  // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithCoverage : 1;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithGPUInstanceCulling : 1;                          // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithBeamTrails : 1;                                  // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithMeshParticles : 1;                               // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithStaticLighting : 1;                              // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithFluidSurfaces : 1;                               // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithMorphTargets : 1;                                // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithSplineMeshes : 1;                                // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithInstancedStaticMeshes : 1;                       // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsesDistortion : 1;                                      // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithClothing : 1;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithDeformables : 1;                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithFFTWaterMask : 1;                                // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithDynamicObjectFading : 1;                         // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithWaterBoundary : 1;                               // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithClouds : 1;                                      // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithInstancedRopes : 1;                              // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithPlanarReflection : 1;                            // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithPointLightShadows : 1;                           // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsedWithUI : 1;                                          // 0x01E3(0x0001) (Deprecated)
	unsigned char                                      bAutomaticallySetUsageInEditor : 1;                       // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bApplyWaterMask : 1;                                      // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUseReZ : 1;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bFullyRough : 1;                                          // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUseLightmapDirectionality : 1;                           // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EMaterialGeometryMode>                 GeometryMode;                                             // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMaterialTessellationMode>             D3D11TessellationMode;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableCrackFreeDisplacement : 1;                         // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bEnableAdaptiveTessellation : 1;                          // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              MaxDisplacement;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Wireframe : 1;                                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bOutputVelocityOnBasePass : 1;                            // 0x01E3(0x0001) (Edit)
	float                                              NormalOffsetShadowBiasScale;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EditorX;                                                  // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EditorY;                                                  // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EditorPitch;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EditorYaw;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialExpression*>                 Expressions;                                              // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FMaterialFunctionInfo>               MaterialFunctionInfos;                                    // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FMaterialParameterCollectionInfo>    MaterialParameterCollectionInfos;                         // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      bCanMaskedBeAssumedOpaque : 1;                            // 0x01E3(0x0001)
	unsigned char                                      bIsMasked : 1;                                            // 0x01E3(0x0001) (Deprecated)
	unsigned char                                      bIsPreviewMaterial : 1;                                   // 0x01E3(0x0001) (Transient, DuplicateTransient)
	unsigned char                                      bUseMaterialAttributes : 1;                               // 0x01E3(0x0001) (Edit)
	unsigned char                                      bUseTranslucencyVertexFog : 1;                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAllowDevelopmentShaderCompile : 1;                       // 0x01E3(0x0001) (Transient, DuplicateTransient)
	unsigned char                                      bIsMaterialEditorStatsMaterial : 1;                       // 0x01E3(0x0001) (Transient, DuplicateTransient)
	uint32_t                                           UsageFlagWarnings;                                        // 0x01E3(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EBlendableLocation>                    BlendableLocation;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BlendablePriority;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsAlphaBlended : 1;                                      // 0x01E3(0x0001) (Edit, BlueprintVisible)
	float                                              RefractionDepthBias;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       StateId;                                                  // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                UnwrappedUVSet;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UTexture*>                            ExpressionTextureReferences;                              // 0x01E3(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData04[0x86D];                                     // 0x01F3(0x086D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Material");
		return ptr;
	}

};


// Class Engine.BoxComponent
// 0x0010 (0x06A0 - 0x0690)
class UBoxComponent : public UShapeComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0690(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxComponent");
		return ptr;
	}


	void SetBoxExtent(const struct FVector& InBoxExtent, bool bUpdateOverlaps);
	struct FVector GetUnscaledBoxExtent();
	struct FVector GetScaledBoxExtent();
};


// Class Engine.ParticleSystemComponent
// 0x0290 (0x0900 - 0x0670)
class UParticleSystemComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x290];                                     // 0x0670(0x0290) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystemComponent");
		return ptr;
	}


	void SetVectorParameter(const struct FName& ParameterName, const struct FVector& Param);
	void SetTrailSourceData(const struct FName& InFirstSocketName, const struct FName& InSecondSocketName, TEnumAsByte<ETrailWidthMode> InWidthMode, float InWidth);
	void SetTemplate(class UParticleSystem* NewTemplate);
	void SetMaterialParameter(const struct FName& ParameterName, class UMaterialInterface* Param);
	void SetFloatParameter(const struct FName& ParameterName, float Param);
	void SetEmitterEnable(const struct FName& EmitterName, bool bNewEnableState);
	void SetColorParameter(const struct FName& ParameterName, const struct FLinearColor& Param);
	void SetBeamTargetTangent(int EmitterIndex, const struct FVector& NewTangentPoint, int TargetIndex);
	void SetBeamTargetStrength(int EmitterIndex, float NewTargetStrength, int TargetIndex);
	void SetBeamTargetPoint(int EmitterIndex, const struct FVector& NewTargetPoint, int TargetIndex);
	void SetBeamSourceTangent(int EmitterIndex, const struct FVector& NewTangentPoint, int SourceIndex);
	void SetBeamSourceStrength(int EmitterIndex, float NewSourceStrength, int SourceIndex);
	void SetBeamSourcePoint(int EmitterIndex, const struct FVector& NewSourcePoint, int SourceIndex);
	void SetBeamEndPoint(int EmitterIndex, const struct FVector& NewEndPoint);
	void SetActorParameter(const struct FName& ParameterName, class AActor* Param);
	int GetNumActiveParticles();
	class UMaterialInterface* GetNamedMaterial(const struct FName& InName);
	void GenerateParticleEvent(const struct FName& InEventName, float InEmitterTime, const struct FVector& InLocation, const struct FVector& InDirection, const struct FVector& InVelocity);
	void EndTrails();
	class UMaterialInstanceDynamic* CreateNamedDynamicMaterialInstance(const struct FName& InName, class UMaterialInterface* SourceMaterial);
	void BeginTrails(const struct FName& InFirstSocketName, const struct FName& InSecondSocketName, TEnumAsByte<ETrailWidthMode> InWidthMode, float InWidth);
	void AddEmitterPoint(const struct FVector4& Position, const struct FVector4& InheritedVelocity, const struct FVector4& Orientation);
};


// Class Engine.SplineComponent
// 0x0080 (0x06F0 - 0x0670)
class USplineComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0670(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineComponent");
		return ptr;
	}


	void SetWorldLocationAtSplinePoint(int PointIndex, const struct FVector& InLocation);
	void SetUnselectedSplineSegmentColor(const struct FLinearColor& SegmentColor);
	void SetTangentAtSplinePoint(int PointIndex, const struct FVector& InTangent, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	void SetSplineWorldPoints(TArray<struct FVector> Points);
	void SetSplinePointType(int PointIndex, TEnumAsByte<ESplinePointType> Type);
	void SetSplinePoints(TArray<struct FVector> Points, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	void SetSplineLocalPoints(TArray<struct FVector> Points);
	void SetSelectedSplineSegmentColor(const struct FLinearColor& SegmentColor);
	void SetLocationAtSplinePoint(int PointIndex, const struct FVector& InLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	void SetDefaultUpVector(const struct FVector& UpVector, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	void SetClosedLoop(bool bInClosedLoop);
	bool IsClosedLoop();
	struct FVector GetWorldTangentAtDistanceAlongSpline(float Distance);
	struct FRotator GetWorldRotationAtTime(float Time, bool bUseConstantVelocity);
	struct FRotator GetWorldRotationAtDistanceAlongSpline(float Distance);
	struct FVector GetWorldLocationAtTime(float Time, bool bUseConstantVelocity);
	struct FVector GetWorldLocationAtSplinePoint(int PointIndex);
	struct FVector GetWorldLocationAtDistanceAlongSpline(float Distance);
	struct FVector GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity);
	struct FVector GetWorldDirectionAtDistanceAlongSpline(float Distance);
	struct FVector GetUpVectorAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FVector GetUpVectorAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetUpVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FTransform GetTransformAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity, bool bUseScale);
	struct FTransform GetTransformAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale);
	struct FTransform GetTransformAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale);
	struct FVector GetTangentAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FVector GetTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetTangentAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	TEnumAsByte<ESplinePointType> GetSplinePointType(int PointIndex);
	float GetSplineLength();
	struct FVector GetScaleAtTime(float Time, bool bUseConstantVelocity);
	struct FVector GetScaleAtSplinePoint(int PointIndex);
	struct FVector GetScaleAtDistanceAlongSpline(float Distance);
	struct FRotator GetRotationAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FRotator GetRotationAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FRotator GetRotationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	float GetRollAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	float GetRollAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	float GetRollAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetRightVectorAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FVector GetRightVectorAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetRightVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FQuat GetQuaternionAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FQuat GetQuaternionAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FQuat GetQuaternionAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	int GetNumberOfSplinePoints();
	struct FVector GetLocationAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FVector GetLocationAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetLocationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	void GetLocationAndTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, struct FVector* Location, struct FVector* Tangent);
	void GetLocalLocationAndTangentAtSplinePoint(int PointIndex, struct FVector* LocalLocation, struct FVector* LocalTangent);
	float GetInputKeyAtDistanceAlongSpline(float Distance);
	float GetDistanceAlongSplineAtSplinePoint(int PointIndex);
	struct FVector GetDirectionAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FVector GetDirectionAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetDirectionAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetDefaultUpVector(TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	void ClearSplinePoints();
	void AddSplineWorldPoint(const struct FVector& Position);
	void AddSplinePoint(const struct FVector& Position, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	void AddSplineLocalPoint(const struct FVector& Position);
};


// Class Engine.FloatingPawnMovement
// 0x0018 (0x0170 - 0x0158)
class UFloatingPawnMovement : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8B];                                      // 0x0158(0x008B) MISSED OFFSET
	float                                              MaxSpeed;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Deceleration;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurningBoost;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPositionCorrected : 1;                                   // 0x01E3(0x0001) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FloatingPawnMovement");
		return ptr;
	}

};


// Class Engine.TextureProxy
// 0x0008 (0x0140 - 0x0138)
class UTextureProxy : public UTexture
{
public:
	unsigned char                                      UnknownData00[0xAB];                                      // 0x0138(0x00AB) MISSED OFFSET
	class UTexture*                                    Texture;                                                  // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureProxy");
		return ptr;
	}

};


// Class Engine.InstancedStaticMeshComponent
// 0x00B0 (0x07A0 - 0x06F0)
class UInstancedStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x06F0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InstancedStaticMeshComponent");
		return ptr;
	}


	bool UpdateInstanceTransform(int InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty);
	void SetCullDistances(int StartCullDistance, int EndCullDistance);
	bool RemoveInstance(int InstanceIndex);
	bool GetInstanceTransform(int InstanceIndex, bool bWorldSpace, struct FTransform* OutInstanceTransform);
	TArray<int> GetInstancesOverlappingSphere(const struct FVector& Center, float Radius, bool bSphereInWorldSpace);
	int GetInstanceCount();
	void EnableGPUVisibility(bool bEnable);
	void ClearInstances();
	int AddInstanceWorldSpace(const struct FTransform& WorldTransform);
	int AddInstance(const struct FTransform& InstanceTransform);
};


// Class Engine.HierarchicalInstancedStaticMeshComponent
// 0x00D0 (0x0870 - 0x07A0)
class UHierarchicalInstancedStaticMeshComponent : public UInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x07A0(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HierarchicalInstancedStaticMeshComponent");
		return ptr;
	}


	bool RemoveInstances(TArray<int> InstancesToRemove);
};


// Class Engine.Brush
// 0x0038 (0x04A8 - 0x0470)
class ABrush : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0470(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Brush");
		return ptr;
	}

};


// Class Engine.Volume
// 0x0000 (0x04A8 - 0x04A8)
class AVolume : public ABrush
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Volume");
		return ptr;
	}

};


// Class Engine.MaterialInstance
// 0x0198 (0x01F0 - 0x0058)
class UMaterialInstance : public UMaterialInterface
{
public:
	unsigned char                                      UnknownData00[0x18B];                                     // 0x0058(0x018B) MISSED OFFSET
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Parent;                                                   // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHasStaticPermutationResource : 1;                        // 0x01E3(0x0001)
	unsigned char                                      UnknownData01 : 1;                                        // 0x01E3(0x0001)
	unsigned char                                      bOverrideSubsurfaceProfile : 1;                           // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FGuid                                       ParentLightingGuid;                                       // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FFontParameterValue>                 FontParameterValues;                                      // 0x01E3(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FScalarParameterValue>               ScalarParameterValues;                                    // 0x01E3(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FTextureParameterValue>              TextureParameterValues;                                   // 0x01E3(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FVectorParameterValue>               VectorParameterValues;                                    // 0x01E3(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bOverrideBaseProperties;                                  // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FMaterialInstanceBasePropertyOverrides      BasePropertyOverrides;                                    // 0x01E3(0x0070) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstance");
		return ptr;
	}

};


// Class Engine.MaterialInstanceConstant
// 0x0000 (0x01F0 - 0x01F0)
class UMaterialInstanceConstant : public UMaterialInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceConstant");
		return ptr;
	}

};


// Class Engine.MaterialExpression
// 0x0048 (0x0070 - 0x0028)
class UMaterialExpression : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UMaterial*                                   Material;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialFunction*                           Function;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      Desc;                                                     // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FColor                                      BorderColor;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRealtimePreview : 1;                                     // 0x01E3(0x0001)
	unsigned char                                      bShowInputs : 1;                                          // 0x01E3(0x0001)
	unsigned char                                      bNeedToUpdatePreview : 1;                                 // 0x01E3(0x0001) (Transient)
	unsigned char                                      bShowOutputs : 1;                                         // 0x01E3(0x0001)
	unsigned char                                      bIsParameterExpression : 1;                               // 0x01E3(0x0001)
	unsigned char                                      bCommentBubbleVisible : 1;                                // 0x01E3(0x0001)
	unsigned char                                      bShowOutputNameOnPin : 1;                                 // 0x01E3(0x0001)
	unsigned char                                      bHidePreviewWindow : 1;                                   // 0x01E3(0x0001)
	unsigned char                                      bCollapsed : 1;                                           // 0x01E3(0x0001)
	unsigned char                                      bShaderInputData : 1;                                     // 0x01E3(0x0001)
	TArray<struct FText>                               MenuCategories;                                           // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpression");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCustomOutput
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionCustomOutput : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCustomOutput");
		return ptr;
	}

};


// Class Engine.BlueprintAsyncActionBase
// 0x0000 (0x0028 - 0x0028)
class UBlueprintAsyncActionBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintAsyncActionBase");
		return ptr;
	}


	void Activate();
};


// Class Engine.BlueprintGeneratedClass
// 0x0068 (0x0200 - 0x0198)
class UBlueprintGeneratedClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0x4B];                                      // 0x0198(0x004B) MISSED OFFSET
	int                                                NumReplicatedProperties;                                  // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class UDynamicBlueprintBinding*>            DynamicBindingObjects;                                    // 0x01E3(0x0010) (ZeroConstructor)
	TArray<class UActorComponent*>                     ComponentTemplates;                                       // 0x01E3(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UTimelineTemplate*>                   Timelines;                                                // 0x01E3(0x0010) (ZeroConstructor)
	class USimpleConstructionScript*                   SimpleConstructionScript;                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInheritableComponentHandler*                InheritableComponentHandler;                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStructProperty*                             UberGraphFramePointerProperty;                            // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UFunction*                                   UberGraphFunction;                                        // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x15];                                      // 0x01EB(0x0015) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintGeneratedClass");
		return ptr;
	}

};


// Class Engine.Commandlet
// 0x0058 (0x0080 - 0x0028)
class UCommandlet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class FString                                      HelpDescription;                                          // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      HelpUsage;                                                // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      HelpWebLink;                                              // 0x01E3(0x0010) (ZeroConstructor)
	TArray<class FString>                              HelpParamNames;                                           // 0x01E3(0x0010) (ZeroConstructor)
	TArray<class FString>                              HelpParamDescriptions;                                    // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      IsServer : 1;                                             // 0x01E3(0x0001)
	unsigned char                                      IsClient : 1;                                             // 0x01E3(0x0001)
	unsigned char                                      IsEditor : 1;                                             // 0x01E3(0x0001)
	unsigned char                                      LogToConsole : 1;                                         // 0x01E3(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Commandlet");
		return ptr;
	}

};


// Class Engine.AISystemBase
// 0x0018 (0x0040 - 0x0028)
class UAISystemBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FStringClassReference                       AISystemClassName;                                        // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig, NoClear)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AISystemBase");
		return ptr;
	}

};


// Class Engine.UserDefinedStruct
// 0x0010 (0x00A8 - 0x0098)
class UUserDefinedStruct : public UScriptStruct
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserDefinedStruct");
		return ptr;
	}

};


// Class Engine.NetConnection
// 0x343C8 (0x34410 - 0x0048)
class UNetConnection : public UPlayer
{
public:
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	TArray<class UChildConnection*>                    Children;                                                 // 0x01E3(0x0010) (ZeroConstructor, Transient)
	class UNetDriver*                                  Driver;                                                   // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPackageMap*                                 PackageMap;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UChannel*>                            OpenChannels;                                             // 0x01E3(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              SentTemporaries;                                          // 0x01E3(0x0010) (ZeroConstructor)
	class AActor*                                      ViewTarget;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      OwningActor;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MaxPacket;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      InternalAck : 1;                                          // 0x01E3(0x0001)
	double                                             LastReceiveTime;                                          // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x34225];                                   // 0x01EB(0x34225) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetConnection");
		return ptr;
	}

};


// Class Engine.NetDriver
// 0x0310 (0x0338 - 0x0028)
class UNetDriver : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class FString                                      NetConnectionClassName;                                   // 0x01E3(0x0010) (ZeroConstructor, Config)
	int                                                MaxDownloadSize;                                          // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bClampListenServerTickRate : 1;                           // 0x01E3(0x0001) (Config)
	int                                                NetServerMaxTickRate;                                     // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxInternetClientRate;                                    // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxClientRate;                                            // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              ServerTravelPause;                                        // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              SpawnPrioritySeconds;                                     // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              RelevantTimeout;                                          // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              KeepAliveTime;                                            // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              InitialConnectTimeout;                                    // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              ConnectionTimeout;                                        // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class UNetConnection*                              ServerConnection;                                         // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UNetConnection*>                      ClientConnections;                                        // 0x01E3(0x0010) (ZeroConstructor)
	class UWorld*                                      World;                                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      NetConnectionClass;                                       // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UProperty*                                   RoleProperty;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UProperty*                                   RemoteRoleProperty;                                       // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NetDriverName;                                            // 0x01E3(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14D];                                     // 0x01EB(0x014D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetDriver");
		return ptr;
	}

};


// Class Engine.OnlineSession
// 0x0000 (0x0028 - 0x0028)
class UOnlineSession : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineSession");
		return ptr;
	}

};


// Class Engine.Model
// 0x0550 (0x0578 - 0x0028)
class UModel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x550];                                     // 0x0028(0x0550) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Model");
		return ptr;
	}

};


// Class Engine.EngineBaseTypes
// 0x0000 (0x0028 - 0x0028)
class UEngineBaseTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineBaseTypes");
		return ptr;
	}

};


// Class Engine.DamageType
// 0x0018 (0x0040 - 0x0028)
class UDamageType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	unsigned char                                      bCausedByWorld : 1;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bScaleMomentumByMass : 1;                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              DamageImpulse;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRadialDamageVelChange : 1;                               // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              DestructibleImpulse;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DestructibleDamageSpreadScale;                            // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DamageType");
		return ptr;
	}

};


// Class Engine.EngineTypes
// 0x0000 (0x0028 - 0x0028)
class UEngineTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineTypes");
		return ptr;
	}

};


// Class Engine.EdGraphNode
// 0x0068 (0x0090 - 0x0028)
class UEdGraphNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<class UEdGraphPin*>                         Pins;                                                     // 0x01E3(0x0010) (ZeroConstructor)
	int                                                NodePosX;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NodePosY;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NodeWidth;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NodeHeight;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHasCompilerMessage : 1;                                  // 0x01E3(0x0001)
	class FString                                      NodeComment;                                              // 0x01E3(0x0010) (ZeroConstructor)
	bool                                               bCommentBubblePinned;                                     // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCommentBubbleVisible;                                    // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                ErrorType;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      ErrorMsg;                                                 // 0x01E3(0x0010) (ZeroConstructor)
	struct FGuid                                       NodeGuid;                                                 // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENodeAdvancedPins>                     AdvancedPinDisplay;                                       // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphNode");
		return ptr;
	}

};


// Class Engine.EdGraphPin
// 0x0100 (0x0128 - 0x0028)
class UEdGraphPin : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class FString                                      PinName;                                                  // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      PinToolTip;                                               // 0x01E3(0x0010) (ZeroConstructor)
	TEnumAsByte<EEdGraphPinDirection>                  Direction;                                                // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FEdGraphPinType                             PinType;                                                  // 0x01E3(0x0050)
	class FString                                      DefaultValue;                                             // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      AutogeneratedDefaultValue;                                // 0x01E3(0x0010) (ZeroConstructor)
	class UObject*                                     DefaultObject;                                            // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FText                                       DefaultTextValue;                                         // 0x01E3(0x0018)
	unsigned char                                      UnknownData01[0x20];                                      // 0x01EB(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<class UEdGraphPin*>                         LinkedTo;                                                 // 0x01E3(0x0010) (ZeroConstructor)
	TArray<class UEdGraphPin*>                         SubPins;                                                  // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphPin");
		return ptr;
	}

};


// Class Engine.BlueprintCore
// 0x0028 (0x0050 - 0x0028)
class UBlueprintCore : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UClass*                                      SkeletonGeneratedClass;                                   // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      GeneratedClass;                                           // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bLegacyNeedToPurgeSkelRefs;                               // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bLegacyGeneratedClassIsAuthoritative;                     // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintCore");
		return ptr;
	}

};


// Class Engine.Blueprint
// 0x00E8 (0x0138 - 0x0050)
class UBlueprint : public UBlueprintCore
{
public:
	unsigned char                                      UnknownData00[0x193];                                     // 0x0050(0x0193) MISSED OFFSET
	unsigned char                                      bRecompileOnLoad : 1;                                     // 0x01E3(0x0001) (Config)
	class UClass*                                      ParentClass;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     PRIVATE_InnermostPreviousCDO;                             // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bHasBeenRegenerated : 1;                                  // 0x01E3(0x0001) (Transient)
	unsigned char                                      bIsRegeneratingOnLoad : 1;                                // 0x01E3(0x0001) (Transient)
	class USimpleConstructionScript*                   SimpleConstructionScript;                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ComponentTemplates;                                       // 0x01E3(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UTimelineTemplate*>                   Timelines;                                                // 0x01E3(0x0010) (ZeroConstructor)
	class UInheritableComponentHandler*                InheritableComponentHandler;                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBlueprintType>                        BlueprintType;                                            // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                BlueprintSystemVersion;                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Blueprint");
		return ptr;
	}

};


// Class Engine.Interface_AssetUserData
// 0x0000 (0x0028 - 0x0028)
class UInterface_AssetUserData : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_AssetUserData");
		return ptr;
	}

};


// Class Engine.AmbientSound
// 0x0008 (0x0478 - 0x0470)
class AAmbientSound : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSound");
		return ptr;
	}


	void Stop();
	void Play(float StartTime);
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
	void FadeIn(float FadeInDuration, float FadeVolumeLevel);
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
};


// Class Engine.AutomaticInstancingActor
// 0x00A8 (0x0518 - 0x0470)
class AAutomaticInstancingActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0470(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AutomaticInstancingActor");
		return ptr;
	}


	TArray<class UInstancedStaticMeshComponent*> GetInstancedStaticMeshes();
};


// Class Engine.PendingNetGame
// 0x0098 (0x00C0 - 0x0028)
class UPendingNetGame : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PendingNetGame");
		return ptr;
	}

};


// Class Engine.World
// 0x0948 (0x0970 - 0x0028)
class UWorld : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class ULevel*                                      PersistentLevel;                                          // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                                // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ULineBatchComponent*                         LineBatcher;                                              // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class ULineBatchComponent*                         PersistentLineBatcher;                                    // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class ULineBatchComponent*                         ForegroundLineBatcher;                                    // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AGameState*                                  GameState;                                                // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AGameNetworkManager*                         NetworkManager;                                           // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPhysicsCollisionHandler*                    PhysicsCollisionHandler;                                  // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UObject*>                             ExtraReferencedObjects;                                   // 0x01E3(0x0010) (ZeroConstructor, Transient)
	TArray<class UObject*>                             PerModuleDataObjects;                                     // 0x01E3(0x0010) (ZeroConstructor, Transient)
	TArray<class ULevelStreaming*>                     StreamingLevels;                                          // 0x01E3(0x0010) (ZeroConstructor, Transient)
	class FString                                      StreamingLevelsPrefix;                                    // 0x01E3(0x0010) (ZeroConstructor)
	class ULevel*                                      CurrentLevelPendingVisibility;                            // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AParticleEventManager*                       MyParticleEventManager;                                   // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class APhysicsVolume*                              DefaultPhysicsVolume;                                     // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Feature;                                                  // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               FeatureReferences;                                        // 0x01E3(0x0010) (ZeroConstructor)
	bool                                               ParticleLOD_bUseGameThread;                               // 0x01E3(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               ParticleLOD_bUseMultipleViewportCase;                     // 0x01E3(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     ParticleLOD_PlayerViewpointLocation;                      // 0x01E3(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	class FString                                      TestMetadata;                                             // 0x01E3(0x0010) (ZeroConstructor)
	class UNavigationSystem*                           NavigationSystem;                                         // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AGameMode*                                   AuthorityGameMode;                                        // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAISystemBase*                               AISystem;                                                 // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAvoidanceManager*                           AvoidanceManager;                                         // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class ULevel*>                              Levels;                                                   // 0x01E3(0x0010) (ZeroConstructor, Transient)
	class ULevel*                                      CurrentLevel;                                             // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGameInstance*                               OwningGameInstance;                                       // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UMaterialParameterCollectionInstance*> ParameterCollectionInstances;                             // 0x01E3(0x0010) (ZeroConstructor, Transient)
	class UWorldComposition*                           WorldComposition;                                         // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x785];                                     // 0x01EB(0x0785) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.World");
		return ptr;
	}

};


// Class Engine.Level
// 0x0390 (0x03B8 - 0x0028)
class ULevel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UWorld*                                      OwningWorld;                                              // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UModel*                                      Model;                                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UModelComponent*>                     ModelComponents;                                          // 0x01E3(0x0010) (ExportObject, ZeroConstructor)
	class ALevelScriptActor*                           LevelScriptActor;                                         // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class ANavigationObjectBase*                       NavListStart;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class ANavigationObjectBase*                       NavListEnd;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UNavigationDataChunk*>                NavDataChunks;                                            // 0x01E3(0x0010) (ZeroConstructor)
	float                                              LightmapTotalSize;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ShadowmapTotalSize;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FVector>                             StaticNavigableGeometry;                                  // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01 : 3;                                        // 0x01E3(0x0001)
	unsigned char                                      bIsVisible : 1;                                           // 0x01E3(0x0001) (Transient)
	unsigned char                                      Blocked : 1;                                              // 0x01E3(0x0001)
	unsigned char                                      UnknownData02[0x1D4];                                     // 0x01E4(0x01D4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Level");
		return ptr;
	}

};


// Class Engine.BrushShape
// 0x0000 (0x04A8 - 0x04A8)
class ABrushShape : public ABrush
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushShape");
		return ptr;
	}

};


// Class Engine.AudioVolume
// 0x0050 (0x04F8 - 0x04A8)
class AAudioVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x04A8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioVolume");
		return ptr;
	}

};


// Class Engine.BlockingVolume
// 0x0000 (0x04A8 - 0x04A8)
class ABlockingVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlockingVolume");
		return ptr;
	}

};


// Class Engine.CameraBlockingVolume
// 0x0000 (0x04A8 - 0x04A8)
class ACameraBlockingVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraBlockingVolume");
		return ptr;
	}

};


// Class Engine.CullDistanceVolume
// 0x0018 (0x04C0 - 0x04A8)
class ACullDistanceVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CullDistanceVolume");
		return ptr;
	}

};


// Class Engine.FFTWater
// 0x0010 (0x04B8 - 0x04A8)
class AFFTWater : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FFTWater");
		return ptr;
	}


	bool ValidateVertexBuffer();
	bool ValidateParticlesVelocity();
	bool ValidateIndexBuffer();
	void SetWireframe(bool bWireframe);
	void SetWaterColour(const struct FLinearColor& WaterColour);
	void SetSpecularBrightness(float SpecularBrightness);
	void SetShallowWaterColour(const struct FLinearColor& ShallowWaterColour);
	void SetReflectionBrightness(float ReflectionBrightness);
	void SetLightFunctionMaterial(class UMaterialInterface* Material);
	void SetFresnelPower(float FresnelPower);
	void SetFoamHighlightColour(const struct FLinearColor& FoamHighlightColour);
	void SetFoamColour(const struct FLinearColor& FoamColour);
	void SetFoamBrightness(float FoamBrightness);
	void SetCausticsDepth(float Depth);
	void SetBackLitColour(const struct FLinearColor& BackLitColour);
	void SetAmbientColour(const struct FLinearColor& AmbientColour);
	bool HasLightFunctionMaterial();
	class UFFTWaterComponent* GetComponent();
};


// Class Engine.LevelStreamingVolume
// 0x0018 (0x04C0 - 0x04A8)
class ALevelStreamingVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingVolume");
		return ptr;
	}

};


// Class Engine.LightmassCharacterIndirectDetailVolume
// 0x0000 (0x04A8 - 0x04A8)
class ALightmassCharacterIndirectDetailVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassCharacterIndirectDetailVolume");
		return ptr;
	}

};


// Class Engine.LightmassImportanceVolume
// 0x0000 (0x04A8 - 0x04A8)
class ALightmassImportanceVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassImportanceVolume");
		return ptr;
	}

};


// Class Engine.NavMeshBoundsVolume
// 0x0010 (0x04B8 - 0x04A8)
class ANavMeshBoundsVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshBoundsVolume");
		return ptr;
	}

};


// Class Engine.NavigationTypes
// 0x0000 (0x0028 - 0x0028)
class UNavigationTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationTypes");
		return ptr;
	}

};


// Class Engine.NavRelevantInterface
// 0x0000 (0x0028 - 0x0028)
class UNavRelevantInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavRelevantInterface");
		return ptr;
	}

};


// Class Engine.NavModifierVolume
// 0x0010 (0x04B8 - 0x04A8)
class ANavModifierVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavModifierVolume");
		return ptr;
	}


	void SetAreaClass(class UClass* NewAreaClass);
};


// Class Engine.PhysicsVolume
// 0x0010 (0x04B8 - 0x04A8)
class APhysicsVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsVolume");
		return ptr;
	}

};


// Class Engine.DefaultPhysicsVolume
// 0x0000 (0x04B8 - 0x04B8)
class ADefaultPhysicsVolume : public APhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DefaultPhysicsVolume");
		return ptr;
	}

};


// Class Engine.KillZVolume
// 0x0000 (0x04B8 - 0x04B8)
class AKillZVolume : public APhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KillZVolume");
		return ptr;
	}

};


// Class Engine.PainCausingVolume
// 0x0028 (0x04E0 - 0x04B8)
class APainCausingVolume : public APhysicsVolume
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x04B8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PainCausingVolume");
		return ptr;
	}

};


// Class Engine.BlendableInterface
// 0x0000 (0x0028 - 0x0028)
class UBlendableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendableInterface");
		return ptr;
	}

};


// Class Engine.Scene
// 0x0000 (0x0028 - 0x0028)
class UScene : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Scene");
		return ptr;
	}

};


// Class Engine.Interface_PostProcessVolume
// 0x0000 (0x0028 - 0x0028)
class UInterface_PostProcessVolume : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_PostProcessVolume");
		return ptr;
	}

};


// Class Engine.PostProcessVolume
// 0x0548 (0x09F0 - 0x04A8)
class APostProcessVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x548];                                     // 0x04A8(0x0548) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PostProcessVolume");
		return ptr;
	}


	void AddOrUpdateBlendable(const TScriptInterface<class UBlendableInterface>& InBlendableObject, float InWeight);
};


// Class Engine.PrecomputedVisibilityOverrideVolume
// 0x0030 (0x04D8 - 0x04A8)
class APrecomputedVisibilityOverrideVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x04A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrecomputedVisibilityOverrideVolume");
		return ptr;
	}

};


// Class Engine.PrecomputedVisibilityVolume
// 0x0000 (0x04A8 - 0x04A8)
class APrecomputedVisibilityVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrecomputedVisibilityVolume");
		return ptr;
	}

};


// Class Engine.TriggerVolume
// 0x0000 (0x04A8 - 0x04A8)
class ATriggerVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerVolume");
		return ptr;
	}

};


// Class Engine.CalmWaterZone
// 0x0008 (0x0478 - 0x0470)
class ACalmWaterZone : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CalmWaterZone");
		return ptr;
	}

};


// Class Engine.CameraActor
// 0x0560 (0x09D0 - 0x0470)
class ACameraActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x560];                                     // 0x0470(0x0560) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraActor");
		return ptr;
	}


	int GetAutoActivatePlayerIndex();
};


// Class Engine.ClientOnlyTestActor
// 0x0000 (0x0470 - 0x0470)
class AClientOnlyTestActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ClientOnlyTestActor");
		return ptr;
	}

};


// Class Engine.NavAgentInterface
// 0x0000 (0x0028 - 0x0028)
class UNavAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavAgentInterface");
		return ptr;
	}

};


// Class Engine.CameraShake
// 0x0118 (0x0140 - 0x0028)
class UCameraShake : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	unsigned char                                      bSingleInstance : 1;                                      // 0x01E3(0x0001) (Edit)
	float                                              OscillationDuration;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OscillationBlendInTime;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OscillationBlendOutTime;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FROscillator                                RotOscillation;                                           // 0x01E3(0x0024) (Edit)
	struct FVOscillator                                LocOscillation;                                           // 0x01E3(0x0024) (Edit)
	struct FFOscillator                                FOVOscillation;                                           // 0x01E3(0x000C) (Edit)
	float                                              AnimPlayRate;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimScale;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimBlendInTime;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimBlendOutTime;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomAnimSegmentDuration;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCameraAnim*                                 Anim;                                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRandomAnimSegment : 1;                                   // 0x01E3(0x0001) (Edit)
	class APlayerCameraManager*                        CameraOwner;                                              // 0x01E3(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ShakeScale;                                               // 0x01E3(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              OscillatorTimeRemaining;                                  // 0x01E3(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraShake");
		return ptr;
	}


	void ReceiveStopShake();
	void ReceivePlayShake(float Scale);
	bool ReceiveIsFinished();
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV);
};


// Class Engine.InputComponent
// 0x0088 (0x0158 - 0x00D0)
class UInputComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x00D0(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputComponent");
		return ptr;
	}


	bool WasControllerKeyJustReleased(const struct FKey& Key);
	bool WasControllerKeyJustPressed(const struct FKey& Key);
	bool IsControllerKeyDown(const struct FKey& Key);
	void GetTouchState(int FingerIndex, float* LocationX, float* LocationY, bool* bIsCurrentlyPressed);
	struct FVector GetControllerVectorKeyState(const struct FKey& Key);
	void GetControllerMouseDelta(float* DeltaX, float* DeltaY);
	float GetControllerKeyTimeDown(const struct FKey& Key);
	void GetControllerAnalogStickState(TEnumAsByte<EControllerAnalogStick> WhichStick, float* StickX, float* StickY);
	float GetControllerAnalogKeyState(const struct FKey& Key);
};


// Class Engine.CurveBase
// 0x0008 (0x0030 - 0x0028)
class UCurveBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveBase");
		return ptr;
	}


	void GetValueRange(float* MinValue, float* MaxValue);
	void GetTimeRange(float* MinTime, float* MaxTime);
};


// Class Engine.CurveFloat
// 0x0080 (0x00B0 - 0x0030)
class UCurveFloat : public UCurveBase
{
public:
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FRichCurve                                  FloatCurve;                                               // 0x01E3(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveFloat");
		return ptr;
	}


	float GetFloatValue(float InTime);
};


// Class Engine.ForceFeedbackEffect
// 0x0018 (0x0040 - 0x0028)
class UForceFeedbackEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FForceFeedbackChannelDetails>        ChannelDetails;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFeedbackEffect");
		return ptr;
	}

};


// Class Engine.LogVisualizerCameraController
// 0x0018 (0x07C8 - 0x07B0)
class ALogVisualizerCameraController : public ADebugCameraController
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x07B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LogVisualizerCameraController");
		return ptr;
	}

};


// Class Engine.DecalActor
// 0x0008 (0x0478 - 0x0470)
class ADecalActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalActor");
		return ptr;
	}


	void SetDecalMaterial(class UMaterialInterface* NewDecalMaterial);
	class UMaterialInterface* GetDecalMaterial();
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
};


// Class Engine.DestructibleActor
// 0x0020 (0x0490 - 0x0470)
class ADestructibleActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0470(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DestructibleActor");
		return ptr;
	}

};


// Class Engine.DocumentationActor
// 0x0008 (0x0478 - 0x0470)
class ADocumentationActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DocumentationActor");
		return ptr;
	}

};


// Class Engine.Emitter
// 0x0050 (0x04C0 - 0x0470)
class AEmitter : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0470(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Emitter");
		return ptr;
	}


	void ToggleActive();
	void SetVectorParameter(const struct FName& ParameterName, const struct FVector& Param);
	void SetTemplate(class UParticleSystem* NewTemplate);
	void SetMaterialParameter(const struct FName& ParameterName, class UMaterialInterface* Param);
	void SetFloatParameter(const struct FName& ParameterName, float Param);
	void SetColorParameter(const struct FName& ParameterName, const struct FLinearColor& Param);
	void SetActorParameter(const struct FName& ParameterName, class AActor* Param);
	void OnRep_bCurrentlyActive();
	void OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent);
	bool IsActive();
	struct FName GetEmitterName();
	void Deactivate();
	void Activate();
};


// Class Engine.EmitterCameraLensEffectBase
// 0x0038 (0x04F8 - 0x04C0)
class AEmitterCameraLensEffectBase : public AEmitter
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x04C0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EmitterCameraLensEffectBase");
		return ptr;
	}

};


// Class Engine.DebugCameraHUD
// 0x0000 (0x0568 - 0x0568)
class ADebugCameraHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugCameraHUD");
		return ptr;
	}

};


// Class Engine.LogVisualizerHUD
// 0x0028 (0x0590 - 0x0568)
class ALogVisualizerHUD : public ADebugCameraHUD
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0568(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LogVisualizerHUD");
		return ptr;
	}

};


// Class Engine.AtmosphericFog
// 0x0008 (0x0478 - 0x0470)
class AAtmosphericFog : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AtmosphericFog");
		return ptr;
	}

};


// Class Engine.ExponentialHeightFog
// 0x0010 (0x0480 - 0x0470)
class AExponentialHeightFog : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0470(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ExponentialHeightFog");
		return ptr;
	}


	void OnRep_bEnabled();
};


// Class Engine.GameNetworkManager
// 0x0070 (0x04E0 - 0x0470)
class AGameNetworkManager : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0470(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameNetworkManager");
		return ptr;
	}

};


// Class Engine.GameSession
// 0x0030 (0x04A0 - 0x0470)
class AGameSession : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0470(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameSession");
		return ptr;
	}

};


// Class Engine.SkyLight
// 0x0010 (0x0480 - 0x0470)
class ASkyLight : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0470(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLight");
		return ptr;
	}


	void OnRep_bEnabled();
};


// Class Engine.WindDirectionalSource
// 0x0008 (0x0478 - 0x0470)
class AWindDirectionalSource : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindDirectionalSource");
		return ptr;
	}


	class UWindDirectionalSourceComponent* GetComponent();
};


// Class Engine.LevelBounds
// 0x0008 (0x0478 - 0x0470)
class ALevelBounds : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelBounds");
		return ptr;
	}

};


// Class Engine.LightComponentBase
// 0x0030 (0x0320 - 0x02F0)
class ULightComponentBase : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02F0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightComponentBase");
		return ptr;
	}


	void SetCastShadows(bool bNewValue);
	struct FLinearColor GetLightColor();
};


// Class Engine.LightComponent
// 0x0150 (0x0470 - 0x0320)
class ULightComponent : public ULightComponentBase
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0320(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightComponent");
		return ptr;
	}


	void SetTemperature(float NewTemperature);
	void SetLightFunctionScale(const struct FVector& NewLightFunctionScale);
	void SetLightFunctionMaterial(class UMaterialInterface* NewLightFunctionMaterial);
	void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
	void SetLightFunctionDisabledBrightness(float NewValue);
	void SetLightColor(const struct FLinearColor& NewLightColor, bool bSRGB);
	void SetIntensity(float NewIntensity);
	void SetIndirectLightingIntensity(float NewIntensity);
	void SetIESTexture(class UTextureLightProfile* NewValue);
	void SetEnableLightShaftBloom(bool bNewValue);
	void SetBloomTint(const struct FColor& NewValue);
	void SetBloomThreshold(float NewValue);
	void SetBloomScale(float NewValue);
	void SetAffectTranslucentLighting(bool bNewValue);
	void SetAffectDynamicIndirectLighting(bool bNewValue);
	int GetNumberOfShadowCastersInFirstCascade();
};


// Class Engine.Light
// 0x0010 (0x0480 - 0x0470)
class ALight : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0470(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Light");
		return ptr;
	}


	void ToggleEnabled();
	void SetLightFunctionScale(const struct FVector& NewLightFunctionScale);
	void SetLightFunctionMaterial(class UMaterialInterface* NewLightFunctionMaterial);
	void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
	void SetLightColor(const struct FLinearColor& NewLightColor);
	void SetEnabled(bool bSetEnabled);
	void SetCastShadows(bool bNewValue);
	void SetBrightness(float NewBrightness);
	void SetAffectTranslucentLighting(bool bNewValue);
	void OnRep_bEnabled();
	bool IsEnabled();
	struct FLinearColor GetLightColor();
	float GetBrightness();
};


// Class Engine.AmbientLightSource
// 0x0008 (0x0488 - 0x0480)
class AAmbientLightSource : public ALight
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0480(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientLightSource");
		return ptr;
	}

};


// Class Engine.DirectionalLight
// 0x0000 (0x0480 - 0x0480)
class ADirectionalLight : public ALight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLight");
		return ptr;
	}

};


// Class Engine.PointLight
// 0x0008 (0x0488 - 0x0480)
class APointLight : public ALight
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0480(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLight");
		return ptr;
	}


	void SetRadius(float NewRadius);
	void SetLightFalloffExponent(float NewLightFalloffExponent);
};


// Class Engine.SpotLight
// 0x0008 (0x0488 - 0x0480)
class ASpotLight : public ALight
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0480(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLight");
		return ptr;
	}


	void SetOuterConeAngle(float NewOuterConeAngle);
	void SetInnerConeAngle(float NewInnerConeAngle);
};


// Class Engine.GeneratedMeshAreaLight
// 0x0000 (0x0488 - 0x0488)
class AGeneratedMeshAreaLight : public ASpotLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GeneratedMeshAreaLight");
		return ptr;
	}

};


// Class Engine.LODActor
// 0x0038 (0x04A8 - 0x0470)
class ALODActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0470(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LODActor");
		return ptr;
	}

};


// Class Engine.MaterialInstanceActor
// 0x0010 (0x0480 - 0x0470)
class AMaterialInstanceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0470(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceActor");
		return ptr;
	}

};


// Class Engine.MatineeActor
// 0x0078 (0x04E8 - 0x0470)
class AMatineeActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0470(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeActor");
		return ptr;
	}


	void Stop();
	void SetPosition(float NewPosition, bool bJump);
	void SetLoopingState(bool bNewLooping);
	void Reverse();
	void Play();
	void Pause();
	void ChangePlaybackDirection();
};


// Class Engine.MatineeActorCameraAnim
// 0x0008 (0x04F0 - 0x04E8)
class AMatineeActorCameraAnim : public AMatineeActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeActorCameraAnim");
		return ptr;
	}

};


// Class Engine.MergedCollisionActor
// 0x0008 (0x0478 - 0x0470)
class AMergedCollisionActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MergedCollisionActor");
		return ptr;
	}

};


// Class Engine.NavigationQueryFilter
// 0x0018 (0x0040 - 0x0028)
class UNavigationQueryFilter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FNavigationFilterArea>               Areas;                                                    // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FNavigationFilterFlags                      IncludeFlags;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationQueryFilter");
		return ptr;
	}

};


// Class Engine.NavigationData
// 0x01B0 (0x0620 - 0x0470)
class ANavigationData : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x0470(0x01B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationData");
		return ptr;
	}

};


// Class Engine.AbstractNavData
// 0x0000 (0x0620 - 0x0620)
class AAbstractNavData : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AbstractNavData");
		return ptr;
	}

};


// Class Engine.NavigationGraph
// 0x0000 (0x0620 - 0x0620)
class ANavigationGraph : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationGraph");
		return ptr;
	}

};


// Class Engine.RecastNavMesh
// 0x00E0 (0x0700 - 0x0620)
class ARecastNavMesh : public ANavigationData
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0620(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RecastNavMesh");
		return ptr;
	}

};


// Class Engine.NavigationGraphNode
// 0x0000 (0x0470 - 0x0470)
class ANavigationGraphNode : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationGraphNode");
		return ptr;
	}

};


// Class Engine.PlayerStartPIE
// 0x0000 (0x04A0 - 0x04A0)
class APlayerStartPIE : public APlayerStart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerStartPIE");
		return ptr;
	}

};


// Class Engine.NavPathObserverInterface
// 0x0000 (0x0028 - 0x0028)
class UNavPathObserverInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavPathObserverInterface");
		return ptr;
	}

};


// Class Engine.NavigationTestingActor
// 0x00C0 (0x0530 - 0x0470)
class ANavigationTestingActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0470(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationTestingActor");
		return ptr;
	}

};


// Class Engine.NavArea
// 0x0018 (0x0040 - 0x0028)
class UNavArea : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              DefaultCost;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FixedAreaEnteringCost;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FColor                                      DrawColor;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x01E3(0x0004) (Edit, Config)
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x01E3(0x0001) (Config)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x01E3(0x0001) (Config)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x01E3(0x0001) (Config)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x01E3(0x0001) (Config)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x01E3(0x0001) (Config)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x01E3(0x0001) (Config)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x01E3(0x0001) (Config)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x01E3(0x0001) (Config)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x01E3(0x0001) (Config)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x01E3(0x0001) (Config)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x01E3(0x0001) (Config)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x01E3(0x0001) (Config)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x01E3(0x0001) (Config)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x01E3(0x0001) (Config)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x01E3(0x0001) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavArea");
		return ptr;
	}

};


// Class Engine.NavLinkDefinition
// 0x0028 (0x0050 - 0x0028)
class UNavLinkDefinition : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FNavigationLink>                     Links;                                                    // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkDefinition");
		return ptr;
	}

};


// Class Engine.NavLinkHostInterface
// 0x0000 (0x0028 - 0x0028)
class UNavLinkHostInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkHostInterface");
		return ptr;
	}

};


// Class Engine.NavLinkProxy
// 0x0050 (0x04C0 - 0x0470)
class ANavLinkProxy : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0470(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkProxy");
		return ptr;
	}


	void SetSmartLinkEnabled(bool bEnabled);
	void ResumePathFollowing(class AActor* Agent);
	void ReceiveSmartLinkReached(class AActor* Agent, const struct FVector& Destination);
	bool IsSmartLinkEnabled();
	bool HasMovingAgents();
};


// Class Engine.Note
// 0x0000 (0x0470 - 0x0470)
class ANote : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Note");
		return ptr;
	}

};


// Class Engine.ChildActorComponent
// 0x0020 (0x0310 - 0x02F0)
class UChildActorComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ChildActorComponent");
		return ptr;
	}


	void SetChildActorClass(class UClass* InClass);
};


// Class Engine.ParentTestActor
// 0x0008 (0x0478 - 0x0470)
class AParentTestActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParentTestActor");
		return ptr;
	}

};


// Class Engine.ParticleEventManager
// 0x0000 (0x0470 - 0x0470)
class AParticleEventManager : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleEventManager");
		return ptr;
	}

};


// Class Engine.Skeleton
// 0x0280 (0x02A8 - 0x0028)
class USkeleton : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FBoneNode>                           BoneTree;                                                 // 0x01E3(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FTransform>                          RefLocalPoses;                                            // 0x01E3(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FSkeletonToMeshLinkup>               LinkupCache;                                              // 0x01E3(0x0010) (ZeroConstructor, Transient)
	TArray<class USkeletalMeshSocket*>                 Sockets;                                                  // 0x01E3(0x0010) (ZeroConstructor)
	struct FSmartNameContainer                         SmartNames;                                               // 0x01E3(0x0050)
	unsigned char                                      UnknownData01[0x75];                                      // 0x0233(0x0075) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Skeleton");
		return ptr;
	}

};


// Class Engine.Interface_CollisionDataProvider
// 0x0000 (0x0028 - 0x0028)
class UInterface_CollisionDataProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_CollisionDataProvider");
		return ptr;
	}

};


// Class Engine.MeshPatchAsset
// 0x0010 (0x0038 - 0x0028)
class UMeshPatchAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshPatchAsset");
		return ptr;
	}

};


// Class Engine.SkeletalMesh
// 0x0210 (0x0238 - 0x0028)
class USkeletalMesh : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class USkeleton*                                   Skeleton;                                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FBoxSphereBounds                            Bounds;                                                   // 0x01E3(0x001C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<struct FSkeletalMaterial>                   Materials;                                                // 0x01E3(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FBoneMirrorInfo>                     SkelMirrorTable;                                          // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TEnumAsByte<EAxis>                                 SkelMirrorAxis;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 SkelMirrorFlipAxis;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FSkeletalMeshLODInfo>                LODInfo;                                                  // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      bUseFullPrecisionUVs : 1;                                 // 0x01E3(0x0001) (Edit)
	unsigned char                                      bHasBeenSimplified : 1;                                   // 0x01E3(0x0001)
	unsigned char                                      bHasVertexColors : 1;                                     // 0x01E3(0x0001)
	TArray<struct FDeformablesSettings>                DeformablesSettings;                                      // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      bKeepTessellationAdjacency : 1;                           // 0x01E3(0x0001) (Edit)
	unsigned char                                      bKeepSkeletalMeshBuffersInMemory : 1;                     // 0x01E3(0x0001) (Edit)
	unsigned char                                      bEnablePerPolyCollision : 1;                              // 0x01E3(0x0001) (Edit)
	class UBodySetup*                                  BodySetup;                                                // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPhysicsAsset*                               PhysicsAsset;                                             // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UHIKCharacterization*                        Characterization;                                         // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               DeformablesPhysicsAsset;                                  // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StreamingDistanceMultiplier;                              // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StreamingDiscardedTexelRatios;                            // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UMorphTarget*>                        MorphTargets;                                             // 0x01E3(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<class UMeshPatchAsset*>                     MeshPatchAssets;                                          // 0x01E3(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FClothingAssetData>                  ClothingAssets;                                           // 0x01E3(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor)
	TArray<class UAssetUserData*>                      AssetUserData;                                            // 0x01E3(0x0010) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x45];                                      // 0x01F3(0x0045) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMesh");
		return ptr;
	}


	bool IsSectionUsingCloth(int InSectionIndex, bool bCheckCorrespondingSections);
	int GetNumLODsBP();
	class USkeletalMeshSocket* FindSocket(const struct FName& InSocketName);
};


// Class Engine.AnimationAsset
// 0x0028 (0x0050 - 0x0028)
class UAnimationAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class USkeleton*                                   Skeleton;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationAsset");
		return ptr;
	}

};


// Class Engine.DefaultPawn
// 0x0028 (0x04F8 - 0x04D0)
class ADefaultPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x04D0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DefaultPawn");
		return ptr;
	}


	void TurnAtRate(float Rate);
	void Turn(float Val);
	void MoveUp_World(float Val);
	void MoveRight(float Val);
	void MoveForward(float Val);
	void LookUpAtRate(float Rate);
	void LookUp(float Val);
};


// Class Engine.SpectatorPawn
// 0x0000 (0x04F8 - 0x04F8)
class ASpectatorPawn : public ADefaultPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpectatorPawn");
		return ptr;
	}

};


// Class Engine.WheeledVehicle
// 0x0010 (0x04E0 - 0x04D0)
class AWheeledVehicle : public APawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WheeledVehicle");
		return ptr;
	}

};


// Class Engine.ReflectionCapture
// 0x0008 (0x0478 - 0x0470)
class AReflectionCapture : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReflectionCapture");
		return ptr;
	}

};


// Class Engine.BoxReflectionCapture
// 0x0000 (0x0478 - 0x0478)
class ABoxReflectionCapture : public AReflectionCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxReflectionCapture");
		return ptr;
	}

};


// Class Engine.PlaneReflectionCapture
// 0x0000 (0x0478 - 0x0478)
class APlaneReflectionCapture : public AReflectionCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlaneReflectionCapture");
		return ptr;
	}

};


// Class Engine.SphereReflectionCapture
// 0x0008 (0x0480 - 0x0478)
class ASphereReflectionCapture : public AReflectionCapture
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0478(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereReflectionCapture");
		return ptr;
	}

};


// Class Engine.RigidBodyBase
// 0x0000 (0x0470 - 0x0470)
class ARigidBodyBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RigidBodyBase");
		return ptr;
	}

};


// Class Engine.PhysicsConstraintActor
// 0x0020 (0x0490 - 0x0470)
class APhysicsConstraintActor : public ARigidBodyBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0470(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintActor");
		return ptr;
	}

};


// Class Engine.PhysicsThruster
// 0x0008 (0x0478 - 0x0470)
class APhysicsThruster : public ARigidBodyBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsThruster");
		return ptr;
	}

};


// Class Engine.RadialForceActor
// 0x0008 (0x0478 - 0x0470)
class ARadialForceActor : public ARigidBodyBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RadialForceActor");
		return ptr;
	}


	void ToggleForce();
	void FireImpulse();
	void EnableForce();
	void DisableForce();
};


// Class Engine.SceneCapture
// 0x0008 (0x0478 - 0x0470)
class ASceneCapture : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapture");
		return ptr;
	}

};


// Class Engine.SceneCapture2D
// 0x0010 (0x0488 - 0x0478)
class ASceneCapture2D : public ASceneCapture
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0478(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapture2D");
		return ptr;
	}


	void OnInterpToggle(bool bEnable);
};


// Class Engine.SceneCaptureCube
// 0x0010 (0x0488 - 0x0478)
class ASceneCaptureCube : public ASceneCapture
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0478(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureCube");
		return ptr;
	}


	void OnInterpToggle(bool bEnable);
};


// Class Engine.ServerOnlyTestActor
// 0x0000 (0x0470 - 0x0470)
class AServerOnlyTestActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ServerOnlyTestActor");
		return ptr;
	}

};


// Class Engine.Interface_Animatable
// 0x0000 (0x0028 - 0x0028)
class UInterface_Animatable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_Animatable");
		return ptr;
	}


	class UAnimInstance* GetAnimInstance();
};


// Class Engine.SkinnedMeshComponent
// 0x0120 (0x07A0 - 0x0680)
class USkinnedMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0680(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkinnedMeshComponent");
		return ptr;
	}


	void UnHideBoneByName(const struct FName& BoneName);
	void TransformToBoneSpace(const struct FName& BoneName, const struct FVector& InPosition, const struct FRotator& InRotation, struct FVector* OutPosition, struct FRotator* OutRotation);
	void TransformFromBoneSpace(const struct FName& BoneName, const struct FVector& InPosition, const struct FRotator& InRotation, struct FVector* OutPosition, struct FRotator* OutRotation);
	void SetSkeletalMesh(class USkeletalMesh* NewMesh);
	void SetPhysicsAsset(class UPhysicsAsset* NewPhysicsAsset, bool bForceReInit);
	void SetMasterPoseComponent(class USkinnedMeshComponent* NewMasterBoneComponent);
	bool IsBoneHiddenByName(const struct FName& BoneName);
	void HideBoneByName(const struct FName& BoneName, TEnumAsByte<EPhysBodyOp> PhysBodyOption);
	struct FName GetSocketBoneName(const struct FName& InSocketName);
	struct FName GetParentBone(const struct FName& BoneName);
	struct FName GetBoneName(int BoneIndex);
	int GetBoneIndex(const struct FName& BoneName);
	bool BoneIsChildOf(const struct FName& BoneName, const struct FName& ParentBoneName);
};


// Class Engine.PhysicsConstraintComponent
// 0x01A0 (0x0490 - 0x02F0)
class UPhysicsConstraintComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x02F0(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintComponent");
		return ptr;
	}


	void SetLinearZLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
	void SetLinearYLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
	void SetLinearXLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
	void SetLinearVelocityTarget(const struct FVector& InVelTarget);
	void SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
	void SetLinearPositionTarget(const struct FVector& InPosTarget);
	void SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
	void SetLinearDriveParams(float InSpring, float InDamping, float InForceLimit);
	void SetDisableCollision(bool bDisableCollision);
	void SetConstraintReferencePosition(TEnumAsByte<EConstraintFrame> Frame, const struct FVector& RefPosition);
	void SetConstraintReferenceOrientation(TEnumAsByte<EConstraintFrame> Frame, const struct FVector& PriAxis, const struct FVector& SecAxis);
	void SetConstraintReferenceFrame(TEnumAsByte<EConstraintFrame> Frame, const struct FTransform& RefFrame);
	void SetConstrainedComponents(class UPrimitiveComponent* Component1, const struct FName& BoneName1, class UPrimitiveComponent* Component2, const struct FName& BoneName2);
	void SetAngularVelocityTarget(const struct FVector& InVelTarget);
	void SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
	void SetAngularTwistLimit(TEnumAsByte<EAngularConstraintMotion> ConstraintType, float TwistLimitAngle);
	void SetAngularSwing2Limit(TEnumAsByte<EAngularConstraintMotion> MotionType, float Swing2LimitAngle);
	void SetAngularSwing1Limit(TEnumAsByte<EAngularConstraintMotion> MotionType, float Swing1LimitAngle);
	void SetAngularOrientationTarget(const struct FRotator& InPosTarget);
	void SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
	void SetAngularDriveParams(float InSpring, float InDamping, float InForceLimit);
	float GetCurrentTwist();
	float GetCurrentSwing2();
	float GetCurrentSwing1();
	void GetConstraintForce(struct FVector* OutLinearForce, struct FVector* OutAngularForce);
	void BreakConstraint();
};


// Class Engine.SkeletalMeshComponent
// 0x02F0 (0x0A90 - 0x07A0)
class USkeletalMeshComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x2F0];                                     // 0x07A0(0x02F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshComponent");
		return ptr;
	}


	void UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace);
	void Stop();
	void SetPosition(float InPos, bool bFireNotifies);
	void SetPlayRate(float Rate);
	void SetPhysicsBlendWeight(float PhysicsBlendWeight);
	void SetMorphTarget(const struct FName& MorphTargetName, float Value, bool bRemoveZeroWeight);
	void SetEnablePhysicsBlending(bool bNewBlendPhysics);
	void SetClothMaxDistanceScale(float Scale);
	void SetAnimInstanceClass(class UClass* NewClass);
	void SetAnimationMode(TEnumAsByte<EAnimationMode> InAnimationMode);
	void SetAnimation(class UAnimationAsset* NewAnimToPlay);
	void SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
	void SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
	void SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType);
	void SetAllBodiesSimulatePhysics(bool bNewSimulate);
	void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType);
	void SetAllBodiesBelowSimulatePhysics(const struct FName& InBoneName, bool bNewSimulate);
	void SetAllBodiesBelowPhysicsBlendWeight(const struct FName& InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType);
	void ResetClothTeleportMode();
	void ResetAllBodiesSimulatePhysics();
	void PlayAnimation(class UAnimationAsset* NewAnimToPlay, bool bLooping);
	void Play(bool bLooping);
	bool IsPlaying();
	float GetPosition();
	float GetPlayRate();
	float GetMorphTarget(const struct FName& MorphTargetName);
	float GetClothMaxDistanceScale();
	class UAnimInstance* GetAnimInstance();
	TEnumAsByte<EAnimationMode> GetAnimationMode();
	void ForceClothNextUpdateTeleportAndReset();
	void ForceClothNextUpdateTeleport();
	void ClearMorphTargets();
	void BindClothToMasterPoseComponent();
	void AccumulateAllBodiesBelowPhysicsBlendWeight(const struct FName& InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType);
};


// Class Engine.MatineeAnimInterface
// 0x0000 (0x0028 - 0x0028)
class UMatineeAnimInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeAnimInterface");
		return ptr;
	}

};


// Class Engine.SkeletalMeshActor
// 0x0040 (0x04B0 - 0x0470)
class ASkeletalMeshActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0470(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshActor");
		return ptr;
	}


	void OnRep_ReplicatedPhysAsset();
	void OnRep_ReplicatedMesh();
	void OnRep_ReplicatedMaterial1();
	void OnRep_ReplicatedMaterial0();
};


// Class Engine.SplineMeshActor
// 0x0008 (0x0478 - 0x0470)
class ASplineMeshActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineMeshActor");
		return ptr;
	}

};


// Class Engine.CoveredMeshActor
// 0x0008 (0x0488 - 0x0480)
class ACoveredMeshActor : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0480(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CoveredMeshActor");
		return ptr;
	}

};


// Class Engine.StreamingProbe
// 0x0000 (0x0470 - 0x0470)
class AStreamingProbe : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StreamingProbe");
		return ptr;
	}

};


// Class Engine.TargetPoint
// 0x0000 (0x0470 - 0x0470)
class ATargetPoint : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TargetPoint");
		return ptr;
	}

};


// Class Engine.TextRenderActor
// 0x0008 (0x0478 - 0x0470)
class ATextRenderActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextRenderActor");
		return ptr;
	}

};


// Class Engine.TriggerBase
// 0x0010 (0x0480 - 0x0470)
class ATriggerBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0470(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerBase");
		return ptr;
	}

};


// Class Engine.TriggerBox
// 0x0000 (0x0480 - 0x0480)
class ATriggerBox : public ATriggerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerBox");
		return ptr;
	}

};


// Class Engine.TriggerCapsule
// 0x0000 (0x0480 - 0x0480)
class ATriggerCapsule : public ATriggerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerCapsule");
		return ptr;
	}

};


// Class Engine.TriggerSphere
// 0x0000 (0x0480 - 0x0480)
class ATriggerSphere : public ATriggerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerSphere");
		return ptr;
	}

};


// Class Engine.VectorFieldVolume
// 0x0008 (0x0478 - 0x0470)
class AVectorFieldVolume : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldVolume");
		return ptr;
	}

};


// Class Engine.WaterEmissionVolume
// 0x0008 (0x0478 - 0x0470)
class AWaterEmissionVolume : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WaterEmissionVolume");
		return ptr;
	}

};


// Class Engine.ApplicationLifecycleComponent
// 0x0050 (0x0120 - 0x00D0)
class UApplicationLifecycleComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FScriptMulticastDelegate                    ApplicationWillDeactivateDelegate;                        // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ApplicationHasReactivatedDelegate;                        // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ApplicationWillEnterBackgroundDelegate;                   // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ApplicationHasEnteredForegroundDelegate;                  // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ApplicationWillTerminateDelegate;                         // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApplicationLifecycleComponent");
		return ptr;
	}


	void ApplicationLifetimeDelegate__DelegateSignature();
};


// Class Engine.InterpToMovementComponent
// 0x0098 (0x01B0 - 0x0118)
class UInterpToMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0xCB];                                      // 0x0118(0x00CB) MISSED OFFSET
	float                                              Duration;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPauseOnImpact : 1;                                       // 0x01E3(0x0001) (Edit, BlueprintVisible)
	TEnumAsByte<EInterpToBehaviourType>                BehaviourType;                                            // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bForceSubStepping : 1;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    OnInterpToReverse;                                        // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInterpToStop;                                           // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWaitBeginDelegate;                                      // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWaitEndDelegate;                                        // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnResetDelegate;                                          // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              MaxSimulationTimeStep;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxSimulationIterations;                                  // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FInterpControlPoint>                 ControlPoints;                                            // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpToMovementComponent");
		return ptr;
	}


	void StopSimulating(const struct FHitResult& HitResult);
	void OnInterpToWaitEndDelegate__DelegateSignature(const struct FHitResult& ImpactResult, float Time);
	void OnInterpToWaitBeginDelegate__DelegateSignature(const struct FHitResult& ImpactResult, float Time);
	void OnInterpToStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult, float Time);
	void OnInterpToReverseDelegate__DelegateSignature(const struct FHitResult& ImpactResult, float Time);
	void OnInterpToResetDelegate__DelegateSignature(const struct FHitResult& ImpactResult, float Time);
};


// Class Engine.NavigationSystem
// 0x03C8 (0x03F0 - 0x0028)
class UNavigationSystem : public UBlueprintFunctionLibrary
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class ANavigationData*                             MainNavData;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class ANavigationData*                             AbstractNavData;                                          // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoCreateNavigationData : 1;                            // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      bAllowClientSideNavigation : 1;                           // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      bSupportRebuilding : 1;                                   // 0x01E3(0x0001)
	unsigned char                                      bInitialBuildingLocked : 1;                               // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01 : 1;                                        // 0x01E3(0x0001)
	unsigned char                                      bSkipAgentHeightCheckWhenPickingNavData : 1;              // 0x01E3(0x0001) (Edit, Config)
	TEnumAsByte<ENavDataGatheringModeConfig>           DataGatheringMode;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bGenerateNavigationOnlyAroundNavigationInvokers : 1;      // 0x01E3(0x0001) (Edit, Config, DisableEditOnInstance)
	float                                              ActiveTilesUpdateInterval;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FNavDataConfig>                      SupportedAgents;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	float                                              DirtyAreasUpdateFreq;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<class ANavigationData*>                     NavDataSet;                                               // 0x01E3(0x0010) (ZeroConstructor)
	TArray<class ANavigationData*>                     NavDataRegistrationQueue;                                 // 0x01E3(0x0010) (ZeroConstructor, Transient)
	struct FScriptMulticastDelegate                    OnNavDataRegisteredEvent;                                 // 0x01E3(0x0010) (ZeroConstructor, Transient, InstancedReference)
	struct FScriptMulticastDelegate                    OnNavigationGenerationFinishedDelegate;                   // 0x01E3(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x1FD];                                     // 0x01F3(0x01FD) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationSystem");
		return ptr;
	}


	void UnregisterNavigationInvoker(class AActor* Invoker);
	void STATIC_SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal);
	void STATIC_SimpleMoveToActor(class AController* Controller, class AActor* Goal);
	void SetMaxSimultaneousTileGenerationJobsCount(int MaxNumberOfJobs);
	void SetGeometryGatheringMode(TEnumAsByte<ENavDataGatheringModeConfig> NewMode);
	void ResetMaxSimultaneousTileGenerationJobsCount();
	void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
	struct FVector STATIC_ProjectPointToNavigation(class UObject* WorldContext, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
	void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);
	bool STATIC_NavigationRaycast(class UObject* WorldContext, const struct FVector& RayStart, const struct FVector& RayEnd, class UClass* FilterClass, class AController* Querier, struct FVector* HitLocation);
	bool STATIC_IsNavigationBeingBuilt(class UObject* WorldContext);
	struct FVector STATIC_GetRandomReachablePointInRadius(class UObject* WorldContext, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	struct FVector STATIC_GetRandomPointInRadius(class UObject* WorldContext, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	struct FVector STATIC_GetRandomPointInNavigableRadius(class UObject* WorldContext, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	struct FVector STATIC_GetRandomPoint(class UObject* WorldContext, class ANavigationData* NavData, class UClass* FilterClass);
	TEnumAsByte<ENavigationQueryResult> STATIC_GetPathLength(class UObject* WorldContext, const struct FVector& PathStart, const struct FVector& PathEnd, class ANavigationData* NavData, class UClass* FilterClass, float* PathLength);
	TEnumAsByte<ENavigationQueryResult> STATIC_GetPathCost(class UObject* WorldContext, const struct FVector& PathStart, const struct FVector& PathEnd, class ANavigationData* NavData, class UClass* FilterClass, float* PathCost);
	class UNavigationSystem* STATIC_GetNavigationSystem(class UObject* WorldContext);
	class ANavigationData* GetMainNavData();
	class UNavigationPath* STATIC_FindPathToLocationSynchronously(class UObject* WorldContext, const struct FVector& PathStart, const struct FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass);
	class UNavigationPath* STATIC_FindPathToActorSynchronously(class UObject* WorldContext, const struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass);
	bool DoesMainNavDataHaveValidNavMesh();
};


// Class Engine.RVOAvoidanceInterface
// 0x0000 (0x0028 - 0x0028)
class URVOAvoidanceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RVOAvoidanceInterface");
		return ptr;
	}

};


// Class Engine.NetworkPredictionInterface
// 0x0000 (0x0028 - 0x0028)
class UNetworkPredictionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetworkPredictionInterface");
		return ptr;
	}

};


// Class Engine.SpectatorPawnMovement
// 0x0008 (0x0178 - 0x0170)
class USpectatorPawnMovement : public UFloatingPawnMovement
{
public:
	unsigned char                                      UnknownData00[0x73];                                      // 0x0170(0x0073) MISSED OFFSET
	unsigned char                                      bIgnoreTimeDilation : 1;                                  // 0x01E3(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpectatorPawnMovement");
		return ptr;
	}

};


// Class Engine.WheeledVehicleMovementComponent
// 0x0130 (0x0288 - 0x0158)
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8B];                                      // 0x0158(0x008B) MISSED OFFSET
	TArray<struct FWheelSetup>                         WheelSetups;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor)
	float                                              Mass;                                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficient;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChassisWidth;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChassisHeight;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DragArea;                                                 // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              EstimatedMaxEngineSpeed;                                  // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MaxEngineRPM;                                             // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DebugDragMagnitude;                                       // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     InertiaTensorScale;                                       // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinNormalizedTireLoad;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinNormalizedTireLoadFiltered;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxNormalizedTireLoad;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxNormalizedTireLoadFiltered;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdLongitudinalSpeed;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LowForwardSpeedSubStepCount;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                HighForwardSpeedSubStepCount;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UVehicleWheel*>                       Wheels;                                                   // 0x01E3(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      bUseRVOAvoidance : 1;                                     // 0x01E3(0x0001) (Edit, BlueprintVisible)
	float                                              RVOAvoidanceRadius;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RVOAvoidanceHeight;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceConsiderationRadius;                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RVOSteeringStep;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RVOThrottleStep;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AvoidanceUID;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceWeight;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PendingLaunchVelocity;                                    // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FReplicatedVehicleState                     ReplicatedState;                                          // 0x01E3(0x0014) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RawSteeringInput;                                         // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RawThrottleInput;                                         // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bRawHandbrakeInput : 1;                                   // 0x01E3(0x0001) (Transient)
	unsigned char                                      bRawGearUpInput : 1;                                      // 0x01E3(0x0001) (Transient)
	unsigned char                                      bRawGearDownInput : 1;                                    // 0x01E3(0x0001) (Transient)
	float                                              SteeringInput;                                            // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BrakeInput;                                               // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              HandbrakeInput;                                           // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              IdleBrakeInput;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StopThreshold;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WrongDirectionThreshold;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVehicleInputRate                           ThrottleInputRate;                                        // 0x01E3(0x0008) (Edit)
	struct FVehicleInputRate                           BrakeInputRate;                                           // 0x01E3(0x0008) (Edit)
	struct FVehicleInputRate                           HandbrakeInputRate;                                       // 0x01E3(0x0008) (Edit)
	struct FVehicleInputRate                           SteeringInputRate;                                        // 0x01E3(0x0008) (Edit)
	unsigned char                                      bWasAvoidanceUpdated : 1;                                 // 0x01E3(0x0001) (Transient)
	unsigned char                                      UnknownData01[0xA4];                                      // 0x01E4(0x00A4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WheeledVehicleMovementComponent");
		return ptr;
	}


	void SetUseAutoGears(bool bUseAuto);
	void SetThrottleInput(float Throttle);
	void SetTargetGear(int GearNum, bool bImmediate);
	void SetSteeringInput(float Steering);
	void SetHandbrakeInput(bool bNewHandbrake);
	void SetGroupsToIgnore(int GroupFlags);
	void SetGroupsToAvoid(int GroupFlags);
	void SetGearUp(bool bNewGearUp);
	void SetGearDown(bool bNewGearDown);
	void SetAvoidanceGroup(int GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int CurrentGear);
	bool GetUseAutoGears();
	int GetTargetGear();
	float GetForwardSpeed();
	float GetEngineRotationSpeed();
	float GetEngineMaxRotationSpeed();
	int GetCurrentGear();
};


// Class Engine.WheeledVehicleMovementComponent4W
// 0x0170 (0x03F8 - 0x0288)
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x0288(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WheeledVehicleMovementComponent4W");
		return ptr;
	}

};


// Class Engine.ProjectileMovementComponent
// 0x0068 (0x0180 - 0x0118)
class UProjectileMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0xCB];                                      // 0x0118(0x00CB) MISSED OFFSET
	float                                              InitialSpeed;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRotationFollowsVelocity : 1;                             // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bShouldBounce : 1;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bInitialVelocityInLocalSpace : 1;                         // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bForceSubStepping : 1;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bIsHomingProjectile : 1;                                  // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bBounceAngleAffectsFriction : 1;                          // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bIsSliding : 1;                                           // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	float                                              PreviousHitTime;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	struct FVector                                     PreviousHitNormal;                                        // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	float                                              ProjectileGravityScale;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Buoyancy;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Bounciness;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BounceVelocityStopSimulatingThreshold;                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnProjectileBounce;                                       // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnProjectileStop;                                         // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              HomingAccelerationMagnitude;                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class USceneComponent>              HomingTargetComponent;                                    // 0x01E3(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData)
	float                                              MaxSimulationTimeStep;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxSimulationIterations;                                  // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProjectileMovementComponent");
		return ptr;
	}


	void StopSimulating(const struct FHitResult& HitResult);
	void SetVelocityInLocalSpace(const struct FVector& NewVelocity);
	void OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	struct FVector LimitVelocity(const struct FVector& NewVelocity);
};


// Class Engine.RotatingMovementComponent
// 0x0020 (0x0138 - 0x0118)
class URotatingMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0xCB];                                      // 0x0118(0x00CB) MISSED OFFSET
	struct FRotator                                    RotationRate;                                             // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PivotTranslation;                                         // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRotationInLocalSpace : 1;                                // 0x01E3(0x0001) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RotatingMovementComponent");
		return ptr;
	}

};


// Class Engine.NavigationInvokerComponent
// 0x0008 (0x00D8 - 0x00D0)
class UNavigationInvokerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	float                                              TileGenerationRadius;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TileRemovalRadius;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationInvokerComponent");
		return ptr;
	}

};


// Class Engine.NavRelevantComponent
// 0x0030 (0x0100 - 0x00D0)
class UNavRelevantComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	unsigned char                                      bNavigationRelevant : 1;                                  // 0x01E3(0x0001)
	unsigned char                                      bAttachToOwnersRoot : 1;                                  // 0x01E3(0x0001)
	class UObject*                                     CachedNavParent;                                          // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavRelevantComponent");
		return ptr;
	}


	void SetNavigationRelevancy(bool bRelevant);
};


// Class Engine.NavLinkCustomInterface
// 0x0000 (0x0028 - 0x0028)
class UNavLinkCustomInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkCustomInterface");
		return ptr;
	}

};


// Class Engine.NavLinkCustomComponent
// 0x0098 (0x0198 - 0x0100)
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData00[0xE3];                                      // 0x0100(0x00E3) MISSED OFFSET
	uint32_t                                           NavLinkUserId;                                            // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      EnabledAreaClass;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DisabledAreaClass;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinkRelativeStart;                                        // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinkRelativeEnd;                                          // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENavLinkDirection>                     LinkDirection;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLinkEnabled : 1;                                         // 0x01E3(0x0001) (Edit)
	unsigned char                                      bNotifyWhenEnabled : 1;                                   // 0x01E3(0x0001) (Edit)
	unsigned char                                      bNotifyWhenDisabled : 1;                                  // 0x01E3(0x0001) (Edit)
	unsigned char                                      bCreateBoxObstacle : 1;                                   // 0x01E3(0x0001) (Edit)
	struct FVector                                     ObstacleOffset;                                           // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ObstacleExtent;                                           // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ObstacleAreaClass;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BroadcastRadius;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BroadcastInterval;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     BroadcastChannel;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkCustomComponent");
		return ptr;
	}

};


// Class Engine.NavModifierComponent
// 0x0020 (0x0120 - 0x0100)
class UNavModifierComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData00[0xE3];                                      // 0x0100(0x00E3) MISSED OFFSET
	class UClass*                                      AreaClass;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FailsafeExtent;                                           // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavModifierComponent");
		return ptr;
	}

};


// Class Engine.PawnNoiseEmitterComponent
// 0x0028 (0x00F8 - 0x00D0)
class UPawnNoiseEmitterComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	unsigned char                                      bAIPerceptionSystemCompatibilityMode : 1;                 // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	struct FVector                                     LastRemoteNoisePosition;                                  // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              NoiseLifetime;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastRemoteNoiseVolume;                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastRemoteNoiseTime;                                      // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastLocalNoiseVolume;                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastLocalNoiseTime;                                       // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PawnNoiseEmitterComponent");
		return ptr;
	}


	void MakeNoise(class AActor* NoiseMaker, float Loudness, const struct FVector& NoiseLocation);
};


// Class Engine.PhysicsHandleComponent
// 0x00B0 (0x0180 - 0x00D0)
class UPhysicsHandleComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UPrimitiveComponent*                         GrabbedComponent;                                         // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LinearDamping;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LinearStiffness;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AngularDamping;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AngularStiffness;                                         // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationSpeed;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsHandleComponent");
		return ptr;
	}


	void SetTargetRotation(const struct FRotator& NewRotation);
	void SetTargetLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	void SetTargetLocation(const struct FVector& NewLocation);
	void SetLinearStiffness(float NewLinearStiffness);
	void SetLinearDamping(float NewLinearDamping);
	void SetInterpolationSpeed(float NewInterpolationSpeed);
	void SetAngularStiffness(float NewAngularStiffness);
	void SetAngularDamping(float NewAngularDamping);
	void ReleaseComponent();
	void GrabComponent(class UPrimitiveComponent* Component, const struct FName& InBoneName, const struct FVector& GrabLocation, bool bConstrainRotation);
	void GetTargetLocationAndRotation(struct FVector* TargetLocation, struct FRotator* TargetRotation);
};


// Class Engine.PlatformEventsComponent
// 0x0020 (0x00F0 - 0x00D0)
class UPlatformEventsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FScriptMulticastDelegate                    PlatformChangedToLaptopModeDelegate;                      // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlatformChangedToTabletModeDelegate;                      // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformEventsComponent");
		return ptr;
	}


	bool SupportsConvertibleLaptops();
	void PlatformEventDelegate__DelegateSignature();
	bool IsInTabletMode();
	bool IsInLaptopMode();
};


// Class Engine.AtmosphericFogComponent
// 0x01E0 (0x04D0 - 0x02F0)
class UAtmosphericFogComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x02F0(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AtmosphericFogComponent");
		return ptr;
	}


	void StartPrecompute();
	void SetSunMultiplier(float NewSunMultiplier);
	void SetStartDistance(float NewStartDistance);
	void SetPrecomputeParams(float DensityHeight, int MaxScatteringOrder, int InscatterAltitudeSampleNum);
	void SetFogMultiplier(float NewFogMultiplier);
	void SetDistanceScale(float NewDistanceScale);
	void SetDistanceOffset(float NewDistanceOffset);
	void SetDensityOffset(float NewDensityOffset);
	void SetDensityMultiplier(float NewDensityMultiplier);
	void SetDefaultLightColor(const struct FLinearColor& NewLightColor);
	void SetDefaultBrightness(float NewBrightness);
	void SetAltitudeScale(float NewAltitudeScale);
	void DisableSunDisk(bool NewSunDisk);
	void DisableGroundScattering(bool NewGroundScattering);
};


// Class Engine.SoundAttenuation
// 0x00C0 (0x00E8 - 0x0028)
class USoundAttenuation : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundAttenuation");
		return ptr;
	}

};


// Class Engine.AudioComponent
// 0x0180 (0x0470 - 0x02F0)
class UAudioComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x180];                                     // 0x02F0(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioComponent");
		return ptr;
	}


	void Stop();
	void SetWaveParameter(const struct FName& InName, class USoundWave* InWave);
	void SetVolumeMultiplier(float NewVolumeMultiplier);
	void SetUISound(bool bInUISound);
	void SetSound(class USoundBase* NewSound);
	void SetPitchMultiplier(float NewPitchMultiplier);
	void SetIntParameter(const struct FName& InName, int InInt);
	void SetFloatParameter(const struct FName& InName, float InFloat);
	void SetBoolParameter(const struct FName& InName, bool InBool);
	void Play(float StartTime);
	bool IsPlaying();
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime);
	bool BP_GetAttenuationSettingsToApply(struct FAttenuationSettings* OutAttenuationSettings);
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
	void AdjustAttenuation(const struct FAttenuationSettings& InAttenuationSettings);
};


// Class Engine.BasisComponent
// 0x0000 (0x02F0 - 0x02F0)
class UBasisComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BasisComponent");
		return ptr;
	}

};


// Class Engine.CalmWaterComponent
// 0x0010 (0x0300 - 0x02F0)
class UCalmWaterComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CalmWaterComponent");
		return ptr;
	}

};


// Class Engine.DecalComponent
// 0x0020 (0x0310 - 0x02F0)
class UDecalComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalComponent");
		return ptr;
	}


	void SetSortOrder(int Value);
	void SetLifeSpan(float LifeSpan);
	void SetDecalMaterial(class UMaterialInterface* NewDecalMaterial);
	class UMaterialInterface* GetDecalMaterial();
	class UMaterialInstanceDynamic* GetDecalDynamicMaterialInstance();
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
};


// Class Engine.ExponentialHeightFogComponent
// 0x0060 (0x0350 - 0x02F0)
class UExponentialHeightFogComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x02F0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ExponentialHeightFogComponent");
		return ptr;
	}


	void SetStartDistance(float Value);
	void SetInscatteringStartScale(float Value);
	void SetInscatteringFarScale(float Value);
	void SetFogMaxOpacity(float Value);
	void SetFogInscatteringColor(const struct FLinearColor& Value);
	void SetFogHeightFalloff(float Value);
	void SetFogDensity(float Value);
	void SetFarInscatteringColour(const struct FLinearColor& Value);
	void SetExponentialFogFarDistance(float Value);
	void SetDirectionalInscatteringStartScale(float Value);
	void SetDirectionalInscatteringStartDistance(float Value);
	void SetDirectionalInscatteringFarScale(float Value);
	void SetDirectionalInscatteringExponent(float Value);
	void SetDirectionalInscatteringColor(const struct FLinearColor& Value);
};


// Class Engine.AmbientLightSourceComponent
// 0x0020 (0x0490 - 0x0470)
class UAmbientLightSourceComponent : public ULightComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0470(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientLightSourceComponent");
		return ptr;
	}


	void SetTint(const struct FLinearColor& NewTint);
	void SetRadius(float NewRadius);
	void SetGroupingPolicy(TEnumAsByte<EAmbientLightClusteringPolicy> Policy);
	void SetAmbientIntensity(float NewIntensity);
};


// Class Engine.DirectionalLightComponent
// 0x0080 (0x04F0 - 0x0470)
class UDirectionalLightComponent : public ULightComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0470(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLightComponent");
		return ptr;
	}


	void SetShadowLastTransitionSize(float NewValue);
	void SetShadowDistanceFadeoutFraction(float NewValue);
	void SetOcclusionMaskDarkness(float NewValue);
	void SetNormalOffsetBiasScale(float NewValue);
	void SetLightShaftOverrideDirection(const struct FVector& NewValue);
	void SetFarCascadeUpdateRate(float NewValue);
	void SetEnableLightShaftOcclusion(bool bNewValue);
	void SetDynamicShadowDistanceStationaryLight(float NewValue);
	void SetDynamicShadowDistanceMovableLight(float NewValue);
	void SetDynamicShadowCascades(int NewValue);
	void SetCloudsShadowsIntensity(float NewValue);
	void SetCloseCascadeUpdateRate(float NewValue);
	void SetCascadeTransitionFraction(float NewValue);
	void SetCascadeDistributionExponent(float NewValue);
};


// Class Engine.PointLightComponent
// 0x0040 (0x04B0 - 0x0470)
class UPointLightComponent : public ULightComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0470(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLightComponent");
		return ptr;
	}


	void SetSourceRadius(float bNewValue);
	void SetSourceLength(float NewValue);
	void SetLightFalloffExponent(float NewLightFalloffExponent);
	void SetAttenuationRadius(float NewRadius);
};


// Class Engine.SpotLightComponent
// 0x0010 (0x04C0 - 0x04B0)
class USpotLightComponent : public UPointLightComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLightComponent");
		return ptr;
	}


	void SetOuterConeAngle(float NewOuterConeAngle);
	void SetKickBackProportionality(float NewKickBackRatio);
	void SetInnerConeAngle(float NewInnerConeAngle);
};


// Class Engine.SkyLightComponent
// 0x0190 (0x04B0 - 0x0320)
class USkyLightComponent : public ULightComponentBase
{
public:
	unsigned char                                      UnknownData00[0x190];                                     // 0x0320(0x0190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLightComponent");
		return ptr;
	}


	void SetOcclusionTint(const struct FColor& InTint);
	void SetMinOcclusion(float InMinOcclusion);
	void SetLightColor(const struct FLinearColor& NewLightColor);
	void SetIntensity(float NewIntensity);
	void SetIndirectLightingIntensity(float NewIntensity);
	void SetCubemapBlend(class UTextureCube* SourceCubemap, class UTextureCube* DestinationCubemap, float InBlendFraction);
	void SetCubemap(class UTextureCube* NewCubemap);
	void RecaptureSky();
};


// Class Engine.NavigationGraphNodeComponent
// 0x0020 (0x0310 - 0x02F0)
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationGraphNodeComponent");
		return ptr;
	}

};


// Class Engine.PhysicsSpringComponent
// 0x0020 (0x0310 - 0x02F0)
class UPhysicsSpringComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsSpringComponent");
		return ptr;
	}


	struct FVector GetSpringRestingPoint();
	struct FVector GetSpringDirection();
	struct FVector GetSpringCurrentEndPoint();
	float GetNormalizedCompressionScalar();
};


// Class Engine.PhysicsThrusterComponent
// 0x0000 (0x02F0 - 0x02F0)
class UPhysicsThrusterComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsThrusterComponent");
		return ptr;
	}

};


// Class Engine.PostProcessComponent
// 0x0540 (0x0830 - 0x02F0)
class UPostProcessComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x540];                                     // 0x02F0(0x0540) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PostProcessComponent");
		return ptr;
	}


	void AddOrUpdateBlendable(const TScriptInterface<class UBlendableInterface>& InBlendableObject, float InWeight);
};


// Class Engine.ArrowComponent
// 0x0020 (0x0690 - 0x0670)
class UArrowComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0670(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ArrowComponent");
		return ptr;
	}


	void SetArrowColor_New(const struct FLinearColor& NewColor);
	void SetArrowColor_DEPRECATED(const struct FColor& NewColor);
};


// Class Engine.WaterId
// 0x0000 (0x0028 - 0x0028)
class UWaterId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WaterId");
		return ptr;
	}

};


// Class Engine.BaseWaterComponent
// 0x0010 (0x0680 - 0x0670)
class UBaseWaterComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0670(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BaseWaterComponent");
		return ptr;
	}

};


// Class Engine.FFTWaterComponent
// 0x0370 (0x09F0 - 0x0680)
class UFFTWaterComponent : public UBaseWaterComponent
{
public:
	unsigned char                                      UnknownData00[0x370];                                     // 0x0680(0x0370) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FFTWaterComponent");
		return ptr;
	}


	void SetWaterColour(const struct FLinearColor& WaterColour);
	void SetSpecularBrightness(float SpecularBrightness);
	void SetShallowWaterColour(const struct FLinearColor& ShallowWaterColour);
	void SetReflectionBrightness(float ReflectionBrightness);
	void SetMurkyRegion(const struct FMurkyRegion& MurkyRegion);
	void SetFresnelPower(float FresnelPower);
	void SetFoamHighlightColour(const struct FLinearColor& FoamHighlightColour);
	void SetFoamColour(const struct FLinearColor& FoamColour);
	void SetFoamBrightness(float FoamBrightness);
	void SetCarrierWaveParams(float Amplitude, float WaveLength, float PropagationSpeed);
	void SetBackLitColour(const struct FLinearColor& BackLitColour);
	void SetAmbientColour(const struct FLinearColor& AmbientColour);
};


// Class Engine.FFTWaterExtendedPlaneComponent
// 0x02B0 (0x0930 - 0x0680)
class UFFTWaterExtendedPlaneComponent : public UBaseWaterComponent
{
public:
	unsigned char                                      UnknownData00[0x2B0];                                     // 0x0680(0x02B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FFTWaterExtendedPlaneComponent");
		return ptr;
	}

};


// Class Engine.BillboardComponent
// 0x0020 (0x0690 - 0x0670)
class UBillboardComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0670(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BillboardComponent");
		return ptr;
	}


	void SetUV(int NewU, int NewUL, int NewV, int NewVL);
	void SetSpriteAndUV(class UTexture2D* NewSprite, int NewU, int NewUL, int NewV, int NewVL);
	void SetSprite(class UTexture2D* NewSprite);
};


// Class Engine.BrushComponent
// 0x0020 (0x0690 - 0x0670)
class UBrushComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0670(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushComponent");
		return ptr;
	}

};


// Class Engine.DrawFrustumComponent
// 0x0020 (0x0690 - 0x0670)
class UDrawFrustumComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0670(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawFrustumComponent");
		return ptr;
	}

};


// Class Engine.LineBatchComponent
// 0x0040 (0x06B0 - 0x0670)
class ULineBatchComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0670(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LineBatchComponent");
		return ptr;
	}

};


// Class Engine.MaterialBillboardComponent
// 0x0010 (0x0680 - 0x0670)
class UMaterialBillboardComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0670(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialBillboardComponent");
		return ptr;
	}


	void AddElement(class UMaterialInterface* Material, class UCurveFloat* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, class UCurveFloat* DistanceToSizeCurve);
};


// Class Engine.MergedCollisionComponent
// 0x0020 (0x0690 - 0x0670)
class UMergedCollisionComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0670(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MergedCollisionComponent");
		return ptr;
	}


	class UStaticMesh* GetStaticMeshByInstanceBodyIndex(int InstanceBodyIndex);
	int GetOwningActorCrc32ByInstanceBodyIndex(int InstanceBodyIndex);
};


// Class Engine.DestructibleComponent
// 0x00C0 (0x0860 - 0x07A0)
class UDestructibleComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x07A0(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DestructibleComponent");
		return ptr;
	}


	void SetDestructibleMesh(class UDestructibleMesh* NewMesh);
	class UDestructibleMesh* GetDestructibleMesh();
	void ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
	void ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength);
};


// Class Engine.PoseableMeshComponent
// 0x00D0 (0x0870 - 0x07A0)
class UPoseableMeshComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x07A0(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PoseableMeshComponent");
		return ptr;
	}


	void SetBoneTransformByName(const struct FName& BoneName, const struct FTransform& InTransform, TEnumAsByte<EBoneSpaces> BoneSpace);
	void SetBoneScaleByName(const struct FName& BoneName, const struct FVector& InScale3D, TEnumAsByte<EBoneSpaces> BoneSpace);
	void SetBoneRotationByName(const struct FName& BoneName, const struct FRotator& InRotation, TEnumAsByte<EBoneSpaces> BoneSpace);
	void SetBoneLocationByName(const struct FName& BoneName, const struct FVector& InLocation, TEnumAsByte<EBoneSpaces> BoneSpace);
	void ResetBoneTransformByName(const struct FName& BoneName);
	struct FTransform GetBoneTransformByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);
	struct FVector GetBoneScaleByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);
	struct FRotator GetBoneRotationByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);
	struct FVector GetBoneLocationByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);
};


// Class Engine.PoseableSkeletalMeshComponent
// 0x0010 (0x0AA0 - 0x0A90)
class UPoseableSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0A90(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PoseableSkeletalMeshComponent");
		return ptr;
	}


	void SwitchPoseMode(TEnumAsByte<EPoseableAnimMode> NewMode);
	void SetBoneTransformByName(const struct FName& BoneName, const struct FTransform& InTransform, TEnumAsByte<EBoneSpaces> BoneSpace, bool bApplyRefPose);
	void SetBoneTransformByIndex(int BoneIndex, const struct FTransform& InTransform, TEnumAsByte<EBoneSpaces> BoneSpace, bool bApplyRefPose);
	struct FTransform GetBoneTransformByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace, bool bApplyRefPose);
};


// Class Engine.FlatWaterMeshComponent
// 0x00A0 (0x0790 - 0x06F0)
class UFlatWaterMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x06F0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FlatWaterMeshComponent");
		return ptr;
	}


	void UpdateBoundary(class AActor* BoundaryActor);
	void SetTexture(int MaterialIndex, const struct FName& Name, class UTexture* Texture);
	void SetScalarValue(int MaterialIndex, const struct FName& Name, float Value);
	void PlaceDrop(const struct FVector2D& Position, float Size, float Height);
	void CreateBoundaryMap(class AActor* BoundaryActor, float ZNearDistance, float ZFarDistance, int TextureSize);
};


// Class Engine.InstancedCoverageMeshComponent
// 0x0090 (0x0780 - 0x06F0)
class UInstancedCoverageMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x06F0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InstancedCoverageMeshComponent");
		return ptr;
	}


	void SetBaseMeshComponent(class UStaticMeshComponent* BaseMeshComponent);
	class UStaticMeshComponent* BaseMeshComponent();
};


// Class Engine.MergedStaticMeshComponent
// 0x0020 (0x0710 - 0x06F0)
class UMergedStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x06F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MergedStaticMeshComponent");
		return ptr;
	}

};


// Class Engine.SplineMeshComponent
// 0x00A0 (0x0790 - 0x06F0)
class USplineMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x06F0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineMeshComponent");
		return ptr;
	}


	void UpdateMesh();
	void SetStartTangent(const struct FVector& StartTangent, bool bUpdateMesh);
	void SetStartScale(const struct FVector2D& StartScale, bool bUpdateMesh);
	void SetStartRoll(float StartRoll, bool bUpdateMesh);
	void SetStartPosition(const struct FVector& StartPos, bool bUpdateMesh);
	void SetStartOffset(const struct FVector2D& StartOffset, bool bUpdateMesh);
	void SetStartAndEnd(const struct FVector& StartPos, const struct FVector& StartTangent, const struct FVector& EndPos, const struct FVector& EndTangent, bool bUpdateMesh);
	void SetSplineUpDir(const struct FVector& InSplineUpDir, bool bUpdateMesh);
	void SetForwardAxis(TEnumAsByte<ESplineMeshAxis> InForwardAxis, bool bUpdateMesh);
	void SetEndTangent(const struct FVector& EndTangent, bool bUpdateMesh);
	void SetEndScale(const struct FVector2D& EndScale, bool bUpdateMesh);
	void SetEndRoll(float EndRoll, bool bUpdateMesh);
	void SetEndPosition(const struct FVector& EndPos, bool bUpdateMesh);
	void SetEndOffset(const struct FVector2D& EndOffset, bool bUpdateMesh);
	void SetBoundaryMin(float InBoundaryMin, bool bUpdateMesh);
	void SetBoundaryMax(float InBoundaryMax, bool bUpdateMesh);
	struct FVector GetStartTangent();
	struct FVector2D GetStartScale();
	float GetStartRoll();
	struct FVector GetStartPosition();
	struct FVector2D GetStartOffset();
	struct FVector GetSplineUpDir();
	TEnumAsByte<ESplineMeshAxis> GetForwardAxis();
	struct FVector GetEndTangent();
	struct FVector2D GetEndScale();
	float GetEndRoll();
	struct FVector GetEndPosition();
	struct FVector2D GetEndOffset();
	float GetBoundaryMin();
	float GetBoundaryMax();
};


// Class Engine.ModelComponent
// 0x0040 (0x06B0 - 0x0670)
class UModelComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0670(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ModelComponent");
		return ptr;
	}

};


// Class Engine.NavLinkRenderingComponent
// 0x0000 (0x0670 - 0x0670)
class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkRenderingComponent");
		return ptr;
	}

};


// Class Engine.NavMeshRenderingComponent
// 0x0010 (0x0680 - 0x0670)
class UNavMeshRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0670(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshRenderingComponent");
		return ptr;
	}

};


// Class Engine.NavTestRenderingComponent
// 0x0000 (0x0670 - 0x0670)
class UNavTestRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavTestRenderingComponent");
		return ptr;
	}

};


// Class Engine.ParticleSystem
// 0x00F8 (0x0120 - 0x0028)
class UParticleSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TEnumAsByte<EParticleSystemUpdateMode>             SystemUpdateMode;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UpdateTime_FPS;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UpdateTime_Delta;                                         // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WarmupTime;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WarmupTickRate;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UParticleEmitter*>                    Emitters;                                                 // 0x01E3(0x0010) (ExportObject, ZeroConstructor)
	class UParticleSystemComponent*                    PreviewComponent;                                         // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UInterpCurveEdSetup*                         CurveEdSetup;                                             // 0x01E3(0x0008) (ExportObject, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOrientZAxisTowardCamera : 1;                             // 0x01E3(0x0001) (Edit)
	float                                              LODDistanceCheckTime;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleSystemLODMethod>              LODMethod;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      LODDistances;                                             // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      bRegenerateLODDuplicate : 1;                              // 0x01E3(0x0001)
	TArray<struct FParticleSystemLOD>                  LODSettings;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bUseFixedRelativeBoundingBox : 1;                         // 0x01E3(0x0001) (Edit)
	struct FBox                                        FixedRelativeBoundingBox;                                 // 0x01E3(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SecondsBeforeInactive;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShouldResetPeakCounts : 1;                               // 0x01E3(0x0001)
	unsigned char                                      bHasPhysics : 1;                                          // 0x01E3(0x0001) (Transient)
	unsigned char                                      bUseRealtimeThumbnail : 1;                                // 0x01E3(0x0001) (Edit)
	unsigned char                                      ThumbnailImageOutOfDate : 1;                              // 0x01E3(0x0001)
	float                                              Delay;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DelayLow;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseDelayRange : 1;                                       // 0x01E3(0x0001) (Edit)
	struct FVector                                     MacroUVPosition;                                          // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MacroUVRadius;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleSystemOcclusionBoundsMethod>  OcclusionBoundsMethod;                                    // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBox                                        CustomOcclusionBounds;                                    // 0x01E3(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FLODSoloTrack>                       SoloTracking;                                             // 0x01E3(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystem");
		return ptr;
	}


	int GetNumLODs();
	bool ContainsEmitterType(class UClass* TypeData);
};


// Class Engine.ParticleSystemAggregateTickSettings
// 0x0010 (0x0038 - 0x0028)
class UParticleSystemAggregateTickSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	int                                                FramesTickScaledOver;                                     // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxTicksPerFrame;                                         // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystemAggregateTickSettings");
		return ptr;
	}

};


// Class Engine.DrawSphereComponent
// 0x0000 (0x06A0 - 0x06A0)
class UDrawSphereComponent : public USphereComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawSphereComponent");
		return ptr;
	}

};


// Class Engine.TextRenderComponent
// 0x0070 (0x06E0 - 0x0670)
class UTextRenderComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0670(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextRenderComponent");
		return ptr;
	}


	void SetYScale(float Value);
	void SetXScale(float Value);
	void SetWorldSize(float Value);
	void SetTextRenderColor(const struct FColor& Value);
	void SetTextMaterial(class UMaterialInterface* Material);
	void SetText(const class FString& Value);
	void SetHorizSpacingAdjust(float Value);
	void SetHorizontalAlignment(TEnumAsByte<EHorizTextAligment> Value);
	void SetFont(class UFont* Value);
	void K2_SetText(const struct FText& Value);
	struct FVector GetTextWorldSize();
	struct FVector GetTextLocalSize();
};


// Class Engine.VectorFieldComponent
// 0x0030 (0x06A0 - 0x0670)
class UVectorFieldComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0670(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldComponent");
		return ptr;
	}


	void SetIntensity(float NewIntensity);
};


// Class Engine.RadialForceComponent
// 0x0030 (0x0320 - 0x02F0)
class URadialForceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02F0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RadialForceComponent");
		return ptr;
	}


	void RemoveObjectTypeToAffect(TEnumAsByte<EObjectTypeQuery> ObjectType);
	void FireImpulse();
	void AddObjectTypeToAffect(TEnumAsByte<EObjectTypeQuery> ObjectType);
};


// Class Engine.ReflectionCaptureComponent
// 0x0090 (0x0380 - 0x02F0)
class UReflectionCaptureComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x02F0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReflectionCaptureComponent");
		return ptr;
	}


	void UpdateReflectionCapture();
	void UpdateAllReflectionCaptures();
	void SetTint(const struct FLinearColor& Value);
	void SetShadowBrightness(float Value);
	void SetLPVOcclusionBrightness(float Value);
	void SetBrightness(float Value);
};


// Class Engine.BoxReflectionCaptureComponent
// 0x0010 (0x0390 - 0x0380)
class UBoxReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0380(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.PlaneReflectionCaptureComponent
// 0x0010 (0x0390 - 0x0380)
class UPlaneReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0380(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlaneReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.SphereReflectionCaptureComponent
// 0x0010 (0x0390 - 0x0380)
class USphereReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0380(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.SceneCaptureComponent
// 0x0060 (0x0350 - 0x02F0)
class USceneCaptureComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x02F0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponent");
		return ptr;
	}


	void HideComponent(class UPrimitiveComponent* InComponent);
	void HideActorComponents(class AActor* InActor);
};


// Class Engine.SceneCaptureComponent2D
// 0x0570 (0x08C0 - 0x0350)
class USceneCaptureComponent2D : public USceneCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x570];                                     // 0x0350(0x0570) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponent2D");
		return ptr;
	}


	void UpdateContent();
	void AddOrUpdateBlendable(const TScriptInterface<class UBlendableInterface>& InBlendableObject, float InWeight);
};


// Class Engine.SceneCaptureComponentCube
// 0x0010 (0x0360 - 0x0350)
class USceneCaptureComponentCube : public USceneCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0350(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponentCube");
		return ptr;
	}


	void UpdateContent();
};


// Class Engine.WaterEmissionVolumeComponent
// 0x0020 (0x0310 - 0x02F0)
class UWaterEmissionVolumeComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WaterEmissionVolumeComponent");
		return ptr;
	}

};


// Class Engine.WindDirectionalSourceComponent
// 0x0010 (0x0300 - 0x02F0)
class UWindDirectionalSourceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindDirectionalSourceComponent");
		return ptr;
	}

};


// Class Engine.TimelineComponent
// 0x0098 (0x0168 - 0x00D0)
class UTimelineComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FTimeline                                   TheTimeline;                                              // 0x01E3(0x0098) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TimelineComponent");
		return ptr;
	}


	void Stop();
	void SetTimelineLengthMode(TEnumAsByte<ETimelineLengthMode> NewLengthMode);
	void SetTimelineLength(float NewLength);
	void SetPlayRate(float NewRate);
	void SetPlaybackPosition(float NewPosition, bool bFireEvents, bool bFireUpdate);
	void SetNewTime(float NewTime);
	void SetLooping(bool bNewLooping);
	void ReverseFromEnd();
	void Reverse();
	void PlayFromStart();
	void Play();
	void OnRep_Timeline();
	bool IsReversing();
	bool IsPlaying();
	bool IsLooping();
	float GetTimelineLength();
	float GetPlayRate();
	float GetPlaybackPosition();
};


// Class Engine.AnimSequenceBase
// 0x0028 (0x0078 - 0x0050)
class UAnimSequenceBase : public UAnimationAsset
{
public:
	unsigned char                                      UnknownData00[0x193];                                     // 0x0050(0x0193) MISSED OFFSET
	TArray<struct FAnimNotifyEvent>                    Notifies;                                                 // 0x01E3(0x0010) (ZeroConstructor)
	float                                              SequenceLength;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              RateScale;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRawCurveTracks                             RawCurveData;                                             // 0x01E3(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSequenceBase");
		return ptr;
	}


	float GetPlayLength();
};


// Class Engine.AnimCompositeBase
// 0x0000 (0x0078 - 0x0078)
class UAnimCompositeBase : public UAnimSequenceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompositeBase");
		return ptr;
	}

};


// Class Engine.AnimComposite
// 0x0010 (0x0088 - 0x0078)
class UAnimComposite : public UAnimCompositeBase
{
public:
	unsigned char                                      UnknownData00[0x16B];                                     // 0x0078(0x016B) MISSED OFFSET
	struct FAnimTrack                                  AnimationTrack;                                           // 0x01E3(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimComposite");
		return ptr;
	}

};


// Class Engine.AnimStateMachineTypes
// 0x0000 (0x0028 - 0x0028)
class UAnimStateMachineTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimStateMachineTypes");
		return ptr;
	}

};


// Class Engine.AnimMontage
// 0x0070 (0x00E8 - 0x0078)
class UAnimMontage : public UAnimCompositeBase
{
public:
	unsigned char                                      UnknownData00[0x16B];                                     // 0x0078(0x016B) MISSED OFFSET
	float                                              BlendInTime;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTriggerTime;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FCompositeSection>                   CompositeSections;                                        // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FSlotAnimationTrack>                 SlotAnimTracks;                                           // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FBranchingPoint>                     BranchingPoints;                                          // 0x01E3(0x0010) (ZeroConstructor, Deprecated)
	bool                                               bEnableRootMotionTranslation;                             // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableRootMotionRotation;                                // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERootMotionRootLock>                   RootMotionRootLock;                                       // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	TArray<struct FBranchingPointMarker>               BranchingPointMarkers;                                    // 0x01E3(0x0010) (ZeroConstructor)
	bool                                               bAnimBranchingPointNeedsSort;                             // 0x01E3(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<int>                                        BranchingPointStateNotifyIndices;                         // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimMontage");
		return ptr;
	}

};


// Class Engine.AnimSequence
// 0x00E0 (0x0158 - 0x0078)
class UAnimSequence : public UAnimSequenceBase
{
public:
	unsigned char                                      UnknownData00[0x16B];                                     // 0x0078(0x016B) MISSED OFFSET
	int                                                NumFrames;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTrackToSkeletonMap>                 TrackToSkeletonMapTable;                                  // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FTranslationTrack>                   TranslationData;                                          // 0x01E3(0x0010) (ZeroConstructor, Transient)
	TArray<struct FRotationTrack>                      RotationData;                                             // 0x01E3(0x0010) (ZeroConstructor, Transient)
	TArray<struct FScaleTrack>                         ScaleData;                                                // 0x01E3(0x0010) (ZeroConstructor, Transient)
	TEnumAsByte<EAnimationCompressionFormat>           TranslationCompressionFormat;                             // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimationCompressionFormat>           RotationCompressionFormat;                                // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimationCompressionFormat>           ScaleCompressionFormat;                                   // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        CompressedTrackOffsets;                                   // 0x01E3(0x0010) (ZeroConstructor)
	struct FCompressedOffsetData                       CompressedScaleOffsets;                                   // 0x01E3(0x0018)
	TEnumAsByte<EAnimationKeyFormat>                   KeyEncodingFormat;                                        // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAdditiveAnimationType>                AdditiveAnimType;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAdditiveBasePoseType>                 RefPoseType;                                              // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RefPoseSeq;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RefFrameIndex;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EncodingPkgVersion;                                       // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       RetargetSource;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableRootMotion;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERootMotionRootLock>                   RootMotionRootLock;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRootMotionSettingsCopiedFromMontage;                     // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSequence");
		return ptr;
	}

};


// Class Engine.BlendSpaceBase
// 0x00B8 (0x0108 - 0x0050)
class UBlendSpaceBase : public UAnimationAsset
{
public:
	unsigned char                                      UnknownData00[0x193];                                     // 0x0050(0x0193) MISSED OFFSET
	struct FBlendParameter                             BlendParameters[0x3];                                     // 0x01E3(0x0020)
	struct FInterpolationParameter                     InterpolationParam[0x3];                                  // 0x01E3(0x0008) (Edit)
	float                                              TargetWeightInterpolationSpeedPerSec;                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENotifyTriggerMode>                    NotifyTriggerMode;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRotationBlendInMeshSpace;                                // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                NumOfDimension;                                           // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AnimLength;                                               // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FPerBoneInterpolation>               PerBoneBlend;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FBlendSample>                        SampleData;                                               // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FEditorElement>                      GridSamples;                                              // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpaceBase");
		return ptr;
	}

};


// Class Engine.BlendSpace
// 0x0008 (0x0110 - 0x0108)
class UBlendSpace : public UBlendSpaceBase
{
public:
	unsigned char                                      UnknownData00[0xDB];                                      // 0x0108(0x00DB) MISSED OFFSET
	TEnumAsByte<EBlendSpaceAxis>                       AxisToScaleAnimation;                                     // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpace");
		return ptr;
	}

};


// Class Engine.AimOffsetBlendSpace
// 0x0000 (0x0110 - 0x0110)
class UAimOffsetBlendSpace : public UBlendSpace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AimOffsetBlendSpace");
		return ptr;
	}

};


// Class Engine.BlendSpace1D
// 0x0008 (0x0110 - 0x0108)
class UBlendSpace1D : public UBlendSpaceBase
{
public:
	unsigned char                                      UnknownData00[0xDB];                                      // 0x0108(0x00DB) MISSED OFFSET
	bool                                               bScaleAnimation;                                          // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpace1D");
		return ptr;
	}

};


// Class Engine.AimOffsetBlendSpace1D
// 0x0000 (0x0110 - 0x0110)
class UAimOffsetBlendSpace1D : public UBlendSpace1D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AimOffsetBlendSpace1D");
		return ptr;
	}

};


// Class Engine.AnimCompress
// 0x0018 (0x0040 - 0x0028)
class UAnimCompress : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class FString                                      Description;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      bNeedsSkeleton : 1;                                       // 0x01E3(0x0001)
	TEnumAsByte<EAnimationCompressionFormat>           TranslationCompressionFormat;                             // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimationCompressionFormat>           RotationCompressionFormat;                                // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress");
		return ptr;
	}

};


// Class Engine.AnimCompress_Automatic
// 0x0008 (0x0048 - 0x0040)
class UAnimCompress_Automatic : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	float                                              MaxEndEffectorError;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bTryFixedBitwiseCompression : 1;                          // 0x01E3(0x0001) (Edit)
	unsigned char                                      bTryPerTrackBitwiseCompression : 1;                       // 0x01E3(0x0001) (Edit)
	unsigned char                                      bTryLinearKeyRemovalCompression : 1;                      // 0x01E3(0x0001) (Edit)
	unsigned char                                      bTryIntervalKeyRemoval : 1;                               // 0x01E3(0x0001) (Edit)
	unsigned char                                      bRunCurrentDefaultCompressor : 1;                         // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAutoReplaceIfExistingErrorTooGreat : 1;                  // 0x01E3(0x0001) (Edit)
	unsigned char                                      bRaiseMaxErrorToExisting : 1;                             // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_Automatic");
		return ptr;
	}

};


// Class Engine.AnimCompress_BitwiseCompressOnly
// 0x0000 (0x0040 - 0x0040)
class UAnimCompress_BitwiseCompressOnly : public UAnimCompress
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_BitwiseCompressOnly");
		return ptr;
	}

};


// Class Engine.AnimCompress_LeastDestructive
// 0x0000 (0x0040 - 0x0040)
class UAnimCompress_LeastDestructive : public UAnimCompress
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_LeastDestructive");
		return ptr;
	}

};


// Class Engine.AnimCompress_RemoveEverySecondKey
// 0x0008 (0x0048 - 0x0040)
class UAnimCompress_RemoveEverySecondKey : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	int                                                MinKeys;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bStartAtSecondKey : 1;                                    // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveEverySecondKey");
		return ptr;
	}

};


// Class Engine.AnimCompress_RemoveLinearKeys
// 0x0020 (0x0060 - 0x0040)
class UAnimCompress_RemoveLinearKeys : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	float                                              MaxPosDiff;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngleDiff;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxScaleDiff;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxEffectorDiff;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinEffectorDiff;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EffectorDiffSocket;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ParentKeyScale;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRetarget : 1;                                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bActuallyFilterLinearKeys : 1;                            // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveLinearKeys");
		return ptr;
	}

};


// Class Engine.AnimCompress_PerTrackCompression
// 0x0080 (0x00E0 - 0x0060)
class UAnimCompress_PerTrackCompression : public UAnimCompress_RemoveLinearKeys
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	float                                              MaxZeroingThreshold;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxPosDiffBitwise;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngleDiffBitwise;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxScaleDiffBitwise;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EAnimationCompressionFormat>>   AllowedRotationFormats;                                   // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<TEnumAsByte<EAnimationCompressionFormat>>   AllowedTranslationFormats;                                // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<TEnumAsByte<EAnimationCompressionFormat>>   AllowedScaleFormats;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bResampleAnimation : 1;                                   // 0x01E3(0x0001) (Edit)
	float                                              ResampledFramerate;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinKeysForResampling;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseAdaptiveError : 1;                                    // 0x01E3(0x0001) (Edit)
	unsigned char                                      bUseOverrideForEndEffectors : 1;                          // 0x01E3(0x0001) (Edit)
	int                                                TrackHeightBias;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ParentingDivisor;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ParentingDivisorExponent;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseAdaptiveError2 : 1;                                   // 0x01E3(0x0001) (Edit)
	float                                              RotationErrorSourceRatio;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TranslationErrorSourceRatio;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScaleErrorSourceRatio;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxErrorPerTrackRatio;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PerturbationProbeSize;                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_PerTrackCompression");
		return ptr;
	}

};


// Class Engine.AnimCompress_RemoveTrivialKeys
// 0x0010 (0x0050 - 0x0040)
class UAnimCompress_RemoveTrivialKeys : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	float                                              MaxPosDiff;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngleDiff;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxScaleDiff;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveTrivialKeys");
		return ptr;
	}

};


// Class Engine.AnimSingleNodeInstance
// 0x00E0 (0x0520 - 0x0440)
class UAnimSingleNodeInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0440(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSingleNodeInstance");
		return ptr;
	}


	void StopAnim();
	void SetVertexAnimation(class UVertexAnimation* NewVertexAnim, bool bIsLooping, float InPlayRate);
	void SetReverse(bool bInReverse);
	void SetPosition(float InPosition, bool bFireNotifies);
	void SetPlayRate(float InPlayRate);
	void SetPlaying(bool bIsPlaying);
	void SetLooping(bool bIsLooping);
	void SetBlendSpaceInput(const struct FVector& InBlendInput);
	void SetAnimationAsset(class UAnimationAsset* NewAsset, bool bIsLooping, float InPlayRate);
	void PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition);
	float GetLength();
};


// Class Engine.VehicleAnimInstance
// 0x0000 (0x0440 - 0x0440)
class UVehicleAnimInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VehicleAnimInstance");
		return ptr;
	}


	class AWheeledVehicle* GetVehicle();
};


// Class Engine.AnimMetaData
// 0x0000 (0x0028 - 0x0028)
class UAnimMetaData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimMetaData");
		return ptr;
	}

};


// Class Engine.AnimNotifyState
// 0x0000 (0x0028 - 0x0028)
class UAnimNotifyState : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState");
		return ptr;
	}


	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	class FString GetNotifyName();
};


// Class Engine.AnimNotifyState_TimedParticleEffect
// 0x0030 (0x0058 - 0x0028)
class UAnimNotifyState_TimedParticleEffect : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UParticleSystem*                             PSTemplate;                                               // 0x01E3(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x01E3(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x01E3(0x000C) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x01E3(0x000C) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOwnerOnlySee;                                            // 0x01E3(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOwnerNoSee;                                              // 0x01E3(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState_TimedParticleEffect");
		return ptr;
	}

};


// Class Engine.AnimNotifyState_Trail
// 0x0028 (0x0050 - 0x0028)
class UAnimNotifyState_Trail : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UParticleSystem*                             PSTemplate;                                               // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FirstSocketName;                                          // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       SecondSocketName;                                         // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrailWidthMode>                       WidthScaleMode;                                           // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState_Trail");
		return ptr;
	}


	class UParticleSystem* OverridePSTemplate(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


// Class Engine.AnimSet
// 0x00C8 (0x00F0 - 0x0028)
class UAnimSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	unsigned char                                      bAnimRotationOnly : 1;                                    // 0x01E3(0x0001) (Edit)
	TArray<struct FName>                               TrackBoneNames;                                           // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FAnimSetMeshLinkup>                  LinkupCache;                                              // 0x01E3(0x0010) (ZeroConstructor, Transient)
	TArray<unsigned char>                              BoneUseAnimTranslation;                                   // 0x01E3(0x0010) (ZeroConstructor, Transient)
	TArray<unsigned char>                              ForceUseMeshTranslation;                                  // 0x01E3(0x0010) (ZeroConstructor, Transient)
	TArray<struct FName>                               UseTranslationBoneNames;                                  // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               ForceMeshTranslationBoneNames;                            // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FName                                       PreviewSkelMeshName;                                      // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSet");
		return ptr;
	}

};


// Class Engine.AssetImportData
// 0x0000 (0x0028 - 0x0028)
class UAssetImportData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetImportData");
		return ptr;
	}

};


// Class Engine.AssetUserData
// 0x0000 (0x0028 - 0x0028)
class UAssetUserData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetUserData");
		return ptr;
	}

};


// Class Engine.AutomationTestSettings
// 0x02E0 (0x0308 - 0x0028)
class UAutomationTestSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FFilePath                                   AutomationTestmap;                                        // 0x01E3(0x0010) (Edit, Config)
	TArray<struct FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps;                                // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FBuildPromotionTestSettings                 BuildPromotionTest;                                       // 0x01E3(0x0210) (Edit, Config)
	struct FMaterialEditorPromotionSettings            MaterialEditorPromotionTest;                              // 0x01E3(0x0030) (Edit, Config)
	struct FParticleEditorPromotionSettings            ParticleEditorPromotionTest;                              // 0x01E3(0x0010) (Edit, Config)
	TArray<class FString>                              EngineTestModules;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<class FString>                              EditorTestModules;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<class FString>                              TestLevelFolders;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FOpenTestAsset>                      TestAssetsToOpen;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FExternalToolDefinition>             ExternalTools;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FEditorImportExportTestDefinition>   ImportExportTestDefinitions;                              // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x115];                                     // 0x01F3(0x0115) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AutomationTestSettings");
		return ptr;
	}

};


// Class Engine.AutomationTestUserSettings
// 0x0030 (0x0058 - 0x0028)
class UAutomationTestUserSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	bool                                               FilterTests;                                              // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<class FString>                              IncludedTestsPrefix;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<class FString>                              ExcludedTestsPrefix;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AutomationTestUserSettings");
		return ptr;
	}

};


// Class Engine.AvoidanceManager
// 0x00A0 (0x00C8 - 0x0028)
class UAvoidanceManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              DefaultTimeToLive;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LockTimeAfterAvoid;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LockTimeAfterClean;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DeltaTimeToPredict;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ArtificialRadiusExpansion;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AvoidanceManager");
		return ptr;
	}


	bool RegisterMovementComponent(class UMovementComponent* MovementComp, float AvoidanceWeight);
	int GetObjectCount();
	int GetNewAvoidanceUID();
	struct FVector GetAvoidanceVelocityIgnoringUID(const struct FNavAvoidanceData& AvoidanceData, float DeltaTime, int IgnoreThisUID);
	struct FVector GetAvoidanceVelocityForComponent(class UMovementComponent* MovementComp);
	struct FVector GetAvoidanceVelocity(const struct FNavAvoidanceData& AvoidanceData, float DeltaTime);
};


// Class Engine.AnimBlueprint
// 0x0018 (0x0150 - 0x0138)
class UAnimBlueprint : public UBlueprint
{
public:
	unsigned char                                      UnknownData00[0xAB];                                      // 0x0138(0x00AB) MISSED OFFSET
	class USkeleton*                                   TargetSkeleton;                                           // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimGroupInfo>                      Groups;                                                   // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimBlueprint");
		return ptr;
	}

};


// Class Engine.LevelScriptBlueprint
// 0x0000 (0x0138 - 0x0138)
class ULevelScriptBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelScriptBlueprint");
		return ptr;
	}

};


// Class Engine.DataTable
// 0x0058 (0x0080 - 0x0028)
class UDataTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataTable");
		return ptr;
	}

};


// Class Engine.DataTableFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UDataTableFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataTableFunctionLibrary");
		return ptr;
	}


	void STATIC_GetDataTableRowNames(class UDataTable* Table, TArray<struct FName>* OutRowNames);
	bool STATIC_GetDataTableRowFromName(class UDataTable* Table, const struct FName& RowName, struct FTableRowBase* OutRow);
	void STATIC_EvaluateCurveTableRow(class UCurveTable* CurveTable, const struct FName& RowName, float InXY, TEnumAsByte<EEvaluateCurveTableResult>* OutResult, float* OutXY);
};


// Class Engine.DebugDrawService
// 0x0000 (0x0028 - 0x0028)
class UDebugDrawService : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugDrawService");
		return ptr;
	}

};


// Class Engine.DeformablesBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UDeformablesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeformablesBlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_ApplyWorldForceToDeformables(class USkinnedMeshComponent* SkinnedMeshComp, const struct FVector& WorldSpaceForce);
};


// Class Engine.FeatureConfigBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UFeatureConfigBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FeatureConfigBlueprintFunctionLibrary");
		return ptr;
	}


	bool STATIC_IsFeatureEnabled(const struct FName& FeatureName);
};


// Class Engine.DialogueTypes
// 0x0000 (0x0028 - 0x0028)
class UDialogueTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueTypes");
		return ptr;
	}

};


// Class Engine.GameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameplayStatics");
		return ptr;
	}


	void STATIC_UnloadStreamLevel(class UObject* WorldContextObject, const struct FName& LevelName, const struct FLatentActionInfo& LatentInfo);
	class UAudioComponent* STATIC_SpawnSoundAttached(class USoundBase* Sound, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	class UAudioComponent* STATIC_SpawnSoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	class UAudioComponent* STATIC_SpawnSound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime);
	class UObject* STATIC_SpawnObject(class UClass* ObjectClass, class UObject* Outer);
	class UParticleSystemComponent* STATIC_SpawnEmitterAttached(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy);
	class UParticleSystemComponent* STATIC_SpawnEmitterAtLocation(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy);
	class UAudioComponent* STATIC_SpawnDialogueAttached(class UDialogueWave* Dialogue, const struct FDialogueContext& Context, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	class UAudioComponent* STATIC_SpawnDialogueAtLocation(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	class UAudioComponent* STATIC_SpawnDialogue2D(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime);
	class UDecalComponent* STATIC_SpawnDecalAttached(class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, float LifeSpan);
	class UDecalComponent* STATIC_SpawnDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, const struct FVector& Location, const struct FRotator& Rotation, float LifeSpan);
	void STATIC_SetWorldOriginLocation(class UObject* WorldContextObject, const struct FIntVector& NewLocation);
	void STATIC_SetGlobalTimeDilation(class UObject* WorldContextObject, float TimeDilation);
	bool STATIC_SetGamePaused(class UObject* WorldContextObject, bool bPaused);
	void STATIC_SetBaseSoundMix(class UObject* WorldContextObject, class USoundMix* InSoundMix);
	bool STATIC_SaveGameToSlot(class USaveGame* SaveGameObject, const class FString& SlotName, int UserIndex);
	void STATIC_RemovePlayer(class APlayerController* Player, bool bDestroyPawn);
	void STATIC_PushSoundMixModifier(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier);
	bool STATIC_ProjectWorldToScreen(class APlayerController* Player, const struct FVector& WorldPosition, struct FVector2D* ScreenPosition);
	void STATIC_PopSoundMixModifier(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier);
	void STATIC_PlayWorldCameraShake(class UObject* WorldContextObject, class UClass* Shake, const struct FVector& Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter);
	void STATIC_PlaySoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	void STATIC_PlaySound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime);
	void STATIC_PlayDialogueAtLocation(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	void STATIC_PlayDialogue2D(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime);
	class FString STATIC_ParseOption(const class FString& Options, const class FString& Key);
	void STATIC_OpenLevel(class UObject* WorldContextObject, const struct FName& LevelName, bool bAbsolute, const class FString& Options);
	void STATIC_LoadStreamLevel(class UObject* WorldContextObject, const struct FName& LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, const struct FLatentActionInfo& LatentInfo);
	class USaveGame* STATIC_LoadGameFromSlot(const class FString& SlotName, int UserIndex);
	bool STATIC_IsGamePaused(class UObject* WorldContextObject);
	bool STATIC_HasOption(const class FString& Options, const class FString& InKey);
	int STATIC_GrassOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius);
	struct FIntVector STATIC_GetWorldOriginLocation(class UObject* WorldContextObject);
	float STATIC_GetWorldDeltaSeconds(class UObject* WorldContextObject);
	TEnumAsByte<EPhysicalSurface> STATIC_GetSurfaceType(const struct FHitResult& Hit);
	class ULevelStreaming* STATIC_GetStreamingLevel(class UObject* WorldContextObject, const struct FName& PackageName);
	float STATIC_GetRealTimeSeconds(class UObject* WorldContextObject);
	class APawn* STATIC_GetPlayerPawn(class UObject* WorldContextObject, int PlayerIndex);
	class APlayerController* STATIC_GetPlayerController(class UObject* WorldContextObject, int PlayerIndex);
	class ACharacter* STATIC_GetPlayerCharacter(class UObject* WorldContextObject, int PlayerIndex);
	class APlayerCameraManager* STATIC_GetPlayerCameraManager(class UObject* WorldContextObject, int PlayerIndex);
	class FString STATIC_GetPlatformName();
	class UClass* STATIC_GetObjectClass(class UObject* Object);
	void STATIC_GetKeyValue(const class FString& Pair, class FString* Key, class FString* Value);
	int STATIC_GetIntOption(const class FString& Options, const class FString& Key, int DefaultValue);
	float STATIC_GetGlobalTimeDilation(class UObject* WorldContextObject);
	class AGameState* STATIC_GetGameState(class UObject* WorldContextObject);
	class AGameMode* STATIC_GetGameMode(class UObject* WorldContextObject);
	class UGameInstance* STATIC_GetGameInstance(class UObject* WorldContextObject);
	class FString STATIC_GetCurrentLevelName(class UObject* WorldContextObject, bool bRemovePrefixString);
	float STATIC_GetAudioTimeSeconds(class UObject* WorldContextObject);
	void STATIC_GetAllActorsWithInterface(class UObject* WorldContextObject, class UClass* Interface, TArray<class AActor*>* OutActors);
	void STATIC_GetAllActorsOfClass(class UObject* WorldContextObject, class UClass* ActorClass, TArray<class AActor*>* OutActors);
	void STATIC_GetActorArrayBounds(TArray<class AActor*> Actors, bool bOnlyCollidingComponents, struct FVector* Center, struct FVector* BoxExtent);
	struct FVector STATIC_GetActorArrayAverageLocation(TArray<class AActor*> Actors);
	void STATIC_GetAccurateRealTime(class UObject* WorldContextObject, int* Seconds, float* PartialSeconds);
	void STATIC_FlushLevelStreaming(class UObject* WorldContextObject);
	class AActor* STATIC_FinishSpawningActor(class AActor* Actor, const struct FTransform& SpawnTransform);
	void STATIC_EnableLiveStreaming(bool Enable);
	bool STATIC_DoesSaveGameExist(const class FString& SlotName, int UserIndex);
	bool STATIC_DeprojectScreenToWorld(class APlayerController* Player, const struct FVector2D& ScreenPosition, struct FVector* WorldPosition, struct FVector* WorldDirection);
	bool STATIC_DeleteGameInSlot(const class FString& SlotName, int UserIndex);
	void STATIC_DeactivateReverbEffect(class UObject* WorldContextObject, const struct FName& TagName);
	class USaveGame* STATIC_CreateSaveGameObjectFromBlueprint(class UBlueprint* SaveGameBlueprint);
	class USaveGame* STATIC_CreateSaveGameObject(class UClass* SaveGameClass);
	class APlayerController* STATIC_CreatePlayer(class UObject* WorldContextObject, int ControllerId, bool bSpawnPawn);
	void STATIC_ClearSoundMixModifiers(class UObject* WorldContextObject);
	void STATIC_BreakHitResult(const struct FHitResult& Hit, bool* bBlockingHit, bool* bInitialOverlap, float* Time, struct FVector* Location, struct FVector* ImpactPoint, struct FVector* Normal, struct FVector* ImpactNormal, class UPhysicalMaterial** PhysMat, class AActor** HitActor, class UPrimitiveComponent** HitComponent, struct FName* HitBoneName, int* HitItem, struct FVector* TraceStart, struct FVector* TraceEnd);
	bool STATIC_BlueprintSuggestProjectileVelocity(class UObject* WorldContextObject, const struct FVector& StartLocation, const struct FVector& EndLocation, float LaunchSpeed, float OverrideGravityZ, TEnumAsByte<ESuggestProjVelocityTraceOption> TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug, struct FVector* TossVelocity);
	class AActor* STATIC_BeginSpawningActorFromClass(class UObject* WorldContextObject, class UClass* ActorClass, const struct FTransform& SpawnTransform, bool bNoCollisionFail, class AActor* Owner);
	class AActor* STATIC_BeginSpawningActorFromBlueprint(class UObject* WorldContextObject, class UBlueprint* Blueprint, const struct FTransform& SpawnTransform, bool bNoCollisionFail);
	class AActor* STATIC_BeginDeferredActorSpawnFromClass(class UObject* WorldContextObject, class UClass* ActorClass, const struct FTransform& SpawnTransform, TEnumAsByte<ESpawnActorCollisionHandlingMethod> CollisionHandlingOverride, class AActor* Owner);
	bool STATIC_AreAnyListenersWithinRange(class UObject* WorldContextObject, const struct FVector& Location, float MaximumRange);
	bool STATIC_ApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
	bool STATIC_ApplyRadialDamage(class UObject* WorldContextObject, float BaseDamage, const struct FVector& Origin, float DamageRadius, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
	void STATIC_ApplyPointDamage(class AActor* DamagedActor, float BaseDamage, const struct FVector& HitFromDirection, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass);
	void STATIC_ApplyDamage(class AActor* DamagedActor, float BaseDamage, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass);
	void STATIC_ActivateReverbEffect(class UObject* WorldContextObject, class UReverbEffect* ReverbEffect, const struct FName& TagName, float Priority, float Volume, float FadeTime);
};


// Class Engine.HeadMountedDisplayFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HeadMountedDisplayFunctionLibrary");
		return ptr;
	}


	void STATIC_SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
	void STATIC_SetClippingPlanes(float Near, float Far);
	void STATIC_ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector> Options);
	bool STATIC_IsInLowPersistenceMode();
	bool STATIC_IsHeadMountedDisplayEnabled();
	bool STATIC_HasValidTrackingPosition();
	float STATIC_GetWorldToMetersScale(class UObject* WorldContext);
	float STATIC_GetScreenPercentage();
	void STATIC_GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);
	void STATIC_GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
	void STATIC_EnableLowPersistenceMode(bool bEnable);
	bool STATIC_EnableHMD(bool bEnable);
};


// Class Engine.KismetArrayLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetArrayLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetArrayLibrary");
		return ptr;
	}


	void STATIC_SetArrayPropertyByName(class UObject* Object, const struct FName& PropertyName, TArray<int> Value);
	void STATIC_FilterArray(TArray<class AActor*> TargetArray, class UClass* FilterClass, TArray<class AActor*>* FilteredArray);
	void STATIC_Array_Shuffle(TArray<int> TargetArray);
	void STATIC_Array_Set(TArray<int> TargetArray, int Index, int Item, bool bSizeToFit);
	void STATIC_Array_Resize(TArray<int> TargetArray, int Size);
	bool STATIC_Array_RemoveItem(TArray<int> TargetArray, int Item);
	void STATIC_Array_Remove(TArray<int> TargetArray, int IndexToRemove);
	int STATIC_Array_Length(TArray<int> TargetArray);
	int STATIC_Array_LastIndex(TArray<int> TargetArray);
	void STATIC_Array_Insert(TArray<int> TargetArray, int NewItem, int Index);
	void STATIC_Array_Get(TArray<int> TargetArray, int Index, int* Item);
	int STATIC_Array_Find(TArray<int> TargetArray, int ItemToFind);
	bool STATIC_Array_Contains(TArray<int> TargetArray, int ItemToFind);
	void STATIC_Array_Clear(TArray<int> TargetArray);
	void STATIC_Array_Append(TArray<int> TargetArray, TArray<int> SourceArray);
	int STATIC_Array_AddUnique(TArray<int> TargetArray, int NewItem);
	int STATIC_Array_Add(TArray<int> TargetArray, int NewItem);
};


// Class Engine.KismetGuidLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetGuidLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetGuidLibrary");
		return ptr;
	}


	void STATIC_Parse_StringToGuid(const class FString& GuidString, struct FGuid* OutGuid, bool* Success);
	bool STATIC_NotEqual_GuidGuid(const struct FGuid& A, const struct FGuid& B);
	struct FGuid STATIC_NewGuid();
	bool STATIC_IsValid_Guid(const struct FGuid& InGuid);
	void STATIC_Invalidate_Guid(struct FGuid* InGuid);
	bool STATIC_EqualEqual_GuidGuid(const struct FGuid& A, const struct FGuid& B);
	class FString STATIC_Conv_GuidToString(const struct FGuid& InGuid);
};


// Class Engine.KismetInputLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetInputLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetInputLibrary");
		return ptr;
	}


	bool STATIC_PointerEvent_IsTouchEvent(const struct FPointerEvent& Input);
	bool STATIC_PointerEvent_IsMouseButtonDown(const struct FPointerEvent& Input, const struct FKey& MouseButton);
	float STATIC_PointerEvent_GetWheelDelta(const struct FPointerEvent& Input);
	int STATIC_PointerEvent_GetUserIndex(const struct FPointerEvent& Input);
	int STATIC_PointerEvent_GetTouchpadIndex(const struct FPointerEvent& Input);
	struct FVector2D STATIC_PointerEvent_GetScreenSpacePosition(const struct FPointerEvent& Input);
	int STATIC_PointerEvent_GetPointerIndex(const struct FPointerEvent& Input);
	struct FVector2D STATIC_PointerEvent_GetLastScreenSpacePosition(const struct FPointerEvent& Input);
	struct FVector2D STATIC_PointerEvent_GetGestureDelta(const struct FPointerEvent& Input);
	struct FKey STATIC_PointerEvent_GetEffectingButton(const struct FPointerEvent& Input);
	struct FVector2D STATIC_PointerEvent_GetCursorDelta(const struct FPointerEvent& Input);
	bool STATIC_Key_IsVectorAxis(const struct FKey& Key);
	bool STATIC_Key_IsMouseButton(const struct FKey& Key);
	bool STATIC_Key_IsModifierKey(const struct FKey& Key);
	bool STATIC_Key_IsKeyboardKey(const struct FKey& Key);
	bool STATIC_Key_IsGamepadKey(const struct FKey& Key);
	bool STATIC_Key_IsFloatAxis(const struct FKey& Key);
	struct FText STATIC_Key_GetDisplayName(const struct FKey& Key);
	bool STATIC_InputEvent_IsShiftDown(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsRightShiftDown(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsRightControlDown(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsRightCommandDown(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsRightAltDown(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsRepeat(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsLeftShiftDown(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsLeftControlDown(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsLeftCommandDown(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsLeftAltDown(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsControlDown(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsCommandDown(const struct FInputEvent& Input);
	bool STATIC_InputEvent_IsAltDown(const struct FInputEvent& Input);
	int STATIC_GetUserIndex(const struct FKeyEvent& Input);
	struct FKey STATIC_GetKey(const struct FKeyEvent& Input);
	float STATIC_GetAnalogValue(const struct FAnalogInputEvent& Input);
	bool STATIC_EqualEqual_KeyKey(const struct FKey& A, const struct FKey& B);
	int STATIC_ControllerEvent_GetUserIndex(const struct FControllerEvent& Input);
	struct FKey STATIC_ControllerEvent_GetEffectingButton(const struct FControllerEvent& Input);
	float STATIC_ControllerEvent_GetAnalogValue(const struct FControllerEvent& Input);
	void STATIC_CalibrateTilt();
};


// Class Engine.KismetMaterialLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetMaterialLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetMaterialLibrary");
		return ptr;
	}


	void STATIC_SetVectorParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, const struct FName& ParameterName, const struct FLinearColor& ParameterValue);
	void STATIC_SetScalarParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, const struct FName& ParameterName, float ParameterValue);
	struct FLinearColor STATIC_GetVectorParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, const struct FName& ParameterName);
	float STATIC_GetScalarParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, const struct FName& ParameterName);
	class UMaterialInstanceDynamic* STATIC_CreateDynamicMaterialInstance(class UObject* WorldContextObject, class UMaterialInterface* Parent);
};


// Class Engine.KismetMathLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetMathLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetMathLibrary");
		return ptr;
	}


	int STATIC_Xor_IntInt(int A, int B);
	float STATIC_VSizeSquared(const struct FVector& A);
	float STATIC_VSize2DSquared(const struct FVector2D& A);
	float STATIC_VSize2D(const struct FVector2D& A);
	float STATIC_VSize(const struct FVector& A);
	struct FVector STATIC_VLerp(const struct FVector& A, const struct FVector& B, float Alpha);
	struct FVector STATIC_VInterpTo_Constant(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed);
	struct FVector STATIC_VInterpTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed);
	struct FVector2D STATIC_Vector2DInterpTo_Constant(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed);
	struct FVector2D STATIC_Vector2DInterpTo(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed);
	struct FVector STATIC_VEase(const struct FVector& A, const struct FVector& B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps);
	struct FDateTime STATIC_UtcNow();
	struct FVector STATIC_TransformLocation(const struct FTransform& T, const struct FVector& Location);
	struct FVector STATIC_TransformDirection(const struct FTransform& T, const struct FVector& Direction);
	struct FDateTime STATIC_Today();
	struct FTransform STATIC_TLerp(const struct FTransform& A, const struct FTransform& B, float Alpha);
	struct FTransform STATIC_TInterpTo(const struct FTransform& Current, const struct FTransform& Target, float DeltaTime, float InterpSpeed);
	struct FTimespan STATIC_TimespanZeroValue();
	float STATIC_TimespanRatio(const struct FTimespan& A, const struct FTimespan& B);
	struct FTimespan STATIC_TimespanMinValue();
	struct FTimespan STATIC_TimespanMaxValue();
	bool STATIC_TimespanFromString(const class FString& TimespanString, struct FTimespan* Result);
	struct FTransform STATIC_TEase(const struct FTransform& A, const struct FTransform& B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps);
	float STATIC_Tan(float A);
	struct FVector STATIC_Subtract_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_Subtract_VectorInt(const struct FVector& A, int B);
	struct FVector STATIC_Subtract_VectorFloat(const struct FVector& A, float B);
	struct FVector2D STATIC_Subtract_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FVector2D STATIC_Subtract_Vector2DFloat(const struct FVector2D& A, float B);
	struct FTimespan STATIC_Subtract_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	int STATIC_Subtract_IntInt(int A, int B);
	float STATIC_Subtract_FloatFloat(float A, float B);
	struct FDateTime STATIC_Subtract_DateTimeTimespan(const struct FDateTime& A, const struct FTimespan& B);
	struct FTimespan STATIC_Subtract_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	unsigned char STATIC_Subtract_ByteByte(unsigned char A, unsigned char B);
	float STATIC_Square(float A);
	float STATIC_Sqrt(float A);
	float STATIC_Sin(float A);
	int STATIC_SignOfInteger(int A);
	float STATIC_SignOfFloat(float A);
	void STATIC_SetRandomStreamSeed(int NewSeed, struct FRandomStream* Stream);
	struct FVector STATIC_SelectVector(const struct FVector& A, const struct FVector& B, bool bPickA);
	struct FTransform STATIC_SelectTransform(const struct FTransform& A, const struct FTransform& B, bool bPickA);
	class FString STATIC_SelectString(const class FString& A, const class FString& B, bool bPickA);
	struct FRotator STATIC_SelectRotator(const struct FRotator& A, const struct FRotator& B, bool bPickA);
	class UObject* STATIC_SelectObject(class UObject* A, class UObject* B, bool bSelectA);
	int STATIC_SelectInt(int A, int B, bool bPickA);
	float STATIC_SelectFloat(float A, float B, bool bPickA);
	struct FLinearColor STATIC_SelectColor(const struct FLinearColor& A, const struct FLinearColor& B, bool bPickA);
	class UClass* STATIC_SelectClass(class UClass* A, class UClass* B, bool bSelectA);
	void STATIC_SeedRandomStream(struct FRandomStream* Stream);
	int STATIC_Round(float A);
	struct FRotator STATIC_RotatorFromAxisAndAngle(const struct FVector& Axis, float Angle);
	struct FVector STATIC_RotateAngleAxis(const struct FVector& InVect, float AngleDeg, const struct FVector& Axis);
	struct FRotator STATIC_RLerp(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath);
	struct FRotator STATIC_RInterpTo_Constant(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed);
	struct FRotator STATIC_RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed);
	void STATIC_RGBToHSV_Vector(const struct FLinearColor& RGB, struct FLinearColor* HSV);
	void STATIC_RGBToHSV(const struct FLinearColor& InColor, float* H, float* S, float* V, float* A);
	void STATIC_ResetRandomStream(const struct FRandomStream& Stream);
	struct FRotator STATIC_REase(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps);
	struct FVector STATIC_RandomUnitVectorInConeWithYawAndPitch(const struct FVector& ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees);
	struct FVector STATIC_RandomUnitVectorInCone(const struct FVector& ConeDir, float ConeHalfAngle);
	struct FVector STATIC_RandomUnitVectorFromStream(const struct FRandomStream& Stream);
	struct FVector STATIC_RandomUnitVector();
	struct FRotator STATIC_RandomRotatorFromStream(bool bRoll, const struct FRandomStream& Stream);
	struct FRotator STATIC_RandomRotator(bool bRoll);
	struct FVector STATIC_RandomPointInBoundingBox(const struct FVector& Origin, const struct FVector& BoxExtent);
	int STATIC_RandomIntegerInRangeFromStream(int Min, int Max, const struct FRandomStream& Stream);
	int STATIC_RandomIntegerInRange(int Min, int Max);
	int STATIC_RandomIntegerFromStream(int Max, const struct FRandomStream& Stream);
	int STATIC_RandomInteger(int Max);
	float STATIC_RandomFloatInRangeFromStream(float Min, float Max, const struct FRandomStream& Stream);
	float STATIC_RandomFloatInRange(float Min, float Max);
	float STATIC_RandomFloatFromStream(const struct FRandomStream& Stream);
	float STATIC_RandomFloat();
	bool STATIC_RandomBoolFromStream(const struct FRandomStream& Stream);
	bool STATIC_RandomBool();
	float STATIC_RadiansToDegrees(float A);
	struct FVector STATIC_ProjectVectorOnToVector(const struct FVector& V, const struct FVector& Target);
	struct FVector STATIC_ProjectVectorOnToPlane(const struct FVector& V, const struct FVector& PlaneNormal);
	struct FVector STATIC_ProjectPointOnToPlane(const struct FVector& Point, const struct FVector& PlaneBase, const struct FVector& PlaneNormal);
	bool STATIC_PointsAreCoplanar(TArray<struct FVector> Points, float Tolerance);
	int STATIC_Percent_IntInt(int A, int B);
	float STATIC_Percent_FloatFloat(float A, float B);
	unsigned char STATIC_Percent_ByteByte(unsigned char A, unsigned char B);
	int STATIC_Or_IntInt(int A, int B);
	struct FDateTime STATIC_Now();
	bool STATIC_NotEqual_VectorVector(const struct FVector& A, const struct FVector& B, float ErrorTolerance);
	bool STATIC_NotEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool STATIC_NotEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B, float ErrorTolerance);
	bool STATIC_NotEqual_ObjectObject(class UObject* A, class UObject* B);
	bool STATIC_NotEqual_NameName(const struct FName& A, const struct FName& B);
	bool STATIC_NotEqual_IntInt(int A, int B);
	bool STATIC_NotEqual_FloatFloat(float A, float B);
	bool STATIC_NotEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool STATIC_NotEqual_ClassClass(class UClass* A, class UClass* B);
	bool STATIC_NotEqual_ByteByte(unsigned char A, unsigned char B);
	bool STATIC_NotEqual_BoolBool(bool A, bool B);
	bool STATIC_Not_PreBool(bool A);
	float STATIC_NormalizeToRange(float Value, float RangeMin, float RangeMax);
	struct FRotator STATIC_NormalizedDeltaRotator(const struct FRotator& A, const struct FRotator& B);
	float STATIC_NormalizeAxis(float Angle);
	struct FVector2D STATIC_Normal2D(const struct FVector2D& A);
	struct FVector STATIC_Normal(const struct FVector& A);
	struct FVector STATIC_NegateVector(const struct FVector& A);
	struct FRotator STATIC_NegateRotator(const struct FRotator& A);
	bool STATIC_NearlyEqual_TransformTransform(const struct FTransform& A, const struct FTransform& B, float LocationTolerance, float RotationTolerance, float Scale3DTolerance);
	bool STATIC_NearlyEqual_FloatFloat(float A, float B, float ErrorTolerance);
	float STATIC_MultiplyMultiply_FloatFloat(float Base, float Exp);
	float STATIC_MultiplyByPi(float Value);
	struct FVector STATIC_Multiply_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_Multiply_VectorInt(const struct FVector& A, int B);
	struct FVector STATIC_Multiply_VectorFloat(const struct FVector& A, float B);
	struct FVector2D STATIC_Multiply_Vector2DFloat(const struct FVector2D& A, float B);
	struct FTimespan STATIC_Multiply_TimespanFloat(const struct FTimespan& A, float Scalar);
	struct FRotator STATIC_Multiply_RotatorInt(const struct FRotator& A, int B);
	struct FRotator STATIC_Multiply_RotatorFloat(const struct FRotator& A, float B);
	struct FLinearColor STATIC_Multiply_LinearColorLinearColor(const struct FLinearColor& A, const struct FLinearColor& B);
	struct FLinearColor STATIC_Multiply_LinearColorFloat(const struct FLinearColor& A, float B);
	int STATIC_Multiply_IntInt(int A, int B);
	float STATIC_Multiply_IntFloat(int A, float B);
	float STATIC_Multiply_FloatFloat(float A, float B);
	unsigned char STATIC_Multiply_ByteByte(unsigned char A, unsigned char B);
	struct FVector STATIC_MirrorVectorByNormal(const struct FVector& InVect, const struct FVector& InNormal);
	void STATIC_MinOfIntArray(TArray<int> IntArray, int* IndexOfMinValue, int* MinValue);
	void STATIC_MinOfFloatArray(TArray<float> FloatArray, int* IndexOfMinValue, float* MinValue);
	void STATIC_MinOfByteArray(TArray<unsigned char> ByteArray, int* IndexOfMinValue, unsigned char* MinValue);
	void STATIC_MinimumAreaRectangle(class UObject* WorldContextObject, TArray<struct FVector> InVerts, const struct FVector& SampleSurfaceNormal, bool bDebugDraw, struct FVector* OutRectCenter, struct FRotator* OutRectRotation, float* OutSideLengthX, float* OutSideLengthY);
	int STATIC_Min(int A, int B);
	void STATIC_MaxOfIntArray(TArray<int> IntArray, int* IndexOfMaxValue, int* MaxValue);
	void STATIC_MaxOfFloatArray(TArray<float> FloatArray, int* IndexOfMaxValue, float* MaxValue);
	void STATIC_MaxOfByteArray(TArray<unsigned char> ByteArray, int* IndexOfMaxValue, unsigned char* MaxValue);
	int STATIC_Max(int A, int B);
	float STATIC_MapRangeUnclamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
	float STATIC_MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
	struct FVector2D STATIC_MakeVector2D(float X, float Y);
	struct FVector STATIC_MakeVector(float X, float Y, float Z);
	struct FTransform STATIC_MakeTransform(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale);
	struct FTimespan STATIC_MakeTimespan(int Days, int Hours, int Minutes, int Seconds, int Milliseconds);
	struct FRotator STATIC_MakeRotFromZY(const struct FVector& Z, const struct FVector& Y);
	struct FRotator STATIC_MakeRotFromZX(const struct FVector& Z, const struct FVector& X);
	struct FRotator STATIC_MakeRotFromZ(const struct FVector& Z);
	struct FRotator STATIC_MakeRotFromYZ(const struct FVector& Y, const struct FVector& Z);
	struct FRotator STATIC_MakeRotFromYX(const struct FVector& Y, const struct FVector& X);
	struct FRotator STATIC_MakeRotFromY(const struct FVector& Y);
	struct FRotator STATIC_MakeRotFromXZ(const struct FVector& X, const struct FVector& Z);
	struct FRotator STATIC_MakeRotFromXY(const struct FVector& X, const struct FVector& Y);
	struct FRotator STATIC_MakeRotFromX(const struct FVector& X);
	struct FRotator STATIC_MakeRotator(float Roll, float Pitch, float Yaw);
	struct FRotator STATIC_MakeRotationFromAxes(const struct FVector& Forward, const struct FVector& Right, const struct FVector& Up);
	struct FRandomStream STATIC_MakeRandomStream(int InitialSeed);
	float STATIC_MakePulsatingValue(float InCurrentTime, float InPulsesPerSecond, float InPhase);
	struct FDateTime STATIC_MakeDateTime(int Year, int Month, int Day, int Hour, int Minute, int Second, int Millisecond);
	struct FLinearColor STATIC_MakeColor(float R, float G, float B, float A);
	float STATIC_Loge(float A);
	bool STATIC_LinePlaneIntersection_OriginNormal(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& PlaneOrigin, const struct FVector& PlaneNormal, float* T, struct FVector* Intersection);
	bool STATIC_LinePlaneIntersection(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FPlane& APlane, float* T, struct FVector* Intersection);
	struct FLinearColor STATIC_LinearColorLerpUsingHSV(const struct FLinearColor& A, const struct FLinearColor& B, float Alpha);
	struct FLinearColor STATIC_LinearColorLerp(const struct FLinearColor& A, const struct FLinearColor& B, float Alpha);
	struct FVector STATIC_LessLess_VectorRotator(const struct FVector& A, const struct FRotator& B);
	bool STATIC_LessEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool STATIC_LessEqual_IntInt(int A, int B);
	bool STATIC_LessEqual_FloatFloat(float A, float B);
	bool STATIC_LessEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool STATIC_LessEqual_ByteByte(unsigned char A, unsigned char B);
	bool STATIC_Less_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool STATIC_Less_IntInt(int A, int B);
	bool STATIC_Less_FloatFloat(float A, float B);
	bool STATIC_Less_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool STATIC_Less_ByteByte(unsigned char A, unsigned char B);
	float STATIC_Lerp(float A, float B, float Alpha);
	bool STATIC_IsMorning(const struct FDateTime& A);
	bool STATIC_IsLeapYear(int Year);
	bool STATIC_IsAfternoon(const struct FDateTime& A);
	struct FTransform STATIC_InvertTransform(const struct FTransform& T);
	struct FVector STATIC_InverseTransformLocation(const struct FTransform& T, const struct FVector& Location);
	struct FVector STATIC_InverseTransformDirection(const struct FTransform& T, const struct FVector& Direction);
	float STATIC_InverseLerp(float A, float B, float Value);
	bool STATIC_InRange_FloatFloat(float Value, float Min, float Max, bool InclusiveMin, bool InclusiveMax);
	float STATIC_Hypotenuse(float Width, float Height);
	void STATIC_HSVToRGB_Vector(const struct FLinearColor& HSV, struct FLinearColor* RGB);
	struct FLinearColor STATIC_HSVToRGB(float H, float S, float V, float A);
	float STATIC_GridSnap_Float(float Location, float GridSize);
	struct FVector STATIC_GreaterGreater_VectorRotator(const struct FVector& A, const struct FRotator& B);
	bool STATIC_GreaterEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool STATIC_GreaterEqual_IntInt(int A, int B);
	bool STATIC_GreaterEqual_FloatFloat(float A, float B);
	bool STATIC_GreaterEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool STATIC_GreaterEqual_ByteByte(unsigned char A, unsigned char B);
	bool STATIC_Greater_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool STATIC_Greater_IntInt(int A, int B);
	bool STATIC_Greater_FloatFloat(float A, float B);
	bool STATIC_Greater_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool STATIC_Greater_ByteByte(unsigned char A, unsigned char B);
	int STATIC_GetYear(const struct FDateTime& A);
	void STATIC_GetYawPitchFromVector(const struct FVector& InVec, float* Yaw, float* Pitch);
	struct FVector STATIC_GetVectorArrayAverage(TArray<struct FVector> Vectors);
	struct FVector STATIC_GetUpVector(const struct FRotator& InRot);
	float STATIC_GetTotalSeconds(const struct FTimespan& A);
	float STATIC_GetTotalMinutes(const struct FTimespan& A);
	float STATIC_GetTotalMilliseconds(const struct FTimespan& A);
	float STATIC_GetTotalHours(const struct FTimespan& A);
	float STATIC_GetTotalDays(const struct FTimespan& A);
	struct FTimespan STATIC_GetTimeOfDay(const struct FDateTime& A);
	int STATIC_GetSeconds(const struct FTimespan& A);
	int STATIC_GetSecond(const struct FDateTime& A);
	struct FVector STATIC_GetRightVector(const struct FRotator& InRot);
	float STATIC_GetPI();
	int STATIC_GetMonth(const struct FDateTime& A);
	int STATIC_GetMinutes(const struct FTimespan& A);
	int STATIC_GetMinute(const struct FDateTime& A);
	float STATIC_GetMinElement(const struct FVector& A);
	int STATIC_GetMilliseconds(const struct FTimespan& A);
	int STATIC_GetMillisecond(const struct FDateTime& A);
	float STATIC_GetMaxElement(const struct FVector& A);
	int STATIC_GetHours(const struct FTimespan& A);
	int STATIC_GetHour12(const struct FDateTime& A);
	int STATIC_GetHour(const struct FDateTime& A);
	struct FVector STATIC_GetForwardVector(const struct FRotator& InRot);
	struct FTimespan STATIC_GetDuration(const struct FTimespan& A);
	struct FVector STATIC_GetDirectionVector(const struct FVector& From, const struct FVector& To);
	int STATIC_GetDays(const struct FTimespan& A);
	int STATIC_GetDayOfYear(const struct FDateTime& A);
	int STATIC_GetDay(const struct FDateTime& A);
	struct FDateTime STATIC_GetDate(const struct FDateTime& A);
	void STATIC_GetAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	int STATIC_FTrunc(float A);
	struct FTimespan STATIC_FromSeconds(float Seconds);
	struct FTimespan STATIC_FromMinutes(float Minutes);
	struct FTimespan STATIC_FromMilliseconds(float Milliseconds);
	struct FTimespan STATIC_FromHours(float Hours);
	struct FTimespan STATIC_FromDays(float Days);
	float STATIC_Fraction(float A);
	int STATIC_FMod(float Dividend, float Divisor, float* Remainder);
	float STATIC_FMin(float A, float B);
	float STATIC_FMax(float A, float B);
	float STATIC_FixedTurn(float InCurrent, float InDesired, float InDeltaRate);
	float STATIC_FInterpTo_Constant(float Current, float Target, float DeltaTime, float InterpSpeed);
	float STATIC_FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	float STATIC_FInterpEaseInOut(float A, float B, float Alpha, float Exponent);
	struct FRotator STATIC_FindLookAtRotation(const struct FVector& Start, const struct FVector& Target);
	int STATIC_FFloor(float A);
	float STATIC_FClamp(float Value, float Min, float Max);
	int STATIC_FCeil(float A);
	float STATIC_Exp(float A);
	bool STATIC_EqualEqual_VectorVector(const struct FVector& A, const struct FVector& B, float ErrorTolerance);
	bool STATIC_EqualEqual_TransformTransform(const struct FTransform& A, const struct FTransform& B);
	bool STATIC_EqualEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool STATIC_EqualEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B, float ErrorTolerance);
	bool STATIC_EqualEqual_ObjectObject(class UObject* A, class UObject* B);
	bool STATIC_EqualEqual_NameName(const struct FName& A, const struct FName& B);
	bool STATIC_EqualEqual_IntInt(int A, int B);
	bool STATIC_EqualEqual_FloatFloat(float A, float B);
	bool STATIC_EqualEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool STATIC_EqualEqual_ClassClass(class UClass* A, class UClass* B);
	bool STATIC_EqualEqual_ByteByte(unsigned char A, unsigned char B);
	bool STATIC_EqualEqual_BoolBool(bool A, bool B);
	float STATIC_Ease(float A, float B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps);
	float STATIC_DotProduct2D(const struct FVector2D& A, const struct FVector2D& B);
	float STATIC_Dot_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_Divide_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_Divide_VectorInt(const struct FVector& A, int B);
	struct FVector STATIC_Divide_VectorFloat(const struct FVector& A, float B);
	struct FVector2D STATIC_Divide_Vector2DFloat(const struct FVector2D& A, float B);
	int STATIC_Divide_IntInt(int A, int B);
	float STATIC_Divide_FloatFloat(float A, float B);
	unsigned char STATIC_Divide_ByteByte(unsigned char A, unsigned char B);
	float STATIC_DegTan(float A);
	float STATIC_DegSin(float A);
	float STATIC_DegreesToRadians(float A);
	float STATIC_DegCos(float A);
	float STATIC_DegAtan2(float A, float B);
	float STATIC_DegAtan(float A);
	float STATIC_DegAsin(float A);
	float STATIC_DegAcos(float A);
	int STATIC_DaysInYear(int Year);
	int STATIC_DaysInMonth(int Year, int Month);
	struct FDateTime STATIC_DateTimeMinValue();
	struct FDateTime STATIC_DateTimeMaxValue();
	bool STATIC_DateTimeFromString(const class FString& DateTimeString, struct FDateTime* Result);
	bool STATIC_DateTimeFromIsoString(const class FString& IsoString, struct FDateTime* Result);
	float STATIC_CrossProduct2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FVector STATIC_Cross_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_CreateVectorFromYawPitch(float Yaw, float Pitch, float Length);
	float STATIC_Cos(float A);
	struct FTransform STATIC_ConvertTransformToRelative(const struct FTransform& Transform, const struct FTransform& ParentTransform);
	struct FVector2D STATIC_Conv_VectorToVector2D(const struct FVector& InVector);
	struct FTransform STATIC_Conv_VectorToTransform(const struct FVector& InLocation);
	struct FRotator STATIC_Conv_VectorToRotator(const struct FVector& InVec);
	struct FLinearColor STATIC_Conv_VectorToLinearColor(const struct FVector& InVec);
	struct FVector STATIC_Conv_Vector2DToVector(const struct FVector2D& InVector2D, float Z);
	struct FVector STATIC_Conv_RotatorToVector(const struct FRotator& InRot);
	struct FVector STATIC_Conv_LinearColorToVector(const struct FLinearColor& InLinearColor);
	struct FColor STATIC_Conv_LinearColorToColor(const struct FLinearColor& InLinearColor);
	float STATIC_Conv_IntToFloat(int InInt);
	unsigned char STATIC_Conv_IntToByte(int InInt);
	bool STATIC_Conv_IntToBool(int InInt);
	struct FVector STATIC_Conv_FloatToVector(float InFloat);
	struct FLinearColor STATIC_Conv_FloatToLinearColor(float InFloat);
	struct FLinearColor STATIC_Conv_ColorToLinearColor(const struct FColor& InColor);
	int STATIC_Conv_ByteToInt(unsigned char InByte);
	float STATIC_Conv_ByteToFloat(unsigned char InByte);
	int STATIC_Conv_BoolToInt(bool InBool);
	float STATIC_Conv_BoolToFloat(bool InBool);
	unsigned char STATIC_Conv_BoolToByte(bool InBool);
	struct FTransform STATIC_ComposeTransforms(const struct FTransform& A, const struct FTransform& B);
	struct FRotator STATIC_ComposeRotators(const struct FRotator& A, const struct FRotator& B);
	bool STATIC_ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass);
	struct FVector STATIC_ClampVectorSize(const struct FVector& A, float Min, float Max);
	float STATIC_ClampAxis(float Angle);
	float STATIC_ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees);
	int STATIC_Clamp(int Value, int Min, int Max);
	struct FLinearColor STATIC_CInterpTo(const struct FLinearColor& Current, const struct FLinearColor& Target, float DeltaTime, float InterpSpeed);
	void STATIC_BreakVector2D(const struct FVector2D& InVec, float* X, float* Y);
	void STATIC_BreakVector(const struct FVector& InVec, float* X, float* Y, float* Z);
	void STATIC_BreakTransform(const struct FTransform& InTransform, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale);
	void STATIC_BreakTimespan(const struct FTimespan& InTimespan, int* Days, int* Hours, int* Minutes, int* Seconds, int* Milliseconds);
	void STATIC_BreakRotIntoAxes(const struct FRotator& InRot, struct FVector* X, struct FVector* Y, struct FVector* Z);
	void STATIC_BreakRotator(const struct FRotator& InRot, float* Roll, float* Pitch, float* Yaw);
	void STATIC_BreakRandomStream(const struct FRandomStream& InRandomStream, int* InitialSeed);
	void STATIC_BreakDateTime(const struct FDateTime& InDateTime, int* Year, int* Month, int* Day, int* Hour, int* Minute, int* Second, int* Millisecond);
	void STATIC_BreakColor(const struct FLinearColor& InColor, float* R, float* G, float* B, float* A);
	bool STATIC_BooleanXOR(bool A, bool B);
	bool STATIC_BooleanOR(bool A, bool B);
	bool STATIC_BooleanNOR(bool A, bool B);
	bool STATIC_BooleanNAND(bool A, bool B);
	bool STATIC_BooleanAND(bool A, bool B);
	float STATIC_Atan2(float A, float B);
	float STATIC_Atan(float A);
	float STATIC_Asin(float A);
	int STATIC_And_IntInt(int A, int B);
	struct FVector STATIC_Add_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_Add_VectorInt(const struct FVector& A, int B);
	struct FVector STATIC_Add_VectorFloat(const struct FVector& A, float B);
	struct FVector2D STATIC_Add_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FVector2D STATIC_Add_Vector2DFloat(const struct FVector2D& A, float B);
	struct FTimespan STATIC_Add_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	int STATIC_Add_IntInt(int A, int B);
	float STATIC_Add_FloatFloat(float A, float B);
	struct FDateTime STATIC_Add_DateTimeTimespan(const struct FDateTime& A, const struct FTimespan& B);
	unsigned char STATIC_Add_ByteByte(unsigned char A, unsigned char B);
	float STATIC_Acos(float A);
	int STATIC_Abs_Int(int A);
	float STATIC_Abs(float A);
};


// Class Engine.KismetNodeHelperLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetNodeHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetNodeHelperLibrary");
		return ptr;
	}


	void STATIC_MarkBit(int Index, int* Data);
	bool STATIC_HasUnmarkedBit(int Data, int NumBits);
	bool STATIC_HasMarkedBit(int Data, int NumBits);
	unsigned char STATIC_GetValidIndex(class UEnum* Enum, unsigned char EnumeratorIndex);
	int STATIC_GetUnmarkedBit(int Data, int StartIdx, int NumBits, bool bRandom);
	int STATIC_GetRandomUnmarkedBit(int Data, int StartIdx, int NumBits);
	int STATIC_GetFirstUnmarkedBit(int Data, int StartIdx, int NumBits);
	class FString STATIC_GetEnumeratorUserFriendlyName(class UEnum* Enum, unsigned char EnumeratorValue);
	struct FName STATIC_GetEnumeratorName(class UEnum* Enum, unsigned char EnumeratorValue);
	void STATIC_ClearBit(int Index, int* Data);
	void STATIC_ClearAllBits(int* Data);
	bool STATIC_BitIsMarked(int Data, int Index);
};


// Class Engine.KismetStringLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetStringLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetStringLibrary");
		return ptr;
	}


	class FString STATIC_TrimTrailing(const class FString& SourceString);
	class FString STATIC_Trim(const class FString& SourceString);
	class FString STATIC_ToUpper(const class FString& SourceString);
	class FString STATIC_ToLower(const class FString& SourceString);
	class FString STATIC_TimeSecondsToString(float InSeconds);
	bool STATIC_StartsWith(const class FString& SourceString, const class FString& InPrefix, TEnumAsByte<ESearchCase> SearchCase);
	bool STATIC_Split(const class FString& SourceString, const class FString& InStr, TEnumAsByte<ESearchCase> SearchCase, TEnumAsByte<ESearchDir> SearchDir, class FString* LeftS, class FString* RightS);
	class FString STATIC_RightPad(const class FString& SourceString, int ChCount);
	class FString STATIC_RightChop(const class FString& SourceString, int Count);
	class FString STATIC_Right(const class FString& SourceString, int Count);
	class FString STATIC_Reverse(const class FString& SourceString);
	int STATIC_ReplaceInline(const class FString& SearchText, const class FString& ReplacementText, TEnumAsByte<ESearchCase> SearchCase, class FString* SourceString);
	class FString STATIC_Replace(const class FString& SourceString, const class FString& From, const class FString& To, TEnumAsByte<ESearchCase> SearchCase);
	TArray<class FString> STATIC_ParseIntoArray(const class FString& SourceString, const class FString& Delimiter, bool CullEmptyStrings);
	bool STATIC_NotEqual_StrStr(const class FString& A, const class FString& B);
	bool STATIC_NotEqual_StriStri(const class FString& A, const class FString& B);
	class FString STATIC_Mid(const class FString& SourceString, int Start, int Count);
	bool STATIC_MatchesWildcard(const class FString& SourceString, const class FString& Wildcard, TEnumAsByte<ESearchCase> SearchCase);
	int STATIC_Len(const class FString& S);
	class FString STATIC_LeftPad(const class FString& SourceString, int ChCount);
	class FString STATIC_LeftChop(const class FString& SourceString, int Count);
	class FString STATIC_Left(const class FString& SourceString, int Count);
	class FString STATIC_JoinStringArray(TArray<class FString> SourceArray, const class FString& Separator);
	bool STATIC_IsNumeric(const class FString& SourceString);
	class FString STATIC_GetSubstring(const class FString& SourceString, int StartIndex, int Length);
	int STATIC_GetCharacterAsNumber(const class FString& SourceString, int Index);
	TArray<class FString> STATIC_GetCharacterArrayFromString(const class FString& SourceString);
	int STATIC_FindSubstring(const class FString& SearchIn, const class FString& Substring, bool bUseCase, bool bSearchFromEnd, int StartPosition);
	bool STATIC_EqualEqual_StrStr(const class FString& A, const class FString& B);
	bool STATIC_EqualEqual_StriStri(const class FString& A, const class FString& B);
	bool STATIC_EndsWith(const class FString& SourceString, const class FString& InSuffix, TEnumAsByte<ESearchCase> SearchCase);
	int STATIC_CullArray(const class FString& SourceString, TArray<class FString>* InArray);
	class FString STATIC_Conv_VectorToString(const struct FVector& InVec);
	class FString STATIC_Conv_Vector2dToString(const struct FVector2D& InVec);
	class FString STATIC_Conv_TransformToString(const struct FTransform& InTrans);
	struct FName STATIC_Conv_StringToName(const class FString& InString);
	int STATIC_Conv_StringToInt(const class FString& InString);
	float STATIC_Conv_StringToFloat(const class FString& InString);
	class FString STATIC_Conv_RotatorToString(const struct FRotator& InRot);
	class FString STATIC_Conv_ObjectToString(class UObject* InObj);
	class FString STATIC_Conv_NameToString(const struct FName& InName);
	class FString STATIC_Conv_IntToString(int InInt);
	class FString STATIC_Conv_FloatToString(float InFloat);
	class FString STATIC_Conv_ColorToString(const struct FLinearColor& InColor);
	class FString STATIC_Conv_ByteToString(unsigned char InByte);
	class FString STATIC_Conv_BoolToString(bool InBool);
	class FString STATIC_Concat_StrStr(const class FString& A, const class FString& B);
	class FString STATIC_BuildString_Vector2d(const class FString& AppendTo, const class FString& Prefix, const struct FVector2D& InVector2D, const class FString& Suffix);
	class FString STATIC_BuildString_Vector(const class FString& AppendTo, const class FString& Prefix, const struct FVector& InVector, const class FString& Suffix);
	class FString STATIC_BuildString_Rotator(const class FString& AppendTo, const class FString& Prefix, const struct FRotator& InRot, const class FString& Suffix);
	class FString STATIC_BuildString_Object(const class FString& AppendTo, const class FString& Prefix, class UObject* InObj, const class FString& Suffix);
	class FString STATIC_BuildString_Name(const class FString& AppendTo, const class FString& Prefix, const struct FName& InName, const class FString& Suffix);
	class FString STATIC_BuildString_Int(const class FString& AppendTo, const class FString& Prefix, int InInt, const class FString& Suffix);
	class FString STATIC_BuildString_Float(const class FString& AppendTo, const class FString& Prefix, float InFloat, const class FString& Suffix);
	class FString STATIC_BuildString_Color(const class FString& AppendTo, const class FString& Prefix, const struct FLinearColor& InColor, const class FString& Suffix);
	class FString STATIC_BuildString_Bool(const class FString& AppendTo, const class FString& Prefix, bool InBool, const class FString& Suffix);
};


// Class Engine.DeveloperSettings
// 0x0010 (0x0038 - 0x0028)
class UDeveloperSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeveloperSettings");
		return ptr;
	}

};


// Class Engine.CollisionProfile
// 0x0120 (0x0158 - 0x0038)
class UCollisionProfile : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TArray<struct FCollisionResponseTemplate>          Profiles;                                                 // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	TArray<struct FCustomChannelSetup>                 DefaultChannelResponses;                                  // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	TArray<struct FCustomProfile>                      EditProfiles;                                             // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)
	TArray<struct FRedirector>                         ProfileRedirects;                                         // 0x01E3(0x0010) (ZeroConstructor, Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CollisionProfile");
		return ptr;
	}

};


// Class Engine.KismetSystemLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetSystemLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetSystemLibrary");
		return ptr;
	}


	void STATIC_StackTrace();
	bool STATIC_SphereTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_SphereTraceSingleByObject_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TArray<TEnumAsByte<ECollisionChannel>> ObjectsToTrace, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_SphereTraceSingle_NEW(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_SphereTraceSingle_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_SphereTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_SphereTraceMultiByObject_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TArray<TEnumAsByte<ECollisionChannel>> ObjectsToTrace, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_SphereTraceMulti_NEW(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_SphereTraceMulti_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_SphereOverlapComponents_NEW(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool STATIC_SphereOverlapComponents_DEPRECATED(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool STATIC_SphereOverlapActors_NEW(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	bool STATIC_SphereOverlapActors_DEPRECATED(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	void STATIC_ShowPlatformSpecificLeaderboardScreen(const class FString& CategoryName);
	void STATIC_ShowPlatformSpecificAchievementsScreen(class APlayerController* SpecificPlayer);
	void STATIC_ShowAdBanner(int AdIdIndex, bool bShowOnBottomOfScreen);
	void STATIC_SetWindowTitle(const struct FText& Title);
	void STATIC_SetVolumeButtonsHandledBySystem(bool bEnabled);
	void STATIC_SetVectorPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FVector& Value);
	void STATIC_SetTransformPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FTransform& Value);
	void STATIC_SetTextPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FText& Value);
	void STATIC_SetSupressViewportTransitionMessage(class UObject* WorldContextObject, bool bState);
	void STATIC_SetStructurePropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FGenericStruct& Value);
	void STATIC_SetStringPropertyByName(class UObject* Object, const struct FName& PropertyName, const class FString& Value);
	void STATIC_SetRotatorPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FRotator& Value);
	void STATIC_SetObjectPropertyByName(class UObject* Object, const struct FName& PropertyName, class UObject* Value);
	void STATIC_SetNamePropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FName& Value);
	void STATIC_SetLinearColorPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FLinearColor& Value);
	void STATIC_SetIntPropertyByName(class UObject* Object, const struct FName& PropertyName, int Value);
	void STATIC_SetFloatPropertyByName(class UObject* Object, const struct FName& PropertyName, float Value);
	void STATIC_SetCollisionProfileNameProperty(class UObject* Object, const struct FName& PropertyName, const struct FCollisionProfileName& Value);
	void STATIC_SetClassPropertyByName(class UObject* Object, const struct FName& PropertyName, class UClass* Value);
	void STATIC_SetBytePropertyByName(class UObject* Object, const struct FName& PropertyName, unsigned char Value);
	void STATIC_SetBoolPropertyByName(class UObject* Object, const struct FName& PropertyName, bool Value);
	void STATIC_SetAssetPropertyByName(class UObject* Object, const struct FName& PropertyName, TAssetPtr<class UObject> Value);
	void STATIC_SetAssetClassPropertyByName(class UObject* Object, const struct FName& PropertyName, TAssetPtr<class UClass> Value);
	void STATIC_RetriggerableDelay(class UObject* WorldContextObject, float Duration, const struct FLatentActionInfo& LatentInfo);
	void STATIC_ResetGamepadAssignmentToController(int ControllerId);
	void STATIC_ResetGamepadAssignments();
	void STATIC_RegisterForRemoteNotifications();
	void STATIC_QuitGame(class UObject* WorldContextObject, class APlayerController* SpecificPlayer, TEnumAsByte<EQuitPreference> QuitPreference);
	void STATIC_PrintWarning(const class FString& InString);
	void STATIC_PrintText(class UObject* WorldContextObject, const struct FText& InText, bool bPrintToScreen, bool bPrintToLog, const struct FLinearColor& TextColor, float Duration);
	void STATIC_PrintString(class UObject* WorldContextObject, const class FString& InString, bool bPrintToScreen, bool bPrintToLog, const struct FLinearColor& TextColor, float Duration);
	void OnAssetLoaded__DelegateSignature(class UObject* Loaded);
	void OnAssetClassLoaded__DelegateSignature(class UClass* Loaded);
	void STATIC_MoveComponentTo(class USceneComponent* Component, const struct FVector& TargetRelativeLocation, const struct FRotator& TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, TEnumAsByte<EMoveComponentAction> MoveAction, const struct FLatentActionInfo& LatentInfo);
	struct FText STATIC_MakeLiteralText(const struct FText& Value);
	class FString STATIC_MakeLiteralString(const class FString& Value);
	struct FName STATIC_MakeLiteralName(const struct FName& Value);
	int STATIC_MakeLiteralInt(int Value);
	float STATIC_MakeLiteralFloat(float Value);
	unsigned char STATIC_MakeLiteralByte(unsigned char Value);
	bool STATIC_MakeLiteralBool(bool Value);
	void STATIC_LoadAssetClass(class UObject* WorldContextObject, TAssetPtr<class UClass> AssetClass, const struct FScriptDelegate& OnLoaded, const struct FLatentActionInfo& LatentInfo);
	void STATIC_LoadAsset(class UObject* WorldContextObject, TAssetPtr<class UObject> Asset, const struct FScriptDelegate& OnLoaded, const struct FLatentActionInfo& LatentInfo);
	bool STATIC_LineTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_LineTraceSingleByObject_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<ECollisionChannel>> ObjectsToTrace, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_LineTraceSingle_NEW(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_LineTraceSingle_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_LineTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_LineTraceMultiByObject_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<ECollisionChannel>> ObjectsToTrace, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_LineTraceMulti_NEW(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_LineTraceMulti_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	void STATIC_LaunchURL(const class FString& URL);
	void STATIC_K2_UnPauseTimerHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	void STATIC_K2_UnPauseTimerDelegate(const struct FScriptDelegate& Delegate);
	void STATIC_K2_UnPauseTimer(class UObject* Object, const class FString& FunctionName);
	bool STATIC_K2_TimerExistsHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	bool STATIC_K2_TimerExistsDelegate(const struct FScriptDelegate& Delegate);
	bool STATIC_K2_TimerExists(class UObject* Object, const class FString& FunctionName);
	struct FTimerHandle STATIC_K2_SetTimerDelegate(const struct FScriptDelegate& Delegate, float Time, bool bLooping);
	struct FTimerHandle STATIC_K2_SetTimer(class UObject* Object, const class FString& FunctionName, float Time, bool bLooping);
	void STATIC_K2_PauseTimerHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	void STATIC_K2_PauseTimerDelegate(const struct FScriptDelegate& Delegate);
	void STATIC_K2_PauseTimer(class UObject* Object, const class FString& FunctionName);
	bool STATIC_K2_IsValidTimerHandle(const struct FTimerHandle& Handle);
	bool STATIC_K2_IsTimerPausedHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	bool STATIC_K2_IsTimerPausedDelegate(const struct FScriptDelegate& Delegate);
	bool STATIC_K2_IsTimerPaused(class UObject* Object, const class FString& FunctionName);
	bool STATIC_K2_IsTimerActiveHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	bool STATIC_K2_IsTimerActiveDelegate(const struct FScriptDelegate& Delegate);
	bool STATIC_K2_IsTimerActive(class UObject* Object, const class FString& FunctionName);
	struct FTimerHandle STATIC_K2_InvalidateTimerHandle(struct FTimerHandle* Handle);
	float STATIC_K2_GetTimerRemainingTimeHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	float STATIC_K2_GetTimerRemainingTimeDelegate(const struct FScriptDelegate& Delegate);
	float STATIC_K2_GetTimerRemainingTime(class UObject* Object, const class FString& FunctionName);
	float STATIC_K2_GetTimerElapsedTimeHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	float STATIC_K2_GetTimerElapsedTimeDelegate(const struct FScriptDelegate& Delegate);
	float STATIC_K2_GetTimerElapsedTime(class UObject* Object, const class FString& FunctionName);
	void STATIC_K2_ClearTimerHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	void STATIC_K2_ClearTimerDelegate(const struct FScriptDelegate& Delegate);
	void STATIC_K2_ClearTimer(class UObject* Object, const class FString& FunctionName);
	bool STATIC_IsValidClass(class UClass* Class);
	bool STATIC_IsValid(class UObject* Object);
	bool STATIC_IsServer(class UObject* WorldContextObject);
	bool STATIC_IsPackagedForDistribution();
	bool STATIC_IsLoggedIn(class APlayerController* SpecificPlayer);
	bool STATIC_IsDedicatedServer(class UObject* WorldContextObject);
	bool STATIC_IsControllerAssignedToGamepad(int ControllerId);
	void STATIC_HideAdBanner();
	bool STATIC_GetVolumeButtonsHandledBySystem();
	class FString STATIC_GetUniqueDeviceId();
	bool STATIC_GetSupportedFullscreenResolutions(TArray<struct FIntPoint>* Resolutions);
	int STATIC_GetRenderingMaterialQualityLevel();
	int STATIC_GetRenderingDetailMode();
	TArray<class FString> STATIC_GetPreferredLanguages();
	class FString STATIC_GetPlatformUserName();
	int STATIC_GetObjectNameAsCrc32(class UObject* Object);
	class FString STATIC_GetObjectName(class UObject* Object);
	int STATIC_GetMaxShadowCascades();
	class FString STATIC_GetLocalCurrencySymbol();
	class FString STATIC_GetLocalCurrencyCode();
	float STATIC_GetGameTimeInSeconds(class UObject* WorldContextObject);
	class FString STATIC_GetGameName();
	class FString STATIC_GetEngineVersion();
	class FString STATIC_GetDisplayName(class UObject* Object);
	void STATIC_GetComponentBounds(class USceneComponent* Component, struct FVector* Origin, struct FVector* BoxExtent, float* SphereRadius);
	class FString STATIC_GetClassDisplayName(class UClass* Class);
	int STATIC_GetAdIDCount();
	void STATIC_GetActorListFromComponentList(TArray<class UPrimitiveComponent*> ComponentList, class UClass* ActorClassFilter, TArray<class AActor*>* OutActorList);
	void STATIC_GetActorBounds(class AActor* Actor, struct FVector* Origin, struct FVector* BoxExtent);
	void STATIC_ForceCloseAdBanner();
	void STATIC_FlushPersistentDebugLines(class UObject* WorldContextObject);
	void STATIC_FlushDebugStrings(class UObject* WorldContextObject);
	void STATIC_ExecuteConsoleCommand(class UObject* WorldContextObject, const class FString& Command, class APlayerController* SpecificPlayer);
	void STATIC_DrawDebugString(class UObject* WorldContextObject, const struct FVector& TextLocation, const class FString& Text, class AActor* TestBaseActor, const struct FLinearColor& TextColor, float Duration);
	void STATIC_DrawDebugSphere(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int Segments, const struct FLinearColor& LineColor, float Duration);
	void STATIC_DrawDebugPoint(class UObject* WorldContextObject, const struct FVector& Position, float Size, const struct FLinearColor& PointColor, float Duration);
	void STATIC_DrawDebugPlane(class UObject* WorldContextObject, const struct FPlane& PlaneCoordinates, const struct FVector& Location, float Size, const struct FLinearColor& PlaneColor, float Duration);
	void STATIC_DrawDebugLine(class UObject* WorldContextObject, const struct FVector& LineStart, const struct FVector& LineEnd, const struct FLinearColor& LineColor, float Duration, float Thickness);
	void STATIC_DrawDebugFrustum(class UObject* WorldContextObject, const struct FTransform& FrustumTransform, const struct FLinearColor& FrustumColor, float Duration);
	void STATIC_DrawDebugFloatHistoryTransform(class UObject* WorldContextObject, const struct FDebugFloatHistory& FloatHistory, const struct FTransform& DrawTransform, const struct FVector2D& DrawSize, const struct FLinearColor& DrawColor, float Duration);
	void STATIC_DrawDebugFloatHistoryLocation(class UObject* WorldContextObject, const struct FDebugFloatHistory& FloatHistory, const struct FVector& DrawLocation, const struct FVector2D& DrawSize, const struct FLinearColor& DrawColor, float Duration);
	void STATIC_DrawDebugCylinder(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, int Segments, const struct FLinearColor& LineColor, float Duration);
	void STATIC_DrawDebugCoordinateSystem(class UObject* WorldContextObject, const struct FVector& AxisLoc, const struct FRotator& AxisRot, float Scale, float Duration);
	void STATIC_DrawDebugConeInDegrees(class UObject* WorldContextObject, const struct FVector& Origin, const struct FVector& Direction, float Length, float AngleWidth, float AngleHeight, int NumSides, const struct FLinearColor& LineColor, float Duration);
	void STATIC_DrawDebugCone(class UObject* WorldContextObject, const struct FVector& Origin, const struct FVector& Direction, float Length, float AngleWidth, float AngleHeight, int NumSides, const struct FLinearColor& LineColor);
	void STATIC_DrawDebugCircle(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int NumSegments, const struct FLinearColor& LineColor, float Duration, float Thickness, const struct FVector& YAxis, const struct FVector& ZAxis, bool bDrawAxis);
	void STATIC_DrawDebugCapsule(class UObject* WorldContextObject, const struct FVector& Center, float HalfHeight, float Radius, const struct FRotator& Rotation, const struct FLinearColor& LineColor, float Duration);
	void STATIC_DrawDebugCamera(class ACameraActor* CameraActor, const struct FLinearColor& CameraColor, float Duration);
	void STATIC_DrawDebugBox(class UObject* WorldContextObject, const struct FVector& Center, const struct FVector& Extent, const struct FLinearColor& LineColor, const struct FRotator& Rotation, float Duration);
	void STATIC_DrawDebugArrow(class UObject* WorldContextObject, const struct FVector& LineStart, const struct FVector& LineEnd, float ArrowSize, const struct FLinearColor& LineColor, float Duration);
	bool STATIC_DoesImplementInterface(class UObject* TestObject, class UClass* Interface);
	void STATIC_Delay(class UObject* WorldContextObject, float Duration, const struct FLatentActionInfo& LatentInfo);
	void STATIC_CreateCopyForUndoBuffer(class UObject* ObjectToModify);
	class UObject* STATIC_Conv_InterfaceToObject(const TScriptInterface<class UInterface>& Interface);
	class UObject* STATIC_Conv_AssetToObject(TAssetPtr<class UObject> Asset);
	class UClass* STATIC_Conv_AssetClassToClass(TAssetPtr<class UClass> AssetClass);
	void STATIC_ControlScreensaver(bool bAllowScreenSaver);
	bool STATIC_ComponentOverlapComponents_NEW(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool STATIC_ComponentOverlapComponents_DEPRECATED(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool STATIC_ComponentOverlapActors_NEW(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	bool STATIC_ComponentOverlapActors_DEPRECATED(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	void STATIC_CollectGarbage();
	bool STATIC_CapsuleTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_CapsuleTraceSingleByObject_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<TEnumAsByte<ECollisionChannel>> ObjectsToTrace, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_CapsuleTraceSingle_NEW(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_CapsuleTraceSingle_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_CapsuleTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_CapsuleTraceMultiByObject_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<TEnumAsByte<ECollisionChannel>> ObjectsToTrace, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_CapsuleTraceMulti_NEW(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_CapsuleTraceMulti_DEPRECATED(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_CapsuleOverlapComponents_NEW(class UObject* WorldContextObject, const struct FVector& CapsulePos, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool STATIC_CapsuleOverlapComponents_DEPRECATED(class UObject* WorldContextObject, const struct FVector& CapsulePos, float Radius, float HalfHeight, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool STATIC_CapsuleOverlapActors_NEW(class UObject* WorldContextObject, const struct FVector& CapsulePos, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	bool STATIC_CapsuleOverlapActors_DEPRECATED(class UObject* WorldContextObject, const struct FVector& CapsulePos, float Radius, float HalfHeight, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	bool STATIC_BoxTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_BoxTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool STATIC_BoxTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_BoxTraceMulti(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	bool STATIC_BoxOverlapComponents_NEW(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& Extent, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool STATIC_BoxOverlapComponents_DEPRECATED(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& Extent, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool STATIC_BoxOverlapActors_NEW(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	bool STATIC_BoxOverlapActors_DEPRECATED(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TEnumAsByte<EOverlapFilterOption> Filter, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	struct FDebugFloatHistory STATIC_AddFloatHistorySample(float Value, const struct FDebugFloatHistory& FloatHistory);
};


// Class Engine.KismetTextLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetTextLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetTextLibrary");
		return ptr;
	}


	struct FText STATIC_TextTrimTrailing(const struct FText& InText);
	struct FText STATIC_TextTrimPrecedingAndTrailing(const struct FText& InText);
	struct FText STATIC_TextTrimPreceding(const struct FText& InText);
	bool STATIC_TextIsTransient(const struct FText& InText);
	bool STATIC_TextIsEmpty(const struct FText& InText);
	bool STATIC_TextIsCultureInvariant(const struct FText& InText);
	bool STATIC_NotEqual_TextText(const struct FText& A, const struct FText& B);
	bool STATIC_NotEqual_IgnoreCase_TextText(const struct FText& A, const struct FText& B);
	struct FText STATIC_GetEmptyText();
	struct FText STATIC_Format(const struct FText& InPattern, TArray<struct FFormatTextArgument> InArgs);
	bool STATIC_FindTextInLocalizationTable(const class FString& Namespace, const class FString& Key, struct FText* OutText);
	bool STATIC_EqualEqual_TextText(const struct FText& A, const struct FText& B);
	bool STATIC_EqualEqual_IgnoreCase_TextText(const struct FText& A, const struct FText& B);
	class FString STATIC_Conv_TextToString(const struct FText& InText);
	struct FText STATIC_Conv_StringToText(const class FString& InString);
	struct FText STATIC_Conv_NameToText(const struct FName& InName);
	struct FText STATIC_Conv_IntToText(int Value, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits);
	struct FText STATIC_Conv_FloatToText(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits);
	struct FText STATIC_Conv_ByteToText(unsigned char Value);
	struct FText STATIC_Conv_BoolToText(bool InBool);
	struct FText STATIC_AsTimespan_Timespan(const struct FTimespan& InTimespan);
	struct FText STATIC_AsTime_DateTime(const struct FDateTime& In);
	struct FText STATIC_AsPercent_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits);
	struct FText STATIC_AsDateTime_DateTime(const struct FDateTime& In);
	struct FText STATIC_AsDate_DateTime(const struct FDateTime& InDateTime);
	struct FText STATIC_AsCurrency_Integer(int Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits, const class FString& CurrencyCode);
	struct FText STATIC_AsCurrency_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits, const class FString& CurrencyCode);
};


// Class Engine.LoadingPerfBPFuncLib
// 0x0000 (0x0028 - 0x0028)
class ULoadingPerfBPFuncLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LoadingPerfBPFuncLib");
		return ptr;
	}


	void STATIC_WriteTimings();
	void STATIC_MarkEndStreaming();
};


// Class Engine.WorldComposition
// 0x0090 (0x00B8 - 0x0028)
class UWorldComposition : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<class ULevelStreaming*>                     TilesStreaming;                                           // 0x01E3(0x0010) (ZeroConstructor, Transient)
	double                                             TilesStreamingTimeThreshold;                              // 0x01E3(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bLoadAllTilesDuringCinematic;                             // 0x01E3(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bRebaseOriginIn3DSpace;                                   // 0x01E3(0x0001) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WorldComposition");
		return ptr;
	}

};


// Class Engine.NestedWorldComposition
// 0x0000 (0x00B8 - 0x00B8)
class UNestedWorldComposition : public UWorldComposition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NestedWorldComposition");
		return ptr;
	}

};


// Class Engine.NestedWorldCompositionFunctionLib
// 0x0000 (0x0028 - 0x0028)
class UNestedWorldCompositionFunctionLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NestedWorldCompositionFunctionLib");
		return ptr;
	}


	void STATIC_TriggerManualNestedLevelUnload(class UObject* WorldContextObject, const struct FName& PackageName);
	void STATIC_TriggerManualNestedLevelLoad(class UObject* WorldContextObject, const struct FName& PackageName);
	bool STATIC_IsNestedLevelVisibleRecursive(class UObject* WorldContextObject, const struct FName& PackageName);
	bool STATIC_IsNestedLevelVisible(class UObject* WorldContextObject, const struct FName& PackageName);
};


// Class Engine.ParticleWarningFunctions
// 0x0000 (0x0028 - 0x0028)
class UParticleWarningFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleWarningFunctions");
		return ptr;
	}


	TArray<class FString> STATIC_RetrieveInfoOnEmitterWithShortQuarterResArea(class UParticleSystemComponent* Component, float ShortQuarterRes);
	TArray<class FString> STATIC_RetrieveInfoOnEmitterWithLongNearTransition(class UParticleSystemComponent* Component, float LongNearTransition);
	TArray<class FString> STATIC_RetrieveInfoOnEmitterWithLongFarTransition(class UParticleSystemComponent* Component, float LongFarTransition);
	TArray<class FString> STATIC_RetrieveInfoOnEmittersWithoutPerVertexLighting(class UParticleSystemComponent* Component);
	TArray<class FString> STATIC_RetrieveInfoOnEmittersWithLowAlphaThreshold(class UParticleSystemComponent* Component, float LowAlphaThreshold);
	TArray<class FString> STATIC_RetrieveInfoOnEmittersWithLoopZero(class UParticleSystemComponent* Component);
	TArray<class FString> STATIC_RetrieveInfoOnEmittersWithKillOnCompleteUnticked(class UParticleSystemComponent* Component);
	TArray<class FString> STATIC_RetrieveInfoOnEmittersWithHighSpawnRate(class UParticleSystemComponent* Component, int HighSpawnRate);
	TArray<class FString> STATIC_RetrieveInfoOnEmittersWithDurationZero(class UParticleSystemComponent* Component);
	TArray<class FString> STATIC_RetrieveInfoOnEmittersUsingMaxDrawCount(class UParticleSystemComponent* Component);
	TArray<class FString> STATIC_RetrieveInfoOnEmittersOnCPU(class UParticleSystemComponent* Component);
};


// Class Engine.SkeletalMeshMergeBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USkeletalMeshMergeBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshMergeBlueprintFunctionLibrary");
		return ptr;
	}


	class USkeletalMesh* STATIC_MergeSkeletalMeshesWithMorphTargets(TArray<class USkeletalMesh*> Meshes, TArray<struct FName> MorphTargetNames, TArray<float> MorphTargetWeights);
	class USkeletalMesh* STATIC_MergeSkeletalMeshes(TArray<class USkeletalMesh*> Meshes);
};


// Class Engine.VisualLoggerKismetLibrary
// 0x0000 (0x0028 - 0x0028)
class UVisualLoggerKismetLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VisualLoggerKismetLibrary");
		return ptr;
	}


	void STATIC_LogText(class UObject* WorldContextObject, const class FString& Text, const struct FName& LogCategory);
	void STATIC_LogLocation(class UObject* WorldContextObject, const struct FVector& Location, const class FString& Text, const struct FLinearColor& ObjectColor, float Radius, const struct FName& LogCategory);
	void STATIC_LogBox(class UObject* WorldContextObject, const struct FBox& BoxShape, const class FString& Text, const struct FLinearColor& ObjectColor, const struct FName& LogCategory);
};


// Class Engine.AnimBlueprintGeneratedClass
// 0x0058 (0x0258 - 0x0200)
class UAnimBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0200(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimBlueprintGeneratedClass");
		return ptr;
	}

};


// Class Engine.BodySetup
// 0x02B0 (0x02D8 - 0x0028)
class UBodySetup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FKAggregateGeom                             AggGeom;                                                  // 0x01E3(0x0048)
	struct FName                                       BoneName;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EPhysicsType>                          PhysicsType;                                              // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCookComplexGeometryOnServer : 1;                         // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAlwaysFullAnimWeight : 1;                                // 0x01E3(0x0001) (Deprecated)
	unsigned char                                      bConsiderForBounds : 1;                                   // 0x01E3(0x0001) (Edit)
	unsigned char                                      bMeshCollideAll : 1;                                      // 0x01E3(0x0001) (Transient)
	unsigned char                                      bDoubleSidedGeometry : 1;                                 // 0x01E3(0x0001) (Edit)
	unsigned char                                      bGenerateNonMirroredCollision : 1;                        // 0x01E3(0x0001)
	unsigned char                                      bSharedCookedData : 1;                                    // 0x01E3(0x0001)
	unsigned char                                      bGenerateMirroredCollision : 1;                           // 0x01E3(0x0001)
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBodyCollisionResponse>                CollisionReponse;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionTraceFlag>                   CollisionTraceFlag;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBodyInstance                               DefaultInstance;                                          // 0x01E3(0x0190) (Edit)
	struct FWalkableSlopeOverride                      WalkableSlopeOverride;                                    // 0x01E3(0x0008) (Edit)
	float                                              BuildScale;                                               // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF1];                                      // 0x01E7(0x00F1) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BodySetup");
		return ptr;
	}

};


// Class Engine.BodySetup2D
// 0x0030 (0x0308 - 0x02D8)
class UBodySetup2D : public UBodySetup
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02D8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BodySetup2D");
		return ptr;
	}

};


// Class Engine.BoneMaskFilter
// 0x0010 (0x0038 - 0x0028)
class UBoneMaskFilter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoneMaskFilter");
		return ptr;
	}

};


// Class Engine.BookMark
// 0x0028 (0x0050 - 0x0028)
class UBookMark : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookMark");
		return ptr;
	}

};


// Class Engine.BookMark2D
// 0x0010 (0x0038 - 0x0028)
class UBookMark2D : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              Zoom2D;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookMark2D");
		return ptr;
	}

};


// Class Engine.Breakpoint
// 0x0018 (0x0040 - 0x0028)
class UBreakpoint : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	unsigned char                                      bEnabled : 1;                                             // 0x01E3(0x0001) (Transient)
	class UEdGraphNode*                                Node;                                                     // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bStepOnce : 1;                                            // 0x01E3(0x0001)
	unsigned char                                      bStepOnce_WasPreviouslyDisabled : 1;                      // 0x01E3(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Breakpoint");
		return ptr;
	}

};


// Class Engine.BrushBuilder
// 0x0058 (0x0080 - 0x0028)
class UBrushBuilder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class FString                                      BitmapFilename;                                           // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      ToolTip;                                                  // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      NotifyBadParams : 1;                                      // 0x01E3(0x0001) (Transient)
	TArray<struct FVector>                             Vertices;                                                 // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FBuilderPoly>                        Polys;                                                    // 0x01E3(0x0010) (ZeroConstructor)
	struct FName                                       Layer;                                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushBuilder");
		return ptr;
	}

};


// Class Engine.ButtonStyleAsset
// 0x02A8 (0x02D0 - 0x0028)
class UButtonStyleAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2A8];                                     // 0x0028(0x02A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ButtonStyleAsset");
		return ptr;
	}

};


// Class Engine.CameraAnim
// 0x0578 (0x05A0 - 0x0028)
class UCameraAnim : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UInterpGroup*                                CameraInterpGroup;                                        // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              AnimLength;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FBox                                        BoundingBox;                                              // 0x01E3(0x001C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRelativeToInitialTransform : 1;                          // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	float                                              BaseFOV;                                                  // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FPostProcessSettings                        BasePostProcessSettings;                                  // 0x01E3(0x0530)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraAnim");
		return ptr;
	}

};


// Class Engine.CameraAnimInst
// 0x00E8 (0x0110 - 0x0028)
class UCameraAnimInst : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UCameraAnim*                                 CamAnim;                                                  // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInterpGroupInst*                            InterpGroupInst;                                          // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x01E3(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInterpTrackMove*                            MoveTrack;                                                // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UInterpTrackInstMove*                        MoveInst;                                                 // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraAnimInst");
		return ptr;
	}


	void Stop(bool bImmediate);
	void SetScale(float NewDuration);
	void SetDuration(float NewDuration);
};


// Class Engine.CameraModifier_CameraShake
// 0x0018 (0x0060 - 0x0048)
class UCameraModifier_CameraShake : public UCameraModifier
{
public:
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	TArray<class UCameraShake*>                        ActiveShakes;                                             // 0x01E3(0x0010) (ZeroConstructor)
	float                                              SplitScreenShakeScale;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraModifier_CameraShake");
		return ptr;
	}

};


// Class Engine.Canvas
// 0x00C8 (0x00F0 - 0x0028)
class UCanvas : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              OrgX;                                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OrgY;                                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ClipX;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ClipY;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      DrawColor;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCenterX : 1;                                             // 0x01E3(0x0001)
	unsigned char                                      bCenterY : 1;                                             // 0x01E3(0x0001)
	unsigned char                                      bNoSmooth : 1;                                            // 0x01E3(0x0001)
	int                                                SizeX;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SizeY;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FPlane                                      ColorModulate;                                            // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  DefaultTexture;                                           // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  GradientTexture0;                                         // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Canvas");
		return ptr;
	}


	struct FVector2D K2_TextSize(class UFont* RenderFont, const class FString& RenderText, const struct FVector2D& Scale);
	struct FVector2D K2_StrLen(class UFont* RenderFont, const class FString& RenderText);
	struct FVector K2_Project(const struct FVector& WorldLocation);
	void K2_DrawTriangle(class UTexture* RenderTexture, TArray<struct FCanvasUVTri> Triangles);
	void K2_DrawTexture(class UTexture* RenderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, const struct FLinearColor& RenderColor, TEnumAsByte<EBlendMode> BlendMode, float Rotation, const struct FVector2D& PivotPoint);
	void K2_DrawText(class UFont* RenderFont, const class FString& RenderText, const struct FVector2D& ScreenPosition, const struct FLinearColor& RenderColor, float Kerning, const struct FLinearColor& ShadowColor, const struct FVector2D& ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, const struct FLinearColor& OutlineColor);
	void K2_DrawPolygon(class UTexture* RenderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& Radius, int NumberOfSides, const struct FLinearColor& RenderColor);
	void K2_DrawMaterialTriangle(class UMaterialInterface* RenderMaterial, TArray<struct FCanvasUVTri> Triangles);
	void K2_DrawMaterial(class UMaterialInterface* RenderMaterial, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, float Rotation, const struct FVector2D& PivotPoint);
	void K2_DrawLine(const struct FVector2D& ScreenPositionA, const struct FVector2D& ScreenPositionB, float Thickness, const struct FLinearColor& RenderColor);
	void K2_DrawBox(const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, float Thickness);
	void K2_DrawBorder(class UTexture* BorderTexture, class UTexture* BackgroundTexture, class UTexture* LeftBorderTexture, class UTexture* RightBorderTexture, class UTexture* TopBorderTexture, class UTexture* BottomBorderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, const struct FLinearColor& RenderColor, const struct FVector2D& BorderScale, const struct FVector2D& BackgroundScale, float Rotation, const struct FVector2D& PivotPoint, const struct FVector2D& CornerSize);
	void K2_Deproject(const struct FVector2D& ScreenPosition, struct FVector* WorldOrigin, struct FVector* WorldDirection);
};


// Class Engine.Channel
// 0x0040 (0x0068 - 0x0028)
class UChannel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Channel");
		return ptr;
	}

};


// Class Engine.ActorChannel
// 0x01D0 (0x0238 - 0x0068)
class UActorChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	class AActor*                                      Actor;                                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4D];                                      // 0x01EB(0x004D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorChannel");
		return ptr;
	}

};


// Class Engine.ControlChannel
// 0x0018 (0x0080 - 0x0068)
class UControlChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ControlChannel");
		return ptr;
	}

};


// Class Engine.VoiceChannel
// 0x0020 (0x0088 - 0x0068)
class UVoiceChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	int                                                BandwidthPerSecondReservationInBytes;                     // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VoiceChannel");
		return ptr;
	}

};


// Class Engine.CheckBoxStyleAsset
// 0x05F0 (0x0618 - 0x0028)
class UCheckBoxStyleAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5F0];                                     // 0x0028(0x05F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CheckBoxStyleAsset");
		return ptr;
	}

};


// Class Engine.PluginCommandlet
// 0x0020 (0x00A0 - 0x0080)
class UPluginCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PluginCommandlet");
		return ptr;
	}

};


// Class Engine.SmokeTestCommandlet
// 0x0000 (0x0080 - 0x0080)
class USmokeTestCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SmokeTestCommandlet");
		return ptr;
	}

};


// Class Engine.Console
// 0x00C8 (0x00F0 - 0x0028)
class UConsole : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class ULocalPlayer*                                ConsoleTargetPlayer;                                      // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  DefaultTexture_Black;                                     // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  DefaultTexture_White;                                     // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Console");
		return ptr;
	}

};


// Class Engine.CurveLinearColor
// 0x01E0 (0x0210 - 0x0030)
class UCurveLinearColor : public UCurveBase
{
public:
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0030(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveLinearColor");
		return ptr;
	}


	struct FLinearColor GetLinearColorValue(float InTime);
};


// Class Engine.CurveVector
// 0x0168 (0x0198 - 0x0030)
class UCurveVector : public UCurveBase
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0030(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveVector");
		return ptr;
	}


	struct FVector GetVectorValue(float InTime);
};


// Class Engine.CurveEdPresetCurve
// 0x0000 (0x0028 - 0x0028)
class UCurveEdPresetCurve : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveEdPresetCurve");
		return ptr;
	}

};


// Class Engine.CurveTable
// 0x0050 (0x0078 - 0x0028)
class UCurveTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveTable");
		return ptr;
	}

};


// Class Engine.ParticleComputeShaderData
// 0x0068 (0x0090 - 0x0028)
class UParticleComputeShaderData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleComputeShaderData");
		return ptr;
	}

};


// Class Engine.TireType
// 0x0008 (0x0030 - 0x0028)
class UTireType : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TireType");
		return ptr;
	}

};


// Class Engine.DestructibleFractureSettings
// 0x0078 (0x00A0 - 0x0028)
class UDestructibleFractureSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	int                                                CellSiteCount;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFractureMaterial                           FractureMaterialDesc;                                     // 0x01E3(0x0024) (Edit, Transient)
	int                                                RandomSeed;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             VoronoiSites;                                             // 0x01E3(0x0010) (ZeroConstructor)
	int                                                OriginalSubmeshCount;                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FDestructibleChunkParameters>        ChunkParameters;                                          // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DestructibleFractureSettings");
		return ptr;
	}

};


// Class Engine.AnimationSettings
// 0x0048 (0x0080 - 0x0038)
class UAnimationSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TArray<float>                                      DefaultVisibleDistanceFactorThresholds;                   // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	int                                                CompressCommandletVersion;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, EditConst, IsPlainOldData)
	TArray<class FString>                              KeyEndEffectorsMatchNameArray;                            // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class UClass*                                      DefaultCompressionAlgorithm;                              // 0x01E3(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EAnimationCompressionFormat>           RotationCompressionFormat;                                // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EAnimationCompressionFormat>           TranslationCompressionFormat;                             // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AlternativeCompressionThreshold;                          // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               ForceRecompression;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bOnlyCheckForMissingSkeletalMeshes;                       // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceBelowThreshold;                                     // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bFirstRecompressUsingCurrentOrDefault;                    // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bRaiseMaxErrorToExisting;                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bTryFixedBitwiseCompression;                              // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bTryPerTrackBitwiseCompression;                           // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bTryLinearKeyRemovalCompression;                          // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationSettings");
		return ptr;
	}

};


// Class Engine.AudioSettings
// 0x0048 (0x0080 - 0x0038)
class UAudioSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FStringAssetReference                       DefaultSoundClassName;                                    // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       DefaultBaseSoundMix;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       VoiPSoundClass;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	float                                              LowPassFilterResonance;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaximumConcurrentStreams;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioSettings");
		return ptr;
	}

};


// Class Engine.UserInterfaceSettings
// 0x0120 (0x0158 - 0x0038)
class UUserInterfaceSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TEnumAsByte<ERenderFocusRule>                      RenderFocusRule;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FStringClassReference                       DefaultCursor;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringClassReference                       TextEditBeamCursor;                                       // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringClassReference                       CrosshairsCursor;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringClassReference                       GrabHandCursor;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringClassReference                       GrabHandClosedCursor;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringClassReference                       SlashedCircleCursor;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	float                                              ApplicationScale;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EUIScalingRule>                        UIScaleRule;                                              // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FStringClassReference                       CustomScalingRuleClass;                                   // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FRuntimeFloatCurve                          UIScaleCurve;                                             // 0x01E3(0x0080) (Edit, Config)
	TArray<class UObject*>                             CursorClasses;                                            // 0x01E3(0x0010) (ZeroConstructor, Transient)
	class UClass*                                      CustomScalingRuleClassInstance;                           // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserInterfaceSettings");
		return ptr;
	}

};


// Class Engine.StreamingSettings
// 0x0028 (0x0060 - 0x0038)
class UStreamingSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	unsigned char                                      AsyncLoadingThreadEnabled : 1;                            // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      WarnIfTimeLimitExceeded : 1;                              // 0x01E3(0x0001) (Edit, Config)
	float                                              TimeLimitExceededMultiplier;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TimeLimitExceededMinTime;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MinBulkDataSizeForAsyncLoading;                           // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AsyncIOBandwidthLimit;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UseBackgroundLevelStreaming : 1;                          // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      AsyncLoadingUseFullTimeLimit : 1;                         // 0x01E3(0x0001) (Edit, Config)
	float                                              AsyncLoadingTimeLimit;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PriorityAsyncLoadingExtraTime;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LevelStreamingActorsUpdateTimeLimit;                      // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StreamingSettings");
		return ptr;
	}

};


// Class Engine.GarbageCollectionSettings
// 0x0020 (0x0058 - 0x0038)
class UGarbageCollectionSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	float                                              TimeBetweenPurgingPendingKillObjects;                     // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      FlushStreamingOnGC : 1;                                   // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      AllowParallelGC : 1;                                      // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      CreateGCClusters : 1;                                     // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      MergeGCClusters : 1;                                      // 0x01E3(0x0001) (Edit, Config)
	int                                                NumRetriesBeforeForcingGC;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxObjectsNotConsideredByGC;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                SizeOfPermanentObjectPool;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxObjectsInGame;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GarbageCollectionSettings");
		return ptr;
	}

};


// Class Engine.NetworkSettings
// 0x0008 (0x0040 - 0x0038)
class UNetworkSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetworkSettings");
		return ptr;
	}

};


// Class Engine.PhysicsSettings
// 0x0088 (0x00C0 - 0x0038)
class UPhysicsSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	float                                              DefaultGravityZ;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultTerminalVelocity;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultFluidFriction;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                SimulateScratchMemorySize;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                RagdollAggregateThreshold;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TriangleMeshTriangleMinAreaThreshold;                     // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableAsyncScene;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableShapeSharing;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnablePCM;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bWarnMissingLocks;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnable2DPhysics;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ESettingsLockedAxis>                   LockedAxis;                                               // 0x01E3(0x0001) (ZeroConstructor, Config, Deprecated, IsPlainOldData)
	TEnumAsByte<ESettingsDOF>                          DefaultDegreesOfFreedom;                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BounceThresholdVelocity;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EFrictionCombineMode>                  FrictionCombineMode;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EFrictionCombineMode>                  RestitutionCombineMode;                                   // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxAngularVelocity;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxDepenetrationVelocity;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSimulateSkeletalMeshOnDedicatedServer;                   // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDefaultHasComplexCollision;                              // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxPhysicsDeltaTime;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSubstepping;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSubsteppingAsync;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxSubstepDeltaTime;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxSubsteps;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              SyncSceneSmoothingFactor;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AsyncSceneSmoothingFactor;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              InitialAverageFrameRate;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FPhysicalSurfaceName>                PhysicalSurfaces;                                         // 0x01E3(0x0010) (ZeroConstructor, Config)
	TArray<struct FDominanceGroupPair>                 DominanceGroups;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FDominanceGroupName>                 DominanceGroupNames;                                      // 0x01E3(0x0010) (ZeroConstructor, Config)
	TEnumAsByte<EDominanceGroup>                       DefaultStaticDominanceGroup;                              // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsSettings");
		return ptr;
	}

};


// Class Engine.RendererSettings
// 0x00D8 (0x0110 - 0x0038)
class URendererSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	unsigned char                                      bPrecomputedVisibilityWarning : 1;                        // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      bMobileDynamicPointLightsUseStaticBranch : 1;             // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      bDefaultFeatureBloom : 1;                                 // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      bTextureStreaming : 1;                                    // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      bUseDXT5NormalMaps : 1;                                   // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      bAllowStaticLighting : 1;                                 // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      bUseNormalMapsForStaticLighting : 1;                      // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      bGenerateMeshDistanceFields : 1;                          // 0x01E3(0x0001) (Edit, Config)
	uint32_t                                           MobileNumDynamicPointLights;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01 : 1;                                        // 0x01E3(0x0001)
	unsigned char                                      bOcclusionCulling : 1;                                    // 0x01E3(0x0001) (Edit, Config)
	float                                              MinScreenRadiusForLights;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinScreenRadiusForEarlyZPass;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinScreenRadiusForCSMdepth;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02 : 6;                                        // 0x01E3(0x0001)
	unsigned char                                      bGenerateLandscapeGIData : 1;                             // 0x01E3(0x0001) (Edit, Config)
	float                                              TessellationAdaptivePixelsPerTriangle;                    // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bSeparateTranslucency : 1;                                // 0x01E3(0x0001) (Edit, Config)
	TEnumAsByte<ETranslucentSortPolicy>                TranslucentSortPolicy;                                    // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FVector                                     TranslucentSortAxis;                                      // 0x01E3(0x000C) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ECustomDepthStencil>                   CustomDepthStencil;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bMobileHDR : 1;                                           // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      bDefaultFeatureAmbientOcclusion : 1;                      // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      bDefaultFeatureAmbientOcclusionStaticFraction : 1;        // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      bDefaultFeatureAutoExposure : 1;                          // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      bDefaultFeatureMotionBlur : 1;                            // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      bDefaultFeatureLensFlare : 1;                             // 0x01E3(0x0001) (Edit, Config)
	TEnumAsByte<EAntiAliasingMethodUI>                 DefaultFeatureAntiAliasing;                               // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EEarlyZPass>                           EarlyZPass;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bEarlyZPassMovable : 1;                                   // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      bDBuffer : 1;                                             // 0x01E3(0x0001) (Edit, Config)
	TEnumAsByte<EClearSceneOptions>                    ClearSceneMethod;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bBasePassOutputsVelocity : 1;                             // 0x01E3(0x0001) (Edit, Config)
	float                                              WireframeCullThreshold;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EUIScalingRule>                        UIScaleRule;                                              // 0x01E3(0x0001) (ZeroConstructor, Config, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RendererSettings");
		return ptr;
	}

};


// Class Engine.TextureLODSettings
// 0x0010 (0x0038 - 0x0028)
class UTextureLODSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureLODSettings");
		return ptr;
	}

};


// Class Engine.DeviceProfile
// 0x0048 (0x0080 - 0x0038)
class UDeviceProfile : public UTextureLODSettings
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	class FString                                      DeviceType;                                               // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, EditConst)
	class FString                                      BaseProfileName;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class UObject*                                     Parent;                                                   // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              CVars;                                                    // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeviceProfile");
		return ptr;
	}

};


// Class Engine.DeviceProfileManager
// 0x0060 (0x0088 - 0x0028)
class UDeviceProfileManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeviceProfileManager");
		return ptr;
	}

};


// Class Engine.DialogueVoice
// 0x0018 (0x0040 - 0x0028)
class UDialogueVoice : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TEnumAsByte<EGrammaticalGender>                    Gender;                                                   // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGrammaticalNumber>                    Plurality;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueVoice");
		return ptr;
	}

};


// Class Engine.DialogueWave
// 0x0038 (0x0060 - 0x0028)
class UDialogueWave : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	unsigned char                                      bMature : 1;                                              // 0x01E3(0x0001) (Edit)
	class FString                                      SpokenText;                                               // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDialogueContextMapping>             ContextMappings;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueWave");
		return ptr;
	}

};


// Class Engine.Distribution
// 0x0008 (0x0030 - 0x0028)
class UDistribution : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Distribution");
		return ptr;
	}

};


// Class Engine.DistributionFloat
// 0x0008 (0x0038 - 0x0030)
class UDistributionFloat : public UDistribution
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloat");
		return ptr;
	}

};


// Class Engine.DistributionFloatConstant
// 0x0008 (0x0040 - 0x0038)
class UDistributionFloatConstant : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	float                                              Constant;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatConstant");
		return ptr;
	}

};


// Class Engine.DistributionFloatParameterBase
// 0x0020 (0x0060 - 0x0040)
class UDistributionFloatParameterBase : public UDistributionFloatConstant
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinInput;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInput;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinOutput;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxOutput;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDistributionParamMode>                ParamMode;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatParameterBase");
		return ptr;
	}

};


// Class Engine.DistributionFloatParticleParameter
// 0x0000 (0x0060 - 0x0060)
class UDistributionFloatParticleParameter : public UDistributionFloatParameterBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatParticleParameter");
		return ptr;
	}

};


// Class Engine.DistributionFloatConstantCurve
// 0x0018 (0x0050 - 0x0038)
class UDistributionFloatConstantCurve : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FInterpCurveFloat                           ConstantCurve;                                            // 0x01E3(0x0018) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatConstantCurve");
		return ptr;
	}

};


// Class Engine.DistributionFloatUniform
// 0x0008 (0x0040 - 0x0038)
class UDistributionFloatUniform : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	float                                              Max;                                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Min;                                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatUniform");
		return ptr;
	}

};


// Class Engine.DistributionFloatUniformCurve
// 0x0018 (0x0050 - 0x0038)
class UDistributionFloatUniformCurve : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FInterpCurveVector2D                        ConstantCurve;                                            // 0x01E3(0x0018) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatUniformCurve");
		return ptr;
	}

};


// Class Engine.DistributionVector
// 0x0008 (0x0038 - 0x0030)
class UDistributionVector : public UDistribution
{
public:
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	unsigned char                                      bCanBeBaked : 1;                                          // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVector");
		return ptr;
	}

};


// Class Engine.DistributionVectorConstant
// 0x0018 (0x0050 - 0x0038)
class UDistributionVectorConstant : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FVector                                     Constant;                                                 // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLockAxes : 1;                                            // 0x01E3(0x0001)
	TEnumAsByte<EDistributionVectorLockFlags>          LockedAxes;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorConstant");
		return ptr;
	}

};


// Class Engine.DistributionVectorParameterBase
// 0x0040 (0x0090 - 0x0050)
class UDistributionVectorParameterBase : public UDistributionVectorConstant
{
public:
	unsigned char                                      UnknownData00[0x193];                                     // 0x0050(0x0193) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MinInput;                                                 // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxInput;                                                 // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MinOutput;                                                // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxOutput;                                                // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDistributionParamMode>                ParamModes[0x3];                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorParameterBase");
		return ptr;
	}

};


// Class Engine.DistributionVectorParticleParameter
// 0x0000 (0x0090 - 0x0090)
class UDistributionVectorParticleParameter : public UDistributionVectorParameterBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorParticleParameter");
		return ptr;
	}

};


// Class Engine.DistributionVectorConstantCurve
// 0x0020 (0x0058 - 0x0038)
class UDistributionVectorConstantCurve : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FInterpCurveVector                          ConstantCurve;                                            // 0x01E3(0x0018) (Edit, ZeroConstructor)
	unsigned char                                      bLockAxes : 1;                                            // 0x01E3(0x0001)
	TEnumAsByte<EDistributionVectorLockFlags>          LockedAxes;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorConstantCurve");
		return ptr;
	}

};


// Class Engine.DistributionVectorUniform
// 0x0028 (0x0060 - 0x0038)
class UDistributionVectorUniform : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FVector                                     Max;                                                      // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Min;                                                      // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLockAxes : 1;                                            // 0x01E3(0x0001)
	TEnumAsByte<EDistributionVectorLockFlags>          LockedAxes;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDistributionVectorMirrorFlags>        MirrorFlags[0x3];                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseExtremes : 1;                                         // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorUniform");
		return ptr;
	}

};


// Class Engine.DistributionVectorUniformCurve
// 0x0028 (0x0060 - 0x0038)
class UDistributionVectorUniformCurve : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FInterpCurveTwoVectors                      ConstantCurve;                                            // 0x01E3(0x0018) (Edit, ZeroConstructor)
	unsigned char                                      bLockAxes1 : 1;                                           // 0x01E3(0x0001)
	unsigned char                                      bLockAxes2 : 1;                                           // 0x01E3(0x0001)
	TEnumAsByte<EDistributionVectorLockFlags>          LockedAxes[0x2];                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDistributionVectorMirrorFlags>        MirrorFlags[0x3];                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseExtremes : 1;                                         // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorUniformCurve");
		return ptr;
	}

};


// Class Engine.DPICustomScalingRule
// 0x0000 (0x0028 - 0x0028)
class UDPICustomScalingRule : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DPICustomScalingRule");
		return ptr;
	}

};


// Class Engine.DynamicBlueprintBinding
// 0x0000 (0x0028 - 0x0028)
class UDynamicBlueprintBinding : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicBlueprintBinding");
		return ptr;
	}

};


// Class Engine.ComponentDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UComponentDelegateBinding : public UDynamicBlueprintBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ComponentDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputDelegateBinding
// 0x0000 (0x0028 - 0x0028)
class UInputDelegateBinding : public UDynamicBlueprintBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputActionDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputActionDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputActionDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputAxisDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputAxisDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputAxisDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputAxisKeyDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputAxisKeyDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputAxisKeyDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputVectorAxisDelegateBinding
// 0x0000 (0x0038 - 0x0038)
class UInputVectorAxisDelegateBinding : public UInputAxisKeyDelegateBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputVectorAxisDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputKeyDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputKeyDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputKeyDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputTouchDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputTouchDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputTouchDelegateBinding");
		return ptr;
	}

};


// Class Engine.EdGraph
// 0x0068 (0x0090 - 0x0028)
class UEdGraph : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UClass*                                      Schema;                                                   // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UEdGraphNode*>                        Nodes;                                                    // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      bEditable : 1;                                            // 0x01E3(0x0001)
	unsigned char                                      bAllowDeletion : 1;                                       // 0x01E3(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraph");
		return ptr;
	}

};


// Class Engine.EdGraphNode_Documentation
// 0x0020 (0x00B0 - 0x0090)
class UEdGraphNode_Documentation : public UEdGraphNode
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	class FString                                      Link;                                                     // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      Excerpt;                                                  // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphNode_Documentation");
		return ptr;
	}

};


// Class Engine.EdGraphSchema
// 0x0000 (0x0028 - 0x0028)
class UEdGraphSchema : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphSchema");
		return ptr;
	}

};


// Class Engine.ImportantToggleSettingInterface
// 0x0000 (0x0028 - 0x0028)
class UImportantToggleSettingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImportantToggleSettingInterface");
		return ptr;
	}

};


// Class Engine.EndUserSettings
// 0x0010 (0x0038 - 0x0028)
class UEndUserSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EndUserSettings");
		return ptr;
	}

};


// Class Engine.Exporter
// 0x0040 (0x0068 - 0x0028)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UClass*                                      SupportedClass;                                           // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     ExportRootScope;                                          // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class FString>                              FormatExtension;                                          // 0x01E3(0x0010) (ZeroConstructor)
	TArray<class FString>                              FormatDescription;                                        // 0x01E3(0x0010) (ZeroConstructor)
	int                                                PreferredFormatIndex;                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TextIndent;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bText : 1;                                                // 0x01E3(0x0001)
	unsigned char                                      bSelectedOnly : 1;                                        // 0x01E3(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Exporter");
		return ptr;
	}

};


// Class Engine.FFTWaterSettings
// 0x0028 (0x0050 - 0x0028)
class UFFTWaterSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FStringAssetReference                       FFTWaterMaterialName;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       FFTWaterFoamTextureName;                                  // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FFTWaterSettings");
		return ptr;
	}

};


// Class Engine.FontImportOptions
// 0x00B0 (0x00D8 - 0x0028)
class UFontImportOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FontImportOptions");
		return ptr;
	}

};


// Class Engine.Font
// 0x01B0 (0x01D8 - 0x0028)
class UFont : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TEnumAsByte<EFontCacheType>                        FontCacheType;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FFontCharacter>                      Characters;                                               // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<class UTexture2D*>                          Textures;                                                 // 0x01E3(0x0010) (ZeroConstructor)
	int                                                IsRemapped;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EmScale;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Ascent;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Descent;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Leading;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Kerning;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFontImportOptionsData                      ImportOptions;                                            // 0x01E3(0x00B0) (Edit)
	int                                                NumCharacters;                                            // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<int>                                        MaxCharHeight;                                            // 0x01E3(0x0010) (ZeroConstructor, Transient)
	float                                              ScalingFactor;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LegacyFontSize;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LegacyFontName;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Font");
		return ptr;
	}

};


// Class Engine.HapticFeedbackEffect
// 0x0100 (0x0128 - 0x0028)
class UHapticFeedbackEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0028(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect");
		return ptr;
	}

};


// Class Engine.HighLatencySettings
// 0x0018 (0x0040 - 0x0028)
class UHighLatencySettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	bool                                               UseHighLatency;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                PktLag;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                PktLagVariance;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               PktOrder;                                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                PktDup;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HighLatencySettings");
		return ptr;
	}

};


// Class Engine.HIKCharacterization
// 0x0110 (0x0138 - 0x0028)
class UHIKCharacterization : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FName                                       Reference;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Hips;                                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeftUpLeg;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeftLeg;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeftFoot;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightUpLeg;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightLeg;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightFoot;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Spine;                                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeftArm;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeftForeArm;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeftHand;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightArm;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightForeArm;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightHand;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Head;                                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FHIKBoneTransform>                   BoneTransforms;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor)
	bool                                               Locked;                                                   // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        UnrealToHumanIKBoneMapping;                               // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FHIKBoneMapping>                     AdditionalBones;                                          // 0x01E3(0x0010) (ZeroConstructor)
	bool                                               LeftElbowInverted;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RightElbowInverted;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               LeftKneeInverted;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RightKneeInverted;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AdjustLeftShoulder;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AdjustLeftShoulder_Axis;                                  // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AdjustLeftShoulder_Angle;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AdjustRightShoulder;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AdjustRightShoulder_Axis;                                 // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AdjustRightShoulder_Angle;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SpineSquashNStretch;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NeckSquashNStretch;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpineJointsMinSquashNStretchFactor;                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpineJointsMaxSquashNStretchFactor;                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeckJointsMinSquashNStretchFactor;                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeckJointsMaxSquashNStretchFactor;                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInitFromSkeleton;                                        // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                InitFromSkeletonCount;                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HIKCharacterization");
		return ptr;
	}

};


// Class Engine.InheritableComponentHandler
// 0x0010 (0x0038 - 0x0028)
class UInheritableComponentHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InheritableComponentHandler");
		return ptr;
	}

};


// Class Engine.PlayerInput
// 0x0430 (0x0458 - 0x0028)
class UPlayerInput : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FKeyBind>                            DebugExecBindings;                                        // 0x01E3(0x0010) (ZeroConstructor, Config)
	TArray<struct FName>                               GamepadInvertedAxes;                                      // 0x01E3(0x0010) (ZeroConstructor, Config)
	TArray<struct FName>                               MouseInvertedAxes;                                        // 0x01E3(0x0010) (ZeroConstructor, Config)
	TArray<struct FName>                               InvertedCombinedAxisY;                                    // 0x01E3(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x265];                                     // 0x01F3(0x0265) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerInput");
		return ptr;
	}


	void SetMouseSensitivity(float Sensitivity);
	void SetForceFeedbackIntensity(float Intensity);
	void SetCombinedAxisScale(const struct FName& CombinedAxisName, float Scale);
	void SetBind(const struct FName& BindName, const class FString& Command);
	void InvertMouseAxis(const struct FName& AxisName);
	void InvertGamepadAxis(const struct FName& AxisName);
	void InvertCombinedAxisY(const struct FName& CombinedAxisName);
	void InvertCombinedAxisX(const struct FName& CombinedAxisName);
	void InvertAxisKey(const struct FKey& AxisKey);
	void ClearSmoothing();
};


// Class Engine.InputSettings
// 0x0098 (0x00C0 - 0x0028)
class UInputSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FInputAxisConfigEntry>               AxisConfig;                                               // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor, Config)
	unsigned char                                      bAltEnterTogglesFullscreen : 1;                           // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      bUseMouseForTouch : 1;                                    // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      bEnableMouseSmoothing : 1;                                // 0x01E3(0x0001) (Edit, Config)
	unsigned char                                      bEnableFOVScaling : 1;                                    // 0x01E3(0x0001) (Edit, Config)
	float                                              FOVScale;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DoubleClickTime;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FInputActionKeyMapping>              ActionMappings;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FInputAxisKeyMapping>                AxisMappings;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FInputCombinedAxisKeyMapping>        CombinedAxisMappings;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bAlwaysShowTouchInterface;                                // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShowConsoleOnFourFingerTap;                              // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FStringAssetReference                       DefaultTouchInterface;                                    // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FKey                                        ConsoleKey;                                               // 0x01E3(0x0020) (Config, Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputSettings");
		return ptr;
	}

};


// Class Engine.InterpCurveEdSetup
// 0x0018 (0x0040 - 0x0028)
class UInterpCurveEdSetup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FCurveEdTab>                         Tabs;                                                     // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpCurveEdSetup");
		return ptr;
	}

};


// Class Engine.InterpData
// 0x0048 (0x0070 - 0x0028)
class UInterpData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              InterpLength;                                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PathBuildTime;                                            // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class UInterpGroup*>                        InterpGroups;                                             // 0x01E3(0x0010) (ExportObject, ZeroConstructor)
	class UInterpCurveEdSetup*                         CurveEdSetup;                                             // 0x01E3(0x0008) (ExportObject, ZeroConstructor, IsPlainOldData)
	float                                              EdSectionStart;                                           // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EdSectionEnd;                                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShouldBakeAndPrune : 1;                                  // 0x01E3(0x0001) (Edit)
	class UInterpGroupDirector*                        CachedDirectorGroup;                                      // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpData");
		return ptr;
	}

};


// Class Engine.InterpFilter
// 0x0010 (0x0038 - 0x0028)
class UInterpFilter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter");
		return ptr;
	}

};


// Class Engine.InterpFilter_Classes
// 0x0000 (0x0038 - 0x0038)
class UInterpFilter_Classes : public UInterpFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter_Classes");
		return ptr;
	}

};


// Class Engine.InterpFilter_Custom
// 0x0000 (0x0038 - 0x0038)
class UInterpFilter_Custom : public UInterpFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter_Custom");
		return ptr;
	}

};


// Class Engine.InterpGroup
// 0x0028 (0x0050 - 0x0028)
class UInterpGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<class UInterpTrack*>                        InterpTracks;                                             // 0x01E3(0x0010) (ExportObject, ZeroConstructor)
	struct FName                                       GroupName;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      GroupColor;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCollapsed : 1;                                           // 0x01E3(0x0001)
	unsigned char                                      bVisible : 1;                                             // 0x01E3(0x0001) (Transient)
	unsigned char                                      bIsFolder : 1;                                            // 0x01E3(0x0001)
	unsigned char                                      bIsParented : 1;                                          // 0x01E3(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroup");
		return ptr;
	}

};


// Class Engine.InterpGroupCamera
// 0x0010 (0x0060 - 0x0050)
class UInterpGroupCamera : public UInterpGroup
{
public:
	unsigned char                                      UnknownData00[0x193];                                     // 0x0050(0x0193) MISSED OFFSET
	class UCameraAnim*                                 CameraAnimInst;                                           // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CompressTolerance;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupCamera");
		return ptr;
	}

};


// Class Engine.InterpGroupDirector
// 0x0000 (0x0050 - 0x0050)
class UInterpGroupDirector : public UInterpGroup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupDirector");
		return ptr;
	}

};


// Class Engine.InterpGroupInst
// 0x0020 (0x0048 - 0x0028)
class UInterpGroupInst : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UInterpGroup*                                Group;                                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      GroupActor;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInst");
		return ptr;
	}

};


// Class Engine.InterpGroupInstCamera
// 0x0000 (0x0048 - 0x0048)
class UInterpGroupInstCamera : public UInterpGroupInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInstCamera");
		return ptr;
	}

};


// Class Engine.InterpGroupInstDirector
// 0x0000 (0x0048 - 0x0048)
class UInterpGroupInstDirector : public UInterpGroupInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInstDirector");
		return ptr;
	}

};


// Class Engine.InterpTrack
// 0x0048 (0x0070 - 0x0028)
class UInterpTrack : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<class UInterpTrack*>                        SubTracks;                                                // 0x01E3(0x0010) (ZeroConstructor)
	class UClass*                                      TrackInstClass;                                           // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrackActiveCondition>                 ActiveCondition;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      TrackTitle;                                               // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      bOnePerGroup : 1;                                         // 0x01E3(0x0001)
	unsigned char                                      bDirGroupOnly : 1;                                        // 0x01E3(0x0001)
	unsigned char                                      bDisableTrack : 1;                                        // 0x01E3(0x0001)
	unsigned char                                      bIsSelected : 1;                                          // 0x01E3(0x0001) (Transient)
	unsigned char                                      bIsAnimControlTrack : 1;                                  // 0x01E3(0x0001)
	unsigned char                                      bSubTrackOnly : 1;                                        // 0x01E3(0x0001)
	unsigned char                                      bVisible : 1;                                             // 0x01E3(0x0001) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrack");
		return ptr;
	}

};


// Class Engine.InterpTrackBoolProp
// 0x0018 (0x0088 - 0x0070)
class UInterpTrackBoolProp : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	TArray<struct FBoolTrackKey>                       BoolTrack;                                                // 0x01E3(0x0010) (ZeroConstructor)
	struct FName                                       PropertyName;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackBoolProp");
		return ptr;
	}

};


// Class Engine.InterpTrackDirector
// 0x0018 (0x0088 - 0x0070)
class UInterpTrackDirector : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	TArray<struct FDirectorTrackCut>                   CutTrack;                                                 // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      bSimulateCameraCutsOnClients : 1;                         // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackDirector");
		return ptr;
	}

};


// Class Engine.InterpTrackEvent
// 0x0018 (0x0088 - 0x0070)
class UInterpTrackEvent : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	TArray<struct FEventTrackKey>                      EventTrack;                                               // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      bFireEventsWhenForwards : 1;                              // 0x01E3(0x0001) (Edit)
	unsigned char                                      bFireEventsWhenBackwards : 1;                             // 0x01E3(0x0001) (Edit)
	unsigned char                                      bFireEventsWhenJumpingForwards : 1;                       // 0x01E3(0x0001) (Edit)
	unsigned char                                      bUseCustomEventName : 1;                                  // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackEvent");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatBase
// 0x0020 (0x0090 - 0x0070)
class UInterpTrackFloatBase : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FInterpCurveFloat                           FloatTrack;                                               // 0x01E3(0x0018) (ZeroConstructor)
	float                                              CurveTension;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatBase");
		return ptr;
	}

};


// Class Engine.InterpTrackAnimControl
// 0x0020 (0x00B0 - 0x0090)
class UInterpTrackAnimControl : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	struct FName                                       SlotName;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimControlTrackKey>                AnimSeqs;                                                 // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      bSkipAnimNotifiers : 1;                                   // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackAnimControl");
		return ptr;
	}

};


// Class Engine.InterpTrackFade
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackFade : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	unsigned char                                      bPersistFade : 1;                                         // 0x01E3(0x0001) (Edit)
	unsigned char                                      bFadeAudio : 1;                                           // 0x01E3(0x0001) (Edit)
	struct FLinearColor                                FadeColor;                                                // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFade");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatAnimBPParam
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackFloatAnimBPParam : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	class UClass*                                      AnimBlueprintClass;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParamName;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatAnimBPParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatMaterialParam
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackFloatMaterialParam : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	TArray<class UMaterialInterface*>                  TargetMaterials;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FName                                       ParamName;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatParticleParam
// 0x0008 (0x0098 - 0x0090)
class UInterpTrackFloatParticleParam : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	struct FName                                       ParamName;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatParticleParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatProp
// 0x0008 (0x0098 - 0x0090)
class UInterpTrackFloatProp : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	struct FName                                       PropertyName;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatProp");
		return ptr;
	}

};


// Class Engine.InterpTrackMove
// 0x0058 (0x00C8 - 0x0070)
class UInterpTrackMove : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FInterpCurveVector                          PosTrack;                                                 // 0x01E3(0x0018) (ZeroConstructor)
	struct FInterpCurveVector                          EulerTrack;                                               // 0x01E3(0x0018) (ZeroConstructor)
	struct FInterpLookupTrack                          LookupTrack;                                              // 0x01E3(0x0010)
	struct FName                                       LookAtGroupName;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LinCurveTension;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngCurveTension;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseQuatInterpolation : 1;                                // 0x01E3(0x0001) (Edit)
	unsigned char                                      bShowArrowAtKeys : 1;                                     // 0x01E3(0x0001) (Edit)
	unsigned char                                      bDisableMovement : 1;                                     // 0x01E3(0x0001) (Edit)
	unsigned char                                      bShowTranslationOnCurveEd : 1;                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bShowRotationOnCurveEd : 1;                               // 0x01E3(0x0001) (Edit)
	unsigned char                                      bHide3DTrack : 1;                                         // 0x01E3(0x0001) (Edit)
	TEnumAsByte<EInterpTrackMoveRotMode>               RotMode;                                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMove");
		return ptr;
	}

};


// Class Engine.InterpTrackMoveAxis
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackMoveAxis : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	TEnumAsByte<EInterpMoveAxis>                       MoveAxis;                                                 // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FInterpLookupTrack                          LookupTrack;                                              // 0x01E3(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMoveAxis");
		return ptr;
	}

};


// Class Engine.InterpTrackLinearColorBase
// 0x0020 (0x0090 - 0x0070)
class UInterpTrackLinearColorBase : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FInterpCurveLinearColor                     LinearColorTrack;                                         // 0x01E3(0x0018) (ZeroConstructor)
	float                                              CurveTension;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackLinearColorBase");
		return ptr;
	}

};


// Class Engine.InterpTrackLinearColorProp
// 0x0008 (0x0098 - 0x0090)
class UInterpTrackLinearColorProp : public UInterpTrackLinearColorBase
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	struct FName                                       PropertyName;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackLinearColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackParticleReplay
// 0x0010 (0x0080 - 0x0070)
class UInterpTrackParticleReplay : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	TArray<struct FParticleReplayTrackKey>             TrackKeys;                                                // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackParticleReplay");
		return ptr;
	}

};


// Class Engine.InterpTrackToggle
// 0x0018 (0x0088 - 0x0070)
class UInterpTrackToggle : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	TArray<struct FToggleTrackKey>                     ToggleTrack;                                              // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      bActivateSystemEachUpdate : 1;                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bActivateWithJustAttachedFlag : 1;                        // 0x01E3(0x0001) (Edit)
	unsigned char                                      bFireEventsWhenForwards : 1;                              // 0x01E3(0x0001) (Edit)
	unsigned char                                      bFireEventsWhenBackwards : 1;                             // 0x01E3(0x0001) (Edit)
	unsigned char                                      bFireEventsWhenJumpingForwards : 1;                       // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackToggle");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorBase
// 0x0020 (0x0090 - 0x0070)
class UInterpTrackVectorBase : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FInterpCurveVector                          VectorTrack;                                              // 0x01E3(0x0018) (ZeroConstructor)
	float                                              CurveTension;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorBase");
		return ptr;
	}

};


// Class Engine.InterpTrackAudioMaster
// 0x0000 (0x0090 - 0x0090)
class UInterpTrackAudioMaster : public UInterpTrackVectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackAudioMaster");
		return ptr;
	}

};


// Class Engine.InterpTrackColorProp
// 0x0008 (0x0098 - 0x0090)
class UInterpTrackColorProp : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	struct FName                                       PropertyName;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackColorScale
// 0x0000 (0x0090 - 0x0090)
class UInterpTrackColorScale : public UInterpTrackVectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackColorScale");
		return ptr;
	}

};


// Class Engine.InterpTrackSound
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackSound : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	TArray<struct FSoundTrackKey>                      Sounds;                                                   // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      bPlayOnReverse : 1;                                       // 0x01E3(0x0001) (Edit)
	unsigned char                                      bContinueSoundOnMatineeEnd : 1;                           // 0x01E3(0x0001) (Edit)
	unsigned char                                      bSuppressSubtitles : 1;                                   // 0x01E3(0x0001) (Edit)
	unsigned char                                      bTreatAsDialogue : 1;                                     // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAttach : 1;                                              // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSound");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorMaterialParam
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackVectorMaterialParam : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	TArray<class UMaterialInterface*>                  TargetMaterials;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FName                                       ParamName;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorProp
// 0x0008 (0x0098 - 0x0090)
class UInterpTrackVectorProp : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	struct FName                                       PropertyName;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackVisibility
// 0x0018 (0x0088 - 0x0070)
class UInterpTrackVisibility : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	TArray<struct FVisibilityTrackKey>                 VisibilityTrack;                                          // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      bFireEventsWhenForwards : 1;                              // 0x01E3(0x0001) (Edit)
	unsigned char                                      bFireEventsWhenBackwards : 1;                             // 0x01E3(0x0001) (Edit)
	unsigned char                                      bFireEventsWhenJumpingForwards : 1;                       // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVisibility");
		return ptr;
	}

};


// Class Engine.InterpTrackInst
// 0x0000 (0x0028 - 0x0028)
class UInterpTrackInst : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInst");
		return ptr;
	}

};


// Class Engine.InterpTrackInstAnimControl
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAnimControl : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstAnimControl");
		return ptr;
	}

};


// Class Engine.InterpTrackInstAudioMaster
// 0x0000 (0x0028 - 0x0028)
class UInterpTrackInstAudioMaster : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstAudioMaster");
		return ptr;
	}

};


// Class Engine.InterpTrackInstColorScale
// 0x0000 (0x0028 - 0x0028)
class UInterpTrackInstColorScale : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstColorScale");
		return ptr;
	}

};


// Class Engine.InterpTrackInstDirector
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstDirector : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstDirector");
		return ptr;
	}

};


// Class Engine.InterpTrackInstEvent
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstEvent : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstEvent");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFade
// 0x0000 (0x0028 - 0x0028)
class UInterpTrackInstFade : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFade");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatAnimBPParam
// 0x0018 (0x0040 - 0x0028)
class UInterpTrackInstFloatAnimBPParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UAnimInstance*                               AnimScriptInstance;                                       // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatAnimBPParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatMaterialParam
// 0x0038 (0x0060 - 0x0028)
class UInterpTrackInstFloatMaterialParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            MaterialInstances;                                        // 0x01E3(0x0010) (ZeroConstructor)
	TArray<float>                                      ResetFloats;                                              // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FPrimitiveMaterialRef>               PrimitiveMaterialRefs;                                    // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatParticleParam
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstFloatParticleParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatParticleParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstMove
// 0x0018 (0x0040 - 0x0028)
class UInterpTrackInstMove : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FVector                                     ResetLocation;                                            // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstMove");
		return ptr;
	}

};


// Class Engine.InterpTrackInstParticleReplay
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstParticleReplay : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstParticleReplay");
		return ptr;
	}

};


// Class Engine.InterpTrackInstProperty
// 0x0010 (0x0038 - 0x0028)
class UInterpTrackInstProperty : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UProperty*                                   InterpProperty;                                           // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstProperty");
		return ptr;
	}

};


// Class Engine.InterpTrackInstBoolProp
// 0x0018 (0x0050 - 0x0038)
class UInterpTrackInstBoolProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	class UBoolProperty*                               BoolProperty;                                             // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               ResetBool;                                                // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstBoolProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstColorProp
// 0x0010 (0x0048 - 0x0038)
class UInterpTrackInstColorProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FColor                                      ResetColor;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatProp
// 0x0010 (0x0048 - 0x0038)
class UInterpTrackInstFloatProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	float                                              ResetFloat;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstLinearColorProp
// 0x0018 (0x0050 - 0x0038)
class UInterpTrackInstLinearColorProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FLinearColor                                ResetColor;                                               // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstLinearColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVectorProp
// 0x0018 (0x0050 - 0x0038)
class UInterpTrackInstVectorProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FVector                                     ResetVector;                                              // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVectorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstSound
// 0x0010 (0x0038 - 0x0028)
class UInterpTrackInstSound : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              LastUpdatePosition;                                       // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSound");
		return ptr;
	}

};


// Class Engine.InterpTrackInstToggle
// 0x0010 (0x0038 - 0x0028)
class UInterpTrackInstToggle : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TEnumAsByte<ETrackToggleAction>                    Action;                                                   // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LastUpdatePosition;                                       // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstToggle");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVectorMaterialParam
// 0x0038 (0x0060 - 0x0028)
class UInterpTrackInstVectorMaterialParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            MaterialInstances;                                        // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             ResetVectors;                                             // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FPrimitiveMaterialRef>               PrimitiveMaterialRefs;                                    // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVectorMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVisibility
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstVisibility : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TEnumAsByte<EVisibilityTrackAction>                Action;                                                   // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVisibility");
		return ptr;
	}

};


// Class Engine.IntSerialization
// 0x0028 (0x0050 - 0x0028)
class UIntSerialization : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	uint16_t                                           UnsignedInt16Variable;                                    // 0x01E3(0x0002) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           UnsignedInt32Variable;                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           UnsignedInt64Variable;                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             SignedInt8Variable;                                       // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	int16_t                                            SignedInt16Variable;                                      // 0x01E3(0x0002) (ZeroConstructor, IsPlainOldData)
	int64_t                                            SignedInt64Variable;                                      // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnsignedInt8Variable;                                     // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.IntSerialization");
		return ptr;
	}

};


// Class Engine.Layer
// 0x0020 (0x0048 - 0x0028)
class ULayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FName                                       LayerName;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsVisible : 1;                                           // 0x01E3(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Layer");
		return ptr;
	}

};


// Class Engine.LevelStreaming
// 0x0368 (0x0390 - 0x0028)
class ULevelStreaming : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FName                                       PackageName;                                              // 0x01E3(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TAssetPtr<class UWorld>                            WorldAsset;                                               // 0x01E3(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FName                                       PackageNameToLoad;                                        // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LODPackageNames;                                          // 0x01E3(0x0010) (ZeroConstructor)
	struct FTransform                                  LevelTransform;                                           // 0x01E3(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01 : 3;                                        // 0x01E3(0x0001)
	unsigned char                                      bShouldBeVisibleInEditor : 1;                             // 0x01E3(0x0001)
	unsigned char                                      Blocked : 1;                                              // 0x01E3(0x0001)
	unsigned char                                      bShouldBeLoaded : 1;                                      // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bShouldBeVisible : 1;                                     // 0x01E3(0x0001) (BlueprintVisible)
	unsigned char                                      bShouldBlockOnLoad : 1;                                   // 0x01E3(0x0001) (BlueprintVisible)
	int                                                LevelLODIndex;                                            // 0x01E3(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bDisableDistanceStreaming : 1;                            // 0x01E3(0x0001) (BlueprintVisible, Transient)
	unsigned char                                      UnknownData02 : 2;                                        // 0x01E3(0x0001)
	unsigned char                                      bDrawOnLevelStatusMap : 1;                                // 0x01E3(0x0001) (Edit)
	struct FColor                                      DrawColor;                                                // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FLinearColor                                LevelColor;                                               // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class ALevelStreamingVolume*>               EditorStreamingVolumes;                                   // 0x01E3(0x0010) (Edit, ZeroConstructor)
	float                                              MinTimeBetweenVolumeUnloadRequests;                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              Keywords;                                                 // 0x01E3(0x0010) (ZeroConstructor)
	struct FScriptMulticastDelegate                    OnLevelLoaded;                                            // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLevelUnloaded;                                          // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLevelShown;                                             // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLevelHidden;                                            // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class ULevel*                                      LoadedLevel;                                              // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1A5];                                     // 0x01EB(0x01A5) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreaming");
		return ptr;
	}


	bool IsStreamingStatePending();
	bool IsLevelVisible();
	bool IsLevelLoaded();
	class ALevelScriptActor* GetLevelScriptActor();
	class ULevelStreaming* CreateInstance(const class FString& UniqueInstanceName);
};


// Class Engine.LevelStreamingAlwaysLoaded
// 0x0000 (0x0390 - 0x0390)
class ULevelStreamingAlwaysLoaded : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingAlwaysLoaded");
		return ptr;
	}

};


// Class Engine.LevelStreamingKismet
// 0x0010 (0x03A0 - 0x0390)
class ULevelStreamingKismet : public ULevelStreaming
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0390(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingKismet");
		return ptr;
	}

};


// Class Engine.LevelStreamingPersistent
// 0x0000 (0x0390 - 0x0390)
class ULevelStreamingPersistent : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingPersistent");
		return ptr;
	}

};


// Class Engine.LightmappedSurfaceCollection
// 0x0018 (0x0040 - 0x0028)
class ULightmappedSurfaceCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UModel*                                      SourceModel;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmappedSurfaceCollection");
		return ptr;
	}

};


// Class Engine.LightmassPrimitiveSettingsObject
// 0x0018 (0x0040 - 0x0028)
class ULightmassPrimitiveSettingsObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassPrimitiveSettingsObject");
		return ptr;
	}

};


// Class Engine.LocalMessage
// 0x0000 (0x0028 - 0x0028)
class ULocalMessage : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalMessage");
		return ptr;
	}

};


// Class Engine.EngineMessage
// 0x0080 (0x00A8 - 0x0028)
class UEngineMessage : public ULocalMessage
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class FString                                      FailedPlaceMessage;                                       // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      MaxedOutMessage;                                          // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      EnteredMessage;                                           // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      LeftMessage;                                              // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      GlobalNameChange;                                         // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      SpecEnteredMessage;                                       // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      NewPlayerMessage;                                         // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineMessage");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAbs
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionAbs : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Input;                                                    // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAbs");
		return ptr;
	}

};


// Class Engine.MaterialExpressionActorPositionWS
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionActorPositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionActorPositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAdd
// 0x0078 (0x00E8 - 0x0070)
class UMaterialExpressionAdd : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            A;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            B;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	float                                              ConstA;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstB;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAdd");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAppendVector
// 0x0070 (0x00E0 - 0x0070)
class UMaterialExpressionAppendVector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            A;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            B;                                                        // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAppendVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAtmosphericFogColor
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionAtmosphericFogColor : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            WorldPosition;                                            // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAtmosphericFogColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBlackBody
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionBlackBody : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Temp;                                                     // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBlackBody");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBoneMatrix
// 0x0010 (0x0080 - 0x0070)
class UMaterialExpressionBoneMatrix : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	int                                                ReferenceIndex;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPosition;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBoneMatrix");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBreakMaterialAttributes
// 0x0080 (0x00F0 - 0x0070)
class UMaterialExpressionBreakMaterialAttributes : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Struct;                                                   // 0x01E3(0x0038) (ZeroConstructor)
	struct FMaterialAttributesInput                    MaterialAttributes;                                       // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBreakMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBumpOffset
// 0x00B8 (0x0128 - 0x0070)
class UMaterialExpressionBumpOffset : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Coordinate;                                               // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Height;                                                   // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            HeightRatioInput;                                         // 0x01E3(0x0038) (ZeroConstructor)
	float                                              HeightRatio;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReferencePlane;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ConstCoordinate;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBumpOffset");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCameraPositionWS
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionCameraPositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCameraPositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCameraVectorWS
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionCameraVectorWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCameraVectorWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCausticTexture
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionCausticTexture : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Coordinates;                                              // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCausticTexture");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCausticTextureCoordinate
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionCausticTextureCoordinate : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCausticTextureCoordinate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCeil
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionCeil : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Input;                                                    // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCeil");
		return ptr;
	}

};


// Class Engine.MaterialExpressionClamp
// 0x00B8 (0x0128 - 0x0070)
class UMaterialExpressionClamp : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Input;                                                    // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Min;                                                      // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Max;                                                      // 0x01E3(0x0038) (ZeroConstructor)
	TEnumAsByte<EClampMode>                            ClampMode;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDefault;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDefault;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionClamp");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCollectionParameter
// 0x0020 (0x0090 - 0x0070)
class UMaterialExpressionCollectionParameter : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	class UMaterialParameterCollection*                Collection;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ParameterId;                                              // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCollectionParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionComment
// 0x0028 (0x0098 - 0x0070)
class UMaterialExpressionComment : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	int                                                SizeX;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SizeY;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      Text;                                                     // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FLinearColor                                CommentColor;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionComment");
		return ptr;
	}

};


// Class Engine.MaterialExpressionComponentMask
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionComponentMask : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Input;                                                    // 0x01E3(0x0038) (ZeroConstructor)
	unsigned char                                      R : 1;                                                    // 0x01E3(0x0001) (Edit)
	unsigned char                                      G : 1;                                                    // 0x01E3(0x0001) (Edit)
	unsigned char                                      B : 1;                                                    // 0x01E3(0x0001) (Edit)
	unsigned char                                      A : 1;                                                    // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionComponentMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant
// 0x0008 (0x0078 - 0x0070)
class UMaterialExpressionConstant : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	float                                              R;                                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant2Vector
// 0x0008 (0x0078 - 0x0070)
class UMaterialExpressionConstant2Vector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	float                                              R;                                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              G;                                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant2Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant3Vector
// 0x0010 (0x0080 - 0x0070)
class UMaterialExpressionConstant3Vector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FLinearColor                                Constant;                                                 // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant3Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant4Vector
// 0x0010 (0x0080 - 0x0070)
class UMaterialExpressionConstant4Vector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FLinearColor                                Constant;                                                 // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant4Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstantBiasScale
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionConstantBiasScale : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Input;                                                    // 0x01E3(0x0038) (ZeroConstructor)
	float                                              Bias;                                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstantBiasScale");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCosine
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionCosine : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Input;                                                    // 0x01E3(0x0038) (ZeroConstructor)
	float                                              Period;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCosine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCrossProduct
// 0x0070 (0x00E0 - 0x0070)
class UMaterialExpressionCrossProduct : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            A;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            B;                                                        // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCrossProduct");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCustom
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionCustom : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	class FString                                      Code;                                                     // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<ECustomMaterialOutputType>             OutputType;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      Description;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCustomInput>                        Inputs;                                                   // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCustom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCustomVelocity
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionCustomVelocity : public UMaterialExpressionCustomOutput
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Velocity2D;                                               // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCustomVelocity");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDDX
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionDDX : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Value;                                                    // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDDX");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDDY
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionDDY : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Value;                                                    // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDDY");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDecalMipmapLevel
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionDecalMipmapLevel : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            TextureSize;                                              // 0x01E3(0x0038) (ZeroConstructor)
	float                                              ConstWidth;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstHeight;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDecalMipmapLevel");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDepthFade
// 0x0078 (0x00E8 - 0x0070)
class UMaterialExpressionDepthFade : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            InOpacity;                                                // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            FadeDistance;                                             // 0x01E3(0x0038) (ZeroConstructor)
	float                                              OpacityDefault;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeDistanceDefault;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthFade");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDepthOfFieldFunction
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionDepthOfFieldFunction : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	TEnumAsByte<EDepthOfFieldFunctionValue>            FunctionValue;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FExpressionInput                            Depth;                                                    // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthOfFieldFunction");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDeriveNormalZ
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionDeriveNormalZ : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            InXY;                                                     // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDeriveNormalZ");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDesaturation
// 0x0080 (0x00F0 - 0x0070)
class UMaterialExpressionDesaturation : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Input;                                                    // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Fraction;                                                 // 0x01E3(0x0038) (ZeroConstructor)
	struct FLinearColor                                LuminanceFactors;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDesaturation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistance
// 0x0070 (0x00E0 - 0x0070)
class UMaterialExpressionDistance : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            A;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            B;                                                        // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistance");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistanceCullFade
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionDistanceCullFade : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistanceCullFade");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistanceFieldGradient
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionDistanceFieldGradient : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Position;                                                 // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistanceFieldGradient");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistanceToNearestSurface
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionDistanceToNearestSurface : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Position;                                                 // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistanceToNearestSurface");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDivide
// 0x0078 (0x00E8 - 0x0070)
class UMaterialExpressionDivide : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            A;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            B;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	float                                              ConstA;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstB;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDivide");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDotProduct
// 0x0070 (0x00E0 - 0x0070)
class UMaterialExpressionDotProduct : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            A;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            B;                                                        // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDotProduct");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDynamicParameter
// 0x0020 (0x0090 - 0x0070)
class UMaterialExpressionDynamicParameter : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	TArray<class FString>                              ParamNames;                                               // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	struct FLinearColor                                DefaultValue;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDynamicParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionEyeAdaptation
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionEyeAdaptation : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionEyeAdaptation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFeatureLevelSwitch
// 0x0118 (0x0188 - 0x0070)
class UMaterialExpressionFeatureLevelSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Default;                                                  // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Inputs[0x4];                                              // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFeatureLevelSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFloor
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionFloor : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Input;                                                    // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFloor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFmod
// 0x0070 (0x00E0 - 0x0070)
class UMaterialExpressionFmod : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            A;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            B;                                                        // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFmod");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFontSample
// 0x0010 (0x0080 - 0x0070)
class UMaterialExpressionFontSample : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	class UFont*                                       Font;                                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FontTexturePage;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFontSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFontSampleParameter
// 0x0020 (0x00A0 - 0x0080)
class UMaterialExpressionFontSampleParameter : public UMaterialExpressionFontSample
{
public:
	unsigned char                                      UnknownData00[0x163];                                     // 0x0080(0x0163) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Group;                                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFontSampleParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFrac
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionFrac : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Input;                                                    // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFrac");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFresnel
// 0x00B8 (0x0128 - 0x0070)
class UMaterialExpressionFresnel : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            ExponentIn;                                               // 0x01E3(0x0038) (ZeroConstructor)
	float                                              Exponent;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FExpressionInput                            BaseReflectFractionIn;                                    // 0x01E3(0x0038) (ZeroConstructor)
	float                                              BaseReflectFraction;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FExpressionInput                            Normal;                                                   // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFresnel");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFunctionInput
// 0x0090 (0x0100 - 0x0070)
class UMaterialExpressionFunctionInput : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Preview;                                                  // 0x01E3(0x0038) (ZeroConstructor)
	class FString                                      InputName;                                                // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class FString                                      Description;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       Id;                                                       // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFunctionInputType>                    InputType;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    PreviewValue;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUsePreviewValueAsDefault : 1;                            // 0x01E3(0x0001) (Edit)
	int                                                SortPriority;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCompilingFunctionPreview : 1;                            // 0x01E3(0x0001) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFunctionInput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFunctionOutput
// 0x0078 (0x00E8 - 0x0070)
class UMaterialExpressionFunctionOutput : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	class FString                                      OutputName;                                               // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class FString                                      Description;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor)
	int                                                SortPriority;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FExpressionInput                            A;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	unsigned char                                      bLastPreviewed : 1;                                       // 0x01E3(0x0001)
	struct FGuid                                       Id;                                                       // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFunctionOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionGIReplace
// 0x00A8 (0x0118 - 0x0070)
class UMaterialExpressionGIReplace : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Default;                                                  // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            StaticIndirect;                                           // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            DynamicIndirect;                                          // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionGIReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionHash
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionHash : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Input;                                                    // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionHash");
		return ptr;
	}

};


// Class Engine.MaterialExpressionIf
// 0x0128 (0x0198 - 0x0070)
class UMaterialExpressionIf : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            A;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            B;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            AGreaterThanB;                                            // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            AEqualsB;                                                 // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            ALessThanB;                                               // 0x01E3(0x0038) (ZeroConstructor)
	float                                              EqualsThreshold;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstB;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstAEqualsB;                                            // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionIf");
		return ptr;
	}

};


// Class Engine.MaterialExpressionIfShadowPass
// 0x0070 (0x00E0 - 0x0070)
class UMaterialExpressionIfShadowPass : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Shadow;                                                   // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            NotShadow;                                                // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionIfShadowPass");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightmapUVs
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionLightmapUVs : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightmapUVs");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightmassReplace
// 0x0070 (0x00E0 - 0x0070)
class UMaterialExpressionLightmassReplace : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Realtime;                                                 // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Lightmass;                                                // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightmassReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightVector
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionLightVector : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLinearInterpolate
// 0x00B8 (0x0128 - 0x0070)
class UMaterialExpressionLinearInterpolate : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            A;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            B;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Alpha;                                                    // 0x01E3(0x0038) (ZeroConstructor)
	float                                              ConstA;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstB;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstAlpha;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLinearInterpolate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLocalDisturbanceTexture
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionLocalDisturbanceTexture : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Coordinates;                                              // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLocalDisturbanceTexture");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLogarithm2
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionLogarithm2 : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            X;                                                        // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLogarithm2");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLowResClouds
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionLowResClouds : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Coordinates;                                              // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLowResClouds");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLumaAvg
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionLumaAvg : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLumaAvg");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMakeMaterialAttributes
// 0x0578 (0x05E8 - 0x0070)
class UMaterialExpressionMakeMaterialAttributes : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            BaseColor;                                                // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Metallic;                                                 // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Specular;                                                 // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Roughness;                                                // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            EmissiveColor;                                            // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Opacity;                                                  // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            OpacityMask;                                              // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Normal;                                                   // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            WorldPositionOffset;                                      // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            WorldDisplacement;                                        // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            TessellationMultiplier;                                   // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            SubsurfaceColor;                                          // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            ClearCoat;                                                // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            ClearCoatRoughness;                                       // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            AmbientOcclusion;                                         // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Refraction;                                               // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            CustomizedUVs[0x8];                                       // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            PixelDepthOffset;                                         // 0x01E3(0x0038) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x3CD];                                     // 0x021B(0x03CD) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMakeMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMaterialFunctionCall
// 0x0028 (0x0098 - 0x0070)
class UMaterialExpressionMaterialFunctionCall : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	class UMaterialFunction*                           MaterialFunction;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FFunctionExpressionInput>            FunctionInputs;                                           // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FFunctionExpressionOutput>           FunctionOutputs;                                          // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialFunctionCall");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMax
// 0x0078 (0x00E8 - 0x0070)
class UMaterialExpressionMax : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            A;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            B;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	float                                              ConstA;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstB;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMax");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMin
// 0x0078 (0x00E8 - 0x0070)
class UMaterialExpressionMin : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            A;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            B;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	float                                              ConstA;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstB;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMin");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMultiply
// 0x0078 (0x00E8 - 0x0070)
class UMaterialExpressionMultiply : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            A;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            B;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	float                                              ConstA;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstB;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMultiply");
		return ptr;
	}

};


// Class Engine.MaterialExpressionNoise
// 0x0090 (0x0100 - 0x0070)
class UMaterialExpressionNoise : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Position;                                                 // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            FilterWidth;                                              // 0x01E3(0x0038) (ZeroConstructor)
	float                                              Scale;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Quality;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENoiseFunction>                        NoiseFunction;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bTurbulence : 1;                                          // 0x01E3(0x0001) (Edit)
	int                                                Levels;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OutputMin;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OutputMax;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LevelScale;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionNoise");
		return ptr;
	}

};


// Class Engine.MaterialExpressionNormalize
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionNormalize : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            VectorInput;                                              // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionNormalize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectBounds
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionObjectBounds : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectBounds");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectOrientation
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionObjectOrientation : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectOrientation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectPositionWS
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionObjectPositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectPositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectRadius
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionObjectRadius : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectRadius");
		return ptr;
	}

};


// Class Engine.MaterialExpressionOneMinus
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionOneMinus : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Input;                                                    // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionOneMinus");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPanner
// 0x0080 (0x00F0 - 0x0070)
class UMaterialExpressionPanner : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Coordinate;                                               // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Time;                                                     // 0x01E3(0x0038) (ZeroConstructor)
	float                                              SpeedX;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpeedY;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ConstCoordinate;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFractionalPart;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPanner");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParameter
// 0x0020 (0x0090 - 0x0070)
class UMaterialExpressionParameter : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Group;                                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionScalarParameter
// 0x0010 (0x00A0 - 0x0090)
class UMaterialExpressionScalarParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	float                                              DefaultValue;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SliderMin;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SliderMax;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScalarParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticBoolParameter
// 0x0008 (0x0098 - 0x0090)
class UMaterialExpressionStaticBoolParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	unsigned char                                      DefaultValue : 1;                                         // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticBoolParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticSwitchParameter
// 0x0070 (0x0108 - 0x0098)
class UMaterialExpressionStaticSwitchParameter : public UMaterialExpressionStaticBoolParameter
{
public:
	unsigned char                                      UnknownData00[0x14B];                                     // 0x0098(0x014B) MISSED OFFSET
	struct FExpressionInput                            A;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            B;                                                        // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticSwitchParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticComponentMaskParameter
// 0x0040 (0x00D0 - 0x0090)
class UMaterialExpressionStaticComponentMaskParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	struct FExpressionInput                            Input;                                                    // 0x01E3(0x0038) (ZeroConstructor)
	unsigned char                                      DefaultR : 1;                                             // 0x01E3(0x0001) (Edit)
	unsigned char                                      DefaultG : 1;                                             // 0x01E3(0x0001) (Edit)
	unsigned char                                      DefaultB : 1;                                             // 0x01E3(0x0001) (Edit)
	unsigned char                                      DefaultA : 1;                                             // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticComponentMaskParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVectorParameter
// 0x0010 (0x00A0 - 0x0090)
class UMaterialExpressionVectorParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	struct FLinearColor                                DefaultValue;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVectorParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleColor
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionParticleColor : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleDirection
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionParticleDirection : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleDirection");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleMacroUV
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionParticleMacroUV : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleMacroUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleMotionBlurFade
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionParticleMotionBlurFade : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleMotionBlurFade");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticlePositionWS
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionParticlePositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticlePositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleRadius
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionParticleRadius : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleRadius");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleRelativeTime
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionParticleRelativeTime : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleRelativeTime");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSize
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionParticleSize : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSpeed
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionParticleSpeed : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSpeed");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPerInstanceFadeAmount
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionPerInstanceFadeAmount : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPerInstanceFadeAmount");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPerInstanceRandom
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionPerInstanceRandom : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPerInstanceRandom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPixelDepth
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionPixelDepth : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPixelDepth");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPixelNormalWS
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionPixelNormalWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPixelNormalWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPower
// 0x0078 (0x00E8 - 0x0070)
class UMaterialExpressionPower : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Base;                                                     // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Exponent;                                                 // 0x01E3(0x0038) (ZeroConstructor)
	float                                              ConstExponent;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPower");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPrecomputedAOMask
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionPrecomputedAOMask : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPrecomputedAOMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionQualitySwitch
// 0x00E0 (0x0150 - 0x0070)
class UMaterialExpressionQualitySwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Default;                                                  // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Inputs[0x3];                                              // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionQualitySwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionReflectionVectorWS
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionReflectionVectorWS : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            CustomWorldNormal;                                        // 0x01E3(0x0038) (ZeroConstructor)
	unsigned char                                      bNormalizeCustomWorldNormal : 1;                          // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionReflectionVectorWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRotateAboutAxis
// 0x00E8 (0x0158 - 0x0070)
class UMaterialExpressionRotateAboutAxis : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            NormalizedRotationAxis;                                   // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            RotationAngle;                                            // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            PivotPoint;                                               // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Position;                                                 // 0x01E3(0x0038) (ZeroConstructor)
	float                                              Period;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRotateAboutAxis");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRotator
// 0x0080 (0x00F0 - 0x0070)
class UMaterialExpressionRotator : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Coordinate;                                               // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Time;                                                     // 0x01E3(0x0038) (ZeroConstructor)
	float                                              CenterX;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CenterY;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ConstCoordinate;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRotator");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneColor
// 0x0080 (0x00F0 - 0x0070)
class UMaterialExpressionSceneColor : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	TEnumAsByte<EMaterialSceneAttributeInputMode>      InputMode;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FExpressionInput                            Input;                                                    // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            OffsetFraction;                                           // 0x01E3(0x0038) (ZeroConstructor, Deprecated)
	struct FVector2D                                   ConstInput;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneDepth
// 0x0080 (0x00F0 - 0x0070)
class UMaterialExpressionSceneDepth : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	TEnumAsByte<EMaterialSceneAttributeInputMode>      InputMode;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FExpressionInput                            Input;                                                    // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Coordinates;                                              // 0x01E3(0x0038) (ZeroConstructor, Deprecated)
	struct FVector2D                                   ConstInput;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneDepth");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneTexelSize
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionSceneTexelSize : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneTexelSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneTexture
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionSceneTexture : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Coordinates;                                              // 0x01E3(0x0038) (ZeroConstructor)
	TEnumAsByte<ESceneTextureId>                       SceneTextureId;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bClampUVs;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFiltered;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneTexture");
		return ptr;
	}

};


// Class Engine.MaterialExpressionScreenPosition
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionScreenPosition : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScreenPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSine
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionSine : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Input;                                                    // 0x01E3(0x0038) (ZeroConstructor)
	float                                              Period;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSpeedTree
// 0x0010 (0x0080 - 0x0070)
class UMaterialExpressionSpeedTree : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	TEnumAsByte<ESpeedTreeGeometryType>                GeometryType;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpeedTreeWindType>                    WindType;                                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpeedTreeLODType>                     LODType;                                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BillboardThreshold;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAccurateWindVelocities;                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSpeedTree");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSphereMask
// 0x00E8 (0x0158 - 0x0070)
class UMaterialExpressionSphereMask : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            A;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            B;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Radius;                                                   // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Hardness;                                                 // 0x01E3(0x0038) (ZeroConstructor)
	float                                              AttenuationRadius;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HardnessPercent;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSphereMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSphericalParticleOpacity
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionSphericalParticleOpacity : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Density;                                                  // 0x01E3(0x0038) (ZeroConstructor)
	float                                              ConstantDensity;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSphericalParticleOpacity");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSquareRoot
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionSquareRoot : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Input;                                                    // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSquareRoot");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticBool
// 0x0008 (0x0078 - 0x0070)
class UMaterialExpressionStaticBool : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	unsigned char                                      Value : 1;                                                // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticBool");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticSwitch
// 0x00B0 (0x0120 - 0x0070)
class UMaterialExpressionStaticSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	unsigned char                                      DefaultValue : 1;                                         // 0x01E3(0x0001) (Edit)
	struct FExpressionInput                            A;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            B;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Value;                                                    // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSubtract
// 0x0078 (0x00E8 - 0x0070)
class UMaterialExpressionSubtract : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            A;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            B;                                                        // 0x01E3(0x0038) (ZeroConstructor)
	float                                              ConstA;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstB;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSubtract");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureBase
// 0x0010 (0x0080 - 0x0070)
class UMaterialExpressionTextureBase : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	class UTexture*                                    Texture;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMaterialSamplerType>                  SamplerType;                                              // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsDefaultMeshpaintTexture : 1;                            // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureBase");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureObject
// 0x0000 (0x0080 - 0x0080)
class UMaterialExpressionTextureObject : public UMaterialExpressionTextureBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureObject");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSample
// 0x0128 (0x01A8 - 0x0080)
class UMaterialExpressionTextureSample : public UMaterialExpressionTextureBase
{
public:
	unsigned char                                      UnknownData00[0x163];                                     // 0x0080(0x0163) MISSED OFFSET
	struct FExpressionInput                            Coordinates;                                              // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            TextureObject;                                            // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            MipValue;                                                 // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            CoordinatesDX;                                            // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            CoordinatesDY;                                            // 0x01E3(0x0038) (ZeroConstructor)
	TEnumAsByte<ETextureMipValueMode>                  MipValueMode;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESamplerSourceMode>                    SamplerSource;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ConstCoordinate;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ConstMipValue;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSubUV
// 0x0008 (0x01B0 - 0x01A8)
class UMaterialExpressionParticleSubUV : public UMaterialExpressionTextureSample
{
public:
	unsigned char                                      UnknownData00[0x3B];                                      // 0x01A8(0x003B) MISSED OFFSET
	unsigned char                                      bBlend : 1;                                               // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSubUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPredicatedTextureSample
// 0x0040 (0x01E8 - 0x01A8)
class UMaterialExpressionPredicatedTextureSample : public UMaterialExpressionTextureSample
{
public:
	unsigned char                                      UnknownData00[0x3B];                                      // 0x01A8(0x003B) MISSED OFFSET
	struct FExpressionInput                            Predicate;                                                // 0x01E3(0x0038) (ZeroConstructor)
	struct FColor                                      DefaultColour;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x01E7(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPredicatedTextureSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameter
// 0x0020 (0x01C8 - 0x01A8)
class UMaterialExpressionTextureSampleParameter : public UMaterialExpressionTextureSample
{
public:
	unsigned char                                      UnknownData00[0x3B];                                      // 0x01A8(0x003B) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Group;                                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureObjectParameter
// 0x0000 (0x01C8 - 0x01C8)
class UMaterialExpressionTextureObjectParameter : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureObjectParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameter2D
// 0x0000 (0x01C8 - 0x01C8)
class UMaterialExpressionTextureSampleParameter2D : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameter2D");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAntialiasedTextureMask
// 0x0008 (0x01D0 - 0x01C8)
class UMaterialExpressionAntialiasedTextureMask : public UMaterialExpressionTextureSampleParameter2D
{
public:
	unsigned char                                      UnknownData00[0x1B];                                      // 0x01C8(0x001B) MISSED OFFSET
	float                                              Threshold;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureColorChannel>                  Channel;                                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAntialiasedTextureMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPredicatedTextureSampleParameter2D
// 0x0040 (0x0208 - 0x01C8)
class UMaterialExpressionPredicatedTextureSampleParameter2D : public UMaterialExpressionTextureSampleParameter2D
{
public:
	unsigned char                                      UnknownData00[0x1B];                                      // 0x01C8(0x001B) MISSED OFFSET
	struct FExpressionInput                            Predicate;                                                // 0x01E3(0x0038) (ZeroConstructor)
	struct FColor                                      DefaultColour;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x21];                                      // 0x01E7(0x0021) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPredicatedTextureSampleParameter2D");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterSubUV
// 0x0008 (0x01D0 - 0x01C8)
class UMaterialExpressionTextureSampleParameterSubUV : public UMaterialExpressionTextureSampleParameter2D
{
public:
	unsigned char                                      UnknownData00[0x1B];                                      // 0x01C8(0x001B) MISSED OFFSET
	unsigned char                                      bBlend : 1;                                               // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterSubUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterCube
// 0x0000 (0x01C8 - 0x01C8)
class UMaterialExpressionTextureSampleParameterCube : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterCube");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureCoordinate
// 0x0010 (0x0080 - 0x0070)
class UMaterialExpressionTextureCoordinate : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	int                                                CoordinateIndex;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UTiling;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VTiling;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnMirrorU : 1;                                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      UnMirrorV : 1;                                            // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureCoordinate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTime
// 0x0008 (0x0078 - 0x0070)
class UMaterialExpressionTime : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	unsigned char                                      bIgnorePause : 1;                                         // 0x01E3(0x0001) (Edit)
	unsigned char                                      bOverride_Period : 1;                                     // 0x01E3(0x0001)
	float                                              Period;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTime");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTransform
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionTransform : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Input;                                                    // 0x01E3(0x0038) (ZeroConstructor)
	TEnumAsByte<EMaterialVectorCoordTransformSource>   TransformSourceType;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMaterialVectorCoordTransform>         TransformType;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTransform");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTransformPosition
// 0x0040 (0x00B0 - 0x0070)
class UMaterialExpressionTransformPosition : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Input;                                                    // 0x01E3(0x0038) (ZeroConstructor)
	TEnumAsByte<EMaterialPositionTransformSource>      TransformSourceType;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMaterialPositionTransformSource>      TransformType;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTransformPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTwoSidedSign
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionTwoSidedSign : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTwoSidedSign");
		return ptr;
	}

};


// Class Engine.MaterialExpressionUnderwaterTranslucencyTexture
// 0x0038 (0x00A8 - 0x0070)
class UMaterialExpressionUnderwaterTranslucencyTexture : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FExpressionInput                            Coordinates;                                              // 0x01E3(0x0038) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionUnderwaterTranslucencyTexture");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVertexColor
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionVertexColor : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVertexID
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionVertexID : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexID");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVertexNormalWS
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionVertexNormalWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexNormalWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionViewProperty
// 0x0008 (0x0078 - 0x0070)
class UMaterialExpressionViewProperty : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	TEnumAsByte<EMaterialExposedViewProperty>          Property;                                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionViewProperty");
		return ptr;
	}

};


// Class Engine.MaterialExpressionViewSize
// 0x0000 (0x0070 - 0x0070)
class UMaterialExpressionViewSize : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionViewSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionWorldPosition
// 0x0008 (0x0078 - 0x0070)
class UMaterialExpressionWorldPosition : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	TEnumAsByte<EWorldPositionIncludedOffsets>         WorldPositionShaderOffset;                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionWorldPosition");
		return ptr;
	}

};


// Class Engine.MaterialFunction
// 0x0060 (0x0088 - 0x0028)
class UMaterialFunction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FGuid                                       StateId;                                                  // 0x01E3(0x0010) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	class FString                                      Description;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bExposeToLibrary : 1;                                     // 0x01E3(0x0001) (Edit)
	TArray<class FString>                              LibraryCategories;                                        // 0x01E3(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FText>                               LibraryCategoriesText;                                    // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<class UMaterialExpression*>                 FunctionExpressions;                                      // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunction");
		return ptr;
	}

};


// Class Engine.MaterialInstanceDynamic
// 0x0000 (0x01F0 - 0x01F0)
class UMaterialInstanceDynamic : public UMaterialInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceDynamic");
		return ptr;
	}


	void SetVectorParameterValue(const struct FName& ParameterName, const struct FLinearColor& Value);
	void SetTextureParameterValue(const struct FName& ParameterName, class UTexture* Value);
	void SetScalarParameterValue(const struct FName& ParameterName, float Value);
	void K2_InterpolateMaterialInstanceParams(class UMaterialInstance* MaterialA, class UMaterialInstance* MaterialB, float Alpha);
	struct FLinearColor K2_GetVectorParameterValue(const struct FName& ParameterName);
	class UTexture* K2_GetTextureParameterValue(const struct FName& ParameterName);
	float K2_GetScalarParameterValue(const struct FName& ParameterName);
	void K2_CopyMaterialInstanceParameters(class UMaterialInterface* SourceMaterialToCopyFrom);
	void CopyParameterOverrides(class UMaterialInstance* MaterialInstance);
};


// Class Engine.MaterialParameterCollection
// 0x0038 (0x0060 - 0x0028)
class UMaterialParameterCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FGuid                                       StateId;                                                  // 0x01E3(0x0010) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	TArray<struct FCollectionScalarParameter>          ScalarParameters;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialParameterCollection");
		return ptr;
	}

};


// Class Engine.MaterialParameterCollectionInstance
// 0x00C0 (0x00E8 - 0x0028)
class UMaterialParameterCollectionInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UMaterialParameterCollection*                Collection;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialParameterCollectionInstance");
		return ptr;
	}

};


// Class Engine.MatineeInterface
// 0x0000 (0x0028 - 0x0028)
class UMatineeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeInterface");
		return ptr;
	}

};


// Class Engine.NavArea_Default
// 0x0000 (0x0040 - 0x0040)
class UNavArea_Default : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavArea_Default");
		return ptr;
	}

};


// Class Engine.NavArea_LowHeight
// 0x0000 (0x0040 - 0x0040)
class UNavArea_LowHeight : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavArea_LowHeight");
		return ptr;
	}

};


// Class Engine.NavArea_Null
// 0x0000 (0x0040 - 0x0040)
class UNavArea_Null : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavArea_Null");
		return ptr;
	}

};


// Class Engine.NavArea_Obstacle
// 0x0000 (0x0040 - 0x0040)
class UNavArea_Obstacle : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavArea_Obstacle");
		return ptr;
	}

};


// Class Engine.NavAreaMeta
// 0x0000 (0x0040 - 0x0040)
class UNavAreaMeta : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavAreaMeta");
		return ptr;
	}

};


// Class Engine.NavAreaMeta_SwitchByAgent
// 0x0080 (0x00C0 - 0x0040)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	class UClass*                                      Agent0Area;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent1Area;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent2Area;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent3Area;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent4Area;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent5Area;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent6Area;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent7Area;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent8Area;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent9Area;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent10Area;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent11Area;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent12Area;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent13Area;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent14Area;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent15Area;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavAreaMeta_SwitchByAgent");
		return ptr;
	}

};


// Class Engine.NavCollision
// 0x00E8 (0x0110 - 0x0028)
class UNavCollision : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FNavCollisionCylinder>               CylinderCollision;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FNavCollisionBox>                    BoxCollision;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      AreaClass;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsDynamicObstacle : 1;                                   // 0x01E3(0x0001) (Edit, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavCollision");
		return ptr;
	}

};


// Class Engine.NavigationDataChunk
// 0x0008 (0x0030 - 0x0028)
class UNavigationDataChunk : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationDataChunk");
		return ptr;
	}

};


// Class Engine.RecastNavMeshDataChunk
// 0x0010 (0x0040 - 0x0030)
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RecastNavMeshDataChunk");
		return ptr;
	}

};


// Class Engine.NavigationPath
// 0x0060 (0x0088 - 0x0028)
class UNavigationPath : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FScriptMulticastDelegate                    PathUpdatedNotifier;                                      // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FVector>                             PathPoints;                                               // 0x01E3(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationPath");
		return ptr;
	}


	bool IsValid();
	bool IsStringPulled();
	bool IsPartial();
	float GetPathLength();
	float GetPathCost();
	class FString GetDebugString();
	void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag> DoRecalculation);
	void EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor);
};


// Class Engine.NavigationPathGenerator
// 0x0000 (0x0028 - 0x0028)
class UNavigationPathGenerator : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationPathGenerator");
		return ptr;
	}

};


// Class Engine.RecastFilter_UseDefaultArea
// 0x0000 (0x0040 - 0x0040)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RecastFilter_UseDefaultArea");
		return ptr;
	}

};


// Class Engine.NavLinkTrivial
// 0x0000 (0x0050 - 0x0050)
class UNavLinkTrivial : public UNavLinkDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkTrivial");
		return ptr;
	}

};


// Class Engine.NavNodeInterface
// 0x0000 (0x0028 - 0x0028)
class UNavNodeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavNodeInterface");
		return ptr;
	}

};


// Class Engine.DemoNetDriver
// 0x00C8 (0x0400 - 0x0338)
class UDemoNetDriver : public UNetDriver
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0338(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoNetDriver");
		return ptr;
	}

};


// Class Engine.NiagaraEffectRendererProperties
// 0x0008 (0x0030 - 0x0028)
class UNiagaraEffectRendererProperties : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NiagaraEffectRendererProperties");
		return ptr;
	}

};


// Class Engine.NiagaraRibbonRendererProperties
// 0x0000 (0x0030 - 0x0030)
class UNiagaraRibbonRendererProperties : public UNiagaraEffectRendererProperties
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NiagaraRibbonRendererProperties");
		return ptr;
	}

};


// Class Engine.NiagaraSpriteRendererProperties
// 0x0008 (0x0038 - 0x0030)
class UNiagaraSpriteRendererProperties : public UNiagaraEffectRendererProperties
{
public:
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FVector2D                                   SubImageInfo;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NiagaraSpriteRendererProperties");
		return ptr;
	}

};


// Class Engine.ObjectLibrary
// 0x0048 (0x0070 - 0x0028)
class UObjectLibrary : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UClass*                                      ObjectBaseClass;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBlueprintClasses;                                     // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             Objects;                                                  // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<TWeakObjectPtr<class UObject>>              WeakObjects;                                              // 0x01E3(0x0010) (ZeroConstructor)
	bool                                               bUseWeakReferences;                                       // 0x01E3(0x0001) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ObjectLibrary");
		return ptr;
	}

};


// Class Engine.ObjectReferencer
// 0x0010 (0x0038 - 0x0028)
class UObjectReferencer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ObjectReferencer");
		return ptr;
	}

};


// Class Engine.PackageMapClient
// 0x01A0 (0x01F0 - 0x0050)
class UPackageMapClient : public UPackageMap
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0050(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PackageMapClient");
		return ptr;
	}

};


// Class Engine.ParticleEmitter
// 0x0040 (0x0068 - 0x0028)
class UParticleEmitter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FName                                       EmitterName;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SubUVDataOffset;                                          // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EEmitterRenderMode>                    EmitterRenderMode;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UParticleLODLevel*>                   LODLevels;                                                // 0x01E3(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      ConvertedModules : 1;                                     // 0x01E3(0x0001)
	int                                                PeakActiveParticles;                                      // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InitialAllocationCount;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MediumDetailSpawnRateScale;                               // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              QualityLevelSpawnRateScale;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDetailMode>                           DetailMode;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsSoloing : 1;                                           // 0x01E3(0x0001) (Transient)
	unsigned char                                      bCookedOut : 1;                                           // 0x01E3(0x0001)
	unsigned char                                      bDisabledLODsKeepEmitterAlive : 1;                        // 0x01E3(0x0001) (Edit)
	unsigned char                                      bHasAnyEnabledLODs : 1;                                   // 0x01E3(0x0001) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleEmitter");
		return ptr;
	}

};


// Class Engine.ParticleSpriteEmitter
// 0x0000 (0x0068 - 0x0068)
class UParticleSpriteEmitter : public UParticleEmitter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSpriteEmitter");
		return ptr;
	}

};


// Class Engine.ParticleLODLevel
// 0x0090 (0x00B8 - 0x0028)
class UParticleLODLevel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	int                                                Level;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnabled : 1;                                             // 0x01E3(0x0001)
	class UParticleModuleRequired*                     RequiredModule;                                           // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UParticleModule*>                     Modules;                                                  // 0x01E3(0x0010) (ExportObject, ZeroConstructor)
	class UParticleModule*                             TypeDataModule;                                           // 0x01E3(0x0008) (ExportObject, ZeroConstructor, IsPlainOldData)
	class UParticleModuleSpawn*                        SpawnModule;                                              // 0x01E3(0x0008) (ExportObject, ZeroConstructor, IsPlainOldData)
	class UParticleModuleEventGenerator*               EventGenerator;                                           // 0x01E3(0x0008) (ExportObject, ZeroConstructor, IsPlainOldData)
	TArray<class UParticleModuleSpawnBase*>            SpawningModules;                                          // 0x01E3(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UParticleModule*>                     SpawnModules;                                             // 0x01E3(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UParticleModule*>                     UpdateModules;                                            // 0x01E3(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UParticleModuleOrbit*>                OrbitModules;                                             // 0x01E3(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UParticleModuleEventReceiverBase*>    EventReceiverModules;                                     // 0x01E3(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      ConvertedModules : 1;                                     // 0x01E3(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleLODLevel");
		return ptr;
	}

};


// Class Engine.ParticleModule
// 0x0010 (0x0038 - 0x0028)
class UParticleModule : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	unsigned char                                      bSpawnModule : 1;                                         // 0x01E3(0x0001)
	unsigned char                                      bEditable : 1;                                            // 0x01E3(0x0001)
	unsigned char                                      bUpdateModule : 1;                                        // 0x01E3(0x0001)
	unsigned char                                      LODDuplicate : 1;                                         // 0x01E3(0x0001)
	unsigned char                                      bFinalUpdateModule : 1;                                   // 0x01E3(0x0001)
	unsigned char                                      bSupportsRandomSeed : 1;                                  // 0x01E3(0x0001)
	unsigned char                                      bUpdateForGPUEmitter : 1;                                 // 0x01E3(0x0001)
	unsigned char                                      bRequiresLoopingNotification : 1;                         // 0x01E3(0x0001)
	unsigned char                                      bCurvesAsColor : 1;                                       // 0x01E3(0x0001)
	unsigned char                                      b3DDrawMode : 1;                                          // 0x01E3(0x0001) (Edit)
	unsigned char                                      bSupported3DDrawMode : 1;                                 // 0x01E3(0x0001)
	unsigned char                                      bEnabled : 1;                                             // 0x01E3(0x0001)
	unsigned char                                      LODValidity;                                              // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                ModuleInstanceOffset;                                     // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModule");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationBase
// 0x0008 (0x0040 - 0x0038)
class UParticleModuleAccelerationBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	unsigned char                                      bAlwaysInWorldSpace : 1;                                  // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleAcceleration
// 0x0040 (0x0080 - 0x0040)
class UParticleModuleAcceleration : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FRawDistributionVector                      Acceleration;                                             // 0x01E3(0x0038) (Edit)
	unsigned char                                      bApplyOwnerScale : 1;                                     // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAcceleration");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationConstant
// 0x0010 (0x0050 - 0x0040)
class UParticleModuleAccelerationConstant : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FVector                                     Acceleration;                                             // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationConstant");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationDrag
// 0x0010 (0x0050 - 0x0040)
class UParticleModuleAccelerationDrag : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	class UDistributionFloat*                          DragCoefficient;                                          // 0x01E3(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDistributionFloat*                          DragOnLocalVelocity;                                      // 0x01E3(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationDrag");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationDragScaleOverLife
// 0x0010 (0x0050 - 0x0040)
class UParticleModuleAccelerationDragScaleOverLife : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	class UDistributionFloat*                          DragScale;                                                // 0x01E3(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDistributionFloat*                          DragLocalVelocityScale;                                   // 0x01E3(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationDragScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationEmitterPoint
// 0x0040 (0x0080 - 0x0040)
class UParticleModuleAccelerationEmitterPoint : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FRawDistributionFloat                       AccelerationScale;                                        // 0x01E3(0x0038) (Edit)
	unsigned char                                      bApplyOwnerScale : 1;                                     // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationEmitterPoint");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationOverLifetime
// 0x0038 (0x0078 - 0x0040)
class UParticleModuleAccelerationOverLifetime : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FRawDistributionVector                      AccelOverLife;                                            // 0x01E3(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleAttractorBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorLine
// 0x0088 (0x00C0 - 0x0038)
class UParticleModuleAttractorLine : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FVector                                     EndPoint0;                                                // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndPoint1;                                                // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRawDistributionFloat                       Range;                                                    // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       Strength;                                                 // 0x01E3(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorLine");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorParticle
// 0x0090 (0x00C8 - 0x0038)
class UParticleModuleAttractorParticle : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FName                                       EmitterName;                                              // 0x01E3(0x0008) (Edit, ExportObject, ZeroConstructor, NoClear, IsPlainOldData)
	struct FRawDistributionFloat                       Range;                                                    // 0x01E3(0x0038) (Edit)
	unsigned char                                      bStrengthByDistance : 1;                                  // 0x01E3(0x0001) (Edit)
	struct FRawDistributionFloat                       Strength;                                                 // 0x01E3(0x0038) (Edit)
	unsigned char                                      bAffectBaseVelocity : 1;                                  // 0x01E3(0x0001) (Edit)
	TEnumAsByte<EAttractorParticleSelectionMethod>     SelectionMethod;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRenewSource : 1;                                         // 0x01E3(0x0001) (Edit)
	unsigned char                                      bInheritSourceVel : 1;                                    // 0x01E3(0x0001) (Edit)
	int                                                LastSelIndex;                                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorParticle");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorPoint
// 0x00B0 (0x00E8 - 0x0038)
class UParticleModuleAttractorPoint : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionVector                      Position;                                                 // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       Range;                                                    // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       Strength;                                                 // 0x01E3(0x0038) (Edit)
	unsigned char                                      StrengthByDistance : 1;                                   // 0x01E3(0x0001) (Edit)
	unsigned char                                      Negative_Y : 1;                                           // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAffectBaseVelocity : 1;                                  // 0x01E3(0x0001) (Edit)
	unsigned char                                      Negative_Z : 1;                                           // 0x01E3(0x0001) (Edit)
	unsigned char                                      bOverrideVelocity : 1;                                    // 0x01E3(0x0001) (Edit)
	unsigned char                                      bUseWorldSpacePosition : 1;                               // 0x01E3(0x0001) (Edit)
	unsigned char                                      Positive_X : 1;                                           // 0x01E3(0x0001) (Edit)
	unsigned char                                      Positive_Y : 1;                                           // 0x01E3(0x0001) (Edit)
	unsigned char                                      Positive_Z : 1;                                           // 0x01E3(0x0001) (Edit)
	unsigned char                                      Negative_X : 1;                                           // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorPoint");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorPointGravity
// 0x0018 (0x0050 - 0x0038)
class UParticleModuleAttractorPointGravity : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UDistributionFloat*                          Strength;                                                 // 0x01E3(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorPointGravity");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleBeamBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamModifier
// 0x00C0 (0x00F8 - 0x0038)
class UParticleModuleBeamModifier : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TEnumAsByte<EBeamModifierType>                     ModifierType;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBeamModifierOptions                        PositionOptions;                                          // 0x01E3(0x0004) (Edit)
	struct FRawDistributionVector                      Position;                                                 // 0x01E3(0x0038) (Edit)
	struct FBeamModifierOptions                        TangentOptions;                                           // 0x01E3(0x0004) (Edit)
	struct FRawDistributionVector                      Tangent;                                                  // 0x01E3(0x0038) (Edit)
	unsigned char                                      bAbsoluteTangent : 1;                                     // 0x01E3(0x0001) (Edit)
	struct FBeamModifierOptions                        StrengthOptions;                                          // 0x01E3(0x0004) (Edit)
	struct FRawDistributionFloat                       Strength;                                                 // 0x01E3(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamModifier");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamNoise
// 0x0158 (0x0190 - 0x0038)
class UParticleModuleBeamNoise : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	unsigned char                                      bLowFreq_Enabled : 1;                                     // 0x01E3(0x0001) (Edit)
	int                                                Frequency;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Frequency_LowRange;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRawDistributionVector                      NoiseRange;                                               // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       NoiseRangeScale;                                          // 0x01E3(0x0038) (Edit)
	unsigned char                                      bNRScaleEmitterTime : 1;                                  // 0x01E3(0x0001) (Edit)
	struct FRawDistributionVector                      NoiseSpeed;                                               // 0x01E3(0x0038) (Edit)
	unsigned char                                      bSmooth : 1;                                              // 0x01E3(0x0001) (Edit)
	float                                              NoiseLockRadius;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bNoiseLock : 1;                                           // 0x01E3(0x0001)
	unsigned char                                      bOscillate : 1;                                           // 0x01E3(0x0001) (Edit)
	float                                              NoiseLockTime;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoiseTension;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseNoiseTangents : 1;                                    // 0x01E3(0x0001) (Edit)
	struct FRawDistributionFloat                       NoiseTangentStrength;                                     // 0x01E3(0x0038) (Edit)
	int                                                NoiseTessellation;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bTargetNoise : 1;                                         // 0x01E3(0x0001) (Edit)
	float                                              FrequencyDistance;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bApplyNoiseScale : 1;                                     // 0x01E3(0x0001) (Edit)
	struct FRawDistributionFloat                       NoiseScale;                                               // 0x01E3(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamNoise");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamSource
// 0x00D0 (0x0108 - 0x0038)
class UParticleModuleBeamSource : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TEnumAsByte<EBeam2SourceTargetMethod>              SourceMethod;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceName;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSourceAbsolute : 1;                                      // 0x01E3(0x0001) (Edit)
	struct FRawDistributionVector                      Source;                                                   // 0x01E3(0x0038) (Edit)
	unsigned char                                      bLockSource : 1;                                          // 0x01E3(0x0001) (Edit)
	TEnumAsByte<EBeam2SourceTargetTangentMethod>       SourceTangentMethod;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRawDistributionVector                      SourceTangent;                                            // 0x01E3(0x0038) (Edit)
	unsigned char                                      bLockSourceTangent : 1;                                   // 0x01E3(0x0001) (Edit)
	struct FRawDistributionFloat                       SourceStrength;                                           // 0x01E3(0x0038) (Edit)
	unsigned char                                      bLockSourceStength : 1;                                   // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamSource");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamTarget
// 0x00D0 (0x0108 - 0x0038)
class UParticleModuleBeamTarget : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TEnumAsByte<EBeam2SourceTargetMethod>              TargetMethod;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetName;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRawDistributionVector                      Target;                                                   // 0x01E3(0x0038) (Edit)
	unsigned char                                      bTargetAbsolute : 1;                                      // 0x01E3(0x0001) (Edit)
	unsigned char                                      bLockTarget : 1;                                          // 0x01E3(0x0001) (Edit)
	TEnumAsByte<EBeam2SourceTargetTangentMethod>       TargetTangentMethod;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRawDistributionVector                      TargetTangent;                                            // 0x01E3(0x0038) (Edit)
	unsigned char                                      bLockTargetTangent : 1;                                   // 0x01E3(0x0001) (Edit)
	struct FRawDistributionFloat                       TargetStrength;                                           // 0x01E3(0x0038) (Edit)
	unsigned char                                      bLockTargetStength : 1;                                   // 0x01E3(0x0001) (Edit)
	float                                              LockRadius;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamTarget");
		return ptr;
	}

};


// Class Engine.ParticleModuleCameraBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleCameraBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCameraBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleCameraOffset
// 0x0040 (0x0078 - 0x0038)
class UParticleModuleCameraOffset : public UParticleModuleCameraBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionFloat                       CameraOffset;                                             // 0x01E3(0x0038) (Edit)
	unsigned char                                      bSpawnTimeOnly : 1;                                       // 0x01E3(0x0001) (Edit)
	TEnumAsByte<EParticleCameraOffsetUpdateMethod>     UpdateMethod;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCameraOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollisionBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleCollisionBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollisionBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollision
// 0x0150 (0x0188 - 0x0038)
class UParticleModuleCollision : public UParticleModuleCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionVector                      DampingFactor;                                            // 0x01E3(0x0038) (Edit)
	struct FRawDistributionVector                      DampingFactorRotation;                                    // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       MaxCollisions;                                            // 0x01E3(0x0038) (Edit)
	TEnumAsByte<EParticleCollisionComplete>            CollisionCompletionOption;                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              CollisionTypes;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bApplyPhysics : 1;                                        // 0x01E3(0x0001) (Edit)
	struct FRawDistributionFloat                       ParticleMass;                                             // 0x01E3(0x0038) (Edit)
	float                                              DirScalar;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPawnsDoNotDecrementCount : 1;                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bOnlyVerticalNormalsDecrementCount : 1;                   // 0x01E3(0x0001) (Edit)
	float                                              VerticalFudgeFactor;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRawDistributionFloat                       DelayAmount;                                              // 0x01E3(0x0038) (Edit)
	unsigned char                                      bDropDetail : 1;                                          // 0x01E3(0x0001) (Edit)
	unsigned char                                      bCollideOnlyIfVisible : 1;                                // 0x01E3(0x0001) (Edit)
	unsigned char                                      bIgnoreSourceActor : 1;                                   // 0x01E3(0x0001) (Edit)
	float                                              MaxCollisionDistance;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollision");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollisionGPU
// 0x0088 (0x00C0 - 0x0038)
class UParticleModuleCollisionGPU : public UParticleModuleCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionFloat                       Resilience;                                               // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       ResilienceScaleOverLife;                                  // 0x01E3(0x0038) (Edit)
	float                                              DampingFactorRotation;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadiusScale;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadiusBias;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleCollisionResponse>            Response;                                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleCollisionMode>                CollisionMode;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollisionGPU");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleColorBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleColor
// 0x02B8 (0x02F0 - 0x0038)
class UParticleModuleColor : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	unsigned char                                      bUseGroupAColorForAllGroups : 1;                          // 0x01E3(0x0001) (Edit)
	struct FRawDistributionVector                      StartColor;                                               // 0x01E3(0x0038) (Edit)
	struct FRawDistributionVector                      AdditionalStartColor[0x5];                                // 0x01E3(0x0038) (Edit)
	unsigned char                                      bUseGroupAAlphaForAllGroups : 1;                          // 0x01E3(0x0001) (Edit)
	struct FRawDistributionFloat                       StartAlpha;                                               // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       AdditionalStartAlpha[0x5];                                // 0x01E3(0x0038) (Edit)
	unsigned char                                      bClampAlpha : 1;                                          // 0x01E3(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x10C];                                     // 0x01E4(0x010C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColor");
		return ptr;
	}

};


// Class Engine.ParticleModuleColor_Seeded
// 0x0020 (0x0310 - 0x02F0)
class UParticleModuleColor_Seeded : public UParticleModuleColor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColor_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorOverLife
// 0x0078 (0x00B0 - 0x0038)
class UParticleModuleColorOverLife : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionVector                      ColorOverLife;                                            // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       AlphaOverLife;                                            // 0x01E3(0x0038) (Edit)
	unsigned char                                      bClampAlpha : 1;                                          // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorScaleOverLife
// 0x0078 (0x00B0 - 0x0038)
class UParticleModuleColorScaleOverLife : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionVector                      ColorScaleOverLife;                                       // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       AlphaScaleOverLife;                                       // 0x01E3(0x0038) (Edit)
	unsigned char                                      bEmitterTime : 1;                                         // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleMurkyColor
// 0x0010 (0x0048 - 0x0038)
class UParticleModuleMurkyColor : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FLinearColor                                ColorScale;                                               // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMurkyColor");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleEventBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventGenerator
// 0x0010 (0x0048 - 0x0038)
class UParticleModuleEventGenerator : public UParticleModuleEventBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TArray<struct FParticleEvent_GenerateInfo>         Events;                                                   // 0x01E3(0x0010) (Edit, ExportObject, ZeroConstructor, NoClear)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventGenerator");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverBase
// 0x0010 (0x0048 - 0x0038)
class UParticleModuleEventReceiverBase : public UParticleModuleEventBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TEnumAsByte<EParticleEventType>                    EventGeneratorType;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       EventName;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverKillParticles
// 0x0008 (0x0050 - 0x0048)
class UParticleModuleEventReceiverKillParticles : public UParticleModuleEventReceiverBase
{
public:
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	unsigned char                                      bStopSpawning : 1;                                        // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverKillParticles");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverSpawn
// 0x0078 (0x00C0 - 0x0048)
class UParticleModuleEventReceiverSpawn : public UParticleModuleEventReceiverBase
{
public:
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	struct FRawDistributionFloat                       SpawnCount;                                               // 0x01E3(0x0038) (Edit)
	unsigned char                                      bUseParticleTime : 1;                                     // 0x01E3(0x0001) (Edit)
	unsigned char                                      bUsePSysLocation : 1;                                     // 0x01E3(0x0001) (Edit)
	unsigned char                                      bInheritVelocity : 1;                                     // 0x01E3(0x0001) (Edit)
	struct FRawDistributionVector                      InheritVelocityScale;                                     // 0x01E3(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverSpawn");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleKillBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillBox
// 0x0078 (0x00B0 - 0x0038)
class UParticleModuleKillBox : public UParticleModuleKillBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionVector                      LowerLeftCorner;                                          // 0x01E3(0x0038) (Edit)
	struct FRawDistributionVector                      UpperRightCorner;                                         // 0x01E3(0x0038) (Edit)
	unsigned char                                      bAbsolute : 1;                                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bKillInside : 1;                                          // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAxisAlignedAndFixedSize : 1;                             // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillBox");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillHeight
// 0x0040 (0x0078 - 0x0038)
class UParticleModuleKillHeight : public UParticleModuleKillBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionFloat                       Height;                                                   // 0x01E3(0x0038) (Edit)
	unsigned char                                      bAbsolute : 1;                                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bFloor : 1;                                               // 0x01E3(0x0001) (Edit)
	unsigned char                                      bApplyPSysScale : 1;                                      // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillHeight");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetimeBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleLifetimeBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetimeBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetime
// 0x0158 (0x0190 - 0x0038)
class UParticleModuleLifetime : public UParticleModuleLifetimeBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	unsigned char                                      bUseGroupAValuesForAllGroups : 1;                         // 0x01E3(0x0001) (Edit)
	struct FRawDistributionFloat                       LifeTime;                                                 // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       AdditionalLifetimes[0x5];                                 // 0x01E3(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetime_Seeded
// 0x0020 (0x01B0 - 0x0190)
class UParticleModuleLifetime_Seeded : public UParticleModuleLifetime
{
public:
	unsigned char                                      UnknownData00[0x53];                                      // 0x0190(0x0053) MISSED OFFSET
	struct FParticleRandomSeedInfo                     RandomSeedInfo;                                           // 0x01E3(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetime_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLightBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleLightBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLightBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLight
// 0x00E8 (0x0120 - 0x0038)
class UParticleModuleLight : public UParticleModuleLightBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	bool                                               bUseInverseSquaredFalloff;                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectsTranslucency;                                     // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPreviewLightRadius;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	float                                              SpawnFraction;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRawDistributionVector                      ColorScaleOverLife;                                       // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       BrightnessOverLife;                                       // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       RadiusScale;                                              // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       LightExponent;                                            // 0x01E3(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLight");
		return ptr;
	}

};


// Class Engine.ParticleModuleLight_Seeded
// 0x0020 (0x0140 - 0x0120)
class UParticleModuleLight_Seeded : public UParticleModuleLight
{
public:
	unsigned char                                      UnknownData00[0xC3];                                      // 0x0120(0x00C3) MISSED OFFSET
	struct FParticleRandomSeedInfo                     RandomSeedInfo;                                           // 0x01E3(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLight_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleLocationBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocation
// 0x0128 (0x0160 - 0x0038)
class UParticleModuleLocation : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionVector                      StartLocation;                                            // 0x01E3(0x0038) (Edit)
	struct FRawDistributionVector                      AdditionalStartLocations[0x4];                            // 0x01E3(0x0038) (Edit)
	unsigned char                                      StartLocationUseGroupAForAll : 1;                         // 0x01E3(0x0001) (Edit)
	float                                              DistributeOverNPoints;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistributeThreshold;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocation");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocation_Seeded
// 0x0020 (0x0180 - 0x0160)
class UParticleModuleLocation_Seeded : public UParticleModuleLocation
{
public:
	unsigned char                                      UnknownData00[0x83];                                      // 0x0160(0x0083) MISSED OFFSET
	struct FParticleRandomSeedInfo                     RandomSeedInfo;                                           // 0x01E3(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationWorldOffset
// 0x0000 (0x0160 - 0x0160)
class UParticleModuleLocationWorldOffset : public UParticleModuleLocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationWorldOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationWorldOffset_Seeded
// 0x0020 (0x0180 - 0x0160)
class UParticleModuleLocationWorldOffset_Seeded : public UParticleModuleLocationWorldOffset
{
public:
	unsigned char                                      UnknownData00[0x83];                                      // 0x0160(0x0083) MISSED OFFSET
	struct FParticleRandomSeedInfo                     RandomSeedInfo;                                           // 0x01E3(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationWorldOffset_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationBoneSocket
// 0x0040 (0x0078 - 0x0038)
class UParticleModuleLocationBoneSocket : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TEnumAsByte<ELocationBoneSocketSource>             SourceType;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UniversalOffset;                                          // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FLocationBoneSocketInfo>             SourceLocations;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<ELocationBoneSocketSelectionMethod>    SelectionMethod;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUpdatePositionEachFrame : 1;                             // 0x01E3(0x0001) (Edit)
	unsigned char                                      bOrientMeshEmitters : 1;                                  // 0x01E3(0x0001) (Edit)
	unsigned char                                      bInheritBoneVelocity : 1;                                 // 0x01E3(0x0001) (Edit)
	struct FVector                                     InheritVelocityScale;                                     // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InheritedSpeedCap;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SkelMeshActorParamName;                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationBoneSocket");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationDirect
// 0x00E0 (0x0118 - 0x0038)
class UParticleModuleLocationDirect : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionVector                      Location;                                                 // 0x01E3(0x0038) (Edit)
	struct FRawDistributionVector                      LocationOffset;                                           // 0x01E3(0x0038) (Edit)
	struct FRawDistributionVector                      ScaleFactor;                                              // 0x01E3(0x0038) (Edit)
	struct FRawDistributionVector                      Direction;                                                // 0x01E3(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationDirect");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationEmitter
// 0x0020 (0x0058 - 0x0038)
class UParticleModuleLocationEmitter : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FName                                       EmitterName;                                              // 0x01E3(0x0008) (Edit, ExportObject, ZeroConstructor, NoClear, IsPlainOldData)
	TEnumAsByte<ELocationEmitterSelectionMethod>       SelectionMethod;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InheritSourceVelocity : 1;                                // 0x01E3(0x0001) (Edit)
	float                                              InheritSourceVelocityScale;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInheritSourceRotation : 1;                               // 0x01E3(0x0001) (Edit)
	float                                              InheritSourceRotationScale;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationEmitter");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationEmitterDirect
// 0x0008 (0x0040 - 0x0038)
class UParticleModuleLocationEmitterDirect : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FName                                       EmitterName;                                              // 0x01E3(0x0008) (Edit, ExportObject, ZeroConstructor, NoClear, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationEmitterDirect");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveBase
// 0x0078 (0x00B0 - 0x0038)
class UParticleModuleLocationPrimitiveBase : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	unsigned char                                      Positive_X : 1;                                           // 0x01E3(0x0001) (Edit)
	unsigned char                                      Positive_Y : 1;                                           // 0x01E3(0x0001) (Edit)
	unsigned char                                      Positive_Z : 1;                                           // 0x01E3(0x0001) (Edit)
	unsigned char                                      Negative_X : 1;                                           // 0x01E3(0x0001) (Edit)
	unsigned char                                      Negative_Y : 1;                                           // 0x01E3(0x0001) (Edit)
	unsigned char                                      Negative_Z : 1;                                           // 0x01E3(0x0001) (Edit)
	unsigned char                                      SurfaceOnly : 1;                                          // 0x01E3(0x0001) (Edit)
	unsigned char                                      Velocity : 1;                                             // 0x01E3(0x0001) (Edit)
	struct FRawDistributionFloat                       VelocityScale;                                            // 0x01E3(0x0038) (Edit)
	struct FRawDistributionVector                      StartLocation;                                            // 0x01E3(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationComputeShaderOutput
// 0x0008 (0x00B8 - 0x00B0)
class UParticleModuleLocationComputeShaderOutput : public UParticleModuleLocationPrimitiveBase
{
public:
	unsigned char                                      UnknownData00[0x133];                                     // 0x00B0(0x0133) MISSED OFFSET
	class UParticleComputeShaderData*                  PositionData;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationComputeShaderOutput");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveCylinder
// 0x0250 (0x0300 - 0x00B0)
class UParticleModuleLocationPrimitiveCylinder : public UParticleModuleLocationPrimitiveBase
{
public:
	unsigned char                                      UnknownData00[0x133];                                     // 0x00B0(0x0133) MISSED OFFSET
	unsigned char                                      RadialVelocity : 1;                                       // 0x01E3(0x0001) (Edit)
	struct FRawDistributionFloat                       StartRadius;                                              // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       AdditionalStartRadiuses[0x4];                             // 0x01E3(0x0038) (Edit)
	unsigned char                                      StartRadiusUseGroupAForAll : 1;                           // 0x01E3(0x0001) (Edit)
	struct FRawDistributionFloat                       StartHeight;                                              // 0x01E3(0x0038) (Edit)
	unsigned char                                      StartHeightUseGroupAForAll : 1;                           // 0x01E3(0x0001) (Edit)
	struct FRawDistributionFloat                       AdditionalStartHeights[0x4];                              // 0x01E3(0x0038) (Edit)
	TEnumAsByte<ECylinderHeightAxis>                   HeightAxis;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x11C];                                     // 0x01E4(0x011C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveCylinder");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded
// 0x0020 (0x0320 - 0x0300)
class UParticleModuleLocationPrimitiveCylinder_Seeded : public UParticleModuleLocationPrimitiveCylinder
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0300(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveSphere
// 0x0150 (0x0200 - 0x00B0)
class UParticleModuleLocationPrimitiveSphere : public UParticleModuleLocationPrimitiveBase
{
public:
	unsigned char                                      UnknownData00[0x133];                                     // 0x00B0(0x0133) MISSED OFFSET
	struct FRawDistributionFloat                       StartRadius;                                              // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       AdditionalStartRadiuses[0x4];                             // 0x01E3(0x0038) (Edit)
	unsigned char                                      StartRadiusUseGroupAForAll : 1;                           // 0x01E3(0x0001) (Edit)
	struct FVector2D                                   PositiveXAngleRange;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   NegativeXAngleRange;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PositiveYAngleRange;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   NegativeYAngleRange;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PositiveZAngleRange;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   NegativeZAngleRange;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x15];                                      // 0x01EB(0x0015) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveSphere");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded
// 0x0020 (0x0220 - 0x0200)
class UParticleModuleLocationPrimitiveSphere_Seeded : public UParticleModuleLocationPrimitiveSphere
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0200(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationVelocityComputeShaderOutput
// 0x00F0 (0x01A0 - 0x00B0)
class UParticleModuleLocationVelocityComputeShaderOutput : public UParticleModuleLocationPrimitiveBase
{
public:
	unsigned char                                      UnknownData00[0x133];                                     // 0x00B0(0x0133) MISSED OFFSET
	class UParticleComputeShaderData*                  PositionData;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRawDistributionVector                      ComputedVelocityScale;                                    // 0x01E3(0x0038) (Edit)
	float                                              SpeedCap;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRawDistributionVector                      BaseVelocity;                                             // 0x01E3(0x0038) (Edit)
	struct FRawDistributionVector                      LocationOffset;                                           // 0x01E3(0x0038) (Edit)
	struct FRawDistributionVector                      LocationOffsetScaledDirection;                            // 0x01E3(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationVelocityComputeShaderOutput");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveSphereSlice
// 0x01B8 (0x01F0 - 0x0038)
class UParticleModuleLocationPrimitiveSphereSlice : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionFloat                       StartRadius;                                              // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       AdditionalStartRadiuses[0x4];                             // 0x01E3(0x0038) (Edit)
	unsigned char                                      StartRadiusUseGroupAForAll : 1;                           // 0x01E3(0x0001) (Edit)
	struct FPrimitiveSphereEmitterAngleRanges          AngleRanges[0x2];                                         // 0x01E3(0x0010) (Edit)
	float                                              FirstSliceDistributionWeight;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SurfaceOnly : 1;                                          // 0x01E3(0x0001) (Edit)
	unsigned char                                      Velocity : 1;                                             // 0x01E3(0x0001) (Edit)
	struct FRawDistributionFloat                       VelocityScale;                                            // 0x01E3(0x0038) (Edit)
	struct FRawDistributionVector                      StartLocation;                                            // 0x01E3(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveSphereSlice");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveTriangle
// 0x00E0 (0x0118 - 0x0038)
class UParticleModuleLocationPrimitiveTriangle : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionVector                      StartOffset;                                              // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       Height;                                                   // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       Angle;                                                    // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       Thickness;                                                // 0x01E3(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveTriangle");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationSkelVertSurface
// 0x0060 (0x0098 - 0x0038)
class UParticleModuleLocationSkelVertSurface : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TEnumAsByte<ELocationSkelVertSurfaceSource>        SourceType;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UniversalOffset;                                          // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUpdatePositionEachFrame : 1;                             // 0x01E3(0x0001) (Edit)
	unsigned char                                      bOrientMeshEmitters : 1;                                  // 0x01E3(0x0001) (Edit)
	unsigned char                                      bInheritBoneVelocity : 1;                                 // 0x01E3(0x0001) (Edit)
	struct FName                                       SkelMeshActorParamName;                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ValidAssociatedBones;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bEnforceNormalCheck : 1;                                  // 0x01E3(0x0001) (Edit)
	struct FVector                                     NormalToCompare;                                          // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NormalCheckToleranceDegrees;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NormalCheckTolerance;                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ValidMaterialIndices;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bInheritVertexColor : 1;                                  // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationSkelVertSurface");
		return ptr;
	}

};


// Class Engine.ParticleModulePivotOffset
// 0x0008 (0x0040 - 0x0038)
class UParticleModulePivotOffset : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FVector2D                                   PivotOffset;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModulePivotOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleSourceMovement
// 0x0038 (0x0070 - 0x0038)
class UParticleModuleSourceMovement : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionVector                      SourceMovementScale;                                      // 0x01E3(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSourceMovement");
		return ptr;
	}

};


// Class Engine.ParticleModuleMaterialBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleMaterialBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMaterialBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshMaterial
// 0x0010 (0x0048 - 0x0038)
class UParticleModuleMeshMaterial : public UParticleModuleMaterialBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TArray<class UMaterialInterface*>                  MeshMaterials;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshMaterial");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrbitBase
// 0x0008 (0x0040 - 0x0038)
class UParticleModuleOrbitBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	unsigned char                                      bUseEmitterTime : 1;                                      // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrbitBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrbit
// 0x00C8 (0x0108 - 0x0040)
class UParticleModuleOrbit : public UParticleModuleOrbitBase
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	TEnumAsByte<EOrbitChainMode>                       ChainMode;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRawDistributionVector                      OffsetAmount;                                             // 0x01E3(0x0038) (Edit)
	struct FOrbitOptions                               OffsetOptions;                                            // 0x01E3(0x0004) (Edit)
	struct FRawDistributionVector                      RotationAmount;                                           // 0x01E3(0x0038) (Edit)
	struct FOrbitOptions                               RotationOptions;                                          // 0x01E3(0x0004) (Edit)
	struct FRawDistributionVector                      RotationRateAmount;                                       // 0x01E3(0x0038) (Edit)
	struct FOrbitOptions                               RotationRateOptions;                                      // 0x01E3(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrbit");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrientationBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleOrientationBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrientationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrientationAxisLock
// 0x0008 (0x0040 - 0x0038)
class UParticleModuleOrientationAxisLock : public UParticleModuleOrientationBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TEnumAsByte<EParticleAxisLock>                     LockAxisFlags;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrientationAxisLock");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleParameterBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterDynamic
// 0x0018 (0x0050 - 0x0038)
class UParticleModuleParameterDynamic : public UParticleModuleParameterBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TArray<struct FEmitterDynamicParameter>            DynamicParams;                                            // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	int                                                UpdateFlags;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUsesVelocity : 1;                                        // 0x01E3(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterDynamic");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterDynamic_Seeded
// 0x0020 (0x0070 - 0x0050)
class UParticleModuleParameterDynamic_Seeded : public UParticleModuleParameterDynamic
{
public:
	unsigned char                                      UnknownData00[0x193];                                     // 0x0050(0x0193) MISSED OFFSET
	struct FParticleRandomSeedInfo                     RandomSeedInfo;                                           // 0x01E3(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterDynamic_Seeded");
		return ptr;
	}

};


// Class Engine.SubUVAnimation
// 0x0040 (0x0068 - 0x0028)
class USubUVAnimation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UTexture2D*                                  SubUVTexture;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SubImages_Horizontal;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SubImages_Vertical;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESubUVBoundingVertexCount>             BoundingMode;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOpacitySourceMode>                    OpacitySourceMode;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AlphaThreshold;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubUVAnimation");
		return ptr;
	}

};


// Class Engine.ParticleModuleRequired
// 0x01D0 (0x0208 - 0x0038)
class UParticleModuleRequired : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	unsigned char                                      bDeactivateGroupA : 1;                                    // 0x01E3(0x0001) (Edit)
	unsigned char                                      bUseLocalSpace : 1;                                       // 0x01E3(0x0001) (Edit)
	unsigned char                                      bEmitterDelayUseRange : 1;                                // 0x01E3(0x0001) (Edit)
	unsigned char                                      bEmitterDurationUseRange : 1;                             // 0x01E3(0x0001) (Edit)
	unsigned char                                      bScaleUV : 1;                                             // 0x01E3(0x0001) (Edit)
	unsigned char                                      bDeactivateGroupB : 1;                                    // 0x01E3(0x0001) (Edit)
	unsigned char                                      bFollowEmitter : 1;                                       // 0x01E3(0x0001) (Edit)
	unsigned char                                      bDeactivateGroupC : 1;                                    // 0x01E3(0x0001) (Edit)
	unsigned char                                      bTrailInGrandParentSpace : 1;                             // 0x01E3(0x0001) (Edit)
	unsigned char                                      bDeactivateGroupD : 1;                                    // 0x01E3(0x0001) (Edit)
	unsigned char                                      bKillOnDeactivate : 1;                                    // 0x01E3(0x0001) (Edit)
	TEnumAsByte<EPriorityGroups>                       EmitterPriority;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseComplexitySystemWhenLooping : 1;                      // 0x01E3(0x0001) (Edit)
	TEnumAsByte<EPriorityGroups>                       SwitchPriority;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bReplacementGroupIsAdditive : 1;                          // 0x01E3(0x0001) (Edit)
	class UMaterialInterface*                          Material;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EmitterOrigin;                                            // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EmitterOriginUseGroupAForAll : 1;                         // 0x01E3(0x0001) (Edit)
	struct FVector                                     AdditionalEmitterOrigins[0x5];                            // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    EmitterRotation;                                          // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleScreenAlignment>              ScreenAlignment;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AlignmentInheritedVelocityScale;                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 4;                                        // 0x01E3(0x0001)
	unsigned char                                      bKillOnCompleted : 1;                                     // 0x01E3(0x0001) (Edit)
	TEnumAsByte<EParticleSortMode>                     SortMode;                                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseLegacyEmitterTime : 1;                                // 0x01E3(0x0001) (Edit)
	float                                              EmitterDuration;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EmitterDurationLow;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02 : 1;                                        // 0x01E3(0x0001)
	unsigned char                                      bDurationRecalcEachLoop : 1;                              // 0x01E3(0x0001) (Edit)
	int                                                EmitterLoops;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRawDistributionFloat                       SpawnRate;                                                // 0x01E3(0x0038)
	TEnumAsByte<EParticleBurstMethod>                  ParticleBurstMethod;                                      // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	TArray<struct FParticleBurst>                      BurstList;                                                // 0x01E3(0x0010) (ExportObject, ZeroConstructor, NoClear)
	float                                              EmitterDelay;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EmitterDelayLow;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03 : 1;                                        // 0x01E3(0x0001)
	unsigned char                                      bDelayFirstLoopOnly : 1;                                  // 0x01E3(0x0001) (Edit)
	TEnumAsByte<EParticleSubUVInterpMethod>            InterpolationMethod;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SubImages_Horizontal;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SubImages_Vertical;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04 : 4;                                        // 0x01E3(0x0001)
	unsigned char                                      bDeactivateGroupE : 1;                                    // 0x01E3(0x0001) (Edit)
	float                                              RandomImageTime;                                          // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RandomImageChanges;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverrideSystemMacroUV : 1;                               // 0x01E3(0x0001) (Edit)
	struct FVector                                     MacroUVPosition;                                          // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MacroUVRadius;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseMaxDrawCount : 1;                                     // 0x01E3(0x0001) (Edit)
	int                                                MaxDrawCount;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmitterNormalsMode>                   EmitterNormalsMode;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalsSphereCenter;                                      // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalsCylinderDirection;                                 // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOrbitModuleAffectsVelocityAlignment : 1;                 // 0x01E3(0x0001) (Edit)
	TEnumAsByte<EParticleUVFlipMode>                   UVFlippingMode;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  CutoutTexture;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESubUVBoundingVertexCount>             BoundingMode;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOpacitySourceMode>                    OpacitySourceMode;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AlphaThreshold;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SafeMarginSize;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               NamedMaterialOverrides;                                   // 0x01E3(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bUseDistanceFading : 1;                                   // 0x01E3(0x0001) (Edit)
	float                                              FarStopFade;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FarStartFade;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NearStartFade;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NearStopFade;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseDistanceSizeScale : 1;                                // 0x01E3(0x0001) (Edit)
	float                                              FarScaleFactor;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FarScaleEndDistance;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FarScaleBeginDistance;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NearScaleBeginDistance;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NearScaleEndDistance;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NearScaleFactor;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x21];                                      // 0x01E7(0x0021) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRequired");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleRotationBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotation
// 0x0040 (0x0078 - 0x0038)
class UParticleModuleMeshRotation : public UParticleModuleRotationBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionVector                      StartRotation;                                            // 0x01E3(0x0038) (Edit)
	unsigned char                                      bInheritParent : 1;                                       // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotation_Seeded
// 0x0020 (0x0098 - 0x0078)
class UParticleModuleMeshRotation_Seeded : public UParticleModuleMeshRotation
{
public:
	unsigned char                                      UnknownData00[0x16B];                                     // 0x0078(0x016B) MISSED OFFSET
	struct FParticleRandomSeedInfo                     RandomSeedInfo;                                           // 0x01E3(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotation
// 0x0038 (0x0070 - 0x0038)
class UParticleModuleRotation : public UParticleModuleRotationBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionFloat                       StartRotation;                                            // 0x01E3(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotation_Seeded
// 0x0020 (0x0090 - 0x0070)
class UParticleModuleRotation_Seeded : public UParticleModuleRotation
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FParticleRandomSeedInfo                     RandomSeedInfo;                                           // 0x01E3(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationOverLifetime
// 0x0040 (0x0078 - 0x0038)
class UParticleModuleRotationOverLifetime : public UParticleModuleRotationBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionFloat                       RotationOverLife;                                         // 0x01E3(0x0038) (Edit)
	unsigned char                                      Scale : 1;                                                // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRateBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleRotationRateBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRateBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRate
// 0x0038 (0x0070 - 0x0038)
class UParticleModuleMeshRotationRate : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionVector                      StartRotationRate;                                        // 0x01E3(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRate_Seeded
// 0x0020 (0x0090 - 0x0070)
class UParticleModuleMeshRotationRate_Seeded : public UParticleModuleMeshRotationRate
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FParticleRandomSeedInfo                     RandomSeedInfo;                                           // 0x01E3(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRate_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
// 0x0038 (0x0070 - 0x0038)
class UParticleModuleMeshRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionVector                      LifeMultiplier;                                           // 0x01E3(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRateMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRateOverLife
// 0x0040 (0x0078 - 0x0038)
class UParticleModuleMeshRotationRateOverLife : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionVector                      RotRate;                                                  // 0x01E3(0x0038) (Edit)
	unsigned char                                      bScaleRotRate : 1;                                        // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRateOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRate
// 0x0038 (0x0070 - 0x0038)
class UParticleModuleRotationRate : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionFloat                       StartRotationRate;                                        // 0x01E3(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRate_Seeded
// 0x0020 (0x0090 - 0x0070)
class UParticleModuleRotationRate_Seeded : public UParticleModuleRotationRate
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FParticleRandomSeedInfo                     RandomSeedInfo;                                           // 0x01E3(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRate_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRateMultiplyLife
// 0x0038 (0x0070 - 0x0038)
class UParticleModuleRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionFloat                       LifeMultiplier;                                           // 0x01E3(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRateMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleSizeBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSize
// 0x0160 (0x0198 - 0x0038)
class UParticleModuleSize : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	unsigned char                                      bUseGroupAForAll : 1;                                     // 0x01E3(0x0001) (Edit)
	struct FRawDistributionVector                      StartSize;                                                // 0x01E3(0x0038) (Edit)
	struct FRawDistributionVector                      AdditionalStartSizes[0x5];                                // 0x01E3(0x0038) (Edit)
	unsigned char                                      bKeepAspectRatio : 1;                                     // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSize");
		return ptr;
	}

};


// Class Engine.ParticleModuleSize_Seeded
// 0x0020 (0x01B8 - 0x0198)
class UParticleModuleSize_Seeded : public UParticleModuleSize
{
public:
	unsigned char                                      UnknownData00[0x4B];                                      // 0x0198(0x004B) MISSED OFFSET
	struct FParticleRandomSeedInfo                     RandomSeedInfo;                                           // 0x01E3(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSize_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeMultiplyLife
// 0x0040 (0x0078 - 0x0038)
class UParticleModuleSizeMultiplyLife : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionVector                      LifeMultiplier;                                           // 0x01E3(0x0038) (Edit)
	unsigned char                                      MultiplyX : 1;                                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      MultiplyY : 1;                                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      MultiplyZ : 1;                                            // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeOverVelocity
// 0x0038 (0x0070 - 0x0038)
class UParticleModuleSizeOverVelocity : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionFloat                       SizeMultiplier;                                           // 0x01E3(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeOverVelocity");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeScale
// 0x0040 (0x0078 - 0x0038)
class UParticleModuleSizeScale : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionVector                      SizeScale;                                                // 0x01E3(0x0038) (Edit)
	unsigned char                                      EnableX : 1;                                              // 0x01E3(0x0001) (Edit)
	unsigned char                                      EnableY : 1;                                              // 0x01E3(0x0001) (Edit)
	unsigned char                                      EnableZ : 1;                                              // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScale");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeScaleBySpeed
// 0x0010 (0x0048 - 0x0038)
class UParticleModuleSizeScaleBySpeed : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FVector2D                                   SpeedScale;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MaxScale;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScaleBySpeed");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawnBase
// 0x0008 (0x0040 - 0x0038)
class UParticleModuleSpawnBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	unsigned char                                      bProcessSpawnRate : 1;                                    // 0x01E3(0x0001) (Edit)
	unsigned char                                      bProcessBurstList : 1;                                    // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawnBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawn
// 0x01E0 (0x0220 - 0x0040)
class UParticleModuleSpawn : public UParticleModuleSpawnBase
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FRawDistributionFloat                       Rate;                                                     // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       AdditionalRates[0x5];                                     // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       RateScale;                                                // 0x01E3(0x0038) (Edit)
	TEnumAsByte<EParticleBurstMethod>                  ParticleBurstMethod;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FParticleBurst>                      BurstList;                                                // 0x01E3(0x0010) (Edit, ExportObject, ZeroConstructor, NoClear)
	struct FRawDistributionFloat                       BurstScale;                                               // 0x01E3(0x0038) (Edit)
	unsigned char                                      bApplyGlobalSpawnRateScale : 1;                           // 0x01E3(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x01E4(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawn");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawnPerUnit
// 0x0050 (0x0090 - 0x0040)
class UParticleModuleSpawnPerUnit : public UParticleModuleSpawnBase
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	unsigned char                                      bAffectsGroupA : 1;                                       // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAffectsGroupB : 1;                                       // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAffectsGroupC : 1;                                       // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAffectsGroupD : 1;                                       // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAffectsGroupE : 1;                                       // 0x01E3(0x0001) (Edit)
	unsigned char                                      bAffectsReplacementGroup : 1;                             // 0x01E3(0x0001) (Edit)
	float                                              UnitScalar;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRawDistributionFloat                       SpawnPerUnit;                                             // 0x01E3(0x0038) (Edit)
	unsigned char                                      bIgnoreSpawnRateWhenMoving : 1;                           // 0x01E3(0x0001) (Edit)
	float                                              MovementTolerance;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxFrameDistance;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIgnoreMovementAlongX : 1;                                // 0x01E3(0x0001) (Edit)
	unsigned char                                      bIgnoreMovementAlongY : 1;                                // 0x01E3(0x0001) (Edit)
	unsigned char                                      bIgnoreMovementAlongZ : 1;                                // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawnPerUnit");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawnRepeatPerPoint
// 0x0000 (0x0040 - 0x0040)
class UParticleModuleSpawnRepeatPerPoint : public UParticleModuleSpawnBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawnRepeatPerPoint");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUVBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleSubUVBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUV
// 0x0040 (0x0078 - 0x0038)
class UParticleModuleSubUV : public UParticleModuleSubUVBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRawDistributionFloat                       SubImageIndex;                                            // 0x01E3(0x0038) (Edit)
	unsigned char                                      bUseRealTime : 1;                                         // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUV");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUVMovie
// 0x0048 (0x00C0 - 0x0078)
class UParticleModuleSubUVMovie : public UParticleModuleSubUV
{
public:
	unsigned char                                      UnknownData00[0x16B];                                     // 0x0078(0x016B) MISSED OFFSET
	unsigned char                                      bUseEmitterTime : 1;                                      // 0x01E3(0x0001) (Edit)
	struct FRawDistributionFloat                       FrameRate;                                                // 0x01E3(0x0038) (Edit)
	int                                                StartingFrame;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVMovie");
		return ptr;
	}

};


// Class Engine.ParticleModuleTrailBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleTrailBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleTrailSource
// 0x0068 (0x00A0 - 0x0038)
class UParticleModuleTrailSource : public UParticleModuleTrailBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TEnumAsByte<ETrail2SourceMethod>                   SourceMethod;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceName;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRawDistributionFloat                       SourceStrength;                                           // 0x01E3(0x0038) (Edit)
	unsigned char                                      bLockSourceStength : 1;                                   // 0x01E3(0x0001) (Edit)
	int                                                SourceOffsetCount;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             SourceOffsetDefaults;                                     // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TEnumAsByte<EParticleSourceSelectionMethod>        SelectionMethod;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInheritRotation : 1;                                     // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailSource");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleTypeDataBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataAnimTrail
// 0x0018 (0x0050 - 0x0038)
class UParticleModuleTypeDataAnimTrail : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	unsigned char                                      bDeadTrailsOnDeactivate : 1;                              // 0x01E3(0x0001) (Edit)
	unsigned char                                      bEnablePreviousTangentRecalculation : 1;                  // 0x01E3(0x0001) (Edit)
	unsigned char                                      bTangentRecalculationEveryFrame : 1;                      // 0x01E3(0x0001) (Edit)
	float                                              TilingDistance;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceTessellationStepSize;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TangentTessellationStepSize;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WidthTessellationStepSize;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataAnimTrail");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataBeam2
// 0x00E8 (0x0120 - 0x0038)
class UParticleModuleTypeDataBeam2 : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TEnumAsByte<EBeam2Method>                          BeamMethod;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TextureTile;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TextureTileDistance;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Sheets;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxBeamCount;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                InterpolationPoints;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAlwaysOn : 1;                                            // 0x01E3(0x0001) (Edit)
	int                                                UpVectorStepSize;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BranchParentName;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRawDistributionFloat                       Distance;                                                 // 0x01E3(0x0038) (Edit)
	TEnumAsByte<EBeamTaperMethod>                      TaperMethod;                                              // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRawDistributionFloat                       TaperFactor;                                              // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       TaperScale;                                               // 0x01E3(0x0038) (Edit)
	unsigned char                                      RenderGeometry : 1;                                       // 0x01E3(0x0001) (Edit)
	unsigned char                                      RenderDirectLine : 1;                                     // 0x01E3(0x0001) (Edit)
	unsigned char                                      RenderLines : 1;                                          // 0x01E3(0x0001) (Edit)
	unsigned char                                      RenderTessellation : 1;                                   // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataBeam2");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataGpu
// 0x0828 (0x0860 - 0x0038)
class UParticleModuleTypeDataGpu : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FGPUSpriteEmitterInfo                       EmitterInfo;                                              // 0x01E3(0x02D0) (Transient)
	struct FGPUSpriteResourceData                      ResourceData;                                             // 0x01E3(0x0530) (Transient)
	float                                              CameraMotionBlurAmount;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bClearExistingParticlesOnInit : 1;                        // 0x01E3(0x0001) (Edit)
	TEnumAsByte<EParticleAlphaThresholdLevel>          AlphaCullingAggressiveness;                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverrideAlphaThreshold : 1;                              // 0x01E3(0x0001) (Edit)
	float                                              OverriddenAlphaThreshold;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionWithKillPlane>             InteractionWithKillPlane;                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x67C];                                     // 0x01E4(0x067C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataGpu");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataMesh
// 0x0070 (0x00A8 - 0x0038)
class UParticleModuleTypeDataMesh : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	class UStaticMesh*                                 Mesh;                                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CastShadows : 1;                                          // 0x01E3(0x0001)
	unsigned char                                      DoCollisions : 1;                                         // 0x01E3(0x0001)
	TEnumAsByte<EMeshScreenAlignment>                  MeshAlignment;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverrideMaterial : 1;                                    // 0x01E3(0x0001) (Edit)
	float                                              Pitch;                                                    // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              Roll;                                                     // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              Yaw;                                                      // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FRawDistributionVector                      RollPitchYawRange;                                        // 0x01E3(0x0038) (Edit)
	TEnumAsByte<EParticleAxisLock>                     AxisLockOption;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCameraFacing : 1;                                        // 0x01E3(0x0001) (Edit)
	TEnumAsByte<EMeshCameraFacingUpAxis>               CameraFacingUpAxisOption;                                 // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EMeshCameraFacingOptions>              CameraFacingOption;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bApplyParticleRotationAsSpin : 1;                         // 0x01E3(0x0001) (Edit)
	unsigned char                                      bFaceCameraDirectionRatherThanPosition : 1;               // 0x01E3(0x0001) (Edit)
	unsigned char                                      bCollisionsConsiderPartilceSize : 1;                      // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataMesh");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataRibbon
// 0x0030 (0x0068 - 0x0038)
class UParticleModuleTypeDataRibbon : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	int                                                MaxTessellationBetweenParticles;                          // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SheetsPerTrail;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxTrailCount;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxParticleInTrailCount;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDeadTrailsOnDeactivate : 1;                              // 0x01E3(0x0001) (Edit)
	unsigned char                                      bDeadTrailsOnSourceLoss : 1;                              // 0x01E3(0x0001) (Edit)
	unsigned char                                      bClipSourceSegement : 1;                                  // 0x01E3(0x0001) (Edit)
	unsigned char                                      bEnablePreviousTangentRecalculation : 1;                  // 0x01E3(0x0001) (Edit)
	unsigned char                                      bTangentRecalculationEveryFrame : 1;                      // 0x01E3(0x0001) (Edit)
	unsigned char                                      bSpawnInitialParticle : 1;                                // 0x01E3(0x0001) (Edit)
	TEnumAsByte<ETrailsRenderAxisOption>               RenderAxis;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TangentSpawningScalar;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRenderGeometry : 1;                                      // 0x01E3(0x0001) (Edit)
	unsigned char                                      bRenderSpawnPoints : 1;                                   // 0x01E3(0x0001) (Edit)
	unsigned char                                      bRenderTangents : 1;                                      // 0x01E3(0x0001) (Edit)
	unsigned char                                      bRenderTessellation : 1;                                  // 0x01E3(0x0001) (Edit)
	float                                              TilingDistance;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceTessellationStepSize;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableTangentDiffInterpScale : 1;                        // 0x01E3(0x0001) (Edit)
	float                                              TangentTessellationScalar;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataRibbon");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleVectorFieldBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldGlobal
// 0x0010 (0x0048 - 0x0038)
class UParticleModuleVectorFieldGlobal : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	unsigned char                                      bOverrideGlobalVectorFieldTightness : 1;                  // 0x01E3(0x0001)
	float                                              GlobalVectorFieldScale;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GlobalVectorFieldTightness;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldGlobal");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldLocal
// 0x0038 (0x0070 - 0x0038)
class UParticleModuleVectorFieldLocal : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	class UVectorField*                                VectorField;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeTranslation;                                      // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeScale3D;                                          // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Tightness;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIgnoreComponentTransform : 1;                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bTileX : 1;                                               // 0x01E3(0x0001) (Edit)
	unsigned char                                      bTileY : 1;                                               // 0x01E3(0x0001) (Edit)
	unsigned char                                      bTileZ : 1;                                               // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldLocal");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldRotation
// 0x0018 (0x0050 - 0x0038)
class UParticleModuleVectorFieldRotation : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FVector                                     MinInitialRotation;                                       // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxInitialRotation;                                       // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldRotationRate
// 0x0010 (0x0048 - 0x0038)
class UParticleModuleVectorFieldRotationRate : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FVector                                     RotationRate;                                             // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldScale
// 0x0008 (0x0040 - 0x0038)
class UParticleModuleVectorFieldScale : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	class UDistributionFloat*                          VectorFieldScale;                                         // 0x01E3(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldScale");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldScaleOverLife
// 0x0008 (0x0040 - 0x0038)
class UParticleModuleVectorFieldScaleOverLife : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	class UDistributionFloat*                          VectorFieldScaleOverLife;                                 // 0x01E3(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityBase
// 0x0008 (0x0040 - 0x0038)
class UParticleModuleVelocityBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	unsigned char                                      bInWorldSpace : 1;                                        // 0x01E3(0x0001) (Edit)
	unsigned char                                      bApplyOwnerScale : 1;                                     // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleEmitterPointVelocity
// 0x0038 (0x0078 - 0x0040)
class UParticleModuleEmitterPointVelocity : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FRawDistributionFloat                       VelocityScale;                                            // 0x01E3(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEmitterPointVelocity");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocity
// 0x0190 (0x01D0 - 0x0040)
class UParticleModuleVelocity : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	unsigned char                                      bUseGroupAForAll : 1;                                     // 0x01E3(0x0001) (Edit)
	struct FRawDistributionVector                      StartVelocity;                                            // 0x01E3(0x0038) (Edit)
	struct FRawDistributionVector                      AdditionalStartVelocities[0x5];                           // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       StartVelocityRadial;                                      // 0x01E3(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocity");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocity_Seeded
// 0x0020 (0x01F0 - 0x01D0)
class UParticleModuleVelocity_Seeded : public UParticleModuleVelocity
{
public:
	unsigned char                                      UnknownData00[0x13];                                      // 0x01D0(0x0013) MISSED OFFSET
	struct FParticleRandomSeedInfo                     RandomSeedInfo;                                           // 0x01E3(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocity_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityCone
// 0x0090 (0x00D0 - 0x0040)
class UParticleModuleVelocityCone : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FRawDistributionFloat                       Angle;                                                    // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       Velocity;                                                 // 0x01E3(0x0038) (Edit)
	uint32_t                                           VelocityDistributeOverNPoints;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VelocityNPointsRandomness;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AdditiveVelocity;                                         // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityCone");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityConeEmitterPoint
// 0x0088 (0x00C8 - 0x0040)
class UParticleModuleVelocityConeEmitterPoint : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FRawDistributionFloat                       Angle;                                                    // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       VelocityScale;                                            // 0x01E3(0x0038) (Edit)
	uint32_t                                           VelocityDistributeOverNPoints;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VelocityNPointsRandomness;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AdditiveVelocity;                                         // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityConeEmitterPoint");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityInheritParent
// 0x0078 (0x00B8 - 0x0040)
class UParticleModuleVelocityInheritParent : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FRawDistributionVector                      Scale;                                                    // 0x01E3(0x0038) (Edit)
	struct FRawDistributionVector                      CustomParentScale;                                        // 0x01E3(0x0038) (Edit)
	float                                              SpeedCap;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityInheritParent");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityOverLifetime
// 0x0040 (0x0080 - 0x0040)
class UParticleModuleVelocityOverLifetime : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FRawDistributionVector                      VelOverLife;                                              // 0x01E3(0x0038) (Edit)
	unsigned char                                      Absolute : 1;                                             // 0x01E3(0x0001) (Edit, ExportObject)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleWindBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleWindBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleWindBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleWindInfluence
// 0x0078 (0x00B0 - 0x0038)
class UParticleModuleWindInfluence : public UParticleModuleWindBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	float                                              WindSpeedCap;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomFactorForWindDirection;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRawDistributionFloat                       InfluenceOnAcceleration;                                  // 0x01E3(0x0038) (Edit)
	struct FRawDistributionFloat                       InfluenceOnVelocity;                                      // 0x01E3(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleWindInfluence");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventSendToGame
// 0x0000 (0x0028 - 0x0028)
class UParticleModuleEventSendToGame : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventSendToGame");
		return ptr;
	}

};


// Class Engine.ParticleSystemReplay
// 0x0018 (0x0040 - 0x0028)
class UParticleSystemReplay : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystemReplay");
		return ptr;
	}

};


// Class Engine.DemoPendingNetGame
// 0x0000 (0x00C0 - 0x00C0)
class UDemoPendingNetGame : public UPendingNetGame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoPendingNetGame");
		return ptr;
	}

};


// Class Engine.PhysicalMaterial
// 0x0058 (0x0080 - 0x0028)
class UPhysicalMaterial : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              Friction;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFrictionCombineMode>                  FrictionCombineMode;                                      // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideFrictionCombineMode;                             // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Restitution;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFrictionCombineMode>                  RestitutionCombineMode;                                   // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideRestitutionCombineMode;                          // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RaiseMassToPower;                                         // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DestructibleDamageThresholdScale;                         // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterialPropertyBase*               PhysicalMaterialProperty;                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TireFrictionScale;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalMaterial");
		return ptr;
	}

};


// Class Engine.PhysicalMaterialPropertyBase
// 0x0000 (0x0028 - 0x0028)
class UPhysicalMaterialPropertyBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalMaterialPropertyBase");
		return ptr;
	}

};


// Class Engine.PhysicsAsset
// 0x00D0 (0x00F8 - 0x0028)
class UPhysicsAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<class UBodySetup*>                          BodySetup;                                                // 0x01E3(0x0010) (ExportObject, ZeroConstructor)
	TArray<int>                                        BoundsBodies;                                             // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsAsset");
		return ptr;
	}

};


// Class Engine.PhysicsCollisionHandler
// 0x0018 (0x0040 - 0x0028)
class UPhysicsCollisionHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              ImpactThreshold;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpactReFireDelay;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  DefaultImpactSound;                                       // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsCollisionHandler");
		return ptr;
	}

};


// Class Engine.PhysicsConstraintTemplate
// 0x0218 (0x0240 - 0x0028)
class UPhysicsConstraintTemplate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FName                                       JointName;                                                // 0x01E3(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       ConstraintBone1;                                          // 0x01E3(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       ConstraintBone2;                                          // 0x01E3(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     Pos1;                                                     // 0x01E3(0x000C) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     PriAxis1;                                                 // 0x01E3(0x000C) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     SecAxis1;                                                 // 0x01E3(0x000C) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     Pos2;                                                     // 0x01E3(0x000C) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     PriAxis2;                                                 // 0x01E3(0x000C) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     SecAxis2;                                                 // 0x01E3(0x000C) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      bEnableProjection : 1;                                    // 0x01E3(0x0001) (Deprecated)
	float                                              ProjectionLinearTolerance;                                // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              ProjectionAngularTolerance;                               // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               LinearXMotion;                                            // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               LinearYMotion;                                            // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               LinearZMotion;                                            // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              LinearLimitSize;                                          // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      bLinearLimitSoft : 1;                                     // 0x01E3(0x0001) (Deprecated)
	float                                              LinearLimitStiffness;                                     // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              LinearLimitDamping;                                       // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      bLinearBreakable : 1;                                     // 0x01E3(0x0001) (Deprecated)
	float                                              LinearBreakThreshold;                                     // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              AngularSwing1Motion;                                      // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              AngularSwing2Motion;                                      // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              AngularTwistMotion;                                       // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      bSwingLimitSoft : 1;                                      // 0x01E3(0x0001) (Deprecated)
	unsigned char                                      bTwistLimitSoft : 1;                                      // 0x01E3(0x0001) (Deprecated)
	float                                              Swing1LimitAngle;                                         // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              Swing2LimitAngle;                                         // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TwistLimitAngle;                                          // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              SwingLimitStiffness;                                      // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              SwingLimitDamping;                                        // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TwistLimitStiffness;                                      // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TwistLimitDamping;                                        // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      bAngularBreakable : 1;                                    // 0x01E3(0x0001) (Deprecated)
	float                                              AngularBreakThreshold;                                    // 0x01E3(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x59];                                      // 0x01E7(0x0059) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintTemplate");
		return ptr;
	}

};


// Class Engine.PhysicsSerializer
// 0x00A8 (0x00D0 - 0x0028)
class UPhysicsSerializer : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsSerializer");
		return ptr;
	}

};


// Class Engine.PlatformInterfaceBase
// 0x0010 (0x0038 - 0x0028)
class UPlatformInterfaceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformInterfaceBase");
		return ptr;
	}

};


// Class Engine.CloudStorageBase
// 0x0018 (0x0050 - 0x0038)
class UCloudStorageBase : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TArray<class FString>                              LocalCloudFiles;                                          // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      bSuppressDelegateCalls : 1;                               // 0x01E3(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CloudStorageBase");
		return ptr;
	}

};


// Class Engine.InGameAdManager
// 0x0028 (0x0060 - 0x0038)
class UInGameAdManager : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	unsigned char                                      bShouldPauseWhileAdOpen : 1;                              // 0x01E3(0x0001)
	TArray<struct FScriptDelegate>                     ClickedBannerDelegates;                                   // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FScriptDelegate>                     ClosedAdDelegates;                                        // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InGameAdManager");
		return ptr;
	}

};


// Class Engine.MicroTransactionBase
// 0x0030 (0x0068 - 0x0038)
class UMicroTransactionBase : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TArray<struct FPurchaseInfo>                       AvailableProducts;                                        // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      LastError;                                                // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      LastErrorSolution;                                        // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MicroTransactionBase");
		return ptr;
	}

};


// Class Engine.TwitterIntegrationBase
// 0x0000 (0x0038 - 0x0038)
class UTwitterIntegrationBase : public UPlatformInterfaceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TwitterIntegrationBase");
		return ptr;
	}


	bool TwitterRequest(const class FString& URL, TArray<class FString> ParamKeysAndValues, TEnumAsByte<ETwitterRequestMethod> RequestMethod, int AccountIndex);
	bool ShowTweetUI(const class FString& InitialMessage, const class FString& URL, const class FString& Picture);
	void Init();
	int GetNumAccounts();
	class FString GetAccountName(int AccountIndex);
	bool CanShowTweetUI();
	bool AuthorizeAccounts();
};


// Class Engine.PlatformInterfaceWebResponse
// 0x0088 (0x00B0 - 0x0028)
class UPlatformInterfaceWebResponse : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class FString                                      OriginalURL;                                              // 0x01E3(0x0010) (ZeroConstructor)
	int                                                ResponseCode;                                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Tag;                                                      // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      StringResponse;                                           // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformInterfaceWebResponse");
		return ptr;
	}


	int GetNumHeaders();
	class FString GetHeaderValue(const class FString& HeaderName);
	void GetHeader(int HeaderIndex, class FString* Header, class FString* Value);
};


// Class Engine.ChildConnection
// 0x0008 (0x34418 - 0x34410)
class UChildConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x34410(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ChildConnection");
		return ptr;
	}

};


// Class Engine.DemoNetConnection
// 0x0010 (0x34420 - 0x34410)
class UDemoNetConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x34410(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoNetConnection");
		return ptr;
	}

};


// Class Engine.MockNetConnection
// 0x0000 (0x34410 - 0x34410)
class UMockNetConnection : public UNetConnection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MockNetConnection");
		return ptr;
	}

};


// Class Engine.Polys
// 0x0010 (0x0038 - 0x0028)
class UPolys : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Polys");
		return ptr;
	}

};


// Class Engine.ReporterBase
// 0x0008 (0x0030 - 0x0028)
class UReporterBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReporterBase");
		return ptr;
	}

};


// Class Engine.ReporterGraph
// 0x0078 (0x00A8 - 0x0030)
class UReporterGraph : public UReporterBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0030(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReporterGraph");
		return ptr;
	}

};


// Class Engine.ReverbEffect
// 0x0030 (0x0058 - 0x0028)
class UReverbEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              Density;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Diffusion;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Gain;                                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GainHF;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecayTime;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecayHFRatio;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReflectionsGain;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReflectionsDelay;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LateGain;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LateDelay;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AirAbsorptionGainHF;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReverbEffect");
		return ptr;
	}

};


// Class Engine.Rig
// 0x0020 (0x0048 - 0x0028)
class URig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FTransformBase>                      TransformBases;                                           // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Rig");
		return ptr;
	}

};


// Class Engine.SaveGame
// 0x0000 (0x0028 - 0x0028)
class USaveGame : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SaveGame");
		return ptr;
	}

};


// Class Engine.SimpleConstructionScript
// 0x0030 (0x0058 - 0x0028)
class USimpleConstructionScript : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<class USCS_Node*>                           RootNodes;                                                // 0x01E3(0x0010) (ZeroConstructor)
	class USCS_Node*                                   DefaultSceneRootNode;                                     // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class USCS_Node*                                   RootNode;                                                 // 0x01E3(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimpleConstructionScript");
		return ptr;
	}

};


// Class Engine.SCS_Node
// 0x0078 (0x00A0 - 0x0028)
class USCS_Node : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UActorComponent*                             ComponentTemplate;                                        // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       VariableName;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachToName;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ParentComponentOrVariableName;                            // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ParentComponentOwnerClassName;                            // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsParentComponentNative;                                 // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ServerMigrationFlagSet;                                   // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	TArray<class USCS_Node*>                           ChildNodes;                                               // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FBPVariableMetaDataEntry>            MetaDataArray;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       VariableGuid;                                             // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsFalseRoot;                                             // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bIsNative;                                                // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       NativeComponentName;                                      // 0x01E3(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SCS_Node");
		return ptr;
	}

};


// Class Engine.Selection
// 0x0030 (0x0058 - 0x0028)
class USelection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Selection");
		return ptr;
	}

};


// Class Engine.DestructibleMesh
// 0x0098 (0x02D0 - 0x0238)
class UDestructibleMesh : public USkeletalMesh
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0238(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DestructibleMesh");
		return ptr;
	}

};


// Class Engine.SkeletalMeshSocket
// 0x0038 (0x0060 - 0x0028)
class USkeletalMeshSocket : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeScale;                                            // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshSocket");
		return ptr;
	}


	void InitializeSocketFromLocation(class USkeletalMeshComponent* SkelComp, const struct FVector& WorldLocation, const struct FVector& WorldNormal);
	struct FVector GetSocketLocation(class USkeletalMeshComponent* SkelComp);
};


// Class Engine.SlateBrushAsset
// 0x0090 (0x00B8 - 0x0028)
class USlateBrushAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SlateBrushAsset");
		return ptr;
	}

};


// Class Engine.SoundBase
// 0x0028 (0x0050 - 0x0028)
class USoundBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class USoundClass*                                 SoundClassObject;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDebug : 1;                                               // 0x01E3(0x0001) (Edit)
	TEnumAsByte<EMaxConcurrentResolutionRule>          MaxConcurrentResolutionRule;                              // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxConcurrentPlayCount;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundBase");
		return ptr;
	}

};


// Class Engine.DialogueSoundWaveProxy
// 0x0018 (0x0068 - 0x0050)
class UDialogueSoundWaveProxy : public USoundBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0050(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueSoundWaveProxy");
		return ptr;
	}

};


// Class Engine.SoundCue
// 0x00E0 (0x0130 - 0x0050)
class USoundCue : public USoundBase
{
public:
	unsigned char                                      UnknownData00[0x193];                                     // 0x0050(0x0193) MISSED OFFSET
	unsigned char                                      bOverrideAttenuation : 1;                                 // 0x01E3(0x0001) (Edit)
	class USoundNode*                                  FirstNode;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAttenuationSettings                        AttenuationOverrides;                                     // 0x01E3(0x00C0) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundCue");
		return ptr;
	}

};


// Class Engine.SoundGroups
// 0x0060 (0x0088 - 0x0028)
class USoundGroups : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundGroups");
		return ptr;
	}

};


// Class Engine.SoundWave
// 0x01C8 (0x0218 - 0x0050)
class USoundWave : public USoundBase
{
public:
	unsigned char                                      UnknownData00[0x193];                                     // 0x0050(0x0193) MISSED OFFSET
	int                                                CompressionQuality;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x01E3(0x0001) (Edit)
	unsigned char                                      bStreaming : 1;                                           // 0x01E3(0x0001) (Edit)
	int                                                StreamingPriority;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 3;                                        // 0x01E3(0x0001)
	unsigned char                                      bMature : 1;                                              // 0x01E3(0x0001) (Edit)
	unsigned char                                      bManualWordWrap : 1;                                      // 0x01E3(0x0001) (Edit)
	unsigned char                                      bSingleLine : 1;                                          // 0x01E3(0x0001) (Edit)
	TEnumAsByte<ESoundGroup>                           SoundGroup;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      SpokenText;                                               // 0x01E3(0x0010) (Edit, ZeroConstructor)
	float                                              Volume;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumChannels;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SampleRate;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                RawPCMDataSize;                                           // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FSubtitleCue>                        Subtitles;                                                // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FLocalizedSubtitle>                  LocalizedSubtitles;                                       // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x25];                                      // 0x01F3(0x0025) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundWave");
		return ptr;
	}

};


// Class Engine.SoundWaveProcedural
// 0x0018 (0x0230 - 0x0218)
class USoundWaveProcedural : public USoundWave
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0218(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundWaveProcedural");
		return ptr;
	}

};


// Class Engine.SoundClass
// 0x0050 (0x0078 - 0x0028)
class USoundClass : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FSoundClassProperties                       Properties;                                               // 0x01E3(0x0024) (Edit)
	TArray<class USoundClass*>                         ChildClasses;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FPassiveSoundMixModifier>            PassiveSoundMixModifiers;                                 // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundClass");
		return ptr;
	}

};


// Class Engine.SoundMix
// 0x0050 (0x0078 - 0x0028)
class USoundMix : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	unsigned char                                      bApplyEQ : 1;                                             // 0x01E3(0x0001) (Edit)
	float                                              EQPriority;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAudioEQEffect                              EQSettings;                                               // 0x01E3(0x0028) (Edit)
	TArray<struct FSoundClassAdjuster>                 SoundClassEffects;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor)
	float                                              InitialDelay;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeInTime;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundMix");
		return ptr;
	}

};


// Class Engine.SoundNode
// 0x0010 (0x0038 - 0x0028)
class USoundNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNode");
		return ptr;
	}

};


// Class Engine.SoundNodeAssetReferencer
// 0x0000 (0x0038 - 0x0038)
class USoundNodeAssetReferencer : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAssetReferencer");
		return ptr;
	}

};


// Class Engine.SoundNodeWavePlayer
// 0x0030 (0x0068 - 0x0038)
class USoundNodeWavePlayer : public USoundNodeAssetReferencer
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TAssetPtr<class USoundWave>                        SoundWaveAssetPtr;                                        // 0x01E3(0x0020) (Edit)
	class USoundWave*                                  SoundWave;                                                // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWavePlayer");
		return ptr;
	}

};


// Class Engine.SoundNodeAttenuation
// 0x00D0 (0x0108 - 0x0038)
class USoundNodeAttenuation : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAttenuationSettings                        AttenuationOverrides;                                     // 0x01E3(0x00C0) (Edit)
	unsigned char                                      bOverrideAttenuation : 1;                                 // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAttenuation");
		return ptr;
	}

};


// Class Engine.SoundNodeBranch
// 0x0008 (0x0040 - 0x0038)
class USoundNodeBranch : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FName                                       BoolParameterName;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeBranch");
		return ptr;
	}

};


// Class Engine.SoundNodeConcatenator
// 0x0010 (0x0048 - 0x0038)
class USoundNodeConcatenator : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TArray<float>                                      InputVolume;                                              // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeConcatenator");
		return ptr;
	}

};


// Class Engine.SoundNodeDelay
// 0x0008 (0x0040 - 0x0038)
class USoundNodeDelay : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	float                                              DelayMin;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DelayMax;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDelay");
		return ptr;
	}

};


// Class Engine.SoundNodeDialoguePlayer
// 0x0028 (0x0060 - 0x0038)
class USoundNodeDialoguePlayer : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FDialogueWaveParameter                      DialogueWaveParameter;                                    // 0x01E3(0x0020) (Edit)
	unsigned char                                      bLooping : 1;                                             // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDialoguePlayer");
		return ptr;
	}

};


// Class Engine.SoundNodeDistanceCrossFade
// 0x0010 (0x0048 - 0x0038)
class USoundNodeDistanceCrossFade : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TArray<struct FDistanceDatum>                      CrossFadeInput;                                           // 0x01E3(0x0010) (Edit, ExportObject, EditFixedSize, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDistanceCrossFade");
		return ptr;
	}

};


// Class Engine.SoundNodeParamCrossFade
// 0x0008 (0x0050 - 0x0048)
class USoundNodeParamCrossFade : public USoundNodeDistanceCrossFade
{
public:
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	struct FName                                       ParamName;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeParamCrossFade");
		return ptr;
	}

};


// Class Engine.SoundNodeDoppler
// 0x0008 (0x0040 - 0x0038)
class USoundNodeDoppler : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	float                                              DopplerIntensity;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDoppler");
		return ptr;
	}

};


// Class Engine.SoundNodeEnveloper
// 0x0138 (0x0170 - 0x0038)
class USoundNodeEnveloper : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	float                                              LoopStart;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LoopEnd;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DurationAfterLoop;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LoopCount;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLoopIndefinitely : 1;                                    // 0x01E3(0x0001) (Edit)
	unsigned char                                      bLoop : 1;                                                // 0x01E3(0x0001) (Edit)
	class UDistributionFloatConstantCurve*             VolumeInterpCurve;                                        // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData)
	class UDistributionFloatConstantCurve*             PitchInterpCurve;                                         // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData)
	struct FRuntimeFloatCurve                          VolumeCurve;                                              // 0x01E3(0x0080) (Edit)
	struct FRuntimeFloatCurve                          PitchCurve;                                               // 0x01E3(0x0080) (Edit)
	float                                              PitchMin;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchMax;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMin;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMax;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeEnveloper");
		return ptr;
	}

};


// Class Engine.SoundNodeGroupControl
// 0x0010 (0x0048 - 0x0038)
class USoundNodeGroupControl : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TArray<int>                                        GroupSizes;                                               // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeGroupControl");
		return ptr;
	}

};


// Class Engine.SoundNodeLooping
// 0x0008 (0x0040 - 0x0038)
class USoundNodeLooping : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	int                                                LoopCount;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLoopIndefinitely : 1;                                    // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeLooping");
		return ptr;
	}

};


// Class Engine.SoundNodeMature
// 0x0000 (0x0038 - 0x0038)
class USoundNodeMature : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeMature");
		return ptr;
	}

};


// Class Engine.SoundNodeMixer
// 0x0010 (0x0048 - 0x0038)
class USoundNodeMixer : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TArray<float>                                      InputVolume;                                              // 0x01E3(0x0010) (Edit, ExportObject, EditFixedSize, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeMixer");
		return ptr;
	}

};


// Class Engine.SoundNodeModulator
// 0x0010 (0x0048 - 0x0038)
class USoundNodeModulator : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	float                                              PitchMin;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchMax;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMin;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMax;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeModulator");
		return ptr;
	}

};


// Class Engine.SoundNodeModulatorContinuous
// 0x0040 (0x0078 - 0x0038)
class USoundNodeModulatorContinuous : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FModulatorContinuousParams                  PitchModulationParams;                                    // 0x01E3(0x0020) (Edit)
	struct FModulatorContinuousParams                  VolumeModulationParams;                                   // 0x01E3(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeModulatorContinuous");
		return ptr;
	}

};


// Class Engine.SoundNodeOscillator
// 0x0028 (0x0060 - 0x0038)
class USoundNodeOscillator : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	unsigned char                                      bModulateVolume : 1;                                      // 0x01E3(0x0001) (Edit)
	unsigned char                                      bModulatePitch : 1;                                       // 0x01E3(0x0001) (Edit)
	float                                              AmplitudeMin;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AmplitudeMax;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrequencyMin;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrequencyMax;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OffsetMin;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OffsetMax;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CenterMin;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CenterMax;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeOscillator");
		return ptr;
	}

};


// Class Engine.SoundNodeQualityLevel
// 0x0000 (0x0038 - 0x0038)
class USoundNodeQualityLevel : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeQualityLevel");
		return ptr;
	}

};


// Class Engine.SoundNodeRandom
// 0x0030 (0x0068 - 0x0038)
class USoundNodeRandom : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TArray<float>                                      Weights;                                                  // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	int                                                PreselectAtLevelLoad;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRandomizeWithoutReplacement : 1;                         // 0x01E3(0x0001) (Edit)
	TArray<bool>                                       HasBeenUsed;                                              // 0x01E3(0x0010) (ZeroConstructor, Transient)
	int                                                NumRandomUsed;                                            // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeRandom");
		return ptr;
	}

};


// Class Engine.SoundNodeSoundClass
// 0x0008 (0x0040 - 0x0038)
class USoundNodeSoundClass : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	class USoundClass*                                 SoundClassOverride;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeSoundClass");
		return ptr;
	}

};


// Class Engine.SoundNodeSwitch
// 0x0008 (0x0040 - 0x0038)
class USoundNodeSwitch : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FName                                       IntParameterName;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeSwitch");
		return ptr;
	}

};


// Class Engine.SoundNodeWaveParam
// 0x0008 (0x0040 - 0x0038)
class USoundNodeWaveParam : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FName                                       WaveParameterName;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWaveParam");
		return ptr;
	}

};


// Class Engine.StaticMesh
// 0x0110 (0x0138 - 0x0028)
class UStaticMesh : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	int                                                MinLOD;                                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x01E3(0x0010) (ZeroConstructor)
	int                                                LightMapResolution;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LightMapCoordinateIndex;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UBodySetup*                                  BodySetup;                                                // 0x01E3(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	int                                                LODForCollision;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseMaximumStreamingTexelRatio : 1;                       // 0x01E3(0x0001) (Edit)
	unsigned char                                      bStripComplexCollisionForConsole : 1;                     // 0x01E3(0x0001) (Deprecated)
	unsigned char                                      bHasNavigationData : 1;                                   // 0x01E3(0x0001) (Edit)
	float                                              StreamingDistanceMultiplier;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LpvBiasMultiplier;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UStaticMeshSocket*>                   Sockets;                                                  // 0x01E3(0x0010) (ZeroConstructor)
	struct FVector                                     PositiveBoundsExtension;                                  // 0x01E3(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NegativeBoundsExtension;                                  // 0x01E3(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBoxSphereBounds                            ExtendedBounds;                                           // 0x01E3(0x001C) (ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              SourceMaterials;                                          // 0x01E3(0x0010) (ZeroConstructor)
	bool                                               bEnableAutomaticInstancing;                               // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ElementToIgnoreForTexFactor;                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class UAssetUserData*>                      AssetUserData;                                            // 0x01E3(0x0010) (Edit, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMesh");
		return ptr;
	}


	int GetNumUVChannels(int LodLevel);
	int GetNumLODsBP();
	struct FBox GetBoundingBox();
};


// Class Engine.StaticMeshSocket
// 0x0040 (0x0068 - 0x0028)
class UStaticMeshSocket : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x01E3(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeScale;                                            // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshSocket");
		return ptr;
	}

};


// Class Engine.SubsurfaceProfile
// 0x0028 (0x0050 - 0x0028)
class USubsurfaceProfile : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubsurfaceProfile");
		return ptr;
	}

};


// Class Engine.TextPropertyTestObject
// 0x00A8 (0x00D0 - 0x0028)
class UTextPropertyTestObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FText                                       DefaultedText;                                            // 0x01E3(0x0018)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0028(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       UndefaultedText;                                          // 0x01E3(0x0018)
	unsigned char                                      UnknownData02[0x20];                                      // 0x021B(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextPropertyTestObject");
		return ptr;
	}

};


// Class Engine.Texture2D
// 0x0050 (0x0188 - 0x0138)
class UTexture2D : public UTexture
{
public:
	unsigned char                                      UnknownData00[0xAB];                                      // 0x0138(0x00AB) MISSED OFFSET
	int                                                RequestedMips;                                            // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ResidentMips;                                             // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                StreamingIndex;                                           // 0x01E3(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                FirstResourceMemMip;                                      // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   ImportedSize;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              ForceMipLevelsToBeResidentTimestamp;                      // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bTemporarilyDisableStreaming : 1;                         // 0x01E3(0x0001) (Transient)
	unsigned char                                      bIsStreamable : 1;                                        // 0x01E3(0x0001) (Transient)
	unsigned char                                      bHasCancelationPending : 1;                               // 0x01E3(0x0001) (Transient)
	unsigned char                                      bForceMiplevelsToBeResident : 1;                          // 0x01E3(0x0001) (Transient)
	unsigned char                                      bGlobalForceMipLevelsToBeResident : 1;                    // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<ETextureAddress>                       AddressX;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressY;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinimumLoadedMips;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2D");
		return ptr;
	}


	int Blueprint_GetSizeY();
	int Blueprint_GetSizeX();
};


// Class Engine.LightMapTexture2D
// 0x0008 (0x0190 - 0x0188)
class ULightMapTexture2D : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightMapTexture2D");
		return ptr;
	}

};


// Class Engine.ShadowMapTexture2D
// 0x0008 (0x0190 - 0x0188)
class UShadowMapTexture2D : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x5B];                                      // 0x0188(0x005B) MISSED OFFSET
	TEnumAsByte<EShadowMapFlags>                       ShadowmapFlags;                                           // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShadowMapTexture2D");
		return ptr;
	}

};


// Class Engine.TextureLightProfile
// 0x0008 (0x0190 - 0x0188)
class UTextureLightProfile : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x5B];                                      // 0x0188(0x005B) MISSED OFFSET
	float                                              Brightness;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TextureMultiplier;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureLightProfile");
		return ptr;
	}

};


// Class Engine.Texture2DDynamic
// 0x0018 (0x0150 - 0x0138)
class UTexture2DDynamic : public UTexture
{
public:
	unsigned char                                      UnknownData00[0xAB];                                      // 0x0138(0x00AB) MISSED OFFSET
	TEnumAsByte<EPixelFormat>                          Format;                                                   // 0x01E3(0x0001) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2DDynamic");
		return ptr;
	}

};


// Class Engine.TextureCube
// 0x0058 (0x0190 - 0x0138)
class UTextureCube : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0138(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureCube");
		return ptr;
	}

};


// Class Engine.CanvasRenderTarget2D
// 0x0018 (0x0180 - 0x0168)
class UCanvasRenderTarget2D : public UTextureRenderTarget2D
{
public:
	unsigned char                                      UnknownData00[0x7B];                                      // 0x0168(0x007B) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCanvasRenderTargetUpdate;                               // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TWeakObjectPtr<class UWorld>                       World;                                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CanvasRenderTarget2D");
		return ptr;
	}


	void UpdateResource();
	void ReceiveUpdate(class UCanvas* Canvas, int Width, int Height);
	void GetSize(int* Width, int* Height);
	class UCanvasRenderTarget2D* STATIC_CreateCanvasRenderTarget2D(class UObject* WorldContextObject, class UClass* CanvasRenderTarget2DClass, int Width, int Height, TEnumAsByte<ECanvasRenderTargetMips> Mips, bool HDR, bool CreateTextureResource);
};


// Class Engine.TextureRenderTargetCube
// 0x0020 (0x0160 - 0x0140)
class UTextureRenderTargetCube : public UTextureRenderTarget
{
public:
	unsigned char                                      UnknownData00[0xA3];                                      // 0x0140(0x00A3) MISSED OFFSET
	int                                                SizeX;                                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ClearColor;                                               // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPixelFormat>                          OverrideFormat;                                           // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHDR : 1;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bForceLinearGamma : 1;                                    // 0x01E3(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTargetCube");
		return ptr;
	}

};


// Class Engine.ThumbnailInfo
// 0x0000 (0x0028 - 0x0028)
class UThumbnailInfo : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ThumbnailInfo");
		return ptr;
	}

};


// Class Engine.TimelineTemplate
// 0x0070 (0x0098 - 0x0028)
class UTimelineTemplate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              TimelineLength;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineLengthMode>                   LengthMode;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoPlay : 1;                                            // 0x01E3(0x0001) (Edit)
	unsigned char                                      bLoop : 1;                                                // 0x01E3(0x0001) (Edit)
	unsigned char                                      bReplicated : 1;                                          // 0x01E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bValidatedAsWired : 1;                                    // 0x01E3(0x0001)
	TArray<struct FTTEventTrack>                       EventTracks;                                              // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FTTFloatTrack>                       FloatTracks;                                              // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FTTVectorTrack>                      VectorTracks;                                             // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FTTLinearColorTrack>                 LinearColorTracks;                                        // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FBPVariableMetaDataEntry>            MetaDataArray;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TimelineTemplate");
		return ptr;
	}

};


// Class Engine.TouchInterface
// 0x0030 (0x0058 - 0x0028)
class UTouchInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FTouchInputControl>                  Controls;                                                 // 0x01E3(0x0010) (Edit, ZeroConstructor)
	float                                              ActiveOpacity;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InactiveOpacity;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeUntilDeactive;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeUntilReset;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ActivationDelay;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventRecenter;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TouchInterface");
		return ptr;
	}

};


// Class Engine.UserDefinedEnum
// 0x0010 (0x0068 - 0x0058)
class UUserDefinedEnum : public UEnum
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserDefinedEnum");
		return ptr;
	}

};


// Class Engine.AnimDataEntryStruct
// 0x0000 (0x00A8 - 0x00A8)
class UAnimDataEntryStruct : public UUserDefinedStruct
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimDataEntryStruct");
		return ptr;
	}

};


// Class Engine.VectorField
// 0x0020 (0x0048 - 0x0028)
class UVectorField : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FBox                                        Bounds;                                                   // 0x01E3(0x001C) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorField");
		return ptr;
	}

};


// Class Engine.VectorFieldAnimated
// 0x0040 (0x0088 - 0x0048)
class UVectorFieldAnimated : public UVectorField
{
public:
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	class UTexture2D*                                  Texture;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVectorFieldConstructionOp>            ConstructionOp;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                VolumeSizeX;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                VolumeSizeY;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                VolumeSizeZ;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SubImagesX;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SubImagesY;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FrameCount;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FramesPerSecond;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLoop : 1;                                                // 0x01E3(0x0001) (Edit)
	class UVectorFieldStatic*                          NoiseField;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoiseScale;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoiseMax;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldAnimated");
		return ptr;
	}

};


// Class Engine.VectorFieldStatic
// 0x0088 (0x00D0 - 0x0048)
class UVectorFieldStatic : public UVectorField
{
public:
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	int                                                SizeX;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SizeY;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SizeZ;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldStatic");
		return ptr;
	}

};


// Class Engine.VehicleWheel
// 0x00B0 (0x00D8 - 0x0028)
class UVehicleWheel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UStaticMesh*                                 CollisionMesh;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDontCreateShape;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoAdjustCollisionSize;                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShapeRadius;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShapeWidth;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampingRate;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SteerAngle;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectedByHandbrake;                                     // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UTireType*                                   TireType;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LatStiffMaxLoad;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LatStiffValue;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LongStiffValue;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SuspensionForceOffset;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SuspensionMaxRaise;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SuspensionMaxDrop;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SuspensionNaturalFrequency;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SuspensionDampingRatio;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxBrakeTorque;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxHandBrakeTorque;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWheeledVehicleMovementComponent*            VehicleSim;                                               // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	int                                                WheelIndex;                                               // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DebugLongSlip;                                            // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DebugLatSlip;                                             // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DebugNormalizedTireLoad;                                  // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DebugWheelTorque;                                         // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DebugLongForce;                                           // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DebugLatForce;                                            // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x01E3(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     OldLocation;                                              // 0x01E3(0x000C) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VehicleWheel");
		return ptr;
	}


	float GetSuspensionOffset();
	float GetSteerAngle();
	float GetRotationAngle();
};


// Class Engine.VertexAnimBase
// 0x0008 (0x0030 - 0x0028)
class UVertexAnimBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VertexAnimBase");
		return ptr;
	}

};


// Class Engine.MorphTarget
// 0x0010 (0x0040 - 0x0030)
class UMorphTarget : public UVertexAnimBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphTarget");
		return ptr;
	}

};


// Class Engine.VertexAnimation
// 0x0018 (0x0048 - 0x0030)
class UVertexAnimation : public UVertexAnimBase
{
public:
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	int                                                NumAnimatedVerts;                                         // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VertexAnimation");
		return ptr;
	}

};


// Class Engine.VisualLoggerAutomationTests
// 0x0000 (0x0028 - 0x0028)
class UVisualLoggerAutomationTests : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VisualLoggerAutomationTests");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
