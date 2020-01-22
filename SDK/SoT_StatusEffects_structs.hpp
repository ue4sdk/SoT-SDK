#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct StatusEffects.StatusDescriptor
// 0x0004
struct FStatusDescriptor
{
	float                                              Intensity;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StatusEffects.Status
// 0x0018
struct FStatus
{
	TArray<class UClass*>                              Type;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FStatusDescriptor                           Descriptor;                                               // 0x0010(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct StatusEffects.DebugMenuStatusDefinition
// 0x0020
struct FDebugMenuStatusDefinition
{
	struct FName                                       Identifier;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStatus                                     Status;                                                   // 0x0008(0x0018) (Edit)
};

// ScriptStruct StatusEffects.DelayedStatusEffect
// 0x0020
struct FDelayedStatusEffect
{
	struct FStatus                                     StatusEffect;                                             // 0x0000(0x0018) (Edit)
	float                                              InEffectTime;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct StatusEffects.FeatureToggledStatusResponseList
// 0x0018
struct FFeatureToggledStatusResponseList
{
	struct FName                                       Feature;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UStatusResponseAsset*>                ResponseAssets;                                           // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct StatusEffects.ActiveStatusEffect
// 0x0050
struct FActiveStatusEffect
{
	TArray<class UClass*>                              SourceStatus;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FStatusDescriptor                           Descriptor;                                               // 0x0010(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<class UStatusResponse*>                     ResponseTemplates;                                        // 0x0018(0x0010) (ZeroConstructor)
	TArray<class UStatusResponse*>                     InstancedResponses;                                       // 0x0028(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               ResponsesAreActive;                                       // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0039(0x0017) MISSED OFFSET
};

// ScriptStruct StatusEffects.EventAppliedStatusToTargets
// 0x0020
struct FEventAppliedStatusToTargets
{
	TArray<class UClass*>                              StatusApplied;                                            // 0x0000(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              Targets;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct StatusEffects.StatusEffectPersistenceKey
// 0x0018
struct FStatusEffectPersistenceKey
{
	struct FStatus                                     AppliedStatuses;                                          // 0x0000(0x0018)
};

// ScriptStruct StatusEffects.StatusDeactivatedEvent
// 0x0018
struct FStatusDeactivatedEvent
{
	struct FGuid                                       Id;                                                       // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       StatusName;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StatusEffects.StatusActivatedEvent
// 0x0018
struct FStatusActivatedEvent
{
	struct FGuid                                       Id;                                                       // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       StatusName;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StatusEffects.EventStatusMaterialEffectEnded
// 0x0014
struct FEventStatusMaterialEffectEnded
{
	struct FName                                       MaterialParamName;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CanShowMaterialParam;                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FadeOutAcceleration;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StatusEffects.EventStatusMaterialEffectStarted
// 0x0030
struct FEventStatusMaterialEffectStarted
{
	struct FName                                       MaterialParamName;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CanShowMaterialParam;                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TintParamName;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TintColor;                                                // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              TargetEffectStrength;                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FadeInAcceleration;                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StatusEffects.EventStatusScreenEffectEnded
// 0x000C
struct FEventStatusScreenEffectEnded
{
	struct FName                                       MaterialParamName;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FadeOutAcceleration;                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StatusEffects.EventStatusScreenSpaceParticleEffectEnded
// 0x0008
struct FEventStatusScreenSpaceParticleEffectEnded
{
	class UObject*                                     ParticleSystem;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StatusEffects.EventStatusScreenSpaceParticleEffectStarted
// 0x0008
struct FEventStatusScreenSpaceParticleEffectStarted
{
	class UObject*                                     ParticleSystem;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StatusEffects.EventStatusScreenEffectStarted
// 0x0028
struct FEventStatusScreenEffectStarted
{
	struct FName                                       MaterialParamName;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TintParamName;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TintColor;                                                // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              TargetEffectStrength;                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FadeInAcceleration;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StatusEffects.EventExitedSurfaceMaterialStatusZone
// 0x0001
struct FEventExitedSurfaceMaterialStatusZone
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct StatusEffects.EventEnteredSurfaceMaterialStatusZone
// 0x0010
struct FEventEnteredSurfaceMaterialStatusZone
{
	TScriptInterface<class USurfaceMaterialStatusZoneInterface> EnteredZone;                                              // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
