#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Tales_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_MerchantContracts_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_AIModule_classes.hpp"
#include "SoT_EmissaryFramework_classes.hpp"
#include "SoT_PrioritisedPrompts_classes.hpp"
#include "SoT_TaleMaps_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Tales.QuestVariableAny
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableAny : public FQuestVariable
{

};

// ScriptStruct Tales.IslandTypeWeights
// 0x0014
struct FIslandTypeWeights
{
	float                                              FeatureIslandWeight;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ResourceIslandWeight;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OutpostIslandWeight;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SeapostIslandWeight;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FortIslandWeight;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.SplineFootprintPathTool
// 0x0001
struct FSplineFootprintPathTool
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Tales.TaleQuestCargoRunContractItem
// 0x0018
struct FTaleQuestCargoRunContractItem
{
	UClass*                                            ItemToCollect;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Tales.TaleQuestDeliveryRequest
// 0x0038
struct FTaleQuestDeliveryRequest
{
	int                                                Id;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	FMerchantContractItemDesc                          Item;                                                     // 0x0008(0x0028) (Edit, BlueprintVisible)
	int                                                NumToDeliver;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumToAllocate;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.TrackedActorData
// 0x0010
struct FTrackedActorData
{
	AActor*                                            Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Tales.CriticalActorDelegateData
// 0x0048
struct FCriticalActorDelegateData
{
	AActor*                                            CriticalActor;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	FText                                              FailureMessage;                                           // 0x0008(0x0038)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct Tales.SnapshottedActorData
// 0x0068
struct FSnapshottedActorData
{
	TScriptInterface<class USnapshotOwnerInterface>    Instagator;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	FGuid                                              SnapshotID;                                               // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               ActorWasCritical;                                         // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ActorWasTracked;                                          // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	FText                                              FailureMessage;                                           // 0x0028(0x0038)
	AItemInfo*                                         StoredItemInfo;                                           // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.PhasedActor
// 0x0020
struct FPhasedActor
{
	AActor*                                            MapActor;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	AActor*                                            Actor;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Tales.PhasedItem
// 0x0028
struct FPhasedItem
{
	AItemProxy*                                        ItemProxy;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	AItemInfo*                                         ItemInfo;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               Tracked;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0011(0x0017) MISSED OFFSET
};

// ScriptStruct Tales.MigrationActionPair
// 0x0010
struct FMigrationActionPair
{
	FTaleResourceHandle                                AllocatedResourceHandle;                                  // 0x0000(0x0008)
	UTaleMigrationAction*                              MigrationAction;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.QuestVariableArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableSetEQSTaleContextValue
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableSetEQSTaleContextValue : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableLinkEQSContext
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableLinkEQSContext : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableItemDescType
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableItemDescType : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableItemInfo
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableItemInfo : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariablePrioritisedPrompt
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariablePrioritisedPrompt : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableBountyTargetArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableBountyTargetArray : public FQuestVariable
{

};

// ScriptStruct Tales.TaleQuestDeliverableItem
// 0x0040
struct FTaleQuestDeliverableItem
{
	FText                                              Name;                                                     // 0x0000(0x0038) (Edit, BlueprintVisible)
	UTexture*                                          Icon;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.QuestVariableMerchantItemArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableMerchantItemArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableMerchantItem
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableMerchantItem : public FQuestVariable
{

};

// ScriptStruct Tales.TaleActorSpawnParameters
// 0x0003
struct FTaleActorSpawnParameters
{
	bool                                               Tracked;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               GatherForMigration;                                       // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DeferredSpawning;                                         // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.TaleQuestDesc
// 0x0058 (0x0080 - 0x0028)
struct FTaleQuestDesc : public FQuestDesc
{
	UTaleQuestStepDesc*                                Root;                                                     // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	UObject*                                           Definition;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	FText                                              TaleFailMessage;                                          // 0x0038(0x0038)
	FName                                              TaleFailBannerTag;                                        // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               ShouldFireStartTallTaleTrackedObjective;                  // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               Development;                                              // 0x0079(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x007A(0x0006) MISSED OFFSET
};

// ScriptStruct Tales.TaleQuestToggledDefinition
// 0x0010
struct FTaleQuestToggledDefinition
{
	FName                                              FeatureToggle;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UClass*                                            Definition;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.CriticalActorWrapper
// 0x0040
struct FCriticalActorWrapper
{
	AActor*                                            CriticalActor;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct Tales.QuestVariableActorArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableActorArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableObjectArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableObjectArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableClassArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableClassArray : public FQuestVariable
{

};

// ScriptStruct Tales.ParticpantToolGroup
// 0x0020
struct FParticpantToolGroup
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Tales.QuestVariableRotator
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableRotator : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableActorAssetType
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableActorAssetType : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableTaleResourceHandle
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableTaleResourceHandle : public FQuestVariable
{

};

// ScriptStruct Tales.ActorSpawnedAutomationEvent
// 0x0008
struct FActorSpawnedAutomationEvent
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.EventSpawnedTallTaleQuestItem
// 0x0001
struct FEventSpawnedTallTaleQuestItem
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Tales.TaleQuestSelectorServiceSeedSetTelemetryEvent
// 0x0004
struct FTaleQuestSelectorServiceSeedSetTelemetryEvent
{
	int                                                Seed;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.PlaySequencerAutomationEvent
// 0x0018
struct FPlaySequencerAutomationEvent
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Tales.StepMerchantItemDesc
// 0x0040
struct FStepMerchantItemDesc
{
	FText                                              Name;                                                     // 0x0000(0x0038) (Edit, BlueprintVisible)
	UTexture*                                          Icon;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.QuestVariableActorAssetTypeArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableActorAssetTypeArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableItemDescTypeArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableItemDescTypeArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariablePageLayout
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariablePageLayout : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableTexture
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableTexture : public FQuestVariable
{

};

// ScriptStruct Tales.TaleQuestContextInvalidTelemetryEvent
// 0x0010
struct FTaleQuestContextInvalidTelemetryEvent
{
	FName                                              StepType;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	FName                                              Tale;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Tales.StepBountyTargetDesc
// 0x0040
struct FStepBountyTargetDesc
{
	FText                                              Name;                                                     // 0x0000(0x0038) (Edit, BlueprintVisible)
	UTexture*                                          Portrait;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
