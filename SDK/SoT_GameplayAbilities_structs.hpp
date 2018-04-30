#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_GameplayTags_classes.hpp"
#include "SoT_GameplayTasks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayAbilities.GameplayAttribute
// 0x0008
struct FGameplayAttribute
{
	class UProperty*                                   Attribute;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
// 0x0010
struct FGameplayEffectAttributeCaptureDefinition
{
	bool                                               bSnapshot;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FGameplayAttribute                          AttributeToCapture;                                       // 0x01E3(0x0008) (Edit, DisableEditOnInstance)
	TEnumAsByte<EGameplayEffectAttributeCaptureSource> AttributeSource;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.ScalableFloat
// 0x0020
struct FScalableFloat
{
	struct FCurveTableRowHandle                        Curve;                                                    // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	float                                              Value;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.AttributeBasedFloat
// 0x00D8
struct FAttributeBasedFloat
{
	struct FGameplayTagContainer                       TargetTagFilter;                                          // 0x0000(0x0028) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FScalableFloat                              Coefficient;                                              // 0x01E3(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              PreMultiplyAdditiveValue;                                 // 0x01E3(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              PostMultiplyAdditiveValue;                                // 0x01E3(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayEffectAttributeCaptureDefinition   BackingAttribute;                                         // 0x01E3(0x0010) (Edit, DisableEditOnInstance)
	struct FCurveTableRowHandle                        AttributeCurve;                                           // 0x01E3(0x0010) (Edit, DisableEditOnInstance)
	TEnumAsByte<EAttributeBasedFloatCalculationType>   AttributeCalculationType;                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       SourceTagFilter;                                          // 0x01E3(0x0028) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
// 0x0068
struct FCustomCalculationBasedFloat
{
	struct FScalableFloat                              PostMultiplyAdditiveValue;                                // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1C3];                                     // 0x0020(0x01C3) MISSED OFFSET
	class UClass*                                      CalculationClassMagnitude;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              Coefficient;                                              // 0x01E3(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              PreMultiplyAdditiveValue;                                 // 0x01E3(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.SetByCallerFloat
// 0x0008
struct FSetByCallerFloat
{
	struct FName                                       DataName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// 0x0170
struct FGameplayEffectModifierMagnitude
{
	struct FSetByCallerFloat                           SetByCallerMagnitude;                                     // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	TEnumAsByte<EGameplayEffectMagnitudeCalculation>   MagnitudeCalculationType;                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              ScalableFloatMagnitude;                                   // 0x01E3(0x0020) (Edit, DisableEditOnInstance)
	struct FAttributeBasedFloat                        AttributeBasedMagnitude;                                  // 0x01E3(0x00D8) (Edit, DisableEditOnInstance)
	struct FCustomCalculationBasedFloat                CustomMagnitude;                                          // 0x01E3(0x0068) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayTagRequirements
// 0x0050
struct FGameplayTagRequirements
{
	struct FGameplayTagContainer                       IgnoreTags;                                               // 0x0000(0x0028) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FGameplayTagContainer                       RequireTags;                                              // 0x01E3(0x0028) (Edit, BlueprintVisible)
};

// ScriptStruct GameplayAbilities.GameplayModifierInfo
// 0x0240
struct FGameplayModifierInfo
{
	struct FGameplayTagRequirements                    TargetTags;                                               // 0x0000(0x0050) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x193];                                     // 0x0050(0x0193) MISSED OFFSET
	struct FGameplayAttribute                          Attribute;                                                // 0x01E3(0x0008) (Edit, DisableEditOnInstance)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              Magnitude;                                                // 0x01E3(0x0020)
	struct FGameplayEffectModifierMagnitude            ModifierMagnitude;                                        // 0x01E3(0x0170) (Edit, DisableEditOnInstance)
	struct FGameplayTagRequirements                    SourceTags;                                               // 0x01E3(0x0050) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0xD];                                       // 0x0233(0x000D) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// 0x0228
struct FGameplayEffectExecutionScopedModifierInfo
{
	struct FGameplayTagRequirements                    TargetTags;                                               // 0x0000(0x0050) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x193];                                     // 0x0050(0x0193) MISSED OFFSET
	struct FGameplayEffectAttributeCaptureDefinition   CapturedAttribute;                                        // 0x01E3(0x0010) (Edit, DisableEditOnInstance, EditConst)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayEffectModifierMagnitude            ModifierMagnitude;                                        // 0x01E3(0x0170) (Edit, DisableEditOnInstance)
	struct FGameplayTagRequirements                    SourceTags;                                               // 0x01E3(0x0050) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// 0x0050
struct FGameplayEffectExecutionDefinition
{
	TArray<class UClass*>                              ConditionalGameplayEffectClasses;                         // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class UClass*                                      CalculationClass;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       PassedInTags;                                             // 0x01E3(0x0028) (Edit, DisableEditOnInstance)
	TArray<struct FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayEffectCue
// 0x0038
struct FGameplayEffectCue
{
	struct FGameplayTagContainer                       GameplayCueTags;                                          // 0x0000(0x0028) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FGameplayAttribute                          MagnitudeAttribute;                                       // 0x01E3(0x0008) (Edit, DisableEditOnInstance)
	float                                              MinLevel;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLevel;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.InheritedTagContainer
// 0x0078
struct FInheritedTagContainer
{
	struct FGameplayTagContainer                       Removed;                                                  // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FGameplayTagContainer                       CombinedTags;                                             // 0x01E3(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	struct FGameplayTagContainer                       Added;                                                    // 0x01E3(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
// 0x0004
struct FGameplayAbilitySpecHandle
{
	int                                                Handle;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
// 0x0028
struct FGameplayAbilitySpecDef
{
	struct FGameplayAbilitySpecHandle                  AssignedHandle;                                           // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UClass*                                      Ability;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                Level;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                InputID;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TEnumAsByte<EGameplayEffectGrantedAbilityRemovePolicy> RemovalPolicy;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UObject*                                     SourceObject;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct GameplayAbilities.PredictionKey
// 0x0018
struct FPredictionKey
{
	bool                                               bIsServerInitiated;                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	int16_t                                            Current;                                                  // 0x01E3(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            Base;                                                     // 0x01E3(0x0002) (ZeroConstructor, IsPlainOldData)
	class UPackageMap*                                 PredictiveConnection;                                     // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bIsStale;                                                 // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
// 0x0020
struct FGameplayAbilityActivationInfo
{
	struct FPredictionKey                              PredictionKeyWhenActivated;                               // 0x0000(0x0018)
	unsigned char                                      UnknownData00[0x1CB];                                     // 0x0018(0x01CB) MISSED OFFSET
	TEnumAsByte<EGameplayAbilityActivationMode>        ActivationMode;                                           // 0x01E3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanBeEndedByOtherInstance;                               // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectContextHandle
// 0x0020
struct FGameplayEffectContextHandle
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEventData
// 0x00A0
struct FGameplayEventData
{
	float                                              EventMagnitude;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FGameplayTag                                EventTag;                                                 // 0x01E3(0x0008) (Edit, BlueprintVisible)
	class AActor*                                      Instigator;                                               // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject2;                                          // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                ContextHandle;                                            // 0x01E3(0x0020) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       InstigatorTags;                                           // 0x01E3(0x0028) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       TargetTags;                                               // 0x01E3(0x0028) (Edit, BlueprintVisible)
};

// ScriptStruct GameplayAbilities.AbilityTriggerData
// 0x000C
struct FAbilityTriggerData
{
	TEnumAsByte<EGameplayAbilityTriggerSource>         TriggerSource;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FGameplayTag                                TriggerTag;                                               // 0x01E3(0x0008) (Edit)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
// 0x0070
struct FGameplayAbilityTargetingLocationInfo
{
	struct FName                                       SourceSocketName;                                         // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	TEnumAsByte<EGameplayAbilityTargetingLocationType> LocationType;                                             // 0x01E3(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  LiteralTransform;                                         // 0x01E3(0x0030) (BlueprintVisible, IsPlainOldData)
	class AActor*                                      SourceActor;                                              // 0x01E3(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMeshComponent*                              SourceComponent;                                          // 0x01E3(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameplayAbility*                            SourceAbility;                                            // 0x01E3(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
// 0x0020
struct FGameplayEffectSpecHandle
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
// 0x0038
struct FGameplayAbilityActorInfo
{
	TWeakObjectPtr<class UMovementComponent>           MovementComponent;                                        // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       OwnerActor;                                               // 0x01E3(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       AvatarActor;                                              // 0x01E3(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class APlayerController>            PlayerController;                                         // 0x01E3(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UAbilitySystemComponent>      AbilitySystemComponent;                                   // 0x01E3(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UAnimInstance>                AnimInstance;                                             // 0x01E3(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayCueParameters
// 0x0088
struct FGameplayCueParameters
{
	struct FGameplayTagContainer                       AggregatedTargetTags;                                     // 0x0000(0x0028) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              NormalizedMagnitude;                                      // 0x01E3(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RawMagnitude;                                             // 0x01E3(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // 0x01E3(0x0020) (BlueprintVisible)
	struct FName                                       MatchedTagName;                                           // 0x01E3(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                OriginalTag;                                              // 0x01E3(0x0008) (BlueprintVisible)
	struct FGameplayTagContainer                       AggregatedSourceTags;                                     // 0x01E3(0x0028) (BlueprintVisible)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
// 0x0010
struct FGameplayAbilityTargetDataHandle
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
// 0x0004
struct FActiveGameplayEffectHandle
{
	int                                                Handle;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilter
// 0x0028
struct FGameplayTargetDataFilter
{
	bool                                               bReverseFilter;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class AActor*                                      SelfActor;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETargetDataFilterSelf>                 SelfFilter;                                               // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RequiredActorClass;                                       // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
// 0x0018
struct FGameplayTargetDataFilterHandle
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.AttributeDefaults
// 0x0010
struct FAttributeDefaults
{
	class UDataTable*                                  DefaultStartingTable;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UClass*                                      Attributes;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpec
// 0x0070 (0x0078 - 0x0008)
struct FGameplayAbilitySpec : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // 0x01E3(0x0004)
	class UGameplayAbility*                            Ability;                                                  // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InputID;                                                  // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceObject;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               InputPressed;                                             // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      ActiveCount;                                              // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               RemoveAfterActivation;                                    // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                           // 0x01E3(0x0020) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UGameplayAbility*>                    NonReplicatedInstances;                                   // 0x01E3(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UGameplayAbility*>                    ReplicatedInstances;                                      // 0x01E3(0x0010) (ZeroConstructor)
	struct FActiveGameplayEffectHandle                 GameplayEffectHandle;                                     // 0x01E3(0x0004) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               PendingRemove;                                            // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
// 0x0018 (0x00C0 - 0x00A8)
struct FGameplayAbilitySpecContainer : public FFastArraySerializer
{
	TArray<struct FGameplayAbilitySpec>                Items;                                                    // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0010(0x00B0) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
// 0x0030
struct FGameplayAbilityRepAnimMontage
{
	struct FPredictionKey                              PredictionKey;                                            // 0x0000(0x0018)
	unsigned char                                      UnknownData00[0x1CB];                                     // 0x0018(0x01CB) MISSED OFFSET
	class UAnimMontage*                                AnimMontage;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      NextSectionID;                                            // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsStopped : 1;                                            // 0x01E3(0x0001)
	unsigned char                                      ForcePlayBit : 1;                                         // 0x01E3(0x0001)
};

// ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
// 0x0030
struct FGameplayAbilityLocalAnimMontage
{
	class UGameplayAbility*                            AnimatingAbility;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UAnimMontage*                                AnimMontage;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               PlayBit;                                                  // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FPredictionKey                              PredictionKey;                                            // 0x01E3(0x0018)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
// 0x0010
struct FGameplayEffectModifiedAttribute
{
	float                                              TotalMagnitude;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FGameplayAttribute                          Attribute;                                                // 0x01E3(0x0008)
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
// 0x0028
struct FGameplayEffectAttributeCaptureSpec
{
	struct FGameplayEffectAttributeCaptureDefinition   BackingDefinition;                                        // 0x0000(0x0010)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
// 0x0028
struct FGameplayEffectAttributeCaptureSpecContainer
{
	bool                                               bHasNonSnapshottedAttributes;                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	TArray<struct FGameplayEffectAttributeCaptureSpec> SourceAttributes;                                         // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FGameplayEffectAttributeCaptureSpec> TargetAttributes;                                         // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct GameplayAbilities.TagContainerAggregator
// 0x00A8
struct FTagContainerAggregator
{
	struct FGameplayTagContainer                       ScopedTags;                                               // 0x0000(0x0028)
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FGameplayTagContainer                       CapturedActorTags;                                        // 0x01E3(0x0028)
	struct FGameplayTagContainer                       CapturedSpecTags;                                         // 0x01E3(0x0028)
};

// ScriptStruct GameplayAbilities.ModifierSpec
// 0x0004
struct FModifierSpec
{
	float                                              EvaluatedMagnitude;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectSpec
// 0x02A0
struct FGameplayEffectSpec
{
	float                                              Level;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UGameplayEffect*                             Def;                                                      // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGameplayEffectModifiedAttribute>    ModifiedAttributes;                                       // 0x01E3(0x0010) (ZeroConstructor)
	struct FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes;                               // 0x01E3(0x0028) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              Duration;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Period;                                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ChanceToApplyToTarget;                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FTagContainerAggregator                     CapturedSourceTags;                                       // 0x01E3(0x00A8) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTagContainerAggregator                     CapturedTargetTags;                                       // 0x01E3(0x00A8) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                       DynamicGrantedTags;                                       // 0x01E3(0x0028)
	struct FGameplayTagContainer                       DynamicAssetTags;                                         // 0x01E3(0x0028)
	TArray<struct FModifierSpec>                       Modifiers;                                                // 0x01E3(0x0010) (ZeroConstructor)
	int                                                StackCount;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCompletedSourceAttributeCapture : 1;                     // 0x01E3(0x0001) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bCompletedTargetAttributeCapture : 1;                     // 0x01E3(0x0001) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bDurationLocked : 1;                                      // 0x01E3(0x0001) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FGameplayAbilitySpecDef>             GrantedAbilitySpecs;                                      // 0x01E3(0x0010) (ZeroConstructor)
	struct FGameplayEffectContextHandle                EffectContext;                                            // 0x01E3(0x0020)
	unsigned char                                      UnknownData01[0x9D];                                      // 0x0203(0x009D) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffect
// 0x0328 (0x0330 - 0x0008)
struct FActiveGameplayEffect : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FGameplayEffectSpec                         Spec;                                                     // 0x01E3(0x02A0)
	struct FPredictionKey                              PredictionKey;                                            // 0x01E3(0x0018)
	float                                              StartServerWorldTime;                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CachedStartServerWorldTime;                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              StartWorldTime;                                           // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bIsInhibited;                                             // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14C];                                     // 0x01E4(0x014C) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
// 0x0320 (0x03C8 - 0x00A8)
struct FActiveGameplayEffectsContainer : public FFastArraySerializer
{
	TArray<struct FActiveGameplayEffect>               GameplayEffects_Internal;                                 // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x3B8];                                     // 0x0010(0x03B8) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayCue
// 0x0028 (0x0030 - 0x0008)
struct FActiveGameplayCue : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FGameplayTag                                GameplayCueTag;                                           // 0x01E3(0x0008)
	struct FPredictionKey                              PredictionKey;                                            // 0x01E3(0x0018)
	bool                                               bPredictivelyRemoved;                                     // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
// 0x0018 (0x00C0 - 0x00A8)
struct FActiveGameplayCueContainer : public FFastArraySerializer
{
	class UAbilitySystemComponent*                     Owner;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	TArray<struct FActiveGameplayCue>                  GameplayCues;                                             // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
// 0x0090
struct FGameplayEffectSpecForRPC
{
	float                                              Level;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UGameplayEffect*                             Def;                                                      // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGameplayEffectModifiedAttribute>    ModifiedAttributes;                                       // 0x01E3(0x0010) (ZeroConstructor)
	struct FGameplayEffectContextHandle                EffectContext;                                            // 0x01E3(0x0020)
	struct FGameplayTagContainer                       AggregatedSourceTags;                                     // 0x01E3(0x0028)
	struct FGameplayTagContainer                       AggregatedTargetTags;                                     // 0x01E3(0x0028)
};

// ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
// 0x0010
struct FGameplayAbilityBindInfo
{
	class UClass*                                      GameplayAbilityClass;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	TEnumAsByte<EGameplayAbilityInputBinds>            Command;                                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.WorldReticleParameters
// 0x000C
struct FWorldReticleParameters
{
	struct FVector                                     AOEScale;                                                 // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayCuePendingExecute
// 0x0148
struct FGameplayCuePendingExecute
{
	struct FGameplayCueParameters                      CueParameters;                                            // 0x0000(0x0088)
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	struct FGameplayTag                                GameplayCueTag;                                           // 0x01E3(0x0008)
	struct FPredictionKey                              PredictionKey;                                            // 0x01E3(0x0018)
	TEnumAsByte<EGameplayCuePayloadType>               PayloadType;                                              // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	class UAbilitySystemComponent*                     OwningComponent;                                          // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayEffectSpecForRPC                   FromSpec;                                                 // 0x01E3(0x0090)
};

// ScriptStruct GameplayAbilities.GameplayCueNotifyData
// 0x0028
struct FGameplayCueNotifyData
{
	class UClass*                                      LoadedGameplayCueClass;                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FGameplayTag                                GameplayCueTag;                                           // 0x01E3(0x0008) (Edit)
	struct FStringAssetReference                       GameplayCueNotifyObj;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
// 0x0088
struct FGameplayEffectCustomExecutionParameters
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
// 0x0018
struct FGameplayModifierEvaluatedData
{
	bool                                               IsValid;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FGameplayAttribute                          Attribute;                                                // 0x01E3(0x0008)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 Handle;                                                   // 0x01E3(0x0004)
};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
// 0x0018
struct FGameplayEffectCustomExecutionOutput
{
	unsigned char                                      UnknownData00 : 2;                                        // 0x0000(0x0001)
	unsigned char                                      bHandledGameplayCuesManually : 1;                         // 0x0000(0x0001)
	unsigned char                                      UnknownData01[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	TArray<struct FGameplayModifierEvaluatedData>      OutputModifiers;                                          // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      bTriggerConditionalGameplayEffects : 1;                   // 0x01E3(0x0001)
	unsigned char                                      bHandledStackCountManually : 1;                           // 0x01E3(0x0001)
};

// ScriptStruct GameplayAbilities.GameplayTagReponsePair
// 0x0010
struct FGameplayTagReponsePair
{
	class UClass*                                      ResponseGameplayEffect;                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FGameplayTag                                Tag;                                                      // 0x01E3(0x0008) (Edit)
};

// ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
// 0x0020
struct FGameplayTagResponseTableEntry
{
	struct FGameplayTagReponsePair                     Negative;                                                 // 0x0000(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FGameplayTagReponsePair                     Positive;                                                 // 0x01E3(0x0010) (Edit)
};

// ScriptStruct GameplayAbilities.AttributeMetaData
// 0x0027 (0x0028 - 0x0001)
struct FAttributeMetaData : public FTableRowBase
{
	bool                                               bCanStack;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	float                                              BaseValue;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      DerivedAttributeInfo;                                     // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct GameplayAbilities.GlobalCurveDataOverride
// 0x0010
struct FGlobalCurveDataOverride
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectContext
// 0x0060
struct FGameplayEffectContext
{
	bool                                               bHasWorldOrigin;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       Instigator;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       EffectCauser;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      SourceObject;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UAbilitySystemComponent>      InstigatorAbilitySystemComponent;                         // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class AActor>>               Actors;                                                   // 0x01E3(0x0010) (ZeroConstructor)
	struct FVector                                     WorldOrigin;                                              // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData
// 0x0008
struct FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
// 0x0080 (0x0088 - 0x0008)
struct FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData
{
	struct FHitResult                                  HitResult;                                                // 0x0000(0x0080)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
// 0x0088 (0x0090 - 0x0008)
struct FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData
{
	TArray<TWeakObjectPtr<class AActor>>               TargetActorArray;                                         // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                           // 0x01E3(0x0070) (Edit, BlueprintVisible)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
// 0x00E8 (0x00F0 - 0x0008)
struct FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData
{
	struct FGameplayAbilityTargetingLocationInfo       TargetLocation;                                           // 0x0000(0x0070) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                           // 0x01E3(0x0070) (Edit, BlueprintVisible)
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
// 0x0050
struct FActiveGameplayEffectQuery
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectQuery
// 0x00D0
struct FGameplayEffectQuery
{
	class UGameplayEffect*                             EffectDefinition;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FScriptDelegate                             CustomMatchDelegate_BP;                                   // 0x01E3(0x0014) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FGameplayTagQuery                           OwningTagQuery;                                           // 0x01E3(0x0048) (Edit, BlueprintVisible)
	struct FGameplayTagQuery                           EffectTagQuery;                                           // 0x01E3(0x0048) (Edit, BlueprintVisible)
	struct FGameplayAttribute                          ModifyingAttribute;                                       // 0x01E3(0x0008) (Edit, BlueprintVisible)
	class UObject*                                     EffectSource;                                             // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
// 0x0008
struct FGameplayAbilitySpecHandleAndPredictionKey
{
	int                                                PredictionKeyAtCreation;                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // 0x01E3(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
