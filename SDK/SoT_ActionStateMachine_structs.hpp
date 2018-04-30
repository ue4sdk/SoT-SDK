#pragma once

// Sea of Thieves (1.0.5) SDK

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
	struct FSerialisedConstructionInfoStore            PerTrackConstructionInfoStore;                            // 0x0000(0x0140)
	unsigned char                                      UnknownData00[0xA3];                                      // 0x0140(0x00A3) MISSED OFFSET
	struct FActionStateChangeRequestId                 LatestEpochIds[0x5];                                      // 0x01E3(0x0001)
	struct FActionStateChangeRequestId                 LatestRequestIds[0x5];                                    // 0x01E3(0x0001)
};

// ScriptStruct ActionStateMachine.ActionStateSerialisableData
// 0x0030
struct FActionStateSerialisableData
{
	class UScriptStruct*                               Type;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UClass*                                      Id;                                                       // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ActionStateMachine.TestActionStateSerialisableData
// 0x0008 (0x0038 - 0x0030)
struct FTestActionStateSerialisableData : public FActionStateSerialisableData
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	int                                                IntProp;                                                  // 0x01E3(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ActionStateMachine.ActionStatePriorityRelationship
// 0x0010
struct FActionStatePriorityRelationship
{
	TEnumAsByte<EActionStatePriority>                  Priority;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class UClass*                                      State;                                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ActionStateMachine.ActionStatePriorityList
// 0x0018
struct FActionStatePriorityList
{
	TArray<struct FActionStatePriorityRelationship>    Entries;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class UClass*                                      State;                                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
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
	class UScriptStruct*                               Type;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UClass*                                      Id;                                                       // 0x01E3(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ActionStateMachine.InnerTestStruct
// 0x0018
struct FInnerTestStruct
{
	class FString                                      StringProp;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	bool                                               BoolProp;                                                 // 0x01E3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ActionStateMachine.TestActionStateConstructionInfoWithInner
// 0x0020 (0x0048 - 0x0028)
struct FTestActionStateConstructionInfoWithInner : public FActionStateConstructionInfo
{
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              FloatProp;                                                // 0x01E3(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FInnerTestStruct                            InnerStruct;                                              // 0x01E3(0x0018) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ActionStateMachine.TestActionStateConstructionInfo
// 0x0008 (0x0030 - 0x0028)
struct FTestActionStateConstructionInfo : public FActionStateConstructionInfo
{
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	int                                                IntProp;                                                  // 0x01E3(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ActionStateMachine.ActorActionStateConstructionInfo
// 0x0008 (0x0030 - 0x0028)
struct FActorActionStateConstructionInfo : public FActionStateConstructionInfo
{
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       ActorOwner;                                               // 0x01E3(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
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
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UObject*                                     ObjPointer;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FInnerWithObjTestStruct                     Inner;                                                    // 0x01E3(0x0008)
	TArray<class UObject*>                             Array;                                                    // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct ActionStateMachine.NullActionStateConstructionInfo
// 0x0000 (0x0030 - 0x0030)
struct FNullActionStateConstructionInfo : public FActorActionStateConstructionInfo
{

};

// ScriptStruct ActionStateMachine.TestActorActionStateConstructionInfo
// 0x0008 (0x0038 - 0x0030)
struct FTestActorActionStateConstructionInfo : public FActorActionStateConstructionInfo
{
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	int                                                IntProp;                                                  // 0x01E3(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
