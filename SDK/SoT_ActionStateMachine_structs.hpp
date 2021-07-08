#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_ActionStateMachine_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ActionStateMachine.ActionStateChangeRequestId
// 0x0001
struct FActionStateChangeRequestId
{
	unsigned char                                      Raw;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ActionStateMachine.SerialisedActionStateInfo
// 0x0040
struct FSerialisedActionStateInfo
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct ActionStateMachine.SerialisedActionStateMessage
// 0x0018
struct FSerialisedActionStateMessage
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ActionStateMachine.SerialisedConstructionInfoStore
// 0x0140
struct FSerialisedConstructionInfoStore
{
	struct FSerialisedActionStateInfo                  SerialisedConstructionInfo[0x5];                          // 0x0000(0x0040)
};

// ScriptStruct ActionStateMachine.ResetStateMachineRpc
// 0x0150
struct FResetStateMachineRpc
{
	struct FActionStateChangeRequestId                 LatestEpochIds[0x5];                                      // 0x0000(0x0001)
	struct FActionStateChangeRequestId                 LatestRequestIds[0x5];                                    // 0x0005(0x0001)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FSerialisedConstructionInfoStore            PerTrackConstructionInfoStore;                            // 0x0010(0x0140)
};

// ScriptStruct ActionStateMachine.ActionStateSerialisableData
// 0x0030
struct FActionStateSerialisableData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UClass*                                      Id;                                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UScriptStruct*                               Type;                                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct ActionStateMachine.TestActionStateSerialisableData
// 0x0008 (0x0038 - 0x0030)
struct FTestActionStateSerialisableData : public FActionStateSerialisableData
{
	int                                                IntProp;                                                  // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ActionStateMachine.ActionStatePriorityRelationship
// 0x0010
struct FActionStatePriorityRelationship
{
	class UClass*                                      State;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EActionStatePriority>                  Priority;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ActionStateMachine.ActionStatePriorityList
// 0x0018
struct FActionStatePriorityList
{
	class UClass*                                      State;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FActionStatePriorityRelationship>    Entries;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ActionStateMachine.ActionStatePriorityTable
// 0x00A0
struct FActionStatePriorityTable
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct ActionStateMachine.ActionStateConstructionInfo
// 0x0028
struct FActionStateConstructionInfo
{
	class UClass*                                      Id;                                                       // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UScriptStruct*                               Type;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct ActionStateMachine.InnerTestStruct
// 0x0018
struct FInnerTestStruct
{
	bool                                               BoolProp;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class FString                                      StringProp;                                               // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ActionStateMachine.TestActionStateConstructionInfoWithInner
// 0x0020 (0x0048 - 0x0028)
struct FTestActionStateConstructionInfoWithInner : public FActionStateConstructionInfo
{
	float                                              FloatProp;                                                // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FInnerTestStruct                            InnerStruct;                                              // 0x0030(0x0018) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ActionStateMachine.TestActionStateConstructionInfo
// 0x0008 (0x0030 - 0x0028)
struct FTestActionStateConstructionInfo : public FActionStateConstructionInfo
{
	int                                                IntProp;                                                  // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ActionStateMachine.ActorActionStateConstructionInfo
// 0x0008 (0x0030 - 0x0028)
struct FActorActionStateConstructionInfo : public FActionStateConstructionInfo
{
	TWeakObjectPtr<class AActor>                       ActorOwner;                                               // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ActionStateMachine.ActionStateMessage
// 0x0010
struct FActionStateMessage
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UScriptStruct*                               Type;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct ActionStateMachine.InnerWithObjTestStruct
// 0x0008
struct FInnerWithObjTestStruct
{
	class UObject*                                     ObjPointer;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ActionStateMachine.TestActionStateConstructionInfoWithObjPointers
// 0x0020 (0x0048 - 0x0028)
struct FTestActionStateConstructionInfoWithObjPointers : public FActionStateConstructionInfo
{
	class UObject*                                     ObjPointer;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FInnerWithObjTestStruct                     Inner;                                                    // 0x0030(0x0008)
	TArray<class UObject*>                             Array;                                                    // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct ActionStateMachine.EventWaitingToSpawnActionStateEndedClient
// 0x0001
struct FEventWaitingToSpawnActionStateEndedClient
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ActionStateMachine.EventWaitingToSpawnActionStateStartedClient
// 0x0001
struct FEventWaitingToSpawnActionStateStartedClient
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ActionStateMachine.EventFirstPersonAnimaticActionStateEndedClient
// 0x0001
struct FEventFirstPersonAnimaticActionStateEndedClient
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ActionStateMachine.NullActionStateConstructionInfo
// 0x0000 (0x0030 - 0x0030)
struct FNullActionStateConstructionInfo : public FActorActionStateConstructionInfo
{

};

// ScriptStruct ActionStateMachine.TestActionStateMessage2
// 0x0000 (0x0010 - 0x0010)
struct FTestActionStateMessage2 : public FActionStateMessage
{

};

// ScriptStruct ActionStateMachine.TestActionStateMessage
// 0x0008 (0x0018 - 0x0010)
struct FTestActionStateMessage : public FActionStateMessage
{
	int                                                TestProperty;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ActionStateMachine.TestActorActionStateConstructionInfo
// 0x0008 (0x0038 - 0x0030)
struct FTestActorActionStateConstructionInfo : public FActorActionStateConstructionInfo
{
	int                                                IntProp;                                                  // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
