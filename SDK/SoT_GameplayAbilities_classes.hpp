#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameplayAbilities_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameplayAbilities.AttributeSet
// 0x0008 (0x0030 - 0x0028)
class UAttributeSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AttributeSet"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayCueInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayCueInterface"));
		return ptr;
	}


	void ForwardGameplayCueToParent();
	void BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent> EventType, const FGameplayCueParameters& Parameters);
};


// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilitySystemBlueprintLibrary"));
		return ptr;
	}


	static bool TargetDataHasOrigin(const FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static bool TargetDataHasHitResult(const FGameplayAbilityTargetDataHandle& HitResult, int Index);
	static bool TargetDataHasEndPoint(const FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static bool TargetDataHasActor(const FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static FGameplayEffectSpecHandle SetStackCountToMax(const FGameplayEffectSpecHandle& SpecHandle);
	static FGameplayEffectSpecHandle SetStackCount(const FGameplayEffectSpecHandle& SpecHandle, int StackCount);
	static FGameplayEffectSpecHandle SetDuration(const FGameplayEffectSpecHandle& SpecHandle, float Duration);
	static void SendGameplayEventToActor(AActor* Actor, const FGameplayTag& EventTag, const FGameplayEventData& payload);
	static FGameplayEffectSpecHandle MakeSpecHandle(UGameplayEffect* InGameplayEffect, AActor* InInstigator, AActor* InEffectCauser, float InLevel);
	static FGameplayTargetDataFilterHandle MakeFilterHandle(const FGameplayTargetDataFilter& Filter, AActor* FilterActor);
	static bool IsInstigatorLocallyControlledPlayer(const FGameplayCueParameters& Parameters);
	static bool IsInstigatorLocallyControlled(const FGameplayCueParameters& Parameters);
	static bool HasHitResult(const FGameplayCueParameters& Parameters);
	static FTransform GetTargetDataOrigin(const FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static FTransform GetTargetDataEndPointTransform(const FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static FVector GetTargetDataEndPoint(const FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static FVector GetOrigin(const FGameplayCueParameters& Parameters);
	static FTransform GetInstigatorTransform(const FGameplayCueParameters& Parameters);
	static AActor* GetInstigatorActor(const FGameplayCueParameters& Parameters);
	static FHitResult GetHitResultFromTargetData(const FGameplayAbilityTargetDataHandle& HitResult, int Index);
	static FHitResult GetHitResult(const FGameplayCueParameters& Parameters);
	static bool GetGameplayCueEndLocationAndNormal(AActor* TargetActor, const FGameplayCueParameters& Parameters, FVector* Location, FVector* Normal);
	static bool GetGameplayCueDirection(AActor* TargetActor, const FGameplayCueParameters& Parameters, FVector* Direction);
	static float GetFloatAttribute(AActor* Actor, const FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	static int GetDataCountFromTargetData(const FGameplayAbilityTargetDataHandle& TargetData);
	static TArray<AActor*> GetActorsFromTargetData(const FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static int GetActorCount(const FGameplayCueParameters& Parameters);
	static AActor* GetActorByIndex(const FGameplayCueParameters& Parameters, int Index);
	static int GetActiveGameplayEffectStackCount(const FActiveGameplayEffectHandle& ActiveHandle);
	static UAbilitySystemComponent* GetAbilitySystemComponent(AActor* Actor);
	static void ForwardGameplayCueToTarget(const TScriptInterface<class UGameplayCueInterface>& TargetCueInterface, TEnumAsByte<EGameplayCueEvent> EventType, const FGameplayCueParameters& Parameters);
	static FGameplayAbilityTargetDataHandle FilterTargetData(const FGameplayAbilityTargetDataHandle& TargetDataHandle, const FGameplayTargetDataFilterHandle& ActorFilterClass);
	static bool EffectContextIsInstigatorLocallyControlled(const FGameplayEffectContextHandle& EffectContext);
	static bool EffectContextHasHitResult(const FGameplayEffectContextHandle& EffectContext);
	static UObject* EffectContextGetSourceObject(const FGameplayEffectContextHandle& EffectContext);
	static AActor* EffectContextGetOriginalInstigatorActor(const FGameplayEffectContextHandle& EffectContext);
	static FVector EffectContextGetOrigin(const FGameplayEffectContextHandle& EffectContext);
	static AActor* EffectContextGetInstigatorActor(const FGameplayEffectContextHandle& EffectContext);
	static FHitResult EffectContextGetHitResult(const FGameplayEffectContextHandle& EffectContext);
	static AActor* EffectContextGetEffectCauser(const FGameplayEffectContextHandle& EffectContext);
	static bool DoesTargetDataContainActor(const FGameplayAbilityTargetDataHandle& TargetData, int Index, AActor* Actor);
	static bool DoesGameplayCueMeetTagRequirements(const FGameplayCueParameters& Parameters, FGameplayTagRequirements* SourceTagReqs, FGameplayTagRequirements* TargetTagReqs);
	static FGameplayEffectSpecHandle AssignSetByCallerMagnitude(const FGameplayEffectSpecHandle& SpecHandle, const FName& DataName, float Magnitude);
	static FGameplayAbilityTargetDataHandle AppendTargetDataHandle(const FGameplayAbilityTargetDataHandle& TargetHandle, const FGameplayAbilityTargetDataHandle& HandleToAdd);
	static FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(const FGameplayEffectSpecHandle& SpecHandle, const FGameplayEffectSpecHandle& LinkedGameplayEffectSpec);
	static FGameplayEffectSpecHandle AddGrantedTags(const FGameplayEffectSpecHandle& SpecHandle, const FGameplayTagContainer& NewGameplayTags);
	static FGameplayEffectSpecHandle AddGrantedTag(const FGameplayEffectSpecHandle& SpecHandle, const FGameplayTag& NewGameplayTag);
	static FGameplayEffectSpecHandle AddAssetTags(const FGameplayEffectSpecHandle& SpecHandle, const FGameplayTagContainer& NewGameplayTags);
	static FGameplayEffectSpecHandle AddAssetTag(const FGameplayEffectSpecHandle& SpecHandle, const FGameplayTag& NewGameplayTag);
	static FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(const FGameplayAbilityTargetingLocationInfo& SourceLocation, const FGameplayAbilityTargetingLocationInfo& TargetLocation);
	static FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(const FHitResult& HitResult);
	static FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(TArray<AActor*> ActorArray, bool OneTargetPerHandle);
	static FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(AActor* Actor);
};


// Class GameplayAbilities.GameplayEffect
// 0x0550 (0x0578 - 0x0028)
class UGameplayEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TEnumAsByte<EGameplayEffectDurationType>           DurationPolicy;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	FGameplayEffectModifierMagnitude                   DurationMagnitude;                                        // 0x0038(0x0170) (Edit, DisableEditOnInstance)
	FScalableFloat                                     Period;                                                   // 0x01A8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bExecutePeriodicEffectOnApplication;                      // 0x01C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01C9(0x0007) MISSED OFFSET
	TArray<FGameplayModifierInfo>                      Modifiers;                                                // 0x01D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<FGameplayEffectExecutionDefinition>         Executions;                                               // 0x01E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	FScalableFloat                                     ChanceToApplyToTarget;                                    // 0x01F0(0x0020) (Edit, DisableEditOnInstance)
	TArray<UClass*>                                    TargetEffectClasses;                                      // 0x0210(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<UGameplayEffect*>                           TargetEffects;                                            // 0x0220(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)
	TArray<UClass*>                                    OverflowEffects;                                          // 0x0230(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDenyOverflowApplication;                                 // 0x0240(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClearStackOnOverflow;                                    // 0x0241(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0242(0x0006) MISSED OFFSET
	TArray<UClass*>                                    PrematureExpirationEffectClasses;                         // 0x0248(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<UClass*>                                    RoutineExpirationEffectClasses;                           // 0x0258(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bRequireModifierSuccessToTriggerCues;                     // 0x0268(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	TArray<FGameplayEffectCue>                         GameplayCues;                                             // 0x0270(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	UGameplayEffectUIData*                             UIData;                                                   // 0x0280(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	FInheritedTagContainer                             InheritableGameplayEffectTags;                            // 0x0288(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	FGameplayTagContainer                              GameplayEffectTags;                                       // 0x0300(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	FInheritedTagContainer                             InheritableOwnedTagsContainer;                            // 0x0328(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	FGameplayTagContainer                              OwnedTagsContainer;                                       // 0x03A0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	FGameplayTagRequirements                           OngoingTagRequirements;                                   // 0x03C8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	FGameplayTagRequirements                           ApplicationTagRequirements;                               // 0x0418(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	FInheritedTagContainer                             RemoveGameplayEffectsWithTags;                            // 0x0468(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	FGameplayTagContainer                              ClearTagsContainer;                                       // 0x04E0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	FGameplayTagRequirements                           GrantedApplicationImmunityTags;                           // 0x0508(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TEnumAsByte<EGameplayEffectStackingType>           StackingType;                                             // 0x0558(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0559(0x0003) MISSED OFFSET
	int                                                StackLimitCount;                                          // 0x055C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EGameplayEffectStackingDurationPolicy> StackDurationRefreshPolicy;                               // 0x0560(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EGameplayEffectStackingPeriodPolicy>   StackPeriodResetPolicy;                                   // 0x0561(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x0562(0x0006) MISSED OFFSET
	TArray<FGameplayAbilitySpecDef>                    GrantedAbilities;                                         // 0x0568(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayEffect"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbility
// 0x0420 (0x0448 - 0x0028)
class UGameplayAbility : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET
	FGameplayTagContainer                              AbilityTags;                                              // 0x0068(0x0028) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0090(0x0018) MISSED OFFSET
	bool                                               bReplicateInputDirectly;                                  // 0x00A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x27];                                      // 0x00A9(0x0027) MISSED OFFSET
	TEnumAsByte<EGameplayAbilityReplicationPolicy>     ReplicationPolicy;                                        // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EGameplayAbilityInstancingPolicy>      InstancingPolicy;                                         // 0x00D1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bServerRespectsRemoteAbilityCancellation;                 // 0x00D2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRetriggerInstancedAbility;                               // 0x00D3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	FGameplayAbilityActivationInfo                     CurrentActivationInfo;                                    // 0x00D8(0x0020) (BlueprintVisible, BlueprintReadOnly)
	FGameplayEventData                                 CurrentEventData;                                         // 0x00F8(0x00A0) (BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EGameplayAbilityNetExecutionPolicy>    NetExecutionPolicy;                                       // 0x0198(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0199(0x0007) MISSED OFFSET
	UClass*                                            CostGameplayEffectClass;                                  // 0x01A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UGameplayEffect*                                   CostGameplayEffect;                                       // 0x01A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	TArray<FAbilityTriggerData>                        AbilityTriggers;                                          // 0x01B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	UClass*                                            CooldownGameplayEffectClass;                              // 0x01C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UGameplayEffect*                                   CooldownGameplayEffect;                                   // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	FGameplayTagQuery                                  CancelAbilitiesMatchingTagQuery;                          // 0x01D0(0x0048) (Edit, DisableEditOnInstance)
	FGameplayTagQuery                                  ConstTagQuery;                                            // 0x0218(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst)
	FGameplayTagContainer                              CancelAbilitiesWithTag;                                   // 0x0260(0x0028) (Edit, DisableEditOnInstance)
	FGameplayTagContainer                              BlockAbilitiesWithTag;                                    // 0x0288(0x0028) (Edit, DisableEditOnInstance)
	FGameplayTagContainer                              ActivationOwnedTags;                                      // 0x02B0(0x0028) (Edit, DisableEditOnInstance)
	FGameplayTagContainer                              ActivationRequiredTags;                                   // 0x02D8(0x0028) (Edit, DisableEditOnInstance)
	FGameplayTagContainer                              ActivationBlockedTags;                                    // 0x0300(0x0028) (Edit, DisableEditOnInstance)
	FGameplayTagContainer                              SourceRequiredTags;                                       // 0x0328(0x0028) (Edit, DisableEditOnInstance)
	FGameplayTagContainer                              SourceBlockedTags;                                        // 0x0350(0x0028) (Edit, DisableEditOnInstance)
	FGameplayTagContainer                              TargetRequiredTags;                                       // 0x0378(0x0028) (Edit, DisableEditOnInstance)
	FGameplayTagContainer                              TargetBlockedTags;                                        // 0x03A0(0x0028) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x70];                                      // 0x03C8(0x0070) MISSED OFFSET
	UAnimMontage*                                      CurrentMontage;                                           // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsActive;                                                // 0x0440(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsCancelable;                                            // 0x0441(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsBlockingOtherAbilities;                                // 0x0442(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x0443(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayAbility"));
		return ptr;
	}


	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);
	void SetCanBeCanceled(bool bCanBeCanceled);
	void SendGameplayEvent(const FGameplayTag& EventTag, const FGameplayEventData& payload);
	void MontageStop(float OverrideBlendOutTime);
	void MontageSetNextSectionName(const FName& FromSectionName, const FName& ToSectionName);
	void MontageJumpToSection(const FName& SectionName);
	FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(const FName& SocketName);
	FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();
	FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(UClass* GameplayEffectClass, float Level);
	bool K2_ShouldAbilityRespondToEvent(const FGameplayAbilityActorInfo& ActorInfo, const FGameplayEventData& payload);
	void K2_RemoveGameplayCue(const FGameplayTag& GameplayCueTag);
	void K2_OnEndAbility();
	void K2_ExecuteGameplayCueWithParams(const FGameplayTag& GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);
	void K2_ExecuteGameplayCue(const FGameplayTag& GameplayCueTag, const FGameplayEffectContextHandle& Context);
	void K2_EndAbility();
	void K2_CommitExecute();
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent);
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent);
	bool K2_CommitAbility();
	bool K2_CheckAbilityCost();
	bool K2_CheckAbilityCooldown();
	bool K2_CanActivateAbility(const FGameplayAbilityActorInfo& ActorInfo, FGameplayTagContainer* RelevantTags);
	TArray<FActiveGameplayEffectHandle> K2_ApplyGameplayEffectToTarget(const FGameplayAbilityTargetDataHandle& TargetData, UGameplayEffect* GameplayEffect, int GameplayEffectLevel);
	FActiveGameplayEffectHandle K2_ApplyGameplayEffectToOwner(UGameplayEffect* GameplayEffect, int GameplayEffectLevel);
	TArray<FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(const FGameplayEffectSpecHandle& EffectSpecHandle, const FGameplayAbilityTargetDataHandle& TargetData);
	FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(const FGameplayEffectSpecHandle& EffectSpecHandle);
	void K2_AddGameplayCue(const FGameplayTag& GameplayCueTag, const FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd);
	void K2_ActivateAbilityFromEvent(const FGameplayEventData& EventData);
	void K2_ActivateAbility();
	USkeletalMeshComponent* GetOwningComponentFromActorInfo();
	AActor* GetOwningActorFromActorInfo();
	FGameplayEffectSpecHandle GetOutgoingGameplayEffectSpec(UGameplayEffect* GameplayEffect, float Level);
	UObject* GetCurrentSourceObject();
	UAnimMontage* GetCurrentMontage();
	FGameplayEffectContextHandle GetContextFromOwner(const FGameplayAbilityTargetDataHandle& OptionalTargetData);
	AActor* GetAvatarActorFromActorInfo();
	FGameplayAbilityActorInfo GetActorInfo();
	int GetAbilityLevel();
	void EndTaskByInstanceName(const FName& InstanceName);
	void EndAbilityState(const FName& OptionalStateNameToEnd);
	void ConfirmTaskByInstanceName(const FName& InstanceName, bool bEndTask);
	void CancelTaskByInstanceName(const FName& InstanceName);
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const FGameplayTagContainer& WithGrantedTags, int StacksToRemove);
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(const FGameplayTagContainer& WithAssetTags, int StacksToRemove);
	TArray<FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(const FGameplayAbilityTargetDataHandle& TargetData, UClass* GameplayEffectClass, int GameplayEffectLevel);
	FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(UClass* GameplayEffectClass, int GameplayEffectLevel);
};


// Class GameplayAbilities.AbilitySystemComponent
// 0x0B70 (0x0C98 - 0x0128)
class UAbilitySystemComponent : public UGameplayTasksComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
	TArray<FAttributeDefaults>                         DefaultStartingData;                                      // 0x0130(0x0010) (Edit, ZeroConstructor)
	TArray<UAttributeSet*>                             SpawnedAttributes;                                        // 0x0140(0x0010) (ExportObject, Net, ZeroConstructor)
	FPredictionKey                                     ReplicatedPredictionKey;                                  // 0x0150(0x0018) (Net)
	unsigned char                                      UnknownData01[0x78];                                      // 0x0168(0x0078) MISSED OFFSET
	float                                              OutgoingDuration;                                         // 0x01E0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IncomingDuration;                                         // 0x01E4(0x0004) (ZeroConstructor, IsPlainOldData)
	FGameplayAbilitySpecContainer                      ActivatableAbilities;                                     // 0x01E8(0x00C0) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData02[0x50];                                      // 0x02A8(0x0050) MISSED OFFSET
	TArray<UGameplayAbility*>                          AllReplicatedInstancedAbilities;                          // 0x02F8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x1B0];                                     // 0x0308(0x01B0) MISSED OFFSET
	TArray<AGameplayAbilityTargetActor*>               SpawnedTargetActors;                                      // 0x04B8(0x0010) (ZeroConstructor)
	FGameplayAbilityRepAnimMontage                     RepAnimMontageInfo;                                       // 0x04C8(0x0030) (Net)
	FGameplayAbilityLocalAnimMontage                   LocalAnimMontageInfo;                                     // 0x04F8(0x0030)
	unsigned char                                      UnknownData04[0xA0];                                      // 0x0528(0x00A0) MISSED OFFSET
	AActor*                                            OwnerActor;                                               // 0x05C8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	AActor*                                            AvatarActor;                                              // 0x05D0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x18];                                      // 0x05D8(0x0018) MISSED OFFSET
	FActiveGameplayEffectsContainer                    ActiveGameplayEffects;                                    // 0x05F0(0x0368) (Net)
	FActiveGameplayCueContainer                        ActiveGameplayCues;                                       // 0x0958(0x00C0) (Net)
	unsigned char                                      UnknownData06[0x130];                                     // 0x0A18(0x0130) MISSED OFFSET
	TArray<unsigned char>                              BlockedAbilityBindings;                                   // 0x0B48(0x0010) (Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData07[0x140];                                     // 0x0B58(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilitySystemComponent"));
		return ptr;
	}


	bool TryActivateAbilityByClass(UClass* InAbilityToActivate, bool bAllowRemoteActivation);
	bool TryActivateAbilitiesByTag(const FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);
	void TargetConfirm();
	void TargetCancel();
	void SetUserAbilityActivationInhibited(bool NewInhibit);
	void SetActiveGameplayEffectLevel(const FActiveGameplayEffectHandle& ActiveHandle, int NewLevel);
	void ServerTryActivateAbilityWithEventData(const FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const FPredictionKey& PredictionKey, const FGameplayEventData& TriggerEventData);
	void ServerTryActivateAbility(const FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const FPredictionKey& PredictionKey);
	void ServerSetReplicatedTargetDataCancelled(const FGameplayAbilitySpecHandle& AbilityHandle, const FPredictionKey& AbilityOriginalPredictionKey, const FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedTargetData(const FGameplayAbilitySpecHandle& AbilityHandle, const FPredictionKey& AbilityOriginalPredictionKey, const FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const FGameplayTag& ApplicationTag, const FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const FGameplayAbilitySpecHandle& AbilityHandle, const FPredictionKey& AbilityOriginalPredictionKey, const FPredictionKey& CurrentPredictionKey);
	void ServerSetInputReleased(const FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerSetInputPressed(const FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerEndAbility(const FGameplayAbilitySpecHandle& AbilityToEnd, const FGameplayAbilityActivationInfo& ActivationInfo, const FPredictionKey& PredictionKey);
	void ServerCurrentMontageSetNextSectionName(UAnimMontage* ClientAnimMontage, float ClientPosition, const FName& SectionName, const FName& NextSectionName);
	void ServerCurrentMontageJumpToSectionName(UAnimMontage* ClientAnimMontage, const FName& SectionName);
	void ServerCancelAbility(const FGameplayAbilitySpecHandle& AbilityToCancel, const FGameplayAbilityActivationInfo& ActivationInfo);
	void RemoveActiveGameplayEffectBySourceEffect(UClass* GameplayEffect, UAbilitySystemComponent* InstigatorAbilitySystemComponent, int StacksToRemove);
	bool RemoveActiveGameplayEffect(const FActiveGameplayEffectHandle& Handle, int StacksToRemove);
	void RemoveActiveEffectsWithTags(const FGameplayTagContainer& Tags);
	void OnRep_ReplicatedAnimMontage();
	void OnRep_PredictionKey();
	void OnRep_OwningActor();
	void OnRep_GameplayEffects();
	void OnRep_ActivateAbilities();
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(const FGameplayTag& GameplayCueTag, const FPredictionKey& PredictionKey, const FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(const FGameplayEffectSpecForRPC& Spec, const FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueExecuted(const FGameplayTag& GameplayCueTag, const FPredictionKey& PredictionKey, const FGameplayEffectContextHandle& EffectContext);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const FGameplayEffectSpecForRPC& Spec, const FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueAdded(const FGameplayTag& GameplayCueTag, const FPredictionKey& PredictionKey, const FGameplayEffectContextHandle& EffectContext);
	FGameplayEffectSpecHandle MakeOutgoingSpec(UClass* GameplayEffectClass, float Level, const FGameplayEffectContextHandle& Context);
	void K2_InitStats(UClass* Attributes, UDataTable* DataTable);
	FActiveGameplayEffectHandle K2_ApplyGameplayEffectToTarget(UGameplayEffect* GameplayEffect, UAbilitySystemComponent* Target, float Level, const FGameplayEffectContextHandle& Context);
	FActiveGameplayEffectHandle K2_ApplyGameplayEffectToSelf(UGameplayEffect* GameplayEffect, float Level, const FGameplayEffectContextHandle& EffectContext);
	bool IsGameplayCueActive(const FGameplayTag& GameplayCueTag);
	bool GetUserAbilityActivationInhibited();
	FGameplayEffectSpecHandle GetOutgoingSpec(UGameplayEffect* GameplayEffect, float Level);
	float GetGameplayEffectMagnitude(const FActiveGameplayEffectHandle& Handle, const FGameplayAttribute& Attribute);
	int GetGameplayEffectCount(UClass* SourceGameplayEffect, UAbilitySystemComponent* OptionalInstigatorFilterComponent);
	FGameplayEffectContextHandle GetEffectContext();
	void ClientTryActivateAbility(const FGameplayAbilitySpecHandle& AbilityToActivate);
	void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const FGameplayAbilitySpecHandle& AbilityHandle, const FPredictionKey& AbilityOriginalPredictionKey);
	void ClientEndAbility(const FGameplayAbilitySpecHandle& AbilityToEnd, const FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientCancelAbility(const FGameplayAbilitySpecHandle& AbilityToCancel, const FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientActivateAbilitySucceedWithEventData(const FGameplayAbilitySpecHandle& AbilityToActivate, const FPredictionKey& PredictionKey, const FGameplayEventData& TriggerEventData);
	void ClientActivateAbilitySucceed(const FGameplayAbilitySpecHandle& AbilityToActivate, const FPredictionKey& PredictionKey);
	void ClientActivateAbilityFailed(const FGameplayAbilitySpecHandle& AbilityToActivate, int16_t PredictionKey);
	FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(UClass* GameplayEffectClass, UAbilitySystemComponent* Target, float Level, const FGameplayEffectContextHandle& Context);
	FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(UClass* GameplayEffectClass, float Level, const FGameplayEffectContextHandle& EffectContext);
	FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(UAbilitySystemComponent* Target, FGameplayEffectSpecHandle* SpecHandle);
	FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(FGameplayEffectSpecHandle* SpecHandle);
	void AbilityConfirmOrCancel__DelegateSignature();
	void AbilityAbilityKey__DelegateSignature(int InputID);
};


// Class GameplayAbilities.AbilitySystemDebugHUD
// 0x0000 (0x04C8 - 0x04C8)
class AAbilitySystemDebugHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilitySystemDebugHUD"));
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemGlobals
// 0x0108 (0x0130 - 0x0028)
class UAbilitySystemGlobals : public UObject
{
public:
	FStringClassReference                              AbilitySystemGlobalsClassName;                            // 0x0028(0x0010) (ZeroConstructor, Config)
	FGameplayTag                                       ActivateFailCooldownTag;                                  // 0x0038(0x0008)
	FName                                              ActivateFailCooldownName;                                 // 0x0040(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	FGameplayTag                                       ActivateFailCostTag;                                      // 0x0048(0x0008)
	FName                                              ActivateFailCostName;                                     // 0x0050(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	FGameplayTag                                       ActivateFailTagsBlockedTag;                               // 0x0058(0x0008)
	FName                                              ActivateFailTagsBlockedName;                              // 0x0060(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	FGameplayTag                                       ActivateFailTagsMissingTag;                               // 0x0068(0x0008)
	FName                                              ActivateFailTagsMissingName;                              // 0x0070(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	FGameplayTag                                       ActivateFailNetworkingTag;                                // 0x0078(0x0008)
	FName                                              ActivateFailNetworkingName;                               // 0x0080(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	FString                                            GlobalCurveTableName;                                     // 0x0088(0x0010) (ZeroConstructor, Config)
	FString                                            GlobalAttributeMetaDataTableName;                         // 0x0098(0x0010) (ZeroConstructor, Config)
	FString                                            GlobalAttributeSetDefaultsTableName;                      // 0x00A8(0x0010) (ZeroConstructor, Config)
	FStringAssetReference                              GlobalGameplayCueManagerName;                             // 0x00B8(0x0010) (ZeroConstructor, Config)
	TArray<FString>                                    GameplayCueNotifyPaths;                                   // 0x00C8(0x0010) (ZeroConstructor, Config)
	FStringAssetReference                              GameplayTagResponseTableName;                             // 0x00D8(0x0010) (ZeroConstructor, Config)
	UGameplayTagReponseTable*                          GameplayTagResponseTable;                                 // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               PredictTargetGameplayEffects;                             // 0x00F0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	UCurveTable*                                       GlobalCurveTable;                                         // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	UCurveTable*                                       GlobalAttributeDefaultsTable;                             // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	UDataTable*                                        GlobalAttributeMetaDataTable;                             // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	UGameplayCueManager*                               GlobalGameplayCueManager;                                 // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0118(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilitySystemGlobals"));
		return ptr;
	}


	void ToggleIgnoreAbilitySystemCosts();
	void ToggleIgnoreAbilitySystemCooldowns();
};


// Class GameplayAbilities.AbilitySystemInterface
// 0x0000 (0x0028 - 0x0028)
class UAbilitySystemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilitySystemInterface"));
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemTestPawn
// 0x0020 (0x0490 - 0x0470)
class AAbilitySystemTestPawn : public ADefaultPawn
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0470(0x0018) MISSED OFFSET
	UAbilitySystemComponent*                           AbilitySystemComponent;                                   // 0x0488(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilitySystemTestPawn"));
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask
// 0x0010 (0x0068 - 0x0058)
class UAbilityTask : public UGameplayTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask"));
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_MoveToLocation
// 0x0048 (0x00B0 - 0x0068)
class UAbilityTask_MoveToLocation : public UAbilityTask
{
public:
	FScriptMulticastDelegate                           OnTargetLocationReached;                                  // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0078(0x0004) MISSED OFFSET
	FVector                                            StartLocation;                                            // 0x007C(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	FVector                                            TargetLocation;                                           // 0x0088(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	float                                              DurationOfMovement;                                       // 0x0094(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	UCurveFloat*                                       LerpCurve;                                                // 0x00A0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	UCurveVector*                                      LerpCurveVector;                                          // 0x00A8(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_MoveToLocation"));
		return ptr;
	}


	static UAbilityTask_MoveToLocation* MoveToLocation(UObject* WorldContextObject, const FName& TaskInstanceName, const FVector& Location, float Duration, UCurveFloat* OptionalInterpolationCurve, UCurveVector* OptionalVectorInterpolationCurve);
};


// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// 0x0018 (0x0080 - 0x0068)
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{
public:
	FScriptMulticastDelegate                           OnSync;                                                   // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_NetworkSyncPoint"));
		return ptr;
	}


	static UAbilityTask_NetworkSyncPoint* WaitNetSync(UObject* WorldContextObject, TEnumAsByte<EAbilityTaskNetSyncType> SyncType);
	void OnSignalCallback();
};


// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// 0x0058 (0x00C0 - 0x0068)
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{
public:
	FScriptMulticastDelegate                           OnComplete;                                               // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnInterrupted;                                            // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnCancelled;                                              // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0098(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_PlayMontageAndWait"));
		return ptr;
	}


	void OnMontageInterrupted();
	void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
	static UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(UObject* WorldContextObject, const FName& TaskInstanceName, UAnimMontage* MontageToPlay, float Rate, const FName& StartSection);
};


// Class GameplayAbilities.AbilityTask_Repeat
// 0x0030 (0x0098 - 0x0068)
class UAbilityTask_Repeat : public UAbilityTask
{
public:
	FScriptMulticastDelegate                           OnPerformAction;                                          // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnFinished;                                               // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_Repeat"));
		return ptr;
	}


	static UAbilityTask_Repeat* RepeatAction(UObject* WorldContextObject, float TimeBetweenActions, int TotalActionCount);
};


// Class GameplayAbilities.AbilityTask_SpawnActor
// 0x0030 (0x0098 - 0x0068)
class UAbilityTask_SpawnActor : public UAbilityTask
{
public:
	FScriptMulticastDelegate                           Success;                                                  // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           DidNotSpawn;                                              // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_SpawnActor"));
		return ptr;
	}


	static UAbilityTask_SpawnActor* SpawnActor(UObject* WorldContextObject, const FGameplayAbilityTargetDataHandle& TargetData, UClass* Class);
	void FinishSpawningActor(UObject* WorldContextObject, const FGameplayAbilityTargetDataHandle& TargetData, AActor* SpawnedActor);
	bool BeginSpawningActor(UObject* WorldContextObject, const FGameplayAbilityTargetDataHandle& TargetData, UClass* Class, AActor** SpawnedActor);
};


// Class GameplayAbilities.AbilityTask_StartAbilityState
// 0x0038 (0x00A0 - 0x0068)
class UAbilityTask_StartAbilityState : public UAbilityTask
{
public:
	FScriptMulticastDelegate                           OnStateEnded;                                             // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnStateInterrupted;                                       // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0088(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_StartAbilityState"));
		return ptr;
	}


	static UAbilityTask_StartAbilityState* StartAbilityState(UObject* WorldContextObject, const FName& StateName, bool bEndCurrentState);
};


// Class GameplayAbilities.GameplayAbilityWorldReticle
// 0x0020 (0x03F0 - 0x03D0)
class AGameplayAbilityWorldReticle : public AActor
{
public:
	FWorldReticleParameters                            Parameters;                                               // 0x03D0(0x000C) (Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                               bFaceOwnerFlat;                                           // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToTargetedActor;                                     // 0x03DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTargetValid;                                           // 0x03DE(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTargetAnActor;                                         // 0x03DF(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 MasterPC;                                                 // 0x03E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	AActor*                                            TargetingActor;                                           // 0x03E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayAbilityWorldReticle"));
		return ptr;
	}


	void SetReticleMaterialParamVector(const FName& ParamName, const FVector& Value);
	void SetReticleMaterialParamFloat(const FName& ParamName, float Value);
	void OnValidTargetChanged(bool bNewValue);
	void OnTargetingAnActor(bool bNewValue);
	void OnParametersInitialized();
	void FaceTowardSource(bool bFaceIn2D);
};


// Class GameplayAbilities.GameplayAbilityTargetActor
// 0x0120 (0x04F0 - 0x03D0)
class AGameplayAbilityTargetActor : public AActor
{
public:
	bool                                               ShouldProduceTargetDataOnServer;                          // 0x03D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x03D1(0x000F) MISSED OFFSET
	FGameplayAbilityTargetingLocationInfo              StartLocation;                                            // 0x03E0(0x0070) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0450(0x0030) MISSED OFFSET
	APlayerController*                                 MasterPC;                                                 // 0x0480(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UGameplayAbility*                                  OwningAbility;                                            // 0x0488(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyOnConfirmation;                                   // 0x0490(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0491(0x0007) MISSED OFFSET
	AActor*                                            SourceActor;                                              // 0x0498(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	FWorldReticleParameters                            ReticleParams;                                            // 0x04A0(0x000C) (BlueprintVisible)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	UClass*                                            ReticleClass;                                             // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FGameplayTargetDataFilterHandle                    Filter;                                                   // 0x04B8(0x0018) (BlueprintVisible, Net)
	bool                                               bDebug;                                                   // 0x04D0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1F];                                      // 0x04D1(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayAbilityTargetActor"));
		return ptr;
	}


	void ConfirmTargeting();
	void CancelTargeting();
};


// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// 0x0028 (0x0090 - 0x0068)
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{
public:
	FScriptMulticastDelegate                           TimeElapsed;                                              // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_VisualizeTargeting"));
		return ptr;
	}


	static UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(UObject* WorldContextObject, AGameplayAbilityTargetActor* TargetActor, const FName& TaskInstanceName, float Duration);
	static UAbilityTask_VisualizeTargeting* VisualizeTargeting(UObject* WorldContextObject, UClass* Class, const FName& TaskInstanceName, float Duration);
	void FinishSpawningActor(UObject* WorldContextObject, AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(UObject* WorldContextObject, UClass* Class, AGameplayAbilityTargetActor** SpawnedActor);
};


// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// 0x0030 (0x0098 - 0x0068)
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{
public:
	FScriptMulticastDelegate                           OnActivate;                                               // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitAbilityActivate"));
		return ptr;
	}


	static UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(UObject* WorldContextObject, const FGameplayTag& WithTag, const FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
	void OnAbilityActivate(UGameplayAbility* ActivatedAbility);
};


// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// 0x0030 (0x0098 - 0x0068)
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{
public:
	FScriptMulticastDelegate                           OnCommit;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitAbilityCommit"));
		return ptr;
	}


	static UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(UObject* WorldContextObject, const FGameplayTag& WithTag, const FGameplayTag& WithoutTage, bool TriggerOnce);
	void OnAbilityCommit(UGameplayAbility* ActivatedAbility);
};


// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// 0x0040 (0x00A8 - 0x0068)
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{
public:
	FScriptMulticastDelegate                           OnChange;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0078(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitAttributeChange"));
		return ptr;
	}


	static UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(UObject* WorldContextObject, const FGameplayAttribute& InAttribute, const FGameplayTag& InWithTag, const FGameplayTag& InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce);
	static UAbilityTask_WaitAttributeChange* WaitForAttributeChange(UObject* WorldContextObject, const FGameplayAttribute& Attribute, const FGameplayTag& WithSrcTag, const FGameplayTag& WithoutSrcTag, bool TriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitCancel
// 0x0018 (0x0080 - 0x0068)
class UAbilityTask_WaitCancel : public UAbilityTask
{
public:
	FScriptMulticastDelegate                           OnCancel;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitCancel"));
		return ptr;
	}


	static UAbilityTask_WaitCancel* WaitCancel(UObject* WorldContextObject);
	void OnLocalCancelCallback();
	void OnCancelCallback();
};


// Class GameplayAbilities.AbilityTask_WaitConfirm
// 0x0020 (0x0088 - 0x0068)
class UAbilityTask_WaitConfirm : public UAbilityTask
{
public:
	FScriptMulticastDelegate                           OnConfirm;                                                // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitConfirm"));
		return ptr;
	}


	static UAbilityTask_WaitConfirm* WaitConfirm(UObject* WorldContextObject);
	void OnConfirmCallback(UGameplayAbility* Ability);
};


// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// 0x0028 (0x0090 - 0x0068)
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{
public:
	FScriptMulticastDelegate                           OnConfirm;                                                // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnCancel;                                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitConfirmCancel"));
		return ptr;
	}


	static UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(UObject* WorldContextObject);
	void OnLocalConfirmCallback();
	void OnLocalCancelCallback();
	void OnConfirmCallback();
	void OnCancelCallback();
};


// Class GameplayAbilities.AbilityTask_WaitDelay
// 0x0018 (0x0080 - 0x0068)
class UAbilityTask_WaitDelay : public UAbilityTask
{
public:
	FScriptMulticastDelegate                           OnFinish;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitDelay"));
		return ptr;
	}


	static UAbilityTask_WaitDelay* WaitDelay(UObject* WorldContextObject, float Time);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// 0x00C8 (0x0130 - 0x0068)
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0068(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied"));
		return ptr;
	}


	void OnApplyGameplayEffectCallback(UAbilitySystemComponent* Target, const FGameplayEffectSpec& SpecApplied, const FActiveGameplayEffectHandle& ActiveHandle);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// 0x0018 (0x0148 - 0x0130)
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	FScriptMulticastDelegate                           OnApplied;                                                // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0140(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self"));
		return ptr;
	}


	static UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(UObject* WorldContextObject, const FGameplayTargetDataFilterHandle& SourceFilter, const FGameplayTagRequirements& SourceTagRequirements, const FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, AActor* OptionalExternalOwner);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// 0x0018 (0x0148 - 0x0130)
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	FScriptMulticastDelegate                           OnApplied;                                                // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0140(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target"));
		return ptr;
	}


	static UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(UObject* WorldContextObject, const FGameplayTargetDataFilterHandle& TargetFilter, const FGameplayTagRequirements& SourceTagRequirements, const FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, AActor* OptionalExternalOwner);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// 0x0030 (0x0098 - 0x0068)
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{
public:
	FScriptMulticastDelegate                           OnRemoved;                                                // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           InvalidHandle;                                            // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved"));
		return ptr;
	}


	static UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(UObject* WorldContextObject, const FActiveGameplayEffectHandle& Handle);
	void OnGameplayEffectRemoved();
};


// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// 0x0020 (0x0088 - 0x0068)
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitGameplayTag"));
		return ptr;
	}


	void GameplayTagCallback(const FGameplayTag& Tag, int NewCount);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// 0x0010 (0x0098 - 0x0088)
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{
public:
	FScriptMulticastDelegate                           Added;                                                    // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded"));
		return ptr;
	}


	static UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(UObject* WorldContextObject, const FGameplayTag& Tag, AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// 0x0010 (0x0098 - 0x0088)
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{
public:
	FScriptMulticastDelegate                           Removed;                                                  // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved"));
		return ptr;
	}


	static UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(UObject* WorldContextObject, const FGameplayTag& Tag, AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitInputPress
// 0x0020 (0x0088 - 0x0068)
class UAbilityTask_WaitInputPress : public UAbilityTask
{
public:
	FScriptMulticastDelegate                           OnPress;                                                  // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitInputPress"));
		return ptr;
	}


	static UAbilityTask_WaitInputPress* WaitInputPress(UObject* WorldContextObject, bool bTestAlreadyPressed);
	void OnPressCallback();
};


// Class GameplayAbilities.AbilityTask_WaitInputRelease
// 0x0020 (0x0088 - 0x0068)
class UAbilityTask_WaitInputRelease : public UAbilityTask
{
public:
	FScriptMulticastDelegate                           OnRelease;                                                // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitInputRelease"));
		return ptr;
	}


	static UAbilityTask_WaitInputRelease* WaitInputRelease(UObject* WorldContextObject, bool bTestAlreadyReleased);
	void OnReleaseCallback();
};


// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// 0x0020 (0x0088 - 0x0068)
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{
public:
	FScriptMulticastDelegate                           OnChange;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitMovementModeChange"));
		return ptr;
	}


	void OnMovementModeChange(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	static UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(UObject* WorldContextObject, TEnumAsByte<EMovementMode> NewMode);
};


// Class GameplayAbilities.AbilityTask_WaitOverlap
// 0x0010 (0x0078 - 0x0068)
class UAbilityTask_WaitOverlap : public UAbilityTask
{
public:
	FScriptMulticastDelegate                           OnOverlap;                                                // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitOverlap"));
		return ptr;
	}


	static UAbilityTask_WaitOverlap* WaitForOverlap(UObject* WorldContextObject);
	void OnOverlapCallback(AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	void OnHitCallback(AActor* OtherActor, UPrimitiveComponent* OtherComp, const FVector& NormalImpulse, const FHitResult& Hit);
};


// Class GameplayAbilities.AbilityTask_WaitTargetData
// 0x0040 (0x00A8 - 0x0068)
class UAbilityTask_WaitTargetData : public UAbilityTask
{
public:
	FScriptMulticastDelegate                           ValidData;                                                // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           Cancelled;                                                // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0088(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitTargetData"));
		return ptr;
	}


	static UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(UObject* WorldContextObject, const FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, AGameplayAbilityTargetActor* TargetActor);
	static UAbilityTask_WaitTargetData* WaitTargetData(UObject* WorldContextObject, const FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, UClass* Class);
	void OnTargetDataReplicatedCancelledCallback();
	void OnTargetDataReplicatedCallback(const FGameplayAbilityTargetDataHandle& Data, const FGameplayTag& ActivationTag);
	void OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& Data);
	void OnTargetDataCancelledCallback(const FGameplayAbilityTargetDataHandle& Data);
	void FinishSpawningActor(UObject* WorldContextObject, AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(UObject* WorldContextObject, UClass* Class, AGameplayAbilityTargetActor** SpawnedActor);
};


// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// 0x0028 (0x0090 - 0x0068)
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{
public:
	FScriptMulticastDelegate                           OnVelocityChage;                                          // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	UMovementComponent*                                CachedMovementComponent;                                  // 0x0078(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitVelocityChange"));
		return ptr;
	}


	static UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(UObject* WorldContextObject, const FVector& Direction, float MinimumMagnitude);
};


// Class GameplayAbilities.AbilitySystemTestAttributeSet
// 0x0040 (0x0070 - 0x0030)
class UAbilitySystemTestAttributeSet : public UAttributeSet
{
public:
	float                                              MaxHealth;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // 0x0034(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Mana;                                                     // 0x0038(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              MaxMana;                                                  // 0x003C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpellDamage;                                              // 0x0044(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              PhysicalDamage;                                           // 0x0048(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              CritChance;                                               // 0x004C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              CritMultiplier;                                           // 0x0050(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ArmorDamageReduction;                                     // 0x0054(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              DodgeChance;                                              // 0x0058(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              LifeSteal;                                                // 0x005C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // 0x0060(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StackingAttribute1;                                       // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StackingAttribute2;                                       // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NoStackAttribute;                                         // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilitySystemTestAttributeSet"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbility_CharacterJump
// 0x0000 (0x0448 - 0x0448)
class UGameplayAbility_CharacterJump : public UGameplayAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayAbility_CharacterJump"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbility_Montage
// 0x0038 (0x0480 - 0x0448)
class UGameplayAbility_Montage : public UGameplayAbility
{
public:
	UAnimMontage*                                      MontageToPlay;                                            // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0450(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                              SectionName;                                              // 0x0454(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	TArray<UClass*>                                    GameplayEffectClassesWhileAnimating;                      // 0x0460(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<UGameplayEffect*>                           GameplayEffectsWhileAnimating;                            // 0x0470(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayAbility_Montage"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityBlueprint
// 0x0000 (0x00D8 - 0x00D8)
class UGameplayAbilityBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayAbilityBlueprint"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityBlueprintGeneratedClass
// 0x0000 (0x0228 - 0x0228)
class UGameplayAbilityBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayAbilityBlueprintGeneratedClass"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilitySet
// 0x0010 (0x0038 - 0x0028)
class UGameplayAbilitySet : public UDataAsset
{
public:
	TArray<FGameplayAbilityBindInfo>                   Abilities;                                                // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayAbilitySet"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// 0x0000 (0x04F0 - 0x04F0)
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayAbilityTargetActor_Radius"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// 0x0010 (0x0500 - 0x04F0)
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x04F0(0x0004) MISSED OFFSET
	bool                                               bTraceAffectsAimPitch;                                    // 0x04F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x04F5(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayAbilityTargetActor_Trace"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// 0x0020 (0x0520 - 0x0500)
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{
public:
	float                                              CollisionRadius;                                          // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionHeight;                                          // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0508(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// 0x0020 (0x0540 - 0x0520)
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{
public:
	UClass*                                            PlacedActorClass;                                         // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UMaterialInterface*                                PlacedActorMaterial;                                      // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0530(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// 0x0000 (0x0500 - 0x0500)
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// 0x0018 (0x0408 - 0x03F0)
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{
public:
	UCapsuleComponent*                                 CollisionComponent;                                       // 0x03F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<UActorComponent*>                           VisualizationComponents;                                  // 0x03F8(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueManager
// 0x0158 (0x0180 - 0x0028)
class UGameplayCueManager : public UDataAsset
{
public:
	UGameplayCueSet*                                   GlobalCueSet;                                             // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	UObjectLibrary*                                    GameplayCueNotifyActorObjectLibrary;                      // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	UObjectLibrary*                                    GameplayCueNotifyStaticObjectLibrary;                     // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	FStreamableManager                                 StreamableManager;                                        // 0x0040(0x00C0) (Transient)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0100(0x0060) MISSED OFFSET
	TArray<FGameplayCuePendingExecute>                 PendingExecuteCues;                                       // 0x0160(0x0010) (ZeroConstructor)
	int                                                GameplayCueSendContextCount;                              // 0x0170(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0174(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayCueManager"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueNotify_Actor
// 0x0020 (0x03F0 - 0x03D0)
class AGameplayCueNotify_Actor : public AActor
{
public:
	FGameplayTag                                       GameplayCueTag;                                           // 0x03D0(0x0008) (Edit, DisableEditOnInstance)
	FName                                              GameplayCueName;                                          // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroyOnRemove;                                     // 0x03E0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03E1(0x0003) MISSED OFFSET
	float                                              AutoDestroyDelay;                                         // 0x03E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsOverride;                                               // 0x03E8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUniqueInstancePerInstigator;                             // 0x03E9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUniqueInstancePerSourceObject;                           // 0x03EA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x03EB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayCueNotify_Actor"));
		return ptr;
	}


	bool WhileActive(AActor* MyTarget, const FGameplayCueParameters& Parameters);
	bool OnRemove(AActor* MyTarget, const FGameplayCueParameters& Parameters);
	void OnOwnerDestroyed();
	bool OnExecute(AActor* MyTarget, const FGameplayCueParameters& Parameters);
	bool OnActive(AActor* MyTarget, const FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const FGameplayCueParameters& Parameters);
};


// Class GameplayAbilities.GameplayCueNotify_Static
// 0x0018 (0x0040 - 0x0028)
class UGameplayCueNotify_Static : public UObject
{
public:
	FGameplayTag                                       GameplayCueTag;                                           // 0x0028(0x0008) (Edit, DisableEditOnInstance)
	FName                                              GameplayCueName;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsOverride;                                               // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayCueNotify_Static"));
		return ptr;
	}


	bool WhileActive(AActor* MyTarget, const FGameplayCueParameters& Parameters);
	bool OnRemove(AActor* MyTarget, const FGameplayCueParameters& Parameters);
	bool OnExecute(AActor* MyTarget, const FGameplayCueParameters& Parameters);
	bool OnActive(AActor* MyTarget, const FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const FGameplayCueParameters& Parameters);
};


// Class GameplayAbilities.GameplayCueNotify_HitImpact
// 0x0010 (0x0050 - 0x0040)
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{
public:
	USoundBase*                                        Sound;                                                    // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UParticleSystem*                                   ParticleSystem;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayCueNotify_HitImpact"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueSet
// 0x0060 (0x0088 - 0x0028)
class UGameplayCueSet : public UDataAsset
{
public:
	TArray<FGameplayCueNotifyData>                     GameplayCueData;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayCueSet"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectTemplate
// 0x0000 (0x0578 - 0x0578)
class UGameplayEffectTemplate : public UGameplayEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayEffectTemplate"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectCalculation
// 0x0010 (0x0038 - 0x0028)
class UGameplayEffectCalculation : public UObject
{
public:
	TArray<FGameplayEffectAttributeCaptureDefinition>  RelevantAttributesToCapture;                              // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayEffectCalculation"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectExecutionCalculation
// 0x0008 (0x0040 - 0x0038)
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{
public:
	bool                                               bRequiresPassedInTags;                                    // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayEffectExecutionCalculation"));
		return ptr;
	}


	void Execute(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput* OutExecutionOutput);
};


// Class GameplayAbilities.GameplayModMagnitudeCalculation
// 0x0000 (0x0038 - 0x0038)
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayModMagnitudeCalculation"));
		return ptr;
	}


	float CalculateBaseMagnitude(const FGameplayEffectSpec& Spec);
};


// Class GameplayAbilities.GameplayEffectExtension
// 0x0020 (0x0048 - 0x0028)
class UGameplayEffectExtension : public UObject
{
public:
	TArray<FGameplayAttribute>                         RelevantSourceAttributes;                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<FGameplayAttribute>                         RelevantTargetAttributes;                                 // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayEffectExtension"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectExtension_LifestealTest
// 0x0008 (0x0050 - 0x0048)
class UGameplayEffectExtension_LifestealTest : public UGameplayEffectExtension
{
public:
	UGameplayEffect*                                   HealthRestoreGameplayEffect;                              // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayEffectExtension_LifestealTest"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectExtension_ShieldTest
// 0x0008 (0x0050 - 0x0048)
class UGameplayEffectExtension_ShieldTest : public UGameplayEffectExtension
{
public:
	UGameplayEffect*                                   ShieldRemoveGameplayEffect;                               // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayEffectExtension_ShieldTest"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectUIData
// 0x0000 (0x0028 - 0x0028)
class UGameplayEffectUIData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayEffectUIData"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectUIData_TextOnly
// 0x0038 (0x0060 - 0x0028)
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{
public:
	FText                                              Description;                                              // 0x0028(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayEffectUIData_TextOnly"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayTagReponseTable
// 0x0060 (0x0088 - 0x0028)
class UGameplayTagReponseTable : public UDataAsset
{
public:
	TArray<FGameplayTagResponseTableEntry>             Entries;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayTagReponseTable"));
		return ptr;
	}


	void TagResponseEvent(const FGameplayTag& Tag, int NewCount, UAbilitySystemComponent* ASC, int Idx);
};


// Class GameplayAbilities.TickableAttributeSetInterface
// 0x0000 (0x0028 - 0x0028)
class UTickableAttributeSetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.TickableAttributeSetInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
