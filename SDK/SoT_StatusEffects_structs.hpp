#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct StatusEffects.FeatureToggledStatusResponseList
// 0x0018
struct FFeatureToggledStatusResponseList
{
	struct FName                                       Feature;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UStatusResponseAsset*>                ResponseAssets;                                           // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct StatusEffects.ActiveStatusEffect
// 0x0030
struct FActiveStatusEffect
{
	TArray<class UClass*>                              SourceStatus;                                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<class UStatusResponse*>                     ResponseTemplates;                                        // 0x0010(0x0010) (ZeroConstructor)
	TArray<class UStatusResponse*>                     InstancedResponses;                                       // 0x0020(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct StatusEffects.Status
// 0x0018
struct FStatus
{
	TArray<class UClass*>                              Type;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Intensity;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct StatusEffects.StatusEffectManagerComponentAggregateTickFunction
// 0x0010 (0x0058 - 0x0048)
struct FStatusEffectManagerComponentAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
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
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
