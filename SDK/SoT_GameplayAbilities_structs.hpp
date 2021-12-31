#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_GameplayAbilities_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_GameplayTags_classes.hpp"
#include "SoT_GameplayTasks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayAbilities.GameplayEffectContextHandle
// 0x0020
struct FGameplayEffectContextHandle
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCueParameters
// 0x0088
struct FGameplayCueParameters
{
	float                                              NormalizedMagnitude;                                      // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RawMagnitude;                                             // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FGameplayEffectContextHandle                       EffectContext;                                            // 0x0008(0x0020) (BlueprintVisible)
	FName                                              MatchedTagName;                                           // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FGameplayTag                                       OriginalTag;                                              // 0x0030(0x0008) (BlueprintVisible)
	FGameplayTagContainer                              AggregatedSourceTags;                                     // 0x0038(0x0028) (BlueprintVisible)
	FGameplayTagContainer                              AggregatedTargetTags;                                     // 0x0060(0x0028) (BlueprintVisible)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
// 0x0010
struct FGameplayAbilityTargetDataHandle
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
// 0x0020
struct FGameplayEffectSpecHandle
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEventData
// 0x00A0
struct FGameplayEventData
{
	FGameplayTag                                       EventTag;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible)
	AActor*                                            Instigator;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	AActor*                                            Target;                                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UObject*                                           OptionalObject;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UObject*                                           OptionalObject2;                                          // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FGameplayEffectContextHandle                       ContextHandle;                                            // 0x0028(0x0020) (Edit, BlueprintVisible)
	FGameplayTagContainer                              InstigatorTags;                                           // 0x0048(0x0028) (Edit, BlueprintVisible)
	FGameplayTagContainer                              TargetTags;                                               // 0x0070(0x0028) (Edit, BlueprintVisible)
	float                                              EventMagnitude;                                           // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilter
// 0x0028
struct FGameplayTargetDataFilter
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	AActor*                                            SelfActor;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETargetDataFilterSelf>                 SelfFilter;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	UClass*                                            RequiredActorClass;                                       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReverseFilter;                                           // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
// 0x0018
struct FGameplayTargetDataFilterHandle
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAttribute
// 0x0008
struct FGameplayAttribute
{
	UProperty*                                         Attribute;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
// 0x0004
struct FActiveGameplayEffectHandle
{
	int                                                Handle;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayTagRequirements
// 0x0050
struct FGameplayTagRequirements
{
	FGameplayTagContainer                              RequireTags;                                              // 0x0000(0x0028) (Edit, BlueprintVisible)
	FGameplayTagContainer                              IgnoreTags;                                               // 0x0028(0x0028) (Edit, BlueprintVisible)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
// 0x0070
struct FGameplayAbilityTargetingLocationInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	TEnumAsByte<EGameplayAbilityTargetingLocationType> LocationType;                                             // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0011(0x000F) MISSED OFFSET
	FTransform                                         LiteralTransform;                                         // 0x0020(0x0030) (BlueprintVisible, IsPlainOldData)
	AActor*                                            SourceActor;                                              // 0x0050(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UMeshComponent*                                    SourceComponent;                                          // 0x0058(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UGameplayAbility*                                  SourceAbility;                                            // 0x0060(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FName                                              SourceSocketName;                                         // 0x0068(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.ScalableFloat
// 0x0020
struct FScalableFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	FCurveTableRowHandle                               Curve;                                                    // 0x0008(0x0010) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
// 0x0010
struct FGameplayEffectAttributeCaptureDefinition
{
	FGameplayAttribute                                 AttributeToCapture;                                       // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	TEnumAsByte<EGameplayEffectAttributeCaptureSource> AttributeSource;                                          // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSnapshot;                                                // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.AttributeBasedFloat
// 0x00D8
struct FAttributeBasedFloat
{
	FScalableFloat                                     Coefficient;                                              // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	FScalableFloat                                     PreMultiplyAdditiveValue;                                 // 0x0020(0x0020) (Edit, DisableEditOnInstance)
	FScalableFloat                                     PostMultiplyAdditiveValue;                                // 0x0040(0x0020) (Edit, DisableEditOnInstance)
	FGameplayEffectAttributeCaptureDefinition          BackingAttribute;                                         // 0x0060(0x0010) (Edit, DisableEditOnInstance)
	FCurveTableRowHandle                               AttributeCurve;                                           // 0x0070(0x0010) (Edit, DisableEditOnInstance)
	TEnumAsByte<EAttributeBasedFloatCalculationType>   AttributeCalculationType;                                 // 0x0080(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	FGameplayTagContainer                              SourceTagFilter;                                          // 0x0088(0x0028) (Edit, DisableEditOnInstance)
	FGameplayTagContainer                              TargetTagFilter;                                          // 0x00B0(0x0028) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
// 0x0068
struct FCustomCalculationBasedFloat
{
	UClass*                                            CalculationClassMagnitude;                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FScalableFloat                                     Coefficient;                                              // 0x0008(0x0020) (Edit, DisableEditOnInstance)
	FScalableFloat                                     PreMultiplyAdditiveValue;                                 // 0x0028(0x0020) (Edit, DisableEditOnInstance)
	FScalableFloat                                     PostMultiplyAdditiveValue;                                // 0x0048(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.SetByCallerFloat
// 0x0008
struct FSetByCallerFloat
{
	FName                                              DataName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// 0x0170
struct FGameplayEffectModifierMagnitude
{
	TEnumAsByte<EGameplayEffectMagnitudeCalculation>   MagnitudeCalculationType;                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	FScalableFloat                                     ScalableFloatMagnitude;                                   // 0x0008(0x0020) (Edit, DisableEditOnInstance)
	FAttributeBasedFloat                               AttributeBasedMagnitude;                                  // 0x0028(0x00D8) (Edit, DisableEditOnInstance)
	FCustomCalculationBasedFloat                       CustomMagnitude;                                          // 0x0100(0x0068) (Edit, DisableEditOnInstance)
	FSetByCallerFloat                                  SetByCallerMagnitude;                                     // 0x0168(0x0008) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayModifierInfo
// 0x0240
struct FGameplayModifierInfo
{
	FGameplayAttribute                                 Attribute;                                                // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	FScalableFloat                                     Magnitude;                                                // 0x0010(0x0020)
	FGameplayEffectModifierMagnitude                   ModifierMagnitude;                                        // 0x0030(0x0170) (Edit, DisableEditOnInstance)
	FGameplayTagRequirements                           SourceTags;                                               // 0x01A0(0x0050) (Edit, DisableEditOnInstance)
	FGameplayTagRequirements                           TargetTags;                                               // 0x01F0(0x0050) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// 0x0228
struct FGameplayEffectExecutionScopedModifierInfo
{
	FGameplayEffectAttributeCaptureDefinition          CapturedAttribute;                                        // 0x0000(0x0010) (Edit, DisableEditOnInstance, EditConst)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	FGameplayEffectModifierMagnitude                   ModifierMagnitude;                                        // 0x0018(0x0170) (Edit, DisableEditOnInstance)
	FGameplayTagRequirements                           SourceTags;                                               // 0x0188(0x0050) (Edit, DisableEditOnInstance)
	FGameplayTagRequirements                           TargetTags;                                               // 0x01D8(0x0050) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// 0x0050
struct FGameplayEffectExecutionDefinition
{
	UClass*                                            CalculationClass;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FGameplayTagContainer                              PassedInTags;                                             // 0x0008(0x0028) (Edit, DisableEditOnInstance)
	TArray<FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;                                     // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<UClass*>                                    ConditionalGameplayEffectClasses;                         // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayEffectCue
// 0x0038
struct FGameplayEffectCue
{
	FGameplayAttribute                                 MagnitudeAttribute;                                       // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	float                                              MinLevel;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLevel;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FGameplayTagContainer                              GameplayCueTags;                                          // 0x0010(0x0028) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.InheritedTagContainer
// 0x0078
struct FInheritedTagContainer
{
	FGameplayTagContainer                              CombinedTags;                                             // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	FGameplayTagContainer                              Added;                                                    // 0x0028(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance)
	FGameplayTagContainer                              Removed;                                                  // 0x0050(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance)
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
	UClass*                                            Ability;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                Level;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                InputID;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TEnumAsByte<EGameplayEffectGrantedAbilityRemovePolicy> RemovalPolicy;                                            // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	UObject*                                           SourceObject;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FGameplayAbilitySpecHandle                         AssignedHandle;                                           // 0x0020(0x0004)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.PredictionKey
// 0x0018
struct FPredictionKey
{
	int16_t                                            Current;                                                  // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            Base;                                                     // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	UPackageMap*                                       PredictiveConnection;                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bIsStale;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bIsServerInitiated;                                       // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
// 0x0020
struct FGameplayAbilityActivationInfo
{
	TEnumAsByte<EGameplayAbilityActivationMode>        ActivationMode;                                           // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanBeEndedByOtherInstance;                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	FPredictionKey                                     PredictionKeyWhenActivated;                               // 0x0008(0x0018)
};

// ScriptStruct GameplayAbilities.AbilityTriggerData
// 0x000C
struct FAbilityTriggerData
{
	FGameplayTag                                       TriggerTag;                                               // 0x0000(0x0008) (Edit)
	TEnumAsByte<EGameplayAbilityTriggerSource>         TriggerSource;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
// 0x0038
struct FGameplayAbilityActorInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       OwnerActor;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       AvatarActor;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class APlayerController>            PlayerController;                                         // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UAbilitySystemComponent>      AbilitySystemComponent;                                   // 0x0020(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UAnimInstance>                AnimInstance;                                             // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UMovementComponent>           MovementComponent;                                        // 0x0030(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.AttributeDefaults
// 0x0010
struct FAttributeDefaults
{
	UClass*                                            Attributes;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UDataTable*                                        DefaultStartingTable;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpec
// 0x0070 (0x0078 - 0x0008)
struct FGameplayAbilitySpec : public FFastArraySerializerItem
{
	FGameplayAbilitySpecHandle                         Handle;                                                   // 0x0008(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	UGameplayAbility*                                  Ability;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InputID;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	UObject*                                           SourceObject;                                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               InputPressed;                                             // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      ActiveCount;                                              // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               RemoveAfterActivation;                                    // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
	FGameplayAbilityActivationInfo                     ActivationInfo;                                           // 0x0030(0x0020) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<UGameplayAbility*>                          NonReplicatedInstances;                                   // 0x0050(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<UGameplayAbility*>                          ReplicatedInstances;                                      // 0x0060(0x0010) (ZeroConstructor)
	FActiveGameplayEffectHandle                        GameplayEffectHandle;                                     // 0x0070(0x0004) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               PendingRemove;                                            // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
// 0x0018 (0x00C0 - 0x00A8)
struct FGameplayAbilitySpecContainer : public FFastArraySerializer
{
	TArray<FGameplayAbilitySpec>                       Items;                                                    // 0x00A8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
// 0x0030
struct FGameplayAbilityRepAnimMontage
{
	UAnimMontage*                                      AnimMontage;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      NextSectionID;                                            // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsStopped : 1;                                            // 0x0015(0x0001)
	unsigned char                                      ForcePlayBit : 1;                                         // 0x0015(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	FPredictionKey                                     PredictionKey;                                            // 0x0018(0x0018)
};

// ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
// 0x0030
struct FGameplayAbilityLocalAnimMontage
{
	UAnimMontage*                                      AnimMontage;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               PlayBit;                                                  // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	FPredictionKey                                     PredictionKey;                                            // 0x0010(0x0018)
	UGameplayAbility*                                  AnimatingAbility;                                         // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
// 0x0010
struct FGameplayEffectModifiedAttribute
{
	FGameplayAttribute                                 Attribute;                                                // 0x0000(0x0008)
	float                                              TotalMagnitude;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
// 0x0028
struct FGameplayEffectAttributeCaptureSpec
{
	FGameplayEffectAttributeCaptureDefinition          BackingDefinition;                                        // 0x0000(0x0010)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
// 0x0028
struct FGameplayEffectAttributeCaptureSpecContainer
{
	TArray<FGameplayEffectAttributeCaptureSpec>        SourceAttributes;                                         // 0x0000(0x0010) (ZeroConstructor)
	TArray<FGameplayEffectAttributeCaptureSpec>        TargetAttributes;                                         // 0x0010(0x0010) (ZeroConstructor)
	bool                                               bHasNonSnapshottedAttributes;                             // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.TagContainerAggregator
// 0x00A8
struct FTagContainerAggregator
{
	FGameplayTagContainer                              CapturedActorTags;                                        // 0x0000(0x0028)
	FGameplayTagContainer                              CapturedSpecTags;                                         // 0x0028(0x0028)
	FGameplayTagContainer                              ScopedTags;                                               // 0x0050(0x0028)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0078(0x0030) MISSED OFFSET
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
	UGameplayEffect*                                   Def;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<FGameplayEffectModifiedAttribute>           ModifiedAttributes;                                       // 0x0008(0x0010) (ZeroConstructor)
	FGameplayEffectAttributeCaptureSpecContainer       CapturedRelevantAttributes;                               // 0x0018(0x0028) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	float                                              Duration;                                                 // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Period;                                                   // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ChanceToApplyToTarget;                                    // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	FTagContainerAggregator                            CapturedSourceTags;                                       // 0x0060(0x00A8) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FTagContainerAggregator                            CapturedTargetTags;                                       // 0x0108(0x00A8) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FGameplayTagContainer                              DynamicGrantedTags;                                       // 0x01B0(0x0028)
	FGameplayTagContainer                              DynamicAssetTags;                                         // 0x01D8(0x0028)
	TArray<FModifierSpec>                              Modifiers;                                                // 0x0200(0x0010) (ZeroConstructor)
	int                                                StackCount;                                               // 0x0210(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCompletedSourceAttributeCapture : 1;                     // 0x0214(0x0001) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bCompletedTargetAttributeCapture : 1;                     // 0x0214(0x0001) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bDurationLocked : 1;                                      // 0x0214(0x0001) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0215(0x0003) MISSED OFFSET
	TArray<FGameplayAbilitySpecDef>                    GrantedAbilitySpecs;                                      // 0x0218(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0228(0x0050) MISSED OFFSET
	FGameplayEffectContextHandle                       EffectContext;                                            // 0x0278(0x0020)
	float                                              Level;                                                    // 0x0298(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x029C(0x0004) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffect
// 0x02F8 (0x0300 - 0x0008)
struct FActiveGameplayEffect : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	FGameplayEffectSpec                                Spec;                                                     // 0x0010(0x02A0)
	FPredictionKey                                     PredictionKey;                                            // 0x02B0(0x0018)
	float                                              StartServerWorldTime;                                     // 0x02C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CachedStartServerWorldTime;                               // 0x02CC(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              StartWorldTime;                                           // 0x02D0(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bIsInhibited;                                             // 0x02D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2B];                                      // 0x02D5(0x002B) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
// 0x02C0 (0x0368 - 0x00A8)
struct FActiveGameplayEffectsContainer : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x00A8(0x0020) MISSED OFFSET
	TArray<FActiveGameplayEffect>                      GameplayEffects_Internal;                                 // 0x00C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x290];                                     // 0x00D8(0x0290) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayCue
// 0x0028 (0x0030 - 0x0008)
struct FActiveGameplayCue : public FFastArraySerializerItem
{
	FGameplayTag                                       GameplayCueTag;                                           // 0x0008(0x0008)
	FPredictionKey                                     PredictionKey;                                            // 0x0010(0x0018)
	bool                                               bPredictivelyRemoved;                                     // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
// 0x0018 (0x00C0 - 0x00A8)
struct FActiveGameplayCueContainer : public FFastArraySerializer
{
	TArray<FActiveGameplayCue>                         GameplayCues;                                             // 0x00A8(0x0010) (ZeroConstructor)
	UAbilitySystemComponent*                           Owner;                                                    // 0x00B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
// 0x0090
struct FGameplayEffectSpecForRPC
{
	UGameplayEffect*                                   Def;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<FGameplayEffectModifiedAttribute>           ModifiedAttributes;                                       // 0x0008(0x0010) (ZeroConstructor)
	FGameplayEffectContextHandle                       EffectContext;                                            // 0x0018(0x0020)
	FGameplayTagContainer                              AggregatedSourceTags;                                     // 0x0038(0x0028)
	FGameplayTagContainer                              AggregatedTargetTags;                                     // 0x0060(0x0028)
	float                                              Level;                                                    // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.WorldReticleParameters
// 0x000C
struct FWorldReticleParameters
{
	FVector                                            AOEScale;                                                 // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
// 0x0010
struct FGameplayAbilityBindInfo
{
	TEnumAsByte<EGameplayAbilityInputBinds>            Command;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	UClass*                                            GameplayAbilityClass;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayCuePendingExecute
// 0x0148
struct FGameplayCuePendingExecute
{
	FGameplayTag                                       GameplayCueTag;                                           // 0x0000(0x0008)
	FPredictionKey                                     PredictionKey;                                            // 0x0008(0x0018)
	TEnumAsByte<EGameplayCuePayloadType>               PayloadType;                                              // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	UAbilitySystemComponent*                           OwningComponent;                                          // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	FGameplayEffectSpecForRPC                          FromSpec;                                                 // 0x0030(0x0090)
	FGameplayCueParameters                             CueParameters;                                            // 0x00C0(0x0088)
};

// ScriptStruct GameplayAbilities.GameplayCueNotifyData
// 0x0028
struct FGameplayCueNotifyData
{
	FGameplayTag                                       GameplayCueTag;                                           // 0x0000(0x0008) (Edit)
	FStringAssetReference                              GameplayCueNotifyObj;                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	UClass*                                            LoadedGameplayCueClass;                                   // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
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
	FGameplayAttribute                                 Attribute;                                                // 0x0000(0x0008)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Magnitude;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	FActiveGameplayEffectHandle                        Handle;                                                   // 0x0010(0x0004)
	bool                                               IsValid;                                                  // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
// 0x0018
struct FGameplayEffectCustomExecutionOutput
{
	TArray<FGameplayModifierEvaluatedData>             OutputModifiers;                                          // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      bTriggerConditionalGameplayEffects : 1;                   // 0x0010(0x0001)
	unsigned char                                      bHandledStackCountManually : 1;                           // 0x0010(0x0001)
	unsigned char                                      bHandledGameplayCuesManually : 1;                         // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayTagReponsePair
// 0x0010
struct FGameplayTagReponsePair
{
	FGameplayTag                                       Tag;                                                      // 0x0000(0x0008) (Edit)
	UClass*                                            ResponseGameplayEffect;                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
// 0x0020
struct FGameplayTagResponseTableEntry
{
	FGameplayTagReponsePair                            Positive;                                                 // 0x0000(0x0010) (Edit)
	FGameplayTagReponsePair                            Negative;                                                 // 0x0010(0x0010) (Edit)
};

// ScriptStruct GameplayAbilities.AttributeMetaData
// 0x0027 (0x0028 - 0x0001)
struct FAttributeMetaData : public FTableRowBase
{
	float                                              BaseValue;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	FString                                            DerivedAttributeInfo;                                     // 0x0010(0x0010) (ZeroConstructor)
	bool                                               bCanStack;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
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
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       Instigator;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       EffectCauser;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      SourceObject;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UAbilitySystemComponent>      InstigatorAbilitySystemComponent;                         // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class AActor>>               Actors;                                                   // 0x0028(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
	FVector                                            WorldOrigin;                                              // 0x0050(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasWorldOrigin;                                          // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
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
	FHitResult                                         HitResult;                                                // 0x0008(0x0080)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
// 0x0088 (0x0090 - 0x0008)
struct FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	FGameplayAbilityTargetingLocationInfo              SourceLocation;                                           // 0x0010(0x0070) (Edit, BlueprintVisible)
	TArray<TWeakObjectPtr<class AActor>>               TargetActorArray;                                         // 0x0080(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
// 0x00E8 (0x00F0 - 0x0008)
struct FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	FGameplayAbilityTargetingLocationInfo              SourceLocation;                                           // 0x0010(0x0070) (Edit, BlueprintVisible)
	FGameplayAbilityTargetingLocationInfo              TargetLocation;                                           // 0x0080(0x0070) (Edit, BlueprintVisible)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
// 0x0008
struct FGameplayAbilitySpecHandleAndPredictionKey
{
	FGameplayAbilitySpecHandle                         AbilityHandle;                                            // 0x0000(0x0004)
	int                                                PredictionKeyAtCreation;                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
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
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	FScriptDelegate                                    CustomMatchDelegate_BP;                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	FGameplayTagQuery                                  OwningTagQuery;                                           // 0x0018(0x0048) (Edit, BlueprintVisible)
	FGameplayTagQuery                                  EffectTagQuery;                                           // 0x0060(0x0048) (Edit, BlueprintVisible)
	FGameplayAttribute                                 ModifyingAttribute;                                       // 0x00A8(0x0008) (Edit, BlueprintVisible)
	UObject*                                           EffectSource;                                             // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UGameplayEffect*                                   EffectDefinition;                                         // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
