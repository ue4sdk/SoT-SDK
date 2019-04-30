// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameplayAbilities_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShouldBlockAbilities          (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::SetShouldBlockOtherAbilities(bool bShouldBlockAbilities)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities"));

	struct
	{
		bool                           bShouldBlockAbilities;
	} params;

	params.bShouldBlockAbilities = bShouldBlockAbilities;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bCanBeCanceled                 (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::SetCanBeCanceled(bool bCanBeCanceled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.SetCanBeCanceled"));

	struct
	{
		bool                           bCanBeCanceled;
	} params;

	params.bCanBeCanceled = bCanBeCanceled;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.SendGameplayEvent
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTag            EventTag                       (Parm)
// struct FGameplayEventData      payload                        (Parm)

void UGameplayAbility::SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& payload)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.SendGameplayEvent"));

	struct
	{
		struct FGameplayTag            EventTag;
		struct FGameplayEventData      payload;
	} params;

	params.EventTag = EventTag;
	params.payload = payload;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.MontageStop
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          OverrideBlendOutTime           (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::MontageStop(float OverrideBlendOutTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MontageStop"));

	struct
	{
		float                          OverrideBlendOutTime;
	} params;

	params.OverrideBlendOutTime = OverrideBlendOutTime;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   FromSectionName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ToSectionName                  (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::MontageSetNextSectionName(const struct FName& FromSectionName, const struct FName& ToSectionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName"));

	struct
	{
		struct FName                   FromSectionName;
		struct FName                   ToSectionName;
	} params;

	params.FromSectionName = FromSectionName;
	params.ToSectionName = ToSectionName;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.MontageJumpToSection
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   SectionName                    (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::MontageJumpToSection(const struct FName& SectionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MontageJumpToSection"));

	struct
	{
		struct FName                   SectionName;
	} params;

	params.SectionName = SectionName;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilityTargetingLocationInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(const struct FName& SocketName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent"));

	struct
	{
		struct FName                   SocketName;
		struct FGameplayAbilityTargetingLocationInfo ReturnValue;
	} params;

	params.SocketName = SocketName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetingLocationInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerActor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor"));

	struct
	{
		struct FGameplayAbilityTargetingLocationInfo ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  GameplayEffectClass            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UGameplayAbility::MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec"));

	struct
	{
		class UClass*                  GameplayEffectClass;
		float                          Level;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params;

	params.GameplayEffectClass = GameplayEffectClass;
	params.Level = Level;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (Parm)
// struct FGameplayEventData      payload                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbility::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& payload)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent"));

	struct
	{
		struct FGameplayAbilityActorInfo ActorInfo;
		struct FGameplayEventData      payload;
		bool                           ReturnValue;
	} params;

	params.ActorInfo = ActorInfo;
	params.payload = payload;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (Parm)

void UGameplayAbility::K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue"));

	struct
	{
		struct FGameplayTag            GameplayCueTag;
	} params;

	params.GameplayCueTag = GameplayCueTag;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void UGameplayAbility::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_OnEndAbility"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
// (Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (Parm)
// struct FGameplayCueParameters  GameplayCueParameters          (ConstParm, Parm, OutParm, ReferenceParm)

void UGameplayAbility::K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams"));

	struct
	{
		struct FGameplayTag            GameplayCueTag;
		struct FGameplayCueParameters  GameplayCueParameters;
	} params;

	params.GameplayCueTag = GameplayCueTag;
	params.GameplayCueParameters = GameplayCueParameters;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (Parm)
// struct FGameplayEffectContextHandle Context                        (Parm)

void UGameplayAbility::K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue"));

	struct
	{
		struct FGameplayTag            GameplayCueTag;
		struct FGameplayEffectContextHandle Context;
	} params;

	params.GameplayCueTag = GameplayCueTag;
	params.Context = Context;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.K2_EndAbility
// (Native, Protected, BlueprintCallable)

void UGameplayAbility::K2_EndAbility()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_EndAbility"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.K2_CommitExecute
// (Event, Public, BlueprintEvent)

void UGameplayAbility::K2_CommitExecute()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CommitExecute"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           BroadcastCommitEvent           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbility::K2_CommitAbilityCost(bool BroadcastCommitEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost"));

	struct
	{
		bool                           BroadcastCommitEvent;
		bool                           ReturnValue;
	} params;

	params.BroadcastCommitEvent = BroadcastCommitEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           BroadcastCommitEvent           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbility::K2_CommitAbilityCooldown(bool BroadcastCommitEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown"));

	struct
	{
		bool                           BroadcastCommitEvent;
		bool                           ReturnValue;
	} params;

	params.BroadcastCommitEvent = BroadcastCommitEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbility
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbility::K2_CommitAbility()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CommitAbility"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbility::K2_CheckAbilityCost()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbility::K2_CheckAbilityCooldown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbility::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility"));

	struct
	{
		struct FGameplayAbilityActorInfo ActorInfo;
		struct FGameplayTagContainer   RelevantTags;
		bool                           ReturnValue;
	} params;

	params.ActorInfo = ActorInfo;

	UObject::ProcessEvent(fn, &params);

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToTarget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// class UGameplayEffect*         GameplayEffect                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            GameplayEffectLevel            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FActiveGameplayEffectHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::K2_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UGameplayEffect* GameplayEffect, int GameplayEffectLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToTarget"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetData;
		class UGameplayEffect*         GameplayEffect;
		int                            GameplayEffectLevel;
		TArray<struct FActiveGameplayEffectHandle> ReturnValue;
	} params;

	params.TargetData = TargetData;
	params.GameplayEffect = GameplayEffect;
	params.GameplayEffectLevel = GameplayEffectLevel;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToOwner
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UGameplayEffect*         GameplayEffect                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            GameplayEffectLevel            (Parm, ZeroConstructor, IsPlainOldData)
// struct FActiveGameplayEffectHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActiveGameplayEffectHandle UGameplayAbility::K2_ApplyGameplayEffectToOwner(class UGameplayEffect* GameplayEffect, int GameplayEffectLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToOwner"));

	struct
	{
		class UGameplayEffect*         GameplayEffect;
		int                            GameplayEffectLevel;
		struct FActiveGameplayEffectHandle ReturnValue;
	} params;

	params.GameplayEffect = GameplayEffect;
	params.GameplayEffectLevel = GameplayEffectLevel;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle EffectSpecHandle               (ConstParm, Parm)
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// TArray<struct FActiveGameplayEffectHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget"));

	struct
	{
		struct FGameplayEffectSpecHandle EffectSpecHandle;
		struct FGameplayAbilityTargetDataHandle TargetData;
		TArray<struct FActiveGameplayEffectHandle> ReturnValue;
	} params;

	params.EffectSpecHandle = EffectSpecHandle;
	params.TargetData = TargetData;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle EffectSpecHandle               (ConstParm, Parm)
// struct FActiveGameplayEffectHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActiveGameplayEffectHandle UGameplayAbility::K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner"));

	struct
	{
		struct FGameplayEffectSpecHandle EffectSpecHandle;
		struct FActiveGameplayEffectHandle ReturnValue;
	} params;

	params.EffectSpecHandle = EffectSpecHandle;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (Parm)
// struct FGameplayEffectContextHandle Context                        (Parm)
// bool                           bRemoveOnAbilityEnd            (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue"));

	struct
	{
		struct FGameplayTag            GameplayCueTag;
		struct FGameplayEffectContextHandle Context;
		bool                           bRemoveOnAbilityEnd;
	} params;

	params.GameplayCueTag = GameplayCueTag;
	params.Context = Context;
	params.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGameplayAbility::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent"));

	struct
	{
		struct FGameplayEventData      EventData;
	} params;

	params.EventData = EventData;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGameplayAbility::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ActivateAbility"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* UGameplayAbility::GetOwningComponentFromActorInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo"));

	struct
	{
		class USkeletalMeshComponent*  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UGameplayAbility::GetOwningActorFromActorInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo"));

	struct
	{
		class AActor*                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetOutgoingGameplayEffectSpec
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameplayEffect*         GameplayEffect                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UGameplayAbility::GetOutgoingGameplayEffectSpec(class UGameplayEffect* GameplayEffect, float Level)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetOutgoingGameplayEffectSpec"));

	struct
	{
		class UGameplayEffect*         GameplayEffect;
		float                          Level;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params;

	params.GameplayEffect = GameplayEffect;
	params.Level = Level;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UGameplayAbility::GetCurrentSourceObject()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject"));

	struct
	{
		class UObject*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetCurrentMontage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* UGameplayAbility::GetCurrentMontage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetCurrentMontage"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetContextFromOwner
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayAbilityTargetDataHandle OptionalTargetData             (Parm)
// struct FGameplayEffectContextHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectContextHandle UGameplayAbility::GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetContextFromOwner"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle OptionalTargetData;
		struct FGameplayEffectContextHandle ReturnValue;
	} params;

	params.OptionalTargetData = OptionalTargetData;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UGameplayAbility::GetAvatarActorFromActorInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo"));

	struct
	{
		class AActor*                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilityActorInfo UGameplayAbility::GetActorInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetActorInfo"));

	struct
	{
		struct FGameplayAbilityActorInfo ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetAbilityLevel
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayAbility::GetAbilityLevel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetAbilityLevel"));

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   InstanceName                   (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::EndTaskByInstanceName(const struct FName& InstanceName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName"));

	struct
	{
		struct FName                   InstanceName;
	} params;

	params.InstanceName = InstanceName;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.EndAbilityState
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   OptionalStateNameToEnd         (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::EndAbilityState(const struct FName& OptionalStateNameToEnd)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.EndAbilityState"));

	struct
	{
		struct FName                   OptionalStateNameToEnd;
	} params;

	params.OptionalStateNameToEnd = OptionalStateNameToEnd;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   InstanceName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEndTask                       (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::ConfirmTaskByInstanceName(const struct FName& InstanceName, bool bEndTask)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName"));

	struct
	{
		struct FName                   InstanceName;
		bool                           bEndTask;
	} params;

	params.InstanceName = InstanceName;
	params.bEndTask = bEndTask;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   InstanceName                   (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::CancelTaskByInstanceName(const struct FName& InstanceName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName"));

	struct
	{
		struct FName                   InstanceName;
	} params;

	params.InstanceName = InstanceName;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   WithGrantedTags                (Parm)
// int                            StacksToRemove                 (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int StacksToRemove)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags"));

	struct
	{
		struct FGameplayTagContainer   WithGrantedTags;
		int                            StacksToRemove;
	} params;

	params.WithGrantedTags = WithGrantedTags;
	params.StacksToRemove = StacksToRemove;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   WithAssetTags                  (Parm)
// int                            StacksToRemove                 (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int StacksToRemove)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags"));

	struct
	{
		struct FGameplayTagContainer   WithAssetTags;
		int                            StacksToRemove;
	} params;

	params.WithAssetTags = WithAssetTags;
	params.StacksToRemove = StacksToRemove;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// class UClass*                  GameplayEffectClass            (Parm, ZeroConstructor, IsPlainOldData)
// int                            GameplayEffectLevel            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FActiveGameplayEffectHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* GameplayEffectClass, int GameplayEffectLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetData;
		class UClass*                  GameplayEffectClass;
		int                            GameplayEffectLevel;
		TArray<struct FActiveGameplayEffectHandle> ReturnValue;
	} params;

	params.TargetData = TargetData;
	params.GameplayEffectClass = GameplayEffectClass;
	params.GameplayEffectLevel = GameplayEffectLevel;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayEffectClass            (Parm, ZeroConstructor, IsPlainOldData)
// int                            GameplayEffectLevel            (Parm, ZeroConstructor, IsPlainOldData)
// struct FActiveGameplayEffectHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActiveGameplayEffectHandle UGameplayAbility::BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int GameplayEffectLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner"));

	struct
	{
		class UClass*                  GameplayEffectClass;
		int                            GameplayEffectLevel;
		struct FActiveGameplayEffectHandle ReturnValue;
	} params;

	params.GameplayEffectClass = GameplayEffectClass;
	params.GameplayEffectLevel = GameplayEffectLevel;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
// (BlueprintCosmetic, Native, Public, BlueprintCallable)

void UGameplayCueInterface::ForwardGameplayCueToParent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void UGameplayCueInterface::BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler"));

	struct
	{
		TEnumAsByte<EGameplayCueEvent> EventType;
		struct FGameplayCueParameters  Parameters;
	} params;

	params.EventType = EventType;
	params.Parameters = Parameters;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::TargetDataHasOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetData;
		int                            Index;
		bool                           ReturnValue;
	} params;

	params.TargetData = TargetData;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle HitResult                      (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::TargetDataHasHitResult(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle HitResult;
		int                            Index;
		bool                           ReturnValue;
	} params;

	params.HitResult = HitResult;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::TargetDataHasEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetData;
		int                            Index;
		bool                           ReturnValue;
	} params;

	params.TargetData = TargetData;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::TargetDataHasActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetData;
		int                            Index;
		bool                           ReturnValue;
	} params;

	params.TargetData = TargetData;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params;

	params.SpecHandle = SpecHandle;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// int                            StackCount                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int StackCount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		int                            StackCount;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params;

	params.SpecHandle = SpecHandle;
	params.StackCount = StackCount;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		float                          Duration;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params;

	params.SpecHandle = SpecHandle;
	params.Duration = Duration;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            EventTag                       (Parm)
// struct FGameplayEventData      payload                        (Parm)

void UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& payload)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor"));

	struct
	{
		class AActor*                  Actor;
		struct FGameplayTag            EventTag;
		struct FGameplayEventData      payload;
	} params;

	params.Actor = Actor;
	params.EventTag = EventTag;
	params.payload = payload;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGameplayEffect*         InGameplayEffect               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InInstigator                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InEffectCauser                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          InLevel                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle"));

	struct
	{
		class UGameplayEffect*         InGameplayEffect;
		class AActor*                  InInstigator;
		class AActor*                  InEffectCauser;
		float                          InLevel;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params;

	params.InGameplayEffect = InGameplayEffect;
	params.InInstigator = InInstigator;
	params.InEffectCauser = InEffectCauser;
	params.InLevel = InLevel;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTargetDataFilter Filter                         (Parm)
// class AActor*                  FilterActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTargetDataFilterHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTargetDataFilterHandle UAbilitySystemBlueprintLibrary::MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class AActor* FilterActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle"));

	struct
	{
		struct FGameplayTargetDataFilter Filter;
		class AActor*                  FilterActor;
		struct FGameplayTargetDataFilterHandle ReturnValue;
	} params;

	params.Filter = Filter;
	params.FilterActor = FilterActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer"));

	struct
	{
		struct FGameplayCueParameters  Parameters;
		bool                           ReturnValue;
	} params;

	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled"));

	struct
	{
		struct FGameplayCueParameters  Parameters;
		bool                           ReturnValue;
	} params;

	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::HasHitResult(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult"));

	struct
	{
		struct FGameplayCueParameters  Parameters;
		bool                           ReturnValue;
	} params;

	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UAbilitySystemBlueprintLibrary::GetTargetDataOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetData;
		int                            Index;
		struct FTransform              ReturnValue;
	} params;

	params.TargetData = TargetData;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UAbilitySystemBlueprintLibrary::GetTargetDataEndPointTransform(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetData;
		int                            Index;
		struct FTransform              ReturnValue;
	} params;

	params.TargetData = TargetData;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UAbilitySystemBlueprintLibrary::GetTargetDataEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetData;
		int                            Index;
		struct FVector                 ReturnValue;
	} params;

	params.TargetData = TargetData;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UAbilitySystemBlueprintLibrary::GetOrigin(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin"));

	struct
	{
		struct FGameplayCueParameters  Parameters;
		struct FVector                 ReturnValue;
	} params;

	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (Parm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UAbilitySystemBlueprintLibrary::GetInstigatorTransform(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform"));

	struct
	{
		struct FGameplayCueParameters  Parameters;
		struct FTransform              ReturnValue;
	} params;

	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAbilitySystemBlueprintLibrary::GetInstigatorActor(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor"));

	struct
	{
		struct FGameplayCueParameters  Parameters;
		class AActor*                  ReturnValue;
	} params;

	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle HitResult                      (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHitResult UAbilitySystemBlueprintLibrary::GetHitResultFromTargetData(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle HitResult;
		int                            Index;
		struct FHitResult              ReturnValue;
	} params;

	params.HitResult = HitResult;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (Parm)
// struct FHitResult              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHitResult UAbilitySystemBlueprintLibrary::GetHitResult(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult"));

	struct
	{
		struct FGameplayCueParameters  Parameters;
		struct FHitResult              ReturnValue;
	} params;

	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal"));

	struct
	{
		class AActor*                  TargetActor;
		struct FGameplayCueParameters  Parameters;
		struct FVector                 Location;
		struct FVector                 Normal;
		bool                           ReturnValue;
	} params;

	params.TargetActor = TargetActor;
	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Location != nullptr)
		*Location = params.Location;
	if (Normal != nullptr)
		*Normal = params.Normal;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)
// struct FVector                 Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection"));

	struct
	{
		class AActor*                  TargetActor;
		struct FGameplayCueParameters  Parameters;
		struct FVector                 Direction;
		bool                           ReturnValue;
	} params;

	params.TargetActor = TargetActor;
	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Direction != nullptr)
		*Direction = params.Direction;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAttribute      Attribute                      (Parm)
// bool                           bSuccessfullyFoundAttribute    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbilitySystemBlueprintLibrary::GetFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute"));

	struct
	{
		class AActor*                  Actor;
		struct FGameplayAttribute      Attribute;
		bool                           bSuccessfullyFoundAttribute;
		float                          ReturnValue;
	} params;

	params.Actor = Actor;
	params.Attribute = Attribute;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = params.bSuccessfullyFoundAttribute;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAbilitySystemBlueprintLibrary::GetDataCountFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetData;
		int                            ReturnValue;
	} params;

	params.TargetData = TargetData;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UAbilitySystemBlueprintLibrary::GetActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetData;
		int                            Index;
		TArray<class AActor*>          ReturnValue;
	} params;

	params.TargetData = TargetData;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAbilitySystemBlueprintLibrary::GetActorCount(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount"));

	struct
	{
		struct FGameplayCueParameters  Parameters;
		int                            ReturnValue;
	} params;

	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAbilitySystemBlueprintLibrary::GetActorByIndex(const struct FGameplayCueParameters& Parameters, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex"));

	struct
	{
		struct FGameplayCueParameters  Parameters;
		int                            Index;
		class AActor*                  ReturnValue;
	} params;

	params.Parameters = Parameters;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount"));

	struct
	{
		struct FActiveGameplayEffectHandle ActiveHandle;
		int                            ReturnValue;
	} params;

	params.ActiveHandle = ActiveHandle;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilitySystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAbilitySystemComponent* UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent"));

	struct
	{
		class AActor*                  Actor;
		class UAbilitySystemComponent* ReturnValue;
	} params;

	params.Actor = Actor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayCueInterface> TargetCueInterface             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void UAbilitySystemBlueprintLibrary::ForwardGameplayCueToTarget(const TScriptInterface<class UGameplayCueInterface>& TargetCueInterface, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget"));

	struct
	{
		TScriptInterface<class UGameplayCueInterface> TargetCueInterface;
		TEnumAsByte<EGameplayCueEvent> EventType;
		struct FGameplayCueParameters  Parameters;
	} params;

	params.TargetCueInterface = TargetCueInterface;
	params.EventType = EventType;
	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetDataHandle               (Parm)
// struct FGameplayTargetDataFilterHandle ActorFilterClass               (Parm)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::FilterTargetData(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetDataHandle;
		struct FGameplayTargetDataFilterHandle ActorFilterClass;
		struct FGameplayAbilityTargetDataHandle ReturnValue;
	} params;

	params.TargetDataHandle = TargetDataHandle;
	params.ActorFilterClass = ActorFilterClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled"));

	struct
	{
		struct FGameplayEffectContextHandle EffectContext;
		bool                           ReturnValue;
	} params;

	params.EffectContext = EffectContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult"));

	struct
	{
		struct FGameplayEffectContextHandle EffectContext;
		bool                           ReturnValue;
	} params;

	params.EffectContext = EffectContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UAbilitySystemBlueprintLibrary::EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject"));

	struct
	{
		struct FGameplayEffectContextHandle EffectContext;
		class UObject*                 ReturnValue;
	} params;

	params.EffectContext = EffectContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAbilitySystemBlueprintLibrary::EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor"));

	struct
	{
		struct FGameplayEffectContextHandle EffectContext;
		class AActor*                  ReturnValue;
	} params;

	params.EffectContext = EffectContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UAbilitySystemBlueprintLibrary::EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin"));

	struct
	{
		struct FGameplayEffectContextHandle EffectContext;
		struct FVector                 ReturnValue;
	} params;

	params.EffectContext = EffectContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAbilitySystemBlueprintLibrary::EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor"));

	struct
	{
		struct FGameplayEffectContextHandle EffectContext;
		class AActor*                  ReturnValue;
	} params;

	params.EffectContext = EffectContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
// struct FHitResult              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHitResult UAbilitySystemBlueprintLibrary::EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult"));

	struct
	{
		struct FGameplayEffectContextHandle EffectContext;
		struct FHitResult              ReturnValue;
	} params;

	params.EffectContext = EffectContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAbilitySystemBlueprintLibrary::EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser"));

	struct
	{
		struct FGameplayEffectContextHandle EffectContext;
		class AActor*                  ReturnValue;
	} params;

	params.EffectContext = EffectContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::DoesTargetDataContainActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetData;
		int                            Index;
		class AActor*                  Actor;
		bool                           ReturnValue;
	} params;

	params.TargetData = TargetData;
	params.Index = Index;
	params.Actor = Actor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (Parm)
// struct FGameplayTagRequirements SourceTagReqs                  (Parm, OutParm, ReferenceParm)
// struct FGameplayTagRequirements TargetTagReqs                  (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, struct FGameplayTagRequirements* SourceTagReqs, struct FGameplayTagRequirements* TargetTagReqs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements"));

	struct
	{
		struct FGameplayCueParameters  Parameters;
		struct FGameplayTagRequirements SourceTagReqs;
		struct FGameplayTagRequirements TargetTagReqs;
		bool                           ReturnValue;
	} params;

	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (SourceTagReqs != nullptr)
		*SourceTagReqs = params.SourceTagReqs;
	if (TargetTagReqs != nullptr)
		*TargetTagReqs = params.TargetTagReqs;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// struct FName                   DataName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FName& DataName, float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		struct FName                   DataName;
		float                          Magnitude;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params;

	params.SpecHandle = SpecHandle;
	params.DataName = DataName;
	params.Magnitude = Magnitude;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetHandle                   (Parm)
// struct FGameplayAbilityTargetDataHandle HandleToAdd                    (Parm)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, const struct FGameplayAbilityTargetDataHandle& HandleToAdd)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetHandle;
		struct FGameplayAbilityTargetDataHandle HandleToAdd;
		struct FGameplayAbilityTargetDataHandle ReturnValue;
	} params;

	params.TargetHandle = TargetHandle;
	params.HandleToAdd = HandleToAdd;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// struct FGameplayEffectSpecHandle LinkedGameplayEffectSpec       (Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		struct FGameplayEffectSpecHandle LinkedGameplayEffectSpec;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params;

	params.SpecHandle = SpecHandle;
	params.LinkedGameplayEffectSpec = LinkedGameplayEffectSpec;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// struct FGameplayTagContainer   NewGameplayTags                (Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		struct FGameplayTagContainer   NewGameplayTags;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params;

	params.SpecHandle = SpecHandle;
	params.NewGameplayTags = NewGameplayTags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// struct FGameplayTag            NewGameplayTag                 (Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		struct FGameplayTag            NewGameplayTag;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params;

	params.SpecHandle = SpecHandle;
	params.NewGameplayTag = NewGameplayTag;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// struct FGameplayTagContainer   NewGameplayTags                (Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		struct FGameplayTagContainer   NewGameplayTags;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params;

	params.SpecHandle = SpecHandle;
	params.NewGameplayTags = NewGameplayTags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// struct FGameplayTag            NewGameplayTag                 (Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		struct FGameplayTag            NewGameplayTag;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params;

	params.SpecHandle = SpecHandle;
	params.NewGameplayTag = NewGameplayTag;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetingLocationInfo SourceLocation                 (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayAbilityTargetingLocationInfo TargetLocation                 (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromLocations(const struct FGameplayAbilityTargetingLocationInfo& SourceLocation, const struct FGameplayAbilityTargetingLocationInfo& TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations"));

	struct
	{
		struct FGameplayAbilityTargetingLocationInfo SourceLocation;
		struct FGameplayAbilityTargetingLocationInfo TargetLocation;
		struct FGameplayAbilityTargetDataHandle ReturnValue;
	} params;

	params.SourceLocation = SourceLocation;
	params.TargetLocation = TargetLocation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult              HitResult                      (Parm)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromHitResult(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult"));

	struct
	{
		struct FHitResult              HitResult;
		struct FGameplayAbilityTargetDataHandle ReturnValue;
	} params;

	params.HitResult = HitResult;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class AActor*>          ActorArray                     (Parm, ZeroConstructor)
// bool                           OneTargetPerHandle             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActorArray(TArray<class AActor*> ActorArray, bool OneTargetPerHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray"));

	struct
	{
		TArray<class AActor*>          ActorArray;
		bool                           OneTargetPerHandle;
		struct FGameplayAbilityTargetDataHandle ReturnValue;
	} params;

	params.ActorArray = ActorArray;
	params.OneTargetPerHandle = OneTargetPerHandle;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor"));

	struct
	{
		class AActor*                  Actor;
		struct FGameplayAbilityTargetDataHandle ReturnValue;
	} params;

	params.Actor = Actor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InAbilityToActivate            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowRemoteActivation         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemComponent::TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass"));

	struct
	{
		class UClass*                  InAbilityToActivate;
		bool                           bAllowRemoteActivation;
		bool                           ReturnValue;
	} params;

	params.InAbilityToActivate = InAbilityToActivate;
	params.bAllowRemoteActivation = bAllowRemoteActivation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bAllowRemoteActivation         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemComponent::TryActivateAbilitiesByTag(const struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag"));

	struct
	{
		struct FGameplayTagContainer   GameplayTagContainer;
		bool                           bAllowRemoteActivation;
		bool                           ReturnValue;
	} params;

	params.GameplayTagContainer = GameplayTagContainer;
	params.bAllowRemoteActivation = bAllowRemoteActivation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
// (Final, Native, Public, BlueprintCallable)

void UAbilitySystemComponent::TargetConfirm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.TargetConfirm"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.TargetCancel
// (Final, Native, Public, BlueprintCallable)

void UAbilitySystemComponent::TargetCancel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.TargetCancel"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           NewInhibit                     (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::SetUserAbilityActivationInhibited(bool NewInhibit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited"));

	struct
	{
		bool                           NewInhibit;
	} params;

	params.NewInhibit = NewInhibit;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                   (Parm)
// int                            NewLevel                       (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel"));

	struct
	{
		struct FActiveGameplayEffectHandle ActiveHandle;
		int                            NewLevel;
	} params;

	params.ActiveHandle = ActiveHandle;
	params.NewLevel = NewLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (Parm)
// bool                           InputPressed                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FPredictionKey          PredictionKey                  (Parm)
// struct FGameplayEventData      TriggerEventData               (Parm)

void UAbilitySystemComponent::ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityToActivate;
		bool                           InputPressed;
		struct FPredictionKey          PredictionKey;
		struct FGameplayEventData      TriggerEventData;
	} params;

	params.AbilityToActivate = AbilityToActivate;
	params.InputPressed = InputPressed;
	params.PredictionKey = PredictionKey;
	params.TriggerEventData = TriggerEventData;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (Parm)
// bool                           InputPressed                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FPredictionKey          PredictionKey                  (Parm)

void UAbilitySystemComponent::ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityToActivate;
		bool                           InputPressed;
		struct FPredictionKey          PredictionKey;
	} params;

	params.AbilityToActivate = AbilityToActivate;
	params.InputPressed = InputPressed;
	params.PredictionKey = PredictionKey;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (Parm)
// struct FPredictionKey          AbilityOriginalPredictionKey   (Parm)
// struct FPredictionKey          CurrentPredictionKey           (Parm)

void UAbilitySystemComponent::ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityHandle;
		struct FPredictionKey          AbilityOriginalPredictionKey;
		struct FPredictionKey          CurrentPredictionKey;
	} params;

	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.CurrentPredictionKey = CurrentPredictionKey;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (Parm)
// struct FPredictionKey          AbilityOriginalPredictionKey   (Parm)
// struct FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle     (Parm)
// struct FGameplayTag            ApplicationTag                 (Parm)
// struct FPredictionKey          CurrentPredictionKey           (Parm)

void UAbilitySystemComponent::ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityHandle;
		struct FPredictionKey          AbilityOriginalPredictionKey;
		struct FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle;
		struct FGameplayTag            ApplicationTag;
		struct FPredictionKey          CurrentPredictionKey;
	} params;

	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.ReplicatedTargetDataHandle = ReplicatedTargetDataHandle;
	params.ApplicationTag = ApplicationTag;
	params.CurrentPredictionKey = CurrentPredictionKey;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TEnumAsByte<EAbilityGenericReplicatedEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilitySpecHandle AbilityHandle                  (Parm)
// struct FPredictionKey          AbilityOriginalPredictionKey   (Parm)
// struct FPredictionKey          CurrentPredictionKey           (Parm)

void UAbilitySystemComponent::ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent"));

	struct
	{
		TEnumAsByte<EAbilityGenericReplicatedEvent> EventType;
		struct FGameplayAbilitySpecHandle AbilityHandle;
		struct FPredictionKey          AbilityOriginalPredictionKey;
		struct FPredictionKey          CurrentPredictionKey;
	} params;

	params.EventType = EventType;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.CurrentPredictionKey = CurrentPredictionKey;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (Parm)

void UAbilitySystemComponent::ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityHandle;
	} params;

	params.AbilityHandle = AbilityHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (Parm)

void UAbilitySystemComponent::ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityHandle;
	} params;

	params.AbilityHandle = AbilityHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToEnd                   (Parm)
// struct FGameplayAbilityActivationInfo ActivationInfo                 (Parm)
// struct FPredictionKey          PredictionKey                  (Parm)

void UAbilitySystemComponent::ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityToEnd;
		struct FGameplayAbilityActivationInfo ActivationInfo;
		struct FPredictionKey          PredictionKey;
	} params;

	params.AbilityToEnd = AbilityToEnd;
	params.ActivationInfo = ActivationInfo;
	params.PredictionKey = PredictionKey;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class UAnimMontage*            ClientAnimMontage              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ClientPosition                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SectionName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NextSectionName                (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, const struct FName& SectionName, const struct FName& NextSectionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName"));

	struct
	{
		class UAnimMontage*            ClientAnimMontage;
		float                          ClientPosition;
		struct FName                   SectionName;
		struct FName                   NextSectionName;
	} params;

	params.ClientAnimMontage = ClientAnimMontage;
	params.ClientPosition = ClientPosition;
	params.SectionName = SectionName;
	params.NextSectionName = NextSectionName;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class UAnimMontage*            ClientAnimMontage              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SectionName                    (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, const struct FName& SectionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName"));

	struct
	{
		class UAnimMontage*            ClientAnimMontage;
		struct FName                   SectionName;
	} params;

	params.ClientAnimMontage = ClientAnimMontage;
	params.SectionName = SectionName;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToCancel                (Parm)
// struct FGameplayAbilityActivationInfo ActivationInfo                 (Parm)

void UAbilitySystemComponent::ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityToCancel;
		struct FGameplayAbilityActivationInfo ActivationInfo;
	} params;

	params.AbilityToCancel = AbilityToCancel;
	params.ActivationInfo = ActivationInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayEffect                 (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilitySystemComponent* InstigatorAbilitySystemComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            StacksToRemove                 (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int StacksToRemove)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect"));

	struct
	{
		class UClass*                  GameplayEffect;
		class UAbilitySystemComponent* InstigatorAbilitySystemComponent;
		int                            StacksToRemove;
	} params;

	params.GameplayEffect = GameplayEffect;
	params.InstigatorAbilitySystemComponent = InstigatorAbilitySystemComponent;
	params.StacksToRemove = StacksToRemove;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                         (Parm)
// int                            StacksToRemove                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemComponent::RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int StacksToRemove)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect"));

	struct
	{
		struct FActiveGameplayEffectHandle Handle;
		int                            StacksToRemove;
		bool                           ReturnValue;
	} params;

	params.Handle = Handle;
	params.StacksToRemove = StacksToRemove;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   Tags                           (Parm)

void UAbilitySystemComponent::RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags"));

	struct
	{
		struct FGameplayTagContainer   Tags;
	} params;

	params.Tags = Tags;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
// (Final, Native, Protected)

void UAbilitySystemComponent::OnRep_ReplicatedAnimMontage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_PredictionKey
// (Final, Native, Public)

void UAbilitySystemComponent::OnRep_PredictionKey()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.OnRep_PredictionKey"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
// (Final, Native, Public)

void UAbilitySystemComponent::OnRep_OwningActor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_GameplayEffects
// (Final, Native, Protected)

void UAbilitySystemComponent::OnRep_GameplayEffects()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.OnRep_GameplayEffects"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
// (Final, Native, Protected)

void UAbilitySystemComponent::OnRep_ActivateAbilities()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (ConstParm, Parm)
// struct FPredictionKey          PredictionKey                  (Parm)
// struct FGameplayCueParameters  GameplayCueParameters          (Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams"));

	struct
	{
		struct FGameplayTag            GameplayCueTag;
		struct FPredictionKey          PredictionKey;
		struct FGameplayCueParameters  GameplayCueParameters;
	} params;

	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.GameplayCueParameters = GameplayCueParameters;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayEffectSpecForRPC Spec                           (ConstParm, Parm)
// struct FPredictionKey          PredictionKey                  (Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec"));

	struct
	{
		struct FGameplayEffectSpecForRPC Spec;
		struct FPredictionKey          PredictionKey;
	} params;

	params.Spec = Spec;
	params.PredictionKey = PredictionKey;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (ConstParm, Parm)
// struct FPredictionKey          PredictionKey                  (Parm)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted"));

	struct
	{
		struct FGameplayTag            GameplayCueTag;
		struct FPredictionKey          PredictionKey;
		struct FGameplayEffectContextHandle EffectContext;
	} params;

	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.EffectContext = EffectContext;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayEffectSpecForRPC Spec                           (ConstParm, Parm, ReferenceParm)
// struct FPredictionKey          PredictionKey                  (Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec"));

	struct
	{
		struct FGameplayEffectSpecForRPC Spec;
		struct FPredictionKey          PredictionKey;
	} params;

	params.Spec = Spec;
	params.PredictionKey = PredictionKey;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (ConstParm, Parm)
// struct FPredictionKey          PredictionKey                  (Parm)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded"));

	struct
	{
		struct FGameplayTag            GameplayCueTag;
		struct FPredictionKey          PredictionKey;
		struct FGameplayEffectContextHandle EffectContext;
	} params;

	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.EffectContext = EffectContext;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  GameplayEffectClass            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle Context                        (Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemComponent::MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec"));

	struct
	{
		class UClass*                  GameplayEffectClass;
		float                          Level;
		struct FGameplayEffectContextHandle Context;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params;

	params.GameplayEffectClass = GameplayEffectClass;
	params.Level = Level;
	params.Context = Context;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Attributes                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataTable*              DataTable                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::K2_InitStats(class UClass* Attributes, class UDataTable* DataTable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.K2_InitStats"));

	struct
	{
		class UClass*                  Attributes;
		class UDataTable*              DataTable;
	} params;

	params.Attributes = Attributes;
	params.DataTable = DataTable;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameplayEffect*         GameplayEffect                 (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilitySystemComponent* Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle Context                        (Parm)
// struct FActiveGameplayEffectHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::K2_ApplyGameplayEffectToTarget(class UGameplayEffect* GameplayEffect, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToTarget"));

	struct
	{
		class UGameplayEffect*         GameplayEffect;
		class UAbilitySystemComponent* Target;
		float                          Level;
		struct FGameplayEffectContextHandle Context;
		struct FActiveGameplayEffectHandle ReturnValue;
	} params;

	params.GameplayEffect = GameplayEffect;
	params.Target = Target;
	params.Level = Level;
	params.Context = Context;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToSelf
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameplayEffect*         GameplayEffect                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
// struct FActiveGameplayEffectHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::K2_ApplyGameplayEffectToSelf(class UGameplayEffect* GameplayEffect, float Level, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToSelf"));

	struct
	{
		class UGameplayEffect*         GameplayEffect;
		float                          Level;
		struct FGameplayEffectContextHandle EffectContext;
		struct FActiveGameplayEffectHandle ReturnValue;
	} params;

	params.GameplayEffect = GameplayEffect;
	params.Level = Level;
	params.EffectContext = EffectContext;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemComponent::IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive"));

	struct
	{
		struct FGameplayTag            GameplayCueTag;
		bool                           ReturnValue;
	} params;

	params.GameplayCueTag = GameplayCueTag;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemComponent::GetUserAbilityActivationInhibited()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetOutgoingSpec
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameplayEffect*         GameplayEffect                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemComponent::GetOutgoingSpec(class UGameplayEffect* GameplayEffect, float Level)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.GetOutgoingSpec"));

	struct
	{
		class UGameplayEffect*         GameplayEffect;
		float                          Level;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params;

	params.GameplayEffect = GameplayEffect;
	params.Level = Level;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                         (Parm)
// struct FGameplayAttribute      Attribute                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbilitySystemComponent::GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude"));

	struct
	{
		struct FActiveGameplayEffectHandle Handle;
		struct FGameplayAttribute      Attribute;
		float                          ReturnValue;
	} params;

	params.Handle = Handle;
	params.Attribute = Attribute;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  SourceGameplayEffect           (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilitySystemComponent* OptionalInstigatorFilterComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAbilitySystemComponent::GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount"));

	struct
	{
		class UClass*                  SourceGameplayEffect;
		class UAbilitySystemComponent* OptionalInstigatorFilterComponent;
		int                            ReturnValue;
	} params;

	params.SourceGameplayEffect = SourceGameplayEffect;
	params.OptionalInstigatorFilterComponent = OptionalInstigatorFilterComponent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetEffectContext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayEffectContextHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectContextHandle UAbilitySystemComponent::GetEffectContext()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.GetEffectContext"));

	struct
	{
		struct FGameplayEffectContextHandle ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (Parm)

void UAbilitySystemComponent::ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityToActivate;
	} params;

	params.AbilityToActivate = AbilityToActivate;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TEnumAsByte<EAbilityGenericReplicatedEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilitySpecHandle AbilityHandle                  (Parm)
// struct FPredictionKey          AbilityOriginalPredictionKey   (Parm)

void UAbilitySystemComponent::ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent"));

	struct
	{
		TEnumAsByte<EAbilityGenericReplicatedEvent> EventType;
		struct FGameplayAbilitySpecHandle AbilityHandle;
		struct FPredictionKey          AbilityOriginalPredictionKey;
	} params;

	params.EventType = EventType;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToEnd                   (Parm)
// struct FGameplayAbilityActivationInfo ActivationInfo                 (Parm)

void UAbilitySystemComponent::ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityToEnd;
		struct FGameplayAbilityActivationInfo ActivationInfo;
	} params;

	params.AbilityToEnd = AbilityToEnd;
	params.ActivationInfo = ActivationInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToCancel                (Parm)
// struct FGameplayAbilityActivationInfo ActivationInfo                 (Parm)

void UAbilitySystemComponent::ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityToCancel;
		struct FGameplayAbilityActivationInfo ActivationInfo;
	} params;

	params.AbilityToCancel = AbilityToCancel;
	params.ActivationInfo = ActivationInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (Parm)
// struct FPredictionKey          PredictionKey                  (Parm)
// struct FGameplayEventData      TriggerEventData               (Parm)

void UAbilitySystemComponent::ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityToActivate;
		struct FPredictionKey          PredictionKey;
		struct FGameplayEventData      TriggerEventData;
	} params;

	params.AbilityToActivate = AbilityToActivate;
	params.PredictionKey = PredictionKey;
	params.TriggerEventData = TriggerEventData;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (Parm)
// struct FPredictionKey          PredictionKey                  (Parm)

void UAbilitySystemComponent::ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityToActivate;
		struct FPredictionKey          PredictionKey;
	} params;

	params.AbilityToActivate = AbilityToActivate;
	params.PredictionKey = PredictionKey;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (Parm)
// int16_t                        PredictionKey                  (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16_t PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityToActivate;
		int16_t                        PredictionKey;
	} params;

	params.AbilityToActivate = AbilityToActivate;
	params.PredictionKey = PredictionKey;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayEffectClass            (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilitySystemComponent* Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle Context                        (Parm)
// struct FActiveGameplayEffectHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget"));

	struct
	{
		class UClass*                  GameplayEffectClass;
		class UAbilitySystemComponent* Target;
		float                          Level;
		struct FGameplayEffectContextHandle Context;
		struct FActiveGameplayEffectHandle ReturnValue;
	} params;

	params.GameplayEffectClass = GameplayEffectClass;
	params.Target = Target;
	params.Level = Level;
	params.Context = Context;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayEffectClass            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
// struct FActiveGameplayEffectHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf"));

	struct
	{
		class UClass*                  GameplayEffectClass;
		float                          Level;
		struct FGameplayEffectContextHandle EffectContext;
		struct FActiveGameplayEffectHandle ReturnValue;
	} params;

	params.GameplayEffectClass = GameplayEffectClass;
	params.Level = Level;
	params.EffectContext = EffectContext;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm, OutParm, ReferenceParm)
// class UAbilitySystemComponent* Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FActiveGameplayEffectHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToTarget(class UAbilitySystemComponent* Target, struct FGameplayEffectSpecHandle* SpecHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		class UAbilitySystemComponent* Target;
		struct FActiveGameplayEffectHandle ReturnValue;
	} params;

	params.Target = Target;

	UObject::ProcessEvent(fn, &params);

	if (SpecHandle != nullptr)
		*SpecHandle = params.SpecHandle;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm, OutParm, ReferenceParm)
// struct FActiveGameplayEffectHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle* SpecHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		struct FActiveGameplayEffectHandle ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (SpecHandle != nullptr)
		*SpecHandle = params.SpecHandle;

	return params.ReturnValue;
}


// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UAbilitySystemComponent::AbilityConfirmOrCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int                            InputID                        (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::AbilityAbilityKey__DelegateSignature(int InputID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature"));

	struct
	{
		int                            InputID;
	} params;

	params.InputID = InputID;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
// (Exec, Native, Public)

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCosts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
// (Exec, Native, Public)

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCooldowns()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             OptionalInterpolationCurve     (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveVector*            OptionalVectorInterpolationCurve (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_MoveToLocation* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_MoveToLocation* UAbilityTask_MoveToLocation::MoveToLocation(class UObject* WorldContextObject, const struct FName& TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FName                   TaskInstanceName;
		struct FVector                 Location;
		float                          Duration;
		class UCurveFloat*             OptionalInterpolationCurve;
		class UCurveVector*            OptionalVectorInterpolationCurve;
		class UAbilityTask_MoveToLocation* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.TaskInstanceName = TaskInstanceName;
	params.Location = Location;
	params.Duration = Duration;
	params.OptionalInterpolationCurve = OptionalInterpolationCurve;
	params.OptionalVectorInterpolationCurve = OptionalVectorInterpolationCurve;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAbilityTaskNetSyncType> SyncType                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_NetworkSyncPoint* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_NetworkSyncPoint* UAbilityTask_NetworkSyncPoint::WaitNetSync(class UObject* WorldContextObject, TEnumAsByte<EAbilityTaskNetSyncType> SyncType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync"));

	struct
	{
		class UObject*                 WorldContextObject;
		TEnumAsByte<EAbilityTaskNetSyncType> SyncType;
		class UAbilityTask_NetworkSyncPoint* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.SyncType = SyncType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
// (Final, Native, Public)

void UAbilityTask_NetworkSyncPoint::OnSignalCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
// (Final, Native, Public)

void UAbilityTask_PlayMontageAndWait::OnMontageInterrupted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
// (Final, Native, Public)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_PlayMontageAndWait::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut"));

	struct
	{
		class UAnimMontage*            Montage;
		bool                           bInterrupted;
	} params;

	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StartSection                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_PlayMontageAndWait* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_PlayMontageAndWait* UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(class UObject* WorldContextObject, const struct FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const struct FName& StartSection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FName                   TaskInstanceName;
		class UAnimMontage*            MontageToPlay;
		float                          Rate;
		struct FName                   StartSection;
		class UAbilityTask_PlayMontageAndWait* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.TaskInstanceName = TaskInstanceName;
	params.MontageToPlay = MontageToPlay;
	params.Rate = Rate;
	params.StartSection = StartSection;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeBetweenActions             (Parm, ZeroConstructor, IsPlainOldData)
// int                            TotalActionCount               (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_Repeat*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_Repeat* UAbilityTask_Repeat::RepeatAction(class UObject* WorldContextObject, float TimeBetweenActions, int TotalActionCount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_Repeat.RepeatAction"));

	struct
	{
		class UObject*                 WorldContextObject;
		float                          TimeBetweenActions;
		int                            TotalActionCount;
		class UAbilityTask_Repeat*     ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.TimeBetweenActions = TimeBetweenActions;
	params.TotalActionCount = TotalActionCount;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_SpawnActor* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_SpawnActor* UAbilityTask_SpawnActor::SpawnActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FGameplayAbilityTargetDataHandle TargetData;
		class UClass*                  Class;
		class UAbilityTask_SpawnActor* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.TargetData = TargetData;
	params.Class = Class;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// class AActor*                  SpawnedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_SpawnActor::FinishSpawningActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FGameplayAbilityTargetDataHandle TargetData;
		class AActor*                  SpawnedActor;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.TargetData = TargetData;
	params.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SpawnedActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilityTask_SpawnActor::BeginSpawningActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class, class AActor** SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FGameplayAbilityTargetDataHandle TargetData;
		class UClass*                  Class;
		class AActor*                  SpawnedActor;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.TargetData = TargetData;
	params.Class = Class;

	UObject::ProcessEvent(fn, &params);

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StateName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEndCurrentState               (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_StartAbilityState* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_StartAbilityState* UAbilityTask_StartAbilityState::StartAbilityState(class UObject* WorldContextObject, const struct FName& StateName, bool bEndCurrentState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FName                   StateName;
		bool                           bEndCurrentState;
		class UAbilityTask_StartAbilityState* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.StateName = StateName;
	params.bEndCurrentState = bEndCurrentState;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AGameplayAbilityTargetActor* TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_VisualizeTargeting* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::VisualizeTargetingUsingActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* TargetActor, const struct FName& TaskInstanceName, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor"));

	struct
	{
		class UObject*                 WorldContextObject;
		class AGameplayAbilityTargetActor* TargetActor;
		struct FName                   TaskInstanceName;
		float                          Duration;
		class UAbilityTask_VisualizeTargeting* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.TargetActor = TargetActor;
	params.TaskInstanceName = TaskInstanceName;
	params.Duration = Duration;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_VisualizeTargeting* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::VisualizeTargeting(class UObject* WorldContextObject, class UClass* Class, const struct FName& TaskInstanceName, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UClass*                  Class;
		struct FName                   TaskInstanceName;
		float                          Duration;
		class UAbilityTask_VisualizeTargeting* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Class = Class;
	params.TaskInstanceName = TaskInstanceName;
	params.Duration = Duration;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AGameplayAbilityTargetActor* SpawnedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_VisualizeTargeting::FinishSpawningActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor"));

	struct
	{
		class UObject*                 WorldContextObject;
		class AGameplayAbilityTargetActor* SpawnedActor;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class AGameplayAbilityTargetActor* SpawnedActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilityTask_VisualizeTargeting::BeginSpawningActor(class UObject* WorldContextObject, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UClass*                  Class;
		class AGameplayAbilityTargetActor* SpawnedActor;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Class = Class;

	UObject::ProcessEvent(fn, &params);

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            WithTag                        (Parm)
// struct FGameplayTag            WithoutTag                     (Parm)
// bool                           IncludeTriggeredAbilities      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitAbilityActivate* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivate(class UObject* WorldContextObject, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FGameplayTag            WithTag;
		struct FGameplayTag            WithoutTag;
		bool                           IncludeTriggeredAbilities;
		bool                           TriggerOnce;
		class UAbilityTask_WaitAbilityActivate* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.WithTag = WithTag;
	params.WithoutTag = WithoutTag;
	params.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	params.TriggerOnce = TriggerOnce;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
// (Final, Native, Public)
// Parameters:
// class UGameplayAbility*        ActivatedAbility               (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_WaitAbilityActivate::OnAbilityActivate(class UGameplayAbility* ActivatedAbility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate"));

	struct
	{
		class UGameplayAbility*        ActivatedAbility;
	} params;

	params.ActivatedAbility = ActivatedAbility;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            WithTag                        (Parm)
// struct FGameplayTag            WithoutTage                    (Parm)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitAbilityCommit* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::WaitForAbilityCommit(class UObject* WorldContextObject, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FGameplayTag            WithTag;
		struct FGameplayTag            WithoutTage;
		bool                           TriggerOnce;
		class UAbilityTask_WaitAbilityCommit* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.WithTag = WithTag;
	params.WithoutTage = WithoutTage;
	params.TriggerOnce = TriggerOnce;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
// (Final, Native, Public)
// Parameters:
// class UGameplayAbility*        ActivatedAbility               (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_WaitAbilityCommit::OnAbilityCommit(class UGameplayAbility* ActivatedAbility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit"));

	struct
	{
		class UGameplayAbility*        ActivatedAbility;
	} params;

	params.ActivatedAbility = ActivatedAbility;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAttribute      InAttribute                    (Parm)
// struct FGameplayTag            InWithTag                      (Parm)
// struct FGameplayTag            InWithoutTag                   (Parm)
// TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType               (Parm, ZeroConstructor, IsPlainOldData)
// float                          InComparisonValue              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitAttributeChange* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::WaitForAttributeChangeWithComparison(class UObject* WorldContextObject, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FGameplayAttribute      InAttribute;
		struct FGameplayTag            InWithTag;
		struct FGameplayTag            InWithoutTag;
		TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType;
		float                          InComparisonValue;
		bool                           TriggerOnce;
		class UAbilityTask_WaitAttributeChange* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.InAttribute = InAttribute;
	params.InWithTag = InWithTag;
	params.InWithoutTag = InWithoutTag;
	params.InComparisonType = InComparisonType;
	params.InComparisonValue = InComparisonValue;
	params.TriggerOnce = TriggerOnce;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAttribute      Attribute                      (Parm)
// struct FGameplayTag            WithSrcTag                     (Parm)
// struct FGameplayTag            WithoutSrcTag                  (Parm)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitAttributeChange* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::WaitForAttributeChange(class UObject* WorldContextObject, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FGameplayAttribute      Attribute;
		struct FGameplayTag            WithSrcTag;
		struct FGameplayTag            WithoutSrcTag;
		bool                           TriggerOnce;
		class UAbilityTask_WaitAttributeChange* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Attribute = Attribute;
	params.WithSrcTag = WithSrcTag;
	params.WithoutSrcTag = WithoutSrcTag;
	params.TriggerOnce = TriggerOnce;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitCancel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitCancel* UAbilityTask_WaitCancel::WaitCancel(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UAbilityTask_WaitCancel* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
// (Final, Native, Public)

void UAbilityTask_WaitCancel::OnLocalCancelCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
// (Final, Native, Public)

void UAbilityTask_WaitCancel::OnCancelCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitConfirm* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitConfirm* UAbilityTask_WaitConfirm::WaitConfirm(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UAbilityTask_WaitConfirm* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
// (Final, Native, Public)
// Parameters:
// class UGameplayAbility*        Ability                        (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_WaitConfirm::OnConfirmCallback(class UGameplayAbility* Ability)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback"));

	struct
	{
		class UGameplayAbility*        Ability;
	} params;

	params.Ability = Ability;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitConfirmCancel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitConfirmCancel* UAbilityTask_WaitConfirmCancel::WaitConfirmCancel(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UAbilityTask_WaitConfirmCancel* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
// (Final, Native, Public)

void UAbilityTask_WaitConfirmCancel::OnLocalConfirmCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
// (Final, Native, Public)

void UAbilityTask_WaitConfirmCancel::OnLocalCancelCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
// (Final, Native, Public)

void UAbilityTask_WaitConfirmCancel::OnConfirmCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
// (Final, Native, Public)

void UAbilityTask_WaitConfirmCancel::OnCancelCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitDelay*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitDelay* UAbilityTask_WaitDelay::WaitDelay(class UObject* WorldContextObject, float Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay"));

	struct
	{
		class UObject*                 WorldContextObject;
		float                          Time;
		class UAbilityTask_WaitDelay*  ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Time = Time;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UAbilitySystemComponent* Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayEffectSpec     SpecApplied                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FActiveGameplayEffectHandle ActiveHandle                   (Parm)

void UAbilityTask_WaitGameplayEffectApplied::OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback"));

	struct
	{
		class UAbilitySystemComponent* Target;
		struct FGameplayEffectSpec     SpecApplied;
		struct FActiveGameplayEffectHandle ActiveHandle;
	} params;

	params.Target = Target;
	params.SpecApplied = SpecApplied;
	params.ActiveHandle = ActiveHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTargetDataFilterHandle SourceFilter                   (ConstParm, Parm)
// struct FGameplayTagRequirements SourceTagRequirements          (Parm)
// struct FGameplayTagRequirements TargetTagRequirements          (Parm)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OptionalExternalOwner          (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::WaitGameplayEffectAppliedToSelf(class UObject* WorldContextObject, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FGameplayTargetDataFilterHandle SourceFilter;
		struct FGameplayTagRequirements SourceTagRequirements;
		struct FGameplayTagRequirements TargetTagRequirements;
		bool                           TriggerOnce;
		class AActor*                  OptionalExternalOwner;
		class UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.SourceFilter = SourceFilter;
	params.SourceTagRequirements = SourceTagRequirements;
	params.TargetTagRequirements = TargetTagRequirements;
	params.TriggerOnce = TriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTargetDataFilterHandle TargetFilter                   (ConstParm, Parm)
// struct FGameplayTagRequirements SourceTagRequirements          (Parm)
// struct FGameplayTagRequirements TargetTagRequirements          (Parm)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OptionalExternalOwner          (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::WaitGameplayEffectAppliedToTarget(class UObject* WorldContextObject, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FGameplayTargetDataFilterHandle TargetFilter;
		struct FGameplayTagRequirements SourceTagRequirements;
		struct FGameplayTagRequirements TargetTagRequirements;
		bool                           TriggerOnce;
		class AActor*                  OptionalExternalOwner;
		class UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.TargetFilter = TargetFilter;
	params.SourceTagRequirements = SourceTagRequirements;
	params.TargetTagRequirements = TargetTagRequirements;
	params.TriggerOnce = TriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FActiveGameplayEffectHandle Handle                         (Parm)
// class UAbilityTask_WaitGameplayEffectRemoved* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitGameplayEffectRemoved* UAbilityTask_WaitGameplayEffectRemoved::WaitForGameplayEffectRemoved(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FActiveGameplayEffectHandle Handle;
		class UAbilityTask_WaitGameplayEffectRemoved* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
// (Final, Native, Public)

void UAbilityTask_WaitGameplayEffectRemoved::OnGameplayEffectRemoved()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
// (Native, Public)
// Parameters:
// struct FGameplayTag            Tag                            (ConstParm, Parm)
// int                            NewCount                       (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_WaitGameplayTag::GameplayTagCallback(const struct FGameplayTag& Tag, int NewCount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback"));

	struct
	{
		struct FGameplayTag            Tag;
		int                            NewCount;
	} params;

	params.Tag = Tag;
	params.NewCount = NewCount;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (Parm)
// class AActor*                  OptionalExternalTarget         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnlyTriggerOnce                (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitGameplayTagAdded* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitGameplayTagAdded* UAbilityTask_WaitGameplayTagAdded::WaitGameplayTagAdd(class UObject* WorldContextObject, const struct FGameplayTag& Tag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FGameplayTag            Tag;
		class AActor*                  OptionalExternalTarget;
		bool                           OnlyTriggerOnce;
		class UAbilityTask_WaitGameplayTagAdded* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Tag = Tag;
	params.OptionalExternalTarget = OptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (Parm)
// class AActor*                  OptionalExternalTarget         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnlyTriggerOnce                (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitGameplayTagRemoved* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitGameplayTagRemoved* UAbilityTask_WaitGameplayTagRemoved::WaitGameplayTagRemove(class UObject* WorldContextObject, const struct FGameplayTag& Tag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FGameplayTag            Tag;
		class AActor*                  OptionalExternalTarget;
		bool                           OnlyTriggerOnce;
		class UAbilityTask_WaitGameplayTagRemoved* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Tag = Tag;
	params.OptionalExternalTarget = OptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTestAlreadyPressed            (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitInputPress* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitInputPress* UAbilityTask_WaitInputPress::WaitInputPress(class UObject* WorldContextObject, bool bTestAlreadyPressed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress"));

	struct
	{
		class UObject*                 WorldContextObject;
		bool                           bTestAlreadyPressed;
		class UAbilityTask_WaitInputPress* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.bTestAlreadyPressed = bTestAlreadyPressed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
// (Final, Native, Public)

void UAbilityTask_WaitInputPress::OnPressCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTestAlreadyReleased           (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitInputRelease* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitInputRelease* UAbilityTask_WaitInputRelease::WaitInputRelease(class UObject* WorldContextObject, bool bTestAlreadyReleased)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease"));

	struct
	{
		class UObject*                 WorldContextObject;
		bool                           bTestAlreadyReleased;
		class UAbilityTask_WaitInputRelease* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.bTestAlreadyReleased = bTestAlreadyReleased;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
// (Final, Native, Public)

void UAbilityTask_WaitInputRelease::OnReleaseCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
// (Final, Native, Public)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_WaitMovementModeChange::OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange"));

	struct
	{
		class ACharacter*              Character;
		TEnumAsByte<EMovementMode>     PrevMovementMode;
		unsigned char                  PreviousCustomMode;
	} params;

	params.Character = Character;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     NewMode                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitMovementModeChange* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitMovementModeChange* UAbilityTask_WaitMovementModeChange::CreateWaitMovementModeChange(class UObject* WorldContextObject, TEnumAsByte<EMovementMode> NewMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange"));

	struct
	{
		class UObject*                 WorldContextObject;
		TEnumAsByte<EMovementMode>     NewMode;
		class UAbilityTask_WaitMovementModeChange* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.NewMode = NewMode;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitOverlap* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitOverlap* UAbilityTask_WaitOverlap::WaitForOverlap(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UAbilityTask_WaitOverlap* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitOverlap.OnOverlapCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void UAbilityTask_WaitOverlap::OnOverlapCallback(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitOverlap.OnOverlapCallback"));

	struct
	{
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params;

	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm)

void UAbilityTask_WaitOverlap::OnHitCallback(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback"));

	struct
	{
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		struct FVector                 NormalImpulse;
		struct FHitResult              Hit;
	} params;

	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType               (Parm, ZeroConstructor, IsPlainOldData)
// class AGameplayAbilityTargetActor* TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitTargetData* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::WaitTargetDataUsingActor(class UObject* WorldContextObject, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FName                   TaskInstanceName;
		TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType;
		class AGameplayAbilityTargetActor* TargetActor;
		class UAbilityTask_WaitTargetData* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.TaskInstanceName = TaskInstanceName;
	params.ConfirmationType = ConfirmationType;
	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType               (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitTargetData* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::WaitTargetData(class UObject* WorldContextObject, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FName                   TaskInstanceName;
		TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType;
		class UClass*                  Class;
		class UAbilityTask_WaitTargetData* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.TaskInstanceName = TaskInstanceName;
	params.ConfirmationType = ConfirmationType;
	params.Class = Class;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
// (Final, Native, Public)

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCancelledCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
// (Final, Native, Public)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                           (Parm)
// struct FGameplayTag            ActivationTag                  (Parm)

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle Data;
		struct FGameplayTag            ActivationTag;
	} params;

	params.Data = Data;
	params.ActivationTag = ActivationTag;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
// (Final, Native, Public)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                           (Parm)

void UAbilityTask_WaitTargetData::OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
// (Final, Native, Public)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                           (Parm)

void UAbilityTask_WaitTargetData::OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AGameplayAbilityTargetActor* SpawnedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_WaitTargetData::FinishSpawningActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor"));

	struct
	{
		class UObject*                 WorldContextObject;
		class AGameplayAbilityTargetActor* SpawnedActor;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class AGameplayAbilityTargetActor* SpawnedActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilityTask_WaitTargetData::BeginSpawningActor(class UObject* WorldContextObject, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UClass*                  Class;
		class AGameplayAbilityTargetActor* SpawnedActor;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Class = Class;

	UObject::ProcessEvent(fn, &params);

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinimumMagnitude               (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitVelocityChange* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitVelocityChange* UAbilityTask_WaitVelocityChange::CreateWaitVelocityChange(class UObject* WorldContextObject, const struct FVector& Direction, float MinimumMagnitude)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 Direction;
		float                          MinimumMagnitude;
		class UAbilityTask_WaitVelocityChange* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Direction = Direction;
	params.MinimumMagnitude = MinimumMagnitude;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FName                   ParamName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayAbilityWorldReticle::SetReticleMaterialParamVector(const struct FName& ParamName, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector"));

	struct
	{
		struct FName                   ParamName;
		struct FVector                 Value;
	} params;

	params.ParamName = ParamName;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   ParamName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayAbilityWorldReticle::SetReticleMaterialParamFloat(const struct FName& ParamName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat"));

	struct
	{
		struct FName                   ParamName;
		float                          Value;
	} params;

	params.ParamName = ParamName;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewValue                      (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayAbilityWorldReticle::OnValidTargetChanged(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged"));

	struct
	{
		bool                           bNewValue;
	} params;

	params.bNewValue = bNewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewValue                      (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayAbilityWorldReticle::OnTargetingAnActor(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor"));

	struct
	{
		bool                           bNewValue;
	} params;

	params.bNewValue = bNewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
// (Event, Public, BlueprintEvent)

void AGameplayAbilityWorldReticle::OnParametersInitialized()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bFaceIn2D                      (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayAbilityWorldReticle::FaceTowardSource(bool bFaceIn2D)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource"));

	struct
	{
		bool                           bFaceIn2D;
	} params;

	params.bFaceIn2D = bFaceIn2D;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
// (Native, Public)

void AGameplayAbilityTargetActor::ConfirmTargeting()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
// (Native, Public)

void AGameplayAbilityTargetActor::CancelTargeting()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGameplayCueNotify_Actor::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive"));

	struct
	{
		class AActor*                  MyTarget;
		struct FGameplayCueParameters  Parameters;
		bool                           ReturnValue;
	} params;

	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGameplayCueNotify_Actor::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove"));

	struct
	{
		class AActor*                  MyTarget;
		struct FGameplayCueParameters  Parameters;
		bool                           ReturnValue;
	} params;

	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
// (Native, Public)

void AGameplayCueNotify_Actor::OnOwnerDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGameplayCueNotify_Actor::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute"));

	struct
	{
		class AActor*                  MyTarget;
		struct FGameplayCueParameters  Parameters;
		bool                           ReturnValue;
	} params;

	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGameplayCueNotify_Actor::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.OnActive"));

	struct
	{
		class AActor*                  MyTarget;
		struct FGameplayCueParameters  Parameters;
		bool                           ReturnValue;
	} params;

	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void AGameplayCueNotify_Actor::K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue"));

	struct
	{
		class AActor*                  MyTarget;
		TEnumAsByte<EGameplayCueEvent> EventType;
		struct FGameplayCueParameters  Parameters;
	} params;

	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayCueNotify_Static::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Static.WhileActive"));

	struct
	{
		class AActor*                  MyTarget;
		struct FGameplayCueParameters  Parameters;
		bool                           ReturnValue;
	} params;

	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayCueNotify_Static::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Static.OnRemove"));

	struct
	{
		class AActor*                  MyTarget;
		struct FGameplayCueParameters  Parameters;
		bool                           ReturnValue;
	} params;

	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayCueNotify_Static::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Static.OnExecute"));

	struct
	{
		class AActor*                  MyTarget;
		struct FGameplayCueParameters  Parameters;
		bool                           ReturnValue;
	} params;

	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.OnActive
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayCueNotify_Static::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Static.OnActive"));

	struct
	{
		class AActor*                  MyTarget;
		struct FGameplayCueParameters  Parameters;
		bool                           ReturnValue;
	} params;

	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void UGameplayCueNotify_Static::K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue"));

	struct
	{
		class AActor*                  MyTarget;
		TEnumAsByte<EGameplayCueEvent> EventType;
		struct FGameplayCueParameters  Parameters;
	} params;

	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectCustomExecutionParameters ExecutionParams                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectCustomExecutionOutput OutExecutionOutput             (Parm, OutParm)

void UGameplayEffectExecutionCalculation::Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute"));

	struct
	{
		struct FGameplayEffectCustomExecutionParameters ExecutionParams;
		struct FGameplayEffectCustomExecutionOutput OutExecutionOutput;
	} params;

	params.ExecutionParams = ExecutionParams;

	UObject::ProcessEvent(fn, &params);

	if (OutExecutionOutput != nullptr)
		*OutExecutionOutput = params.OutExecutionOutput;
}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameplayModMagnitudeCalculation::CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude"));

	struct
	{
		struct FGameplayEffectSpec     Spec;
		float                          ReturnValue;
	} params;

	params.Spec = Spec;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
// (Final, Native, Protected)
// Parameters:
// struct FGameplayTag            Tag                            (ConstParm, Parm)
// int                            NewCount                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilitySystemComponent* ASC                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            idx                            (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayTagReponseTable::TagResponseEvent(const struct FGameplayTag& Tag, int NewCount, class UAbilitySystemComponent* ASC, int idx)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent"));

	struct
	{
		struct FGameplayTag            Tag;
		int                            NewCount;
		class UAbilitySystemComponent* ASC;
		int                            idx;
	} params;

	params.Tag = Tag;
	params.NewCount = NewCount;
	params.ASC = ASC;
	params.idx = idx;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
