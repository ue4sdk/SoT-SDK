#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_AthenaEngine_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaEngine.SerialisedRpc
// 0x0020
struct FSerialisedRpc
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class UScriptStruct*                               ContentsType;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaEngine.StringAssetClassPairFeatureOverride
// 0x0028
struct FStringAssetClassPairFeatureOverride
{
	struct FName                                       FeatureName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UClass>                            AssetClass;                                               // 0x0008(0x0020) (Edit)
};

// ScriptStruct AthenaEngine.StringAssetClassPair
// 0x0040
struct FStringAssetClassPair
{
	class FString                                      String;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TAssetPtr<class UClass>                            AssetClass;                                               // 0x0010(0x0020) (Edit)
	TArray<struct FStringAssetClassPairFeatureOverride> FeatureOverrides;                                         // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaEngine.BoxedRpc
// 0x0010
struct FBoxedRpc
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UScriptStruct*                               Type;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct AthenaEngine.PlayModeDefiniton
// 0x0028
struct FPlayModeDefiniton
{
	TArray<class FString>                              Tags;                                                     // 0x0000(0x0010) (ZeroConstructor)
	TArray<class FString>                              States;                                                   // 0x0010(0x0010) (ZeroConstructor)
	int                                                CrewMin;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CrewMax;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaEngine.ServicesStampId
// 0x0010
struct FServicesStampId
{
	class FString                                      StampId;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaEngine.ActorComponentSelector
// 0x0010
struct FActorComponentSelector
{
	struct FName                                       ComponentName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             CachedComponent;                                          // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct AthenaEngine.PlaySoundRpc
// 0x0010 (0x0020 - 0x0010)
struct FPlaySoundRpc : public FBoxedRpc
{
	class UWwiseEvent*                                 WwiseEvent;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               PlayOnTarget;                                             // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaEngine.EventCancelForceFeedback
// 0x0010
struct FEventCancelForceFeedback
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaEngine.EventTriggerForceFeedback
// 0x0018
struct FEventTriggerForceFeedback
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Looping;                                                  // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FName                                       Tag;                                                      // 0x000C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaEngine.AthenaAsyncAssetLoaderWrapper
// 0x0018
struct FAthenaAsyncAssetLoaderWrapper
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaEngine.EventMeshAssigned
// 0x0001
struct FEventMeshAssigned
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
