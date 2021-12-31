#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameplayAbilities_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
struct UGameplayCueInterface_ForwardGameplayCueToParent_Params
{
};

// Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
struct UGameplayCueInterface_BlueprintCustomHandler_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayCueParameters                             Parameters;                                               // (Parm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
struct UAbilitySystemBlueprintLibrary_TargetDataHasOrigin_Params
{
	FGameplayAbilityTargetDataHandle                   TargetData;                                               // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
struct UAbilitySystemBlueprintLibrary_TargetDataHasHitResult_Params
{
	FGameplayAbilityTargetDataHandle                   HitResult;                                                // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
struct UAbilitySystemBlueprintLibrary_TargetDataHasEndPoint_Params
{
	FGameplayAbilityTargetDataHandle                   TargetData;                                               // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
struct UAbilitySystemBlueprintLibrary_TargetDataHasActor_Params
{
	FGameplayAbilityTargetDataHandle                   TargetData;                                               // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
struct UAbilitySystemBlueprintLibrary_SetStackCountToMax_Params
{
	FGameplayEffectSpecHandle                          SpecHandle;                                               // (Parm)
	FGameplayEffectSpecHandle                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
struct UAbilitySystemBlueprintLibrary_SetStackCount_Params
{
	FGameplayEffectSpecHandle                          SpecHandle;                                               // (Parm)
	int                                                StackCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayEffectSpecHandle                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
struct UAbilitySystemBlueprintLibrary_SetDuration_Params
{
	FGameplayEffectSpecHandle                          SpecHandle;                                               // (Parm)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayEffectSpecHandle                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
struct UAbilitySystemBlueprintLibrary_SendGameplayEventToActor_Params
{
	AActor*                                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayTag                                       EventTag;                                                 // (Parm)
	FGameplayEventData                                 payload;                                                  // (Parm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
struct UAbilitySystemBlueprintLibrary_MakeSpecHandle_Params
{
	UGameplayEffect*                                   InGameplayEffect;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            InInstigator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            InEffectCauser;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InLevel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayEffectSpecHandle                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
struct UAbilitySystemBlueprintLibrary_MakeFilterHandle_Params
{
	FGameplayTargetDataFilter                          Filter;                                                   // (Parm)
	AActor*                                            FilterActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayTargetDataFilterHandle                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
struct UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlledPlayer_Params
{
	FGameplayCueParameters                             Parameters;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
struct UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlled_Params
{
	FGameplayCueParameters                             Parameters;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
struct UAbilitySystemBlueprintLibrary_HasHitResult_Params
{
	FGameplayCueParameters                             Parameters;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
struct UAbilitySystemBlueprintLibrary_GetTargetDataOrigin_Params
{
	FGameplayAbilityTargetDataHandle                   TargetData;                                               // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FTransform                                         ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
struct UAbilitySystemBlueprintLibrary_GetTargetDataEndPointTransform_Params
{
	FGameplayAbilityTargetDataHandle                   TargetData;                                               // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FTransform                                         ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
struct UAbilitySystemBlueprintLibrary_GetTargetDataEndPoint_Params
{
	FGameplayAbilityTargetDataHandle                   TargetData;                                               // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
struct UAbilitySystemBlueprintLibrary_GetOrigin_Params
{
	FGameplayCueParameters                             Parameters;                                               // (Parm)
	FVector                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
struct UAbilitySystemBlueprintLibrary_GetInstigatorTransform_Params
{
	FGameplayCueParameters                             Parameters;                                               // (Parm)
	FTransform                                         ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
struct UAbilitySystemBlueprintLibrary_GetInstigatorActor_Params
{
	FGameplayCueParameters                             Parameters;                                               // (Parm)
	AActor*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
struct UAbilitySystemBlueprintLibrary_GetHitResultFromTargetData_Params
{
	FGameplayAbilityTargetDataHandle                   HitResult;                                                // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FHitResult                                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
struct UAbilitySystemBlueprintLibrary_GetHitResult_Params
{
	FGameplayCueParameters                             Parameters;                                               // (Parm)
	FHitResult                                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
struct UAbilitySystemBlueprintLibrary_GetGameplayCueEndLocationAndNormal_Params
{
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayCueParameters                             Parameters;                                               // (Parm)
	FVector                                            Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FVector                                            Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
struct UAbilitySystemBlueprintLibrary_GetGameplayCueDirection_Params
{
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayCueParameters                             Parameters;                                               // (Parm)
	FVector                                            Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
struct UAbilitySystemBlueprintLibrary_GetFloatAttribute_Params
{
	AActor*                                            Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FGameplayAttribute                                 Attribute;                                                // (Parm)
	bool                                               bSuccessfullyFoundAttribute;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
struct UAbilitySystemBlueprintLibrary_GetDataCountFromTargetData_Params
{
	FGameplayAbilityTargetDataHandle                   TargetData;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
struct UAbilitySystemBlueprintLibrary_GetActorsFromTargetData_Params
{
	FGameplayAbilityTargetDataHandle                   TargetData;                                               // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<AActor*>                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
struct UAbilitySystemBlueprintLibrary_GetActorCount_Params
{
	FGameplayCueParameters                             Parameters;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
struct UAbilitySystemBlueprintLibrary_GetActorByIndex_Params
{
	FGameplayCueParameters                             Parameters;                                               // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackCount_Params
{
	FActiveGameplayEffectHandle                        ActiveHandle;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
struct UAbilitySystemBlueprintLibrary_GetAbilitySystemComponent_Params
{
	AActor*                                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilitySystemComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
struct UAbilitySystemBlueprintLibrary_ForwardGameplayCueToTarget_Params
{
	TScriptInterface<class UGameplayCueInterface>      TargetCueInterface;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayCueParameters                             Parameters;                                               // (Parm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
struct UAbilitySystemBlueprintLibrary_FilterTargetData_Params
{
	FGameplayAbilityTargetDataHandle                   TargetDataHandle;                                         // (Parm)
	FGameplayTargetDataFilterHandle                    ActorFilterClass;                                         // (Parm)
	FGameplayAbilityTargetDataHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
struct UAbilitySystemBlueprintLibrary_EffectContextIsInstigatorLocallyControlled_Params
{
	FGameplayEffectContextHandle                       EffectContext;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
struct UAbilitySystemBlueprintLibrary_EffectContextHasHitResult_Params
{
	FGameplayEffectContextHandle                       EffectContext;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
struct UAbilitySystemBlueprintLibrary_EffectContextGetSourceObject_Params
{
	FGameplayEffectContextHandle                       EffectContext;                                            // (Parm)
	UObject*                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
struct UAbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorActor_Params
{
	FGameplayEffectContextHandle                       EffectContext;                                            // (Parm)
	AActor*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
struct UAbilitySystemBlueprintLibrary_EffectContextGetOrigin_Params
{
	FGameplayEffectContextHandle                       EffectContext;                                            // (Parm)
	FVector                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
struct UAbilitySystemBlueprintLibrary_EffectContextGetInstigatorActor_Params
{
	FGameplayEffectContextHandle                       EffectContext;                                            // (Parm)
	AActor*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
struct UAbilitySystemBlueprintLibrary_EffectContextGetHitResult_Params
{
	FGameplayEffectContextHandle                       EffectContext;                                            // (Parm)
	FHitResult                                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
struct UAbilitySystemBlueprintLibrary_EffectContextGetEffectCauser_Params
{
	FGameplayEffectContextHandle                       EffectContext;                                            // (Parm)
	AActor*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
struct UAbilitySystemBlueprintLibrary_DoesTargetDataContainActor_Params
{
	FGameplayAbilityTargetDataHandle                   TargetData;                                               // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
struct UAbilitySystemBlueprintLibrary_DoesGameplayCueMeetTagRequirements_Params
{
	FGameplayCueParameters                             Parameters;                                               // (Parm)
	FGameplayTagRequirements                           SourceTagReqs;                                            // (Parm, OutParm, ReferenceParm)
	FGameplayTagRequirements                           TargetTagReqs;                                            // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
struct UAbilitySystemBlueprintLibrary_AssignSetByCallerMagnitude_Params
{
	FGameplayEffectSpecHandle                          SpecHandle;                                               // (Parm)
	FName                                              DataName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayEffectSpecHandle                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
struct UAbilitySystemBlueprintLibrary_AppendTargetDataHandle_Params
{
	FGameplayAbilityTargetDataHandle                   TargetHandle;                                             // (Parm)
	FGameplayAbilityTargetDataHandle                   HandleToAdd;                                              // (Parm)
	FGameplayAbilityTargetDataHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
struct UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffectSpec_Params
{
	FGameplayEffectSpecHandle                          SpecHandle;                                               // (Parm)
	FGameplayEffectSpecHandle                          LinkedGameplayEffectSpec;                                 // (Parm)
	FGameplayEffectSpecHandle                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
struct UAbilitySystemBlueprintLibrary_AddGrantedTags_Params
{
	FGameplayEffectSpecHandle                          SpecHandle;                                               // (Parm)
	FGameplayTagContainer                              NewGameplayTags;                                          // (Parm)
	FGameplayEffectSpecHandle                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
struct UAbilitySystemBlueprintLibrary_AddGrantedTag_Params
{
	FGameplayEffectSpecHandle                          SpecHandle;                                               // (Parm)
	FGameplayTag                                       NewGameplayTag;                                           // (Parm)
	FGameplayEffectSpecHandle                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
struct UAbilitySystemBlueprintLibrary_AddAssetTags_Params
{
	FGameplayEffectSpecHandle                          SpecHandle;                                               // (Parm)
	FGameplayTagContainer                              NewGameplayTags;                                          // (Parm)
	FGameplayEffectSpecHandle                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
struct UAbilitySystemBlueprintLibrary_AddAssetTag_Params
{
	FGameplayEffectSpecHandle                          SpecHandle;                                               // (Parm)
	FGameplayTag                                       NewGameplayTag;                                           // (Parm)
	FGameplayEffectSpecHandle                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromLocations_Params
{
	FGameplayAbilityTargetingLocationInfo              SourceLocation;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	FGameplayAbilityTargetingLocationInfo              TargetLocation;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	FGameplayAbilityTargetDataHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromHitResult_Params
{
	FHitResult                                         HitResult;                                                // (Parm)
	FGameplayAbilityTargetDataHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActorArray_Params
{
	TArray<AActor*>                                    ActorArray;                                               // (Parm, ZeroConstructor)
	bool                                               OneTargetPerHandle;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayAbilityTargetDataHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActor_Params
{
	AActor*                                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayAbilityTargetDataHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
struct UGameplayAbility_SetShouldBlockOtherAbilities_Params
{
	bool                                               bShouldBlockAbilities;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
struct UGameplayAbility_SetCanBeCanceled_Params
{
	bool                                               bCanBeCanceled;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.SendGameplayEvent
struct UGameplayAbility_SendGameplayEvent_Params
{
	FGameplayTag                                       EventTag;                                                 // (Parm)
	FGameplayEventData                                 payload;                                                  // (Parm)
};

// Function GameplayAbilities.GameplayAbility.MontageStop
struct UGameplayAbility_MontageStop_Params
{
	float                                              OverrideBlendOutTime;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
struct UGameplayAbility_MontageSetNextSectionName_Params
{
	FName                                              FromSectionName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              ToSectionName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.MontageJumpToSection
struct UGameplayAbility_MontageJumpToSection_Params
{
	FName                                              SectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
struct UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Params
{
	FName                                              SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayAbilityTargetingLocationInfo              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
struct UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Params
{
	FGameplayAbilityTargetingLocationInfo              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
struct UGameplayAbility_MakeOutgoingGameplayEffectSpec_Params
{
	UClass*                                            GameplayEffectClass;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayEffectSpecHandle                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
struct UGameplayAbility_K2_ShouldAbilityRespondToEvent_Params
{
	FGameplayAbilityActorInfo                          ActorInfo;                                                // (Parm)
	FGameplayEventData                                 payload;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
struct UGameplayAbility_K2_RemoveGameplayCue_Params
{
	FGameplayTag                                       GameplayCueTag;                                           // (Parm)
};

// Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
struct UGameplayAbility_K2_OnEndAbility_Params
{
};

// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
struct UGameplayAbility_K2_ExecuteGameplayCueWithParams_Params
{
	FGameplayTag                                       GameplayCueTag;                                           // (Parm)
	FGameplayCueParameters                             GameplayCueParameters;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
struct UGameplayAbility_K2_ExecuteGameplayCue_Params
{
	FGameplayTag                                       GameplayCueTag;                                           // (Parm)
	FGameplayEffectContextHandle                       Context;                                                  // (Parm)
};

// Function GameplayAbilities.GameplayAbility.K2_EndAbility
struct UGameplayAbility_K2_EndAbility_Params
{
};

// Function GameplayAbilities.GameplayAbility.K2_CommitExecute
struct UGameplayAbility_K2_CommitExecute_Params
{
};

// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
struct UGameplayAbility_K2_CommitAbilityCost_Params
{
	bool                                               BroadcastCommitEvent;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
struct UGameplayAbility_K2_CommitAbilityCooldown_Params
{
	bool                                               BroadcastCommitEvent;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_CommitAbility
struct UGameplayAbility_K2_CommitAbility_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
struct UGameplayAbility_K2_CheckAbilityCost_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
struct UGameplayAbility_K2_CheckAbilityCooldown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
struct UGameplayAbility_K2_CanActivateAbility_Params
{
	FGameplayAbilityActorInfo                          ActorInfo;                                                // (Parm)
	FGameplayTagContainer                              RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToTarget
struct UGameplayAbility_K2_ApplyGameplayEffectToTarget_Params
{
	FGameplayAbilityTargetDataHandle                   TargetData;                                               // (Parm)
	UGameplayEffect*                                   GameplayEffect;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameplayEffectLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<FActiveGameplayEffectHandle>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToOwner
struct UGameplayAbility_K2_ApplyGameplayEffectToOwner_Params
{
	UGameplayEffect*                                   GameplayEffect;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameplayEffectLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	FActiveGameplayEffectHandle                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
struct UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Params
{
	FGameplayEffectSpecHandle                          EffectSpecHandle;                                         // (ConstParm, Parm)
	FGameplayAbilityTargetDataHandle                   TargetData;                                               // (Parm)
	TArray<FActiveGameplayEffectHandle>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
struct UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Params
{
	FGameplayEffectSpecHandle                          EffectSpecHandle;                                         // (ConstParm, Parm)
	FActiveGameplayEffectHandle                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
struct UGameplayAbility_K2_AddGameplayCue_Params
{
	FGameplayTag                                       GameplayCueTag;                                           // (Parm)
	FGameplayEffectContextHandle                       Context;                                                  // (Parm)
	bool                                               bRemoveOnAbilityEnd;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
struct UGameplayAbility_K2_ActivateAbilityFromEvent_Params
{
	FGameplayEventData                                 EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
struct UGameplayAbility_K2_ActivateAbility_Params
{
};

// Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
struct UGameplayAbility_GetOwningComponentFromActorInfo_Params
{
	USkeletalMeshComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
struct UGameplayAbility_GetOwningActorFromActorInfo_Params
{
	AActor*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.GetOutgoingGameplayEffectSpec
struct UGameplayAbility_GetOutgoingGameplayEffectSpec_Params
{
	UGameplayEffect*                                   GameplayEffect;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayEffectSpecHandle                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
struct UGameplayAbility_GetCurrentSourceObject_Params
{
	UObject*                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.GetCurrentMontage
struct UGameplayAbility_GetCurrentMontage_Params
{
	UAnimMontage*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.GetContextFromOwner
struct UGameplayAbility_GetContextFromOwner_Params
{
	FGameplayAbilityTargetDataHandle                   OptionalTargetData;                                       // (Parm)
	FGameplayEffectContextHandle                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
struct UGameplayAbility_GetAvatarActorFromActorInfo_Params
{
	AActor*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.GetActorInfo
struct UGameplayAbility_GetActorInfo_Params
{
	FGameplayAbilityActorInfo                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.GetAbilityLevel
struct UGameplayAbility_GetAbilityLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
struct UGameplayAbility_EndTaskByInstanceName_Params
{
	FName                                              InstanceName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.EndAbilityState
struct UGameplayAbility_EndAbilityState_Params
{
	FName                                              OptionalStateNameToEnd;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
struct UGameplayAbility_ConfirmTaskByInstanceName_Params
{
	FName                                              InstanceName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEndTask;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
struct UGameplayAbility_CancelTaskByInstanceName_Params
{
	FName                                              InstanceName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Params
{
	FGameplayTagContainer                              WithGrantedTags;                                          // (Parm)
	int                                                StacksToRemove;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Params
{
	FGameplayTagContainer                              WithAssetTags;                                            // (Parm)
	int                                                StacksToRemove;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
struct UGameplayAbility_BP_ApplyGameplayEffectToTarget_Params
{
	FGameplayAbilityTargetDataHandle                   TargetData;                                               // (Parm)
	UClass*                                            GameplayEffectClass;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameplayEffectLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<FActiveGameplayEffectHandle>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
struct UGameplayAbility_BP_ApplyGameplayEffectToOwner_Params
{
	UClass*                                            GameplayEffectClass;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameplayEffectLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	FActiveGameplayEffectHandle                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
struct UAbilitySystemComponent_TryActivateAbilityByClass_Params
{
	UClass*                                            InAbilityToActivate;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowRemoteActivation;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
struct UAbilitySystemComponent_TryActivateAbilitiesByTag_Params
{
	FGameplayTagContainer                              GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bAllowRemoteActivation;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
struct UAbilitySystemComponent_TargetConfirm_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.TargetCancel
struct UAbilitySystemComponent_TargetCancel_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
struct UAbilitySystemComponent_SetUserAbilityActivationInhibited_Params
{
	bool                                               NewInhibit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
struct UAbilitySystemComponent_SetActiveGameplayEffectLevel_Params
{
	FActiveGameplayEffectHandle                        ActiveHandle;                                             // (Parm)
	int                                                NewLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
struct UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params
{
	FGameplayAbilitySpecHandle                         AbilityToActivate;                                        // (Parm)
	bool                                               InputPressed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FPredictionKey                                     PredictionKey;                                            // (Parm)
	FGameplayEventData                                 TriggerEventData;                                         // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
struct UAbilitySystemComponent_ServerTryActivateAbility_Params
{
	FGameplayAbilitySpecHandle                         AbilityToActivate;                                        // (Parm)
	bool                                               InputPressed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FPredictionKey                                     PredictionKey;                                            // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
struct UAbilitySystemComponent_ServerSetReplicatedTargetDataCancelled_Params
{
	FGameplayAbilitySpecHandle                         AbilityHandle;                                            // (Parm)
	FPredictionKey                                     AbilityOriginalPredictionKey;                             // (Parm)
	FPredictionKey                                     CurrentPredictionKey;                                     // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
struct UAbilitySystemComponent_ServerSetReplicatedTargetData_Params
{
	FGameplayAbilitySpecHandle                         AbilityHandle;                                            // (Parm)
	FPredictionKey                                     AbilityOriginalPredictionKey;                             // (Parm)
	FGameplayAbilityTargetDataHandle                   ReplicatedTargetDataHandle;                               // (Parm)
	FGameplayTag                                       ApplicationTag;                                           // (Parm)
	FPredictionKey                                     CurrentPredictionKey;                                     // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
struct UAbilitySystemComponent_ServerSetReplicatedEvent_Params
{
	TEnumAsByte<EAbilityGenericReplicatedEvent>        EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayAbilitySpecHandle                         AbilityHandle;                                            // (Parm)
	FPredictionKey                                     AbilityOriginalPredictionKey;                             // (Parm)
	FPredictionKey                                     CurrentPredictionKey;                                     // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
struct UAbilitySystemComponent_ServerSetInputReleased_Params
{
	FGameplayAbilitySpecHandle                         AbilityHandle;                                            // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
struct UAbilitySystemComponent_ServerSetInputPressed_Params
{
	FGameplayAbilitySpecHandle                         AbilityHandle;                                            // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
struct UAbilitySystemComponent_ServerEndAbility_Params
{
	FGameplayAbilitySpecHandle                         AbilityToEnd;                                             // (Parm)
	FGameplayAbilityActivationInfo                     ActivationInfo;                                           // (Parm)
	FPredictionKey                                     PredictionKey;                                            // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
struct UAbilitySystemComponent_ServerCurrentMontageSetNextSectionName_Params
{
	UAnimMontage*                                      ClientAnimMontage;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ClientPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              SectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              NextSectionName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
struct UAbilitySystemComponent_ServerCurrentMontageJumpToSectionName_Params
{
	UAnimMontage*                                      ClientAnimMontage;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              SectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
struct UAbilitySystemComponent_ServerCancelAbility_Params
{
	FGameplayAbilitySpecHandle                         AbilityToCancel;                                          // (Parm)
	FGameplayAbilityActivationInfo                     ActivationInfo;                                           // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
struct UAbilitySystemComponent_RemoveActiveGameplayEffectBySourceEffect_Params
{
	UClass*                                            GameplayEffect;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilitySystemComponent*                           InstigatorAbilitySystemComponent;                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                StacksToRemove;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
struct UAbilitySystemComponent_RemoveActiveGameplayEffect_Params
{
	FActiveGameplayEffectHandle                        Handle;                                                   // (Parm)
	int                                                StacksToRemove;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
struct UAbilitySystemComponent_RemoveActiveEffectsWithTags_Params
{
	FGameplayTagContainer                              Tags;                                                     // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
struct UAbilitySystemComponent_OnRep_ReplicatedAnimMontage_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_PredictionKey
struct UAbilitySystemComponent_OnRep_PredictionKey_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
struct UAbilitySystemComponent_OnRep_OwningActor_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_GameplayEffects
struct UAbilitySystemComponent_OnRep_GameplayEffects_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
struct UAbilitySystemComponent_OnRep_ActivateAbilities_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params
{
	FGameplayTag                                       GameplayCueTag;                                           // (ConstParm, Parm)
	FPredictionKey                                     PredictionKey;                                            // (Parm)
	FGameplayCueParameters                             GameplayCueParameters;                                    // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_FromSpec_Params
{
	FGameplayEffectSpecForRPC                          Spec;                                                     // (ConstParm, Parm)
	FPredictionKey                                     PredictionKey;                                            // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_Params
{
	FGameplayTag                                       GameplayCueTag;                                           // (ConstParm, Parm)
	FPredictionKey                                     PredictionKey;                                            // (Parm)
	FGameplayEffectContextHandle                       EffectContext;                                            // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Params
{
	FGameplayEffectSpecForRPC                          Spec;                                                     // (ConstParm, Parm, ReferenceParm)
	FPredictionKey                                     PredictionKey;                                            // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_Params
{
	FGameplayTag                                       GameplayCueTag;                                           // (ConstParm, Parm)
	FPredictionKey                                     PredictionKey;                                            // (Parm)
	FGameplayEffectContextHandle                       EffectContext;                                            // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
struct UAbilitySystemComponent_MakeOutgoingSpec_Params
{
	UClass*                                            GameplayEffectClass;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayEffectContextHandle                       Context;                                                  // (Parm)
	FGameplayEffectSpecHandle                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
struct UAbilitySystemComponent_K2_InitStats_Params
{
	UClass*                                            Attributes;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	UDataTable*                                        DataTable;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToTarget
struct UAbilitySystemComponent_K2_ApplyGameplayEffectToTarget_Params
{
	UGameplayEffect*                                   GameplayEffect;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilitySystemComponent*                           Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayEffectContextHandle                       Context;                                                  // (Parm)
	FActiveGameplayEffectHandle                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToSelf
struct UAbilitySystemComponent_K2_ApplyGameplayEffectToSelf_Params
{
	UGameplayEffect*                                   GameplayEffect;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayEffectContextHandle                       EffectContext;                                            // (Parm)
	FActiveGameplayEffectHandle                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
struct UAbilitySystemComponent_IsGameplayCueActive_Params
{
	FGameplayTag                                       GameplayCueTag;                                           // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
struct UAbilitySystemComponent_GetUserAbilityActivationInhibited_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.GetOutgoingSpec
struct UAbilitySystemComponent_GetOutgoingSpec_Params
{
	UGameplayEffect*                                   GameplayEffect;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayEffectSpecHandle                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
struct UAbilitySystemComponent_GetGameplayEffectMagnitude_Params
{
	FActiveGameplayEffectHandle                        Handle;                                                   // (Parm)
	FGameplayAttribute                                 Attribute;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
struct UAbilitySystemComponent_GetGameplayEffectCount_Params
{
	UClass*                                            SourceGameplayEffect;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilitySystemComponent*                           OptionalInstigatorFilterComponent;                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.GetEffectContext
struct UAbilitySystemComponent_GetEffectContext_Params
{
	FGameplayEffectContextHandle                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
struct UAbilitySystemComponent_ClientTryActivateAbility_Params
{
	FGameplayAbilitySpecHandle                         AbilityToActivate;                                        // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
struct UAbilitySystemComponent_ClientSetReplicatedEvent_Params
{
	TEnumAsByte<EAbilityGenericReplicatedEvent>        EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayAbilitySpecHandle                         AbilityHandle;                                            // (Parm)
	FPredictionKey                                     AbilityOriginalPredictionKey;                             // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
struct UAbilitySystemComponent_ClientEndAbility_Params
{
	FGameplayAbilitySpecHandle                         AbilityToEnd;                                             // (Parm)
	FGameplayAbilityActivationInfo                     ActivationInfo;                                           // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
struct UAbilitySystemComponent_ClientCancelAbility_Params
{
	FGameplayAbilitySpecHandle                         AbilityToCancel;                                          // (Parm)
	FGameplayAbilityActivationInfo                     ActivationInfo;                                           // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
struct UAbilitySystemComponent_ClientActivateAbilitySucceedWithEventData_Params
{
	FGameplayAbilitySpecHandle                         AbilityToActivate;                                        // (Parm)
	FPredictionKey                                     PredictionKey;                                            // (Parm)
	FGameplayEventData                                 TriggerEventData;                                         // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
struct UAbilitySystemComponent_ClientActivateAbilitySucceed_Params
{
	FGameplayAbilitySpecHandle                         AbilityToActivate;                                        // (Parm)
	FPredictionKey                                     PredictionKey;                                            // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
struct UAbilitySystemComponent_ClientActivateAbilityFailed_Params
{
	FGameplayAbilitySpecHandle                         AbilityToActivate;                                        // (Parm)
	int16_t                                            PredictionKey;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
struct UAbilitySystemComponent_BP_ApplyGameplayEffectToTarget_Params
{
	UClass*                                            GameplayEffectClass;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilitySystemComponent*                           Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayEffectContextHandle                       Context;                                                  // (Parm)
	FActiveGameplayEffectHandle                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
struct UAbilitySystemComponent_BP_ApplyGameplayEffectToSelf_Params
{
	UClass*                                            GameplayEffectClass;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayEffectContextHandle                       EffectContext;                                            // (Parm)
	FActiveGameplayEffectHandle                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
struct UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToTarget_Params
{
	FGameplayEffectSpecHandle                          SpecHandle;                                               // (Parm, OutParm, ReferenceParm)
	UAbilitySystemComponent*                           Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	FActiveGameplayEffectHandle                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
struct UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToSelf_Params
{
	FGameplayEffectSpecHandle                          SpecHandle;                                               // (Parm, OutParm, ReferenceParm)
	FActiveGameplayEffectHandle                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
struct UAbilitySystemComponent_AbilityConfirmOrCancel__DelegateSignature_Params
{
};

// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
struct UAbilitySystemComponent_AbilityAbilityKey__DelegateSignature_Params
{
	int                                                InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
struct UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Params
{
};

// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
struct UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Params
{
};

// Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
struct UAbilityTask_MoveToLocation_MoveToLocation_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	UCurveFloat*                                       OptionalInterpolationCurve;                               // (Parm, ZeroConstructor, IsPlainOldData)
	UCurveVector*                                      OptionalVectorInterpolationCurve;                         // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_MoveToLocation*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
struct UAbilityTask_NetworkSyncPoint_WaitNetSync_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAbilityTaskNetSyncType>               SyncType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_NetworkSyncPoint*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
struct UAbilityTask_NetworkSyncPoint_OnSignalCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
struct UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Params
{
};

// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
struct UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Params
{
	UAnimMontage*                                      Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
struct UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	UAnimMontage*                                      MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              StartSection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_PlayMontageAndWait*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
struct UAbilityTask_Repeat_RepeatAction_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeBetweenActions;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalActionCount;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_Repeat*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
struct UAbilityTask_SpawnActor_SpawnActor_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayAbilityTargetDataHandle                   TargetData;                                               // (Parm)
	UClass*                                            Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_SpawnActor*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
struct UAbilityTask_SpawnActor_FinishSpawningActor_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayAbilityTargetDataHandle                   TargetData;                                               // (Parm)
	AActor*                                            SpawnedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
struct UAbilityTask_SpawnActor_BeginSpawningActor_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayAbilityTargetDataHandle                   TargetData;                                               // (Parm)
	UClass*                                            Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            SpawnedActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
struct UAbilityTask_StartAbilityState_StartAbilityState_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              StateName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEndCurrentState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_StartAbilityState*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
struct AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Params
{
	FName                                              ParamName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
struct AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Params
{
	FName                                              ParamName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
struct AGameplayAbilityWorldReticle_OnValidTargetChanged_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
struct AGameplayAbilityWorldReticle_OnTargetingAnActor_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
struct AGameplayAbilityWorldReticle_OnParametersInitialized_Params
{
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
struct AGameplayAbilityWorldReticle_FaceTowardSource_Params
{
	bool                                               bFaceIn2D;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
struct AGameplayAbilityTargetActor_ConfirmTargeting_Params
{
};

// Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
struct AGameplayAbilityTargetActor_CancelTargeting_Params
{
};

// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
struct UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	AGameplayAbilityTargetActor*                       TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_VisualizeTargeting*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
struct UAbilityTask_VisualizeTargeting_VisualizeTargeting_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_VisualizeTargeting*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
struct UAbilityTask_VisualizeTargeting_FinishSpawningActor_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	AGameplayAbilityTargetActor*                       SpawnedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
struct UAbilityTask_VisualizeTargeting_BeginSpawningActor_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	AGameplayAbilityTargetActor*                       SpawnedActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayTag                                       WithTag;                                                  // (Parm)
	FGameplayTag                                       WithoutTag;                                               // (Parm)
	bool                                               IncludeTriggeredAbilities;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_WaitAbilityActivate*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
struct UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Params
{
	UGameplayAbility*                                  ActivatedAbility;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
struct UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayTag                                       WithTag;                                                  // (Parm)
	FGameplayTag                                       WithoutTage;                                              // (Parm)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_WaitAbilityCommit*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
struct UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Params
{
	UGameplayAbility*                                  ActivatedAbility;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
struct UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayAttribute                                 InAttribute;                                              // (Parm)
	FGameplayTag                                       InWithTag;                                                // (Parm)
	FGameplayTag                                       InWithoutTag;                                             // (Parm)
	TEnumAsByte<EWaitAttributeChangeComparison>        InComparisonType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InComparisonValue;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_WaitAttributeChange*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
struct UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayAttribute                                 Attribute;                                                // (Parm)
	FGameplayTag                                       WithSrcTag;                                               // (Parm)
	FGameplayTag                                       WithoutSrcTag;                                            // (Parm)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_WaitAttributeChange*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
struct UAbilityTask_WaitCancel_WaitCancel_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_WaitCancel*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
struct UAbilityTask_WaitCancel_OnLocalCancelCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
struct UAbilityTask_WaitCancel_OnCancelCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
struct UAbilityTask_WaitConfirm_WaitConfirm_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_WaitConfirm*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
struct UAbilityTask_WaitConfirm_OnConfirmCallback_Params
{
	UGameplayAbility*                                  Ability;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
struct UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_WaitConfirmCancel*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
struct UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
struct UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
struct UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
struct UAbilityTask_WaitConfirmCancel_OnCancelCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
struct UAbilityTask_WaitDelay_WaitDelay_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_WaitDelay*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
struct UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Params
{
	UAbilitySystemComponent*                           Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	FGameplayEffectSpec                                SpecApplied;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	FActiveGameplayEffectHandle                        ActiveHandle;                                             // (Parm)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
struct UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayTargetDataFilterHandle                    SourceFilter;                                             // (ConstParm, Parm)
	FGameplayTagRequirements                           SourceTagRequirements;                                    // (Parm)
	FGameplayTagRequirements                           TargetTagRequirements;                                    // (Parm)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            OptionalExternalOwner;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_WaitGameplayEffectApplied_Self*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
struct UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayTargetDataFilterHandle                    TargetFilter;                                             // (ConstParm, Parm)
	FGameplayTagRequirements                           SourceTagRequirements;                                    // (Parm)
	FGameplayTagRequirements                           TargetTagRequirements;                                    // (Parm)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            OptionalExternalOwner;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_WaitGameplayEffectApplied_Target*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
struct UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FActiveGameplayEffectHandle                        Handle;                                                   // (Parm)
	UAbilityTask_WaitGameplayEffectRemoved*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
struct UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
struct UAbilityTask_WaitGameplayTag_GameplayTagCallback_Params
{
	FGameplayTag                                       Tag;                                                      // (ConstParm, Parm)
	int                                                NewCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
struct UAbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayTag                                       Tag;                                                      // (Parm)
	AActor*                                            OptionalExternalTarget;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyTriggerOnce;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_WaitGameplayTagAdded*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
struct UAbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayTag                                       Tag;                                                      // (Parm)
	AActor*                                            OptionalExternalTarget;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyTriggerOnce;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_WaitGameplayTagRemoved*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
struct UAbilityTask_WaitInputPress_WaitInputPress_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTestAlreadyPressed;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_WaitInputPress*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
struct UAbilityTask_WaitInputPress_OnPressCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
struct UAbilityTask_WaitInputRelease_WaitInputRelease_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTestAlreadyReleased;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_WaitInputRelease*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
struct UAbilityTask_WaitInputRelease_OnReleaseCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
struct UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Params
{
	ACharacter*                                        Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
struct UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_WaitMovementModeChange*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
struct UAbilityTask_WaitOverlap_WaitForOverlap_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_WaitOverlap*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitOverlap.OnOverlapCallback
struct UAbilityTask_WaitOverlap_OnOverlapCallback_Params
{
	AActor*                                            OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	UPrimitiveComponent*                               OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	FHitResult                                         SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
struct UAbilityTask_WaitOverlap_OnHitCallback_Params
{
	AActor*                                            OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	UPrimitiveComponent*                               OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	FVector                                            NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	FHitResult                                         Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
struct UAbilityTask_WaitTargetData_WaitTargetDataUsingActor_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayTargetingConfirmation>        ConfirmationType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	AGameplayAbilityTargetActor*                       TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_WaitTargetData*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
struct UAbilityTask_WaitTargetData_WaitTargetData_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayTargetingConfirmation>        ConfirmationType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_WaitTargetData*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
struct UAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
struct UAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params
{
	FGameplayAbilityTargetDataHandle                   Data;                                                     // (Parm)
	FGameplayTag                                       ActivationTag;                                            // (Parm)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
struct UAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Params
{
	FGameplayAbilityTargetDataHandle                   Data;                                                     // (Parm)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
struct UAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Params
{
	FGameplayAbilityTargetDataHandle                   Data;                                                     // (Parm)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
struct UAbilityTask_WaitTargetData_FinishSpawningActor_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	AGameplayAbilityTargetActor*                       SpawnedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
struct UAbilityTask_WaitTargetData_BeginSpawningActor_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	AGameplayAbilityTargetActor*                       SpawnedActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
struct UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimumMagnitude;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilityTask_WaitVelocityChange*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
struct AGameplayCueNotify_Actor_WhileActive_Params
{
	AActor*                                            MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayCueParameters                             Parameters;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
struct AGameplayCueNotify_Actor_OnRemove_Params
{
	AActor*                                            MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayCueParameters                             Parameters;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
struct AGameplayCueNotify_Actor_OnOwnerDestroyed_Params
{
};

// Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
struct AGameplayCueNotify_Actor_OnExecute_Params
{
	AActor*                                            MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayCueParameters                             Parameters;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
struct AGameplayCueNotify_Actor_OnActive_Params
{
	AActor*                                            MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayCueParameters                             Parameters;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
struct AGameplayCueNotify_Actor_K2_HandleGameplayCue_Params
{
	AActor*                                            MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayCueParameters                             Parameters;                                               // (Parm)
};

// Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
struct UGameplayCueNotify_Static_WhileActive_Params
{
	AActor*                                            MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayCueParameters                             Parameters;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
struct UGameplayCueNotify_Static_OnRemove_Params
{
	AActor*                                            MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayCueParameters                             Parameters;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
struct UGameplayCueNotify_Static_OnExecute_Params
{
	AActor*                                            MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayCueParameters                             Parameters;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Static.OnActive
struct UGameplayCueNotify_Static_OnActive_Params
{
	AActor*                                            MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayCueParameters                             Parameters;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
struct UGameplayCueNotify_Static_K2_HandleGameplayCue_Params
{
	AActor*                                            MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayCueParameters                             Parameters;                                               // (Parm)
};

// Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
struct UGameplayEffectExecutionCalculation_Execute_Params
{
	FGameplayEffectCustomExecutionParameters           ExecutionParams;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	FGameplayEffectCustomExecutionOutput               OutExecutionOutput;                                       // (Parm, OutParm)
};

// Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
struct UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Params
{
	FGameplayEffectSpec                                Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
struct UGameplayTagReponseTable_TagResponseEvent_Params
{
	FGameplayTag                                       Tag;                                                      // (ConstParm, Parm)
	int                                                NewCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	UAbilitySystemComponent*                           ASC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
