#pragma once

// Sea of Thieves (2.0) SDK

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
	void BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
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


	static bool TargetDataHasOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static bool TargetDataHasHitResult(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index);
	static bool TargetDataHasEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static bool TargetDataHasActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static struct FGameplayEffectSpecHandle SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle);
	static struct FGameplayEffectSpecHandle SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int StackCount);
	static struct FGameplayEffectSpecHandle SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration);
	static void SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& payload);
	static struct FGameplayEffectSpecHandle MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel);
	static struct FGameplayTargetDataFilterHandle MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class AActor* FilterActor);
	static bool IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters);
	static bool IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters);
	static bool HasHitResult(const struct FGameplayCueParameters& Parameters);
	static struct FTransform GetTargetDataOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static struct FTransform GetTargetDataEndPointTransform(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static struct FVector GetTargetDataEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static struct FVector GetOrigin(const struct FGameplayCueParameters& Parameters);
	static struct FTransform GetInstigatorTransform(const struct FGameplayCueParameters& Parameters);
	static class AActor* GetInstigatorActor(const struct FGameplayCueParameters& Parameters);
	static struct FHitResult GetHitResultFromTargetData(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index);
	static struct FHitResult GetHitResult(const struct FGameplayCueParameters& Parameters);
	static bool GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal);
	static bool GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction);
	static float GetFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	static int GetDataCountFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData);
	static TArray<class AActor*> GetActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static int GetActorCount(const struct FGameplayCueParameters& Parameters);
	static class AActor* GetActorByIndex(const struct FGameplayCueParameters& Parameters, int Index);
	static int GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
	static class UAbilitySystemComponent* GetAbilitySystemComponent(class AActor* Actor);
	static void ForwardGameplayCueToTarget(const TScriptInterface<class UGameplayCueInterface>& TargetCueInterface, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	static struct FGameplayAbilityTargetDataHandle FilterTargetData(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass);
	static bool EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext);
	static bool EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	static class UObject* EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext);
	static class AActor* EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	static struct FVector EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext);
	static class AActor* EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	static struct FHitResult EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	static class AActor* EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext);
	static bool DoesTargetDataContainActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index, class AActor* Actor);
	static bool DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, struct FGameplayTagRequirements* SourceTagReqs, struct FGameplayTagRequirements* TargetTagReqs);
	static struct FGameplayEffectSpecHandle AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FName& DataName, float Magnitude);
	static struct FGameplayAbilityTargetDataHandle AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, const struct FGameplayAbilityTargetDataHandle& HandleToAdd);
	static struct FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec);
	static struct FGameplayEffectSpecHandle AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	static struct FGameplayEffectSpecHandle AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	static struct FGameplayEffectSpecHandle AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	static struct FGameplayEffectSpecHandle AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	static struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(const struct FGameplayAbilityTargetingLocationInfo& SourceLocation, const struct FGameplayAbilityTargetingLocationInfo& TargetLocation);
	static struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(const struct FHitResult& HitResult);
	static struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(TArray<class AActor*> ActorArray, bool OneTargetPerHandle);
	static struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(class AActor* Actor);
};


// Class GameplayAbilities.GameplayEffect
// 0x0550 (0x0578 - 0x0028)
class UGameplayEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TEnumAsByte<EGameplayEffectDurationType>           DurationPolicy;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FGameplayEffectModifierMagnitude            DurationMagnitude;                                        // 0x0038(0x0170) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              Period;                                                   // 0x01A8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bExecutePeriodicEffectOnApplication;                      // 0x01C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01C9(0x0007) MISSED OFFSET
	TArray<struct FGameplayModifierInfo>               Modifiers;                                                // 0x01D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGameplayEffectExecutionDefinition>  Executions;                                               // 0x01E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FScalableFloat                              ChanceToApplyToTarget;                                    // 0x01F0(0x0020) (Edit, DisableEditOnInstance)
	TArray<class UClass*>                              TargetEffectClasses;                                      // 0x0210(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UGameplayEffect*>                     TargetEffects;                                            // 0x0220(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)
	TArray<class UClass*>                              OverflowEffects;                                          // 0x0230(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDenyOverflowApplication;                                 // 0x0240(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClearStackOnOverflow;                                    // 0x0241(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0242(0x0006) MISSED OFFSET
	TArray<class UClass*>                              PrematureExpirationEffectClasses;                         // 0x0248(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              RoutineExpirationEffectClasses;                           // 0x0258(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bRequireModifierSuccessToTriggerCues;                     // 0x0268(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	TArray<struct FGameplayEffectCue>                  GameplayCues;                                             // 0x0270(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UGameplayEffectUIData*                       UIData;                                                   // 0x0280(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FInheritedTagContainer                      InheritableGameplayEffectTags;                            // 0x0288(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagContainer                       GameplayEffectTags;                                       // 0x0300(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FInheritedTagContainer                      InheritableOwnedTagsContainer;                            // 0x0328(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagContainer                       OwnedTagsContainer;                                       // 0x03A0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagRequirements                    OngoingTagRequirements;                                   // 0x03C8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagRequirements                    ApplicationTagRequirements;                               // 0x0418(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FInheritedTagContainer                      RemoveGameplayEffectsWithTags;                            // 0x0468(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagContainer                       ClearTagsContainer;                                       // 0x04E0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagRequirements                    GrantedApplicationImmunityTags;                           // 0x0508(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TEnumAsByte<EGameplayEffectStackingType>           StackingType;                                             // 0x0558(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0559(0x0003) MISSED OFFSET
	int                                                StackLimitCount;                                          // 0x055C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EGameplayEffectStackingDurationPolicy> StackDurationRefreshPolicy;                               // 0x0560(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EGameplayEffectStackingPeriodPolicy>   StackPeriodResetPolicy;                                   // 0x0561(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x0562(0x0006) MISSED OFFSET
	TArray<struct FGameplayAbilitySpecDef>             GrantedAbilities;                                         // 0x0568(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayEffect"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbility
// 0x04B0 (0x04D8 - 0x0028)
class UGameplayAbility : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET
	struct FGameplayTagContainer                       AbilityTags;                                              // 0x00C8(0x0028) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x48];                                      // 0x00F0(0x0048) MISSED OFFSET
	bool                                               bReplicateInputDirectly;                                  // 0x0138(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x27];                                      // 0x0139(0x0027) MISSED OFFSET
	TEnumAsByte<EGameplayAbilityReplicationPolicy>     ReplicationPolicy;                                        // 0x0160(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EGameplayAbilityInstancingPolicy>      InstancingPolicy;                                         // 0x0161(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bServerRespectsRemoteAbilityCancellation;                 // 0x0162(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRetriggerInstancedAbility;                               // 0x0163(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	struct FGameplayAbilityActivationInfo              CurrentActivationInfo;                                    // 0x0168(0x0020) (BlueprintVisible, BlueprintReadOnly)
	struct FGameplayEventData                          CurrentEventData;                                         // 0x0188(0x00A0) (BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EGameplayAbilityNetExecutionPolicy>    NetExecutionPolicy;                                       // 0x0228(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	class UClass*                                      CostGameplayEffectClass;                                  // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGameplayEffect*                             CostGameplayEffect;                                       // 0x0238(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	TArray<struct FAbilityTriggerData>                 AbilityTriggers;                                          // 0x0240(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      CooldownGameplayEffectClass;                              // 0x0250(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGameplayEffect*                             CooldownGameplayEffect;                                   // 0x0258(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FGameplayTagQuery                           CancelAbilitiesMatchingTagQuery;                          // 0x0260(0x0048) (Edit, DisableEditOnInstance)
	struct FGameplayTagQuery                           ConstTagQuery;                                            // 0x02A8(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst)
	struct FGameplayTagContainer                       CancelAbilitiesWithTag;                                   // 0x02F0(0x0028) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       BlockAbilitiesWithTag;                                    // 0x0318(0x0028) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       ActivationOwnedTags;                                      // 0x0340(0x0028) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       ActivationRequiredTags;                                   // 0x0368(0x0028) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       ActivationBlockedTags;                                    // 0x0390(0x0028) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       SourceRequiredTags;                                       // 0x03B8(0x0028) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       SourceBlockedTags;                                        // 0x03E0(0x0028) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       TargetRequiredTags;                                       // 0x0408(0x0028) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       TargetBlockedTags;                                        // 0x0430(0x0028) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x70];                                      // 0x0458(0x0070) MISSED OFFSET
	class UAnimMontage*                                CurrentMontage;                                           // 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsActive;                                                // 0x04D0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsCancelable;                                            // 0x04D1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsBlockingOtherAbilities;                                // 0x04D2(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x04D3(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayAbility"));
		return ptr;
	}


	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);
	void SetCanBeCanceled(bool bCanBeCanceled);
	void SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& payload);
	void MontageStop(float OverrideBlendOutTime);
	void MontageSetNextSectionName(const struct FName& FromSectionName, const struct FName& ToSectionName);
	void MontageJumpToSection(const struct FName& SectionName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(const struct FName& SocketName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& payload);
	void K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag);
	void K2_OnEndAbility();
	void K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
	void K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context);
	void K2_EndAbility();
	void K2_CommitExecute();
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent);
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent);
	bool K2_CommitAbility();
	bool K2_CheckAbilityCost();
	bool K2_CheckAbilityCooldown();
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
	TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UGameplayEffect* GameplayEffect, int GameplayEffectLevel);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectToOwner(class UGameplayEffect* GameplayEffect, int GameplayEffectLevel);
	TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle);
	void K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_ActivateAbility();
	class USkeletalMeshComponent* GetOwningComponentFromActorInfo();
	class AActor* GetOwningActorFromActorInfo();
	struct FGameplayEffectSpecHandle GetOutgoingGameplayEffectSpec(class UGameplayEffect* GameplayEffect, float Level);
	class UObject* GetCurrentSourceObject();
	class UAnimMontage* GetCurrentMontage();
	struct FGameplayEffectContextHandle GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData);
	class AActor* GetAvatarActorFromActorInfo();
	struct FGameplayAbilityActorInfo GetActorInfo();
	int GetAbilityLevel();
	void EndTaskByInstanceName(const struct FName& InstanceName);
	void EndAbilityState(const struct FName& OptionalStateNameToEnd);
	void ConfirmTaskByInstanceName(const struct FName& InstanceName, bool bEndTask);
	void CancelTaskByInstanceName(const struct FName& InstanceName);
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int StacksToRemove);
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int StacksToRemove);
	TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* GameplayEffectClass, int GameplayEffectLevel);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int GameplayEffectLevel);
};


// Class GameplayAbilities.AbilitySystemComponent
// 0x0D50 (0x0E78 - 0x0128)
class UAbilitySystemComponent : public UGameplayTasksComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
	TArray<struct FAttributeDefaults>                  DefaultStartingData;                                      // 0x0130(0x0010) (Edit, ZeroConstructor)
	TArray<class UAttributeSet*>                       SpawnedAttributes;                                        // 0x0140(0x0010) (ExportObject, Net, ZeroConstructor)
	struct FPredictionKey                              ReplicatedPredictionKey;                                  // 0x0150(0x0018) (Net)
	unsigned char                                      UnknownData01[0xD8];                                      // 0x0168(0x00D8) MISSED OFFSET
	float                                              OutgoingDuration;                                         // 0x0240(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IncomingDuration;                                         // 0x0244(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilitySpecContainer               ActivatableAbilities;                                     // 0x0248(0x00C0) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0308(0x0050) MISSED OFFSET
	TArray<class UGameplayAbility*>                    AllReplicatedInstancedAbilities;                          // 0x0358(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x270];                                     // 0x0368(0x0270) MISSED OFFSET
	TArray<class AGameplayAbilityTargetActor*>         SpawnedTargetActors;                                      // 0x05D8(0x0010) (ZeroConstructor)
	struct FGameplayAbilityRepAnimMontage              RepAnimMontageInfo;                                       // 0x05E8(0x0030) (Net)
	struct FGameplayAbilityLocalAnimMontage            LocalAnimMontageInfo;                                     // 0x0618(0x0030)
	unsigned char                                      UnknownData04[0xA0];                                      // 0x0648(0x00A0) MISSED OFFSET
	class AActor*                                      OwnerActor;                                               // 0x06E8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AvatarActor;                                              // 0x06F0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x18];                                      // 0x06F8(0x0018) MISSED OFFSET
	struct FActiveGameplayEffectsContainer             ActiveGameplayEffects;                                    // 0x0710(0x03C8) (Net)
	struct FActiveGameplayCueContainer                 ActiveGameplayCues;                                       // 0x0AD8(0x00C0) (Net)
	unsigned char                                      UnknownData06[0x160];                                     // 0x0B98(0x0160) MISSED OFFSET
	TArray<unsigned char>                              BlockedAbilityBindings;                                   // 0x0CF8(0x0010) (Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData07[0x170];                                     // 0x0D08(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilitySystemComponent"));
		return ptr;
	}


	bool TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation);
	bool TryActivateAbilitiesByTag(const struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);
	void TargetConfirm();
	void TargetCancel();
	void SetUserAbilityActivationInhibited(bool NewInhibit);
	void SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int NewLevel);
	void ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
	void ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey);
	void ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey);
	void ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, const struct FName& SectionName, const struct FName& NextSectionName);
	void ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, const struct FName& SectionName);
	void ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int StacksToRemove);
	bool RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int StacksToRemove);
	void RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags);
	void OnRep_ReplicatedAnimMontage();
	void OnRep_PredictionKey();
	void OnRep_OwningActor();
	void OnRep_GameplayEffects();
	void OnRep_ActivateAbilities();
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context);
	void K2_InitStats(class UClass* Attributes, class UDataTable* DataTable);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectToTarget(class UGameplayEffect* GameplayEffect, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectToSelf(class UGameplayEffect* GameplayEffect, float Level, const struct FGameplayEffectContextHandle& EffectContext);
	bool IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag);
	bool GetUserAbilityActivationInhibited();
	struct FGameplayEffectSpecHandle GetOutgoingSpec(class UGameplayEffect* GameplayEffect, float Level);
	float GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute);
	int GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent);
	struct FGameplayEffectContextHandle GetEffectContext();
	void ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate);
	void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey);
	void ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
	void ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey);
	void ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16_t PredictionKey);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(class UAbilitySystemComponent* Target, struct FGameplayEffectSpecHandle* SpecHandle);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle* SpecHandle);
	void AbilityConfirmOrCancel__DelegateSignature();
	void AbilityAbilityKey__DelegateSignature(int InputID);
};


// Class GameplayAbilities.AbilitySystemDebugHUD
// 0x0000 (0x0508 - 0x0508)
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
	struct FStringClassReference                       AbilitySystemGlobalsClassName;                            // 0x0028(0x0010) (ZeroConstructor, Config)
	struct FGameplayTag                                ActivateFailCooldownTag;                                  // 0x0038(0x0008)
	struct FName                                       ActivateFailCooldownName;                                 // 0x0040(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FGameplayTag                                ActivateFailCostTag;                                      // 0x0048(0x0008)
	struct FName                                       ActivateFailCostName;                                     // 0x0050(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FGameplayTag                                ActivateFailTagsBlockedTag;                               // 0x0058(0x0008)
	struct FName                                       ActivateFailTagsBlockedName;                              // 0x0060(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FGameplayTag                                ActivateFailTagsMissingTag;                               // 0x0068(0x0008)
	struct FName                                       ActivateFailTagsMissingName;                              // 0x0070(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FGameplayTag                                ActivateFailNetworkingTag;                                // 0x0078(0x0008)
	struct FName                                       ActivateFailNetworkingName;                               // 0x0080(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	class FString                                      GlobalCurveTableName;                                     // 0x0088(0x0010) (ZeroConstructor, Config)
	class FString                                      GlobalAttributeMetaDataTableName;                         // 0x0098(0x0010) (ZeroConstructor, Config)
	class FString                                      GlobalAttributeSetDefaultsTableName;                      // 0x00A8(0x0010) (ZeroConstructor, Config)
	struct FStringAssetReference                       GlobalGameplayCueManagerName;                             // 0x00B8(0x0010) (ZeroConstructor, Config)
	TArray<class FString>                              GameplayCueNotifyPaths;                                   // 0x00C8(0x0010) (ZeroConstructor, Config)
	struct FStringAssetReference                       GameplayTagResponseTableName;                             // 0x00D8(0x0010) (ZeroConstructor, Config)
	class UGameplayTagReponseTable*                    GameplayTagResponseTable;                                 // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               PredictTargetGameplayEffects;                             // 0x00F0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	class UCurveTable*                                 GlobalCurveTable;                                         // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCurveTable*                                 GlobalAttributeDefaultsTable;                             // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  GlobalAttributeMetaDataTable;                             // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGameplayCueManager*                         GlobalGameplayCueManager;                                 // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
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
// 0x0020 (0x04C0 - 0x04A0)
class AAbilitySystemTestPawn : public ADefaultPawn
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04A0(0x0018) MISSED OFFSET
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // 0x04B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

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
	struct FScriptMulticastDelegate                    OnTargetLocationReached;                                  // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0078(0x0004) MISSED OFFSET
	struct FVector                                     StartLocation;                                            // 0x007C(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0088(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	float                                              DurationOfMovement;                                       // 0x0094(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	class UCurveFloat*                                 LerpCurve;                                                // 0x00A0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                LerpCurveVector;                                          // 0x00A8(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_MoveToLocation"));
		return ptr;
	}


	static class UAbilityTask_MoveToLocation* MoveToLocation(class UObject* WorldContextObject, const struct FName& TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve);
};


// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// 0x0018 (0x0080 - 0x0068)
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnSync;                                                   // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_NetworkSyncPoint"));
		return ptr;
	}


	static class UAbilityTask_NetworkSyncPoint* WaitNetSync(class UObject* WorldContextObject, TEnumAsByte<EAbilityTaskNetSyncType> SyncType);
	void OnSignalCallback();
};


// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// 0x0058 (0x00C0 - 0x0068)
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnComplete;                                               // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInterrupted;                                            // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCancelled;                                              // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0098(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_PlayMontageAndWait"));
		return ptr;
	}


	void OnMontageInterrupted();
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	static class UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(class UObject* WorldContextObject, const struct FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const struct FName& StartSection);
};


// Class GameplayAbilities.AbilityTask_Repeat
// 0x0030 (0x0098 - 0x0068)
class UAbilityTask_Repeat : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnPerformAction;                                          // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinished;                                               // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_Repeat"));
		return ptr;
	}


	static class UAbilityTask_Repeat* RepeatAction(class UObject* WorldContextObject, float TimeBetweenActions, int TotalActionCount);
};


// Class GameplayAbilities.AbilityTask_SpawnActor
// 0x0030 (0x0098 - 0x0068)
class UAbilityTask_SpawnActor : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    Success;                                                  // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DidNotSpawn;                                              // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_SpawnActor"));
		return ptr;
	}


	static class UAbilityTask_SpawnActor* SpawnActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class);
	void FinishSpawningActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class, class AActor** SpawnedActor);
};


// Class GameplayAbilities.AbilityTask_StartAbilityState
// 0x0038 (0x00A0 - 0x0068)
class UAbilityTask_StartAbilityState : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnStateEnded;                                             // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateInterrupted;                                       // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0088(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_StartAbilityState"));
		return ptr;
	}


	static class UAbilityTask_StartAbilityState* StartAbilityState(class UObject* WorldContextObject, const struct FName& StateName, bool bEndCurrentState);
};


// Class GameplayAbilities.GameplayAbilityWorldReticle
// 0x0020 (0x0430 - 0x0410)
class AGameplayAbilityWorldReticle : public AActor
{
public:
	struct FWorldReticleParameters                     Parameters;                                               // 0x0410(0x000C) (Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                               bFaceOwnerFlat;                                           // 0x041C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToTargetedActor;                                     // 0x041D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTargetValid;                                           // 0x041E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTargetAnActor;                                         // 0x041F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           MasterPC;                                                 // 0x0420(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetingActor;                                           // 0x0428(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayAbilityWorldReticle"));
		return ptr;
	}


	void SetReticleMaterialParamVector(const struct FName& ParamName, const struct FVector& Value);
	void SetReticleMaterialParamFloat(const struct FName& ParamName, float Value);
	void OnValidTargetChanged(bool bNewValue);
	void OnTargetingAnActor(bool bNewValue);
	void OnParametersInitialized();
	void FaceTowardSource(bool bFaceIn2D);
};


// Class GameplayAbilities.GameplayAbilityTargetActor
// 0x0180 (0x0590 - 0x0410)
class AGameplayAbilityTargetActor : public AActor
{
public:
	bool                                               ShouldProduceTargetDataOnServer;                          // 0x0410(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0411(0x000F) MISSED OFFSET
	struct FGameplayAbilityTargetingLocationInfo       StartLocation;                                            // 0x0420(0x0070) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData01[0x90];                                      // 0x0490(0x0090) MISSED OFFSET
	class APlayerController*                           MasterPC;                                                 // 0x0520(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UGameplayAbility*                            OwningAbility;                                            // 0x0528(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyOnConfirmation;                                   // 0x0530(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0531(0x0007) MISSED OFFSET
	class AActor*                                      SourceActor;                                              // 0x0538(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FWorldReticleParameters                     ReticleParams;                                            // 0x0540(0x000C) (BlueprintVisible)
	unsigned char                                      UnknownData03[0x4];                                       // 0x054C(0x0004) MISSED OFFSET
	class UClass*                                      ReticleClass;                                             // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTargetDataFilterHandle             Filter;                                                   // 0x0558(0x0018) (BlueprintVisible, Net)
	bool                                               bDebug;                                                   // 0x0570(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1F];                                      // 0x0571(0x001F) MISSED OFFSET

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
	struct FScriptMulticastDelegate                    TimeElapsed;                                              // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_VisualizeTargeting"));
		return ptr;
	}


	static class UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* TargetActor, const struct FName& TaskInstanceName, float Duration);
	static class UAbilityTask_VisualizeTargeting* VisualizeTargeting(class UObject* WorldContextObject, class UClass* Class, const struct FName& TaskInstanceName, float Duration);
	void FinishSpawningActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
};


// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// 0x0030 (0x0098 - 0x0068)
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnActivate;                                               // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitAbilityActivate"));
		return ptr;
	}


	static class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(class UObject* WorldContextObject, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
	void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);
};


// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// 0x0030 (0x0098 - 0x0068)
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnCommit;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitAbilityCommit"));
		return ptr;
	}


	static class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(class UObject* WorldContextObject, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce);
	void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);
};


// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// 0x0040 (0x00A8 - 0x0068)
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0078(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitAttributeChange"));
		return ptr;
	}


	static class UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(class UObject* WorldContextObject, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce);
	static class UAbilityTask_WaitAttributeChange* WaitForAttributeChange(class UObject* WorldContextObject, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitCancel
// 0x0018 (0x0080 - 0x0068)
class UAbilityTask_WaitCancel : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnCancel;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitCancel"));
		return ptr;
	}


	static class UAbilityTask_WaitCancel* WaitCancel(class UObject* WorldContextObject);
	void OnLocalCancelCallback();
	void OnCancelCallback();
};


// Class GameplayAbilities.AbilityTask_WaitConfirm
// 0x0020 (0x0088 - 0x0068)
class UAbilityTask_WaitConfirm : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnConfirm;                                                // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitConfirm"));
		return ptr;
	}


	static class UAbilityTask_WaitConfirm* WaitConfirm(class UObject* WorldContextObject);
	void OnConfirmCallback(class UGameplayAbility* Ability);
};


// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// 0x0028 (0x0090 - 0x0068)
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnConfirm;                                                // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCancel;                                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitConfirmCancel"));
		return ptr;
	}


	static class UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(class UObject* WorldContextObject);
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
	struct FScriptMulticastDelegate                    OnFinish;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitDelay"));
		return ptr;
	}


	static class UAbilityTask_WaitDelay* WaitDelay(class UObject* WorldContextObject, float Time);
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


	void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// 0x0018 (0x0148 - 0x0130)
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	struct FScriptMulticastDelegate                    OnApplied;                                                // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0140(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self"));
		return ptr;
	}


	static class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(class UObject* WorldContextObject, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// 0x0018 (0x0148 - 0x0130)
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	struct FScriptMulticastDelegate                    OnApplied;                                                // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0140(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target"));
		return ptr;
	}


	static class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(class UObject* WorldContextObject, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// 0x0030 (0x0098 - 0x0068)
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnRemoved;                                                // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    InvalidHandle;                                            // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved"));
		return ptr;
	}


	static class UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& Handle);
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


	void GameplayTagCallback(const struct FGameplayTag& Tag, int NewCount);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// 0x0010 (0x0098 - 0x0088)
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{
public:
	struct FScriptMulticastDelegate                    Added;                                                    // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded"));
		return ptr;
	}


	static class UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(class UObject* WorldContextObject, const struct FGameplayTag& Tag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// 0x0010 (0x0098 - 0x0088)
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{
public:
	struct FScriptMulticastDelegate                    Removed;                                                  // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved"));
		return ptr;
	}


	static class UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(class UObject* WorldContextObject, const struct FGameplayTag& Tag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitInputPress
// 0x0020 (0x0088 - 0x0068)
class UAbilityTask_WaitInputPress : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnPress;                                                  // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitInputPress"));
		return ptr;
	}


	static class UAbilityTask_WaitInputPress* WaitInputPress(class UObject* WorldContextObject, bool bTestAlreadyPressed);
	void OnPressCallback();
};


// Class GameplayAbilities.AbilityTask_WaitInputRelease
// 0x0020 (0x0088 - 0x0068)
class UAbilityTask_WaitInputRelease : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnRelease;                                                // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitInputRelease"));
		return ptr;
	}


	static class UAbilityTask_WaitInputRelease* WaitInputRelease(class UObject* WorldContextObject, bool bTestAlreadyReleased);
	void OnReleaseCallback();
};


// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// 0x0020 (0x0088 - 0x0068)
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitMovementModeChange"));
		return ptr;
	}


	void OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	static class UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(class UObject* WorldContextObject, TEnumAsByte<EMovementMode> NewMode);
};


// Class GameplayAbilities.AbilityTask_WaitOverlap
// 0x0010 (0x0078 - 0x0068)
class UAbilityTask_WaitOverlap : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnOverlap;                                                // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitOverlap"));
		return ptr;
	}


	static class UAbilityTask_WaitOverlap* WaitForOverlap(class UObject* WorldContextObject);
	void OnOverlapCallback(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnHitCallback(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class GameplayAbilities.AbilityTask_WaitTargetData
// 0x0040 (0x00A8 - 0x0068)
class UAbilityTask_WaitTargetData : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    ValidData;                                                // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Cancelled;                                                // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0088(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitTargetData"));
		return ptr;
	}


	static class UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(class UObject* WorldContextObject, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor);
	static class UAbilityTask_WaitTargetData* WaitTargetData(class UObject* WorldContextObject, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class UClass* Class);
	void OnTargetDataReplicatedCancelledCallback();
	void OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag);
	void OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data);
	void OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data);
	void FinishSpawningActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
};


// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// 0x0028 (0x0090 - 0x0068)
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnVelocityChage;                                          // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UMovementComponent*                          CachedMovementComponent;                                  // 0x0078(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.AbilityTask_WaitVelocityChange"));
		return ptr;
	}


	static class UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(class UObject* WorldContextObject, const struct FVector& Direction, float MinimumMagnitude);
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
// 0x0000 (0x04D8 - 0x04D8)
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
// 0x0038 (0x0510 - 0x04D8)
class UGameplayAbility_Montage : public UGameplayAbility
{
public:
	class UAnimMontage*                                MontageToPlay;                                            // 0x04D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x04E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SectionName;                                              // 0x04E4(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET
	TArray<class UClass*>                              GameplayEffectClassesWhileAnimating;                      // 0x04F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UGameplayEffect*>                     GameplayEffectsWhileAnimating;                            // 0x0500(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayAbility_Montage"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityBlueprint
// 0x0000 (0x0138 - 0x0138)
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
	TArray<struct FGameplayAbilityBindInfo>            Abilities;                                                // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayAbilitySet"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// 0x0000 (0x0590 - 0x0590)
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
// 0x0010 (0x05A0 - 0x0590)
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0590(0x0004) MISSED OFFSET
	bool                                               bTraceAffectsAimPitch;                                    // 0x0594(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0595(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayAbilityTargetActor_Trace"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// 0x0020 (0x05C0 - 0x05A0)
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{
public:
	float                                              CollisionRadius;                                          // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionHeight;                                          // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x05A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// 0x0020 (0x05E0 - 0x05C0)
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{
public:
	class UClass*                                      PlacedActorClass;                                         // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          PlacedActorMaterial;                                      // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x05D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// 0x0000 (0x05A0 - 0x05A0)
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
// 0x0018 (0x0448 - 0x0430)
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{
public:
	class UCapsuleComponent*                           CollisionComponent;                                       // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UActorComponent*>                     VisualizationComponents;                                  // 0x0438(0x0010) (ExportObject, ZeroConstructor)

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
	class UGameplayCueSet*                             GlobalCueSet;                                             // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UObjectLibrary*                              GameplayCueNotifyActorObjectLibrary;                      // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UObjectLibrary*                              GameplayCueNotifyStaticObjectLibrary;                     // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FStreamableManager                          StreamableManager;                                        // 0x0040(0x00C0) (Transient)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0100(0x0060) MISSED OFFSET
	TArray<struct FGameplayCuePendingExecute>          PendingExecuteCues;                                       // 0x0160(0x0010) (ZeroConstructor)
	int                                                GameplayCueSendContextCount;                              // 0x0170(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0174(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayCueManager"));
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueNotify_Actor
// 0x0020 (0x0430 - 0x0410)
class AGameplayCueNotify_Actor : public AActor
{
public:
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0410(0x0008) (Edit, DisableEditOnInstance)
	struct FName                                       GameplayCueName;                                          // 0x0418(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroyOnRemove;                                     // 0x0420(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	float                                              AutoDestroyDelay;                                         // 0x0424(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsOverride;                                               // 0x0428(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUniqueInstancePerInstigator;                             // 0x0429(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUniqueInstancePerSourceObject;                           // 0x042A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x042B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayCueNotify_Actor"));
		return ptr;
	}


	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnOwnerDestroyed();
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
};


// Class GameplayAbilities.GameplayCueNotify_Static
// 0x0018 (0x0040 - 0x0028)
class UGameplayCueNotify_Static : public UObject
{
public:
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0028(0x0008) (Edit, DisableEditOnInstance)
	struct FName                                       GameplayCueName;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsOverride;                                               // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayCueNotify_Static"));
		return ptr;
	}


	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
};


// Class GameplayAbilities.GameplayCueNotify_HitImpact
// 0x0010 (0x0050 - 0x0040)
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{
public:
	class USoundBase*                                  Sound;                                                    // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
	TArray<struct FGameplayCueNotifyData>              GameplayCueData;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)
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
	TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture;                              // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

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


	void Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput);
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


	float CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec);
};


// Class GameplayAbilities.GameplayEffectExtension
// 0x0020 (0x0048 - 0x0028)
class UGameplayEffectExtension : public UObject
{
public:
	TArray<struct FGameplayAttribute>                  RelevantSourceAttributes;                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGameplayAttribute>                  RelevantTargetAttributes;                                 // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

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
	class UGameplayEffect*                             HealthRestoreGameplayEffect;                              // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
	class UGameplayEffect*                             ShieldRemoveGameplayEffect;                               // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
	struct FText                                       Description;                                              // 0x0028(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

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
	TArray<struct FGameplayTagResponseTableEntry>      Entries;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayAbilities.GameplayTagReponseTable"));
		return ptr;
	}


	void TagResponseEvent(const struct FGameplayTag& Tag, int NewCount, class UAbilitySystemComponent* ASC, int idx);
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
