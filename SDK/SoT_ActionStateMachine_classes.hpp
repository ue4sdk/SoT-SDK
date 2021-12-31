#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ActionStateMachine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ActionStateMachine.ActionStateId
// 0x0000 (0x0028 - 0x0028)
class UActionStateId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActionStateMachine.ActionStateId"));
		return ptr;
	}

};


// Class ActionStateMachine.ActionStateCreatorDefinition
// 0x0000 (0x03D0 - 0x03D0)
class AActionStateCreatorDefinition : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActionStateMachine.ActionStateCreatorDefinition"));
		return ptr;
	}

};


// Class ActionStateMachine.TestActionStateCreatorDefinition
// 0x0018 (0x03E8 - 0x03D0)
class ATestActionStateCreatorDefinition : public AActionStateCreatorDefinition
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03D0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActionStateMachine.TestActionStateCreatorDefinition"));
		return ptr;
	}

};


// Class ActionStateMachine.CustomClientValidityActionState2Id
// 0x0000 (0x0028 - 0x0028)
class UCustomClientValidityActionState2Id : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActionStateMachine.CustomClientValidityActionState2Id"));
		return ptr;
	}

};


// Class ActionStateMachine.CustomClientValidityActionStateId
// 0x0000 (0x0028 - 0x0028)
class UCustomClientValidityActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActionStateMachine.CustomClientValidityActionStateId"));
		return ptr;
	}

};


// Class ActionStateMachine.NullActionStateId
// 0x0000 (0x0028 - 0x0028)
class UNullActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActionStateMachine.NullActionStateId"));
		return ptr;
	}

};


// Class ActionStateMachine.TestActionStateId
// 0x0000 (0x0028 - 0x0028)
class UTestActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActionStateMachine.TestActionStateId"));
		return ptr;
	}

};


// Class ActionStateMachine.TestActionStateId2
// 0x0000 (0x0028 - 0x0028)
class UTestActionStateId2 : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActionStateMachine.TestActionStateId2"));
		return ptr;
	}

};


// Class ActionStateMachine.ActionStateMachineComponent
// 0x0790 (0x0858 - 0x00C8)
class UActionStateMachineComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00C8(0x0018) MISSED OFFSET
	FScriptMulticastDelegate                           OnActionChangedOnTrack;                                   // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x768];                                     // 0x00F0(0x0768) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActionStateMachine.ActionStateMachineComponent"));
		return ptr;
	}


	void Server_RequestActionWithMessageForCurrentState(const FActionStateChangeRequestId& InEpochId, const FActionStateChangeRequestId& InRequestId, const FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo, const FSerialisedActionStateMessage& InSerialisedPreviousStateMessage);
	void Server_RequestAction(const FActionStateChangeRequestId& InEpochId, const FActionStateChangeRequestId& InRequestId, const FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo, TEnumAsByte<EActionPredictionType> ClientPredicted);
	void PostNetInit();
	void OnNetOwnershipChanged();
	void Multicast_PushSerialisableData(const FActionStateChangeRequestId& InEpochId, const FSerialisedActionStateInfo& InSerialisedActionStateSerialisationStateInfo);
	void Multicast_PushActionFromRequest(const FActionStateChangeRequestId& InEpochId, const FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo);
	void Multicast_PushAction(const FActionStateChangeRequestId& InEpochId, const FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo);
	void End();
	void Client_ResetStateMachine(const FResetStateMachineRpc& Rpc);
	void Client_CorrectAction(const FActionStateChangeRequestId& InEpochId, const FActionStateChangeRequestId& InRequestId, const FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo);
};


// Class ActionStateMachine.CustomClientValidityCheckCallback
// 0x0008 (0x0030 - 0x0028)
class UCustomClientValidityCheckCallback : public UObject
{
public:
	bool                                               ShouldPassClientValidation;                               // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActionStateMachine.CustomClientValidityCheckCallback"));
		return ptr;
	}

};


// Class ActionStateMachine.ActionStateMachineComponentTestFunctions
// 0x0000 (0x0028 - 0x0028)
class UActionStateMachineComponentTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActionStateMachine.ActionStateMachineComponentTestFunctions"));
		return ptr;
	}


	static bool SetTestStateValidatorThatAlwaysPassesExceptForId(UActionStateMachineComponent* InComponent, UClass* StateId);
	static bool SetTestStateValidatorThatAlwaysPasses(UActionStateMachineComponent* InComponent);
	static bool SetTestStateValidatorThatAlwaysFails(UActionStateMachineComponent* InComponent);
	static bool SetTestStateFactoryChangeToNullOnUpdate(UActionStateMachineComponent* InComponent);
	static bool SetTestStateFactory(UActionStateMachineComponent* InComponent);
	static bool SetCustomClientValidationTestStateFactory(UActionStateMachineComponent* InComponent, UCustomClientValidityCheckCallback* InCallback);
	static bool RequestUnpredictedTestActionStateWithIdOnTrack(UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, UClass* ClientStateId, UClass* ServerStateId);
	static bool RequestTestActionStateWithIdOnTrack(UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, UClass* StateId);
	static bool RequestNullActionStateOnTrack(UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId);
	static void PushTestActionStateSerialisableDataOnTrack(UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, UClass* StateId, int DataValue);
	static bool IsActionStateTypeActiveOnTrack(UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, UClass* StateId);
	static UClass* GetTypeOfActionStateActiveOnTrack(UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId);
	static bool GetTestActionStateSerialisableDataOnTrack(UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, FTestActionStateSerialisableData* Data);
	static UCustomClientValidityCheckCallback* CreateCustomClientValidityCheckCallback();
};


// Class ActionStateMachine.ActionStateMachineInterface
// 0x0000 (0x0028 - 0x0028)
class UActionStateMachineInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActionStateMachine.ActionStateMachineInterface"));
		return ptr;
	}

};


// Class ActionStateMachine.ActionStatePriorityTableData
// 0x0020 (0x0048 - 0x0028)
class UActionStatePriorityTableData : public UDataAsset
{
public:
	TArray<FActionStatePriorityRelationship>           StateDefaultValue;                                        // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<FActionStatePriorityList>                   PriorityTableEntry;                                       // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActionStateMachine.ActionStatePriorityTableData"));
		return ptr;
	}

};


// Class ActionStateMachine.ActionStatePriorityTableUtility
// 0x0000 (0x0028 - 0x0028)
class UActionStatePriorityTableUtility : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActionStateMachine.ActionStatePriorityTableUtility"));
		return ptr;
	}


	static TEnumAsByte<EActionStatePriority> GetPriority(UClass* InStateA, UClass* InStateB, FActionStatePriorityTable* PriorityTable);
	static FActionStatePriorityTable CreatePriorityTable(UActionStatePriorityTableData* Data);
};


// Class ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions
// 0x0000 (0x0028 - 0x0028)
class USerialisedActionStateConstructionInfoTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions"));
		return ptr;
	}


	static bool IsValid(const FSerialisedActionStateInfo& TestStruct);
	static bool HasTestConstructionInfoWithInner(const FSerialisedActionStateInfo& TestStruct);
	static bool HasTestConstructionInfo(const FSerialisedActionStateInfo& TestStruct);
	static FTestActionStateConstructionInfoWithInner GetTestConstructionInfoWithInner(const FSerialisedActionStateInfo& TestStruct);
	static FTestActionStateConstructionInfo GetTestConstructionInfo(const FSerialisedActionStateInfo& TestStruct);
	static FSerialisedActionStateInfo CreateTestSerialisableData(UClass* Id, int IntProp);
	static FSerialisedActionStateInfo CreateTestConstructionInfoWithInner(UClass* Id, float FloatProp, bool BoolProp, const FString& StringProp);
	static FSerialisedActionStateInfo CreateTestConstructionInfo(UClass* Id, int IntProp);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
