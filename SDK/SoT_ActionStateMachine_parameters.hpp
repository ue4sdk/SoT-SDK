#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ActionStateMachine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ActionStateMachine.ActionStateMachineComponent.Server_RequestActionWithMessageForCurrentState
struct UActionStateMachineComponent_Server_RequestActionWithMessageForCurrentState_Params
{
	FActionStateChangeRequestId                        InEpochId;                                                // (ConstParm, Parm)
	FActionStateChangeRequestId                        InRequestId;                                              // (ConstParm, Parm)
	FSerialisedActionStateInfo                         InSerialisedActionStateConstructionInfo;                  // (ConstParm, Parm, ReferenceParm)
	FSerialisedActionStateMessage                      InSerialisedPreviousStateMessage;                         // (ConstParm, Parm, ReferenceParm)
};

// Function ActionStateMachine.ActionStateMachineComponent.Server_RequestAction
struct UActionStateMachineComponent_Server_RequestAction_Params
{
	FActionStateChangeRequestId                        InEpochId;                                                // (ConstParm, Parm)
	FActionStateChangeRequestId                        InRequestId;                                              // (ConstParm, Parm)
	FSerialisedActionStateInfo                         InSerialisedActionStateConstructionInfo;                  // (ConstParm, Parm, ReferenceParm)
	TEnumAsByte<EActionPredictionType>                 ClientPredicted;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionStateMachine.ActionStateMachineComponent.PostNetInit
struct UActionStateMachineComponent_PostNetInit_Params
{
};

// Function ActionStateMachine.ActionStateMachineComponent.OnNetOwnershipChanged
struct UActionStateMachineComponent_OnNetOwnershipChanged_Params
{
};

// Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushSerialisableData
struct UActionStateMachineComponent_Multicast_PushSerialisableData_Params
{
	FActionStateChangeRequestId                        InEpochId;                                                // (ConstParm, Parm)
	FSerialisedActionStateInfo                         InSerialisedActionStateSerialisationStateInfo;            // (ConstParm, Parm, ReferenceParm)
};

// Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushActionFromRequest
struct UActionStateMachineComponent_Multicast_PushActionFromRequest_Params
{
	FActionStateChangeRequestId                        InEpochId;                                                // (ConstParm, Parm)
	FSerialisedActionStateInfo                         InSerialisedActionStateConstructionInfo;                  // (ConstParm, Parm, ReferenceParm)
};

// Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushAction
struct UActionStateMachineComponent_Multicast_PushAction_Params
{
	FActionStateChangeRequestId                        InEpochId;                                                // (ConstParm, Parm)
	FSerialisedActionStateInfo                         InSerialisedActionStateConstructionInfo;                  // (ConstParm, Parm, ReferenceParm)
};

// Function ActionStateMachine.ActionStateMachineComponent.End
struct UActionStateMachineComponent_End_Params
{
};

// Function ActionStateMachine.ActionStateMachineComponent.Client_ResetStateMachine
struct UActionStateMachineComponent_Client_ResetStateMachine_Params
{
	FResetStateMachineRpc                              Rpc;                                                      // (ConstParm, Parm)
};

// Function ActionStateMachine.ActionStateMachineComponent.Client_CorrectAction
struct UActionStateMachineComponent_Client_CorrectAction_Params
{
	FActionStateChangeRequestId                        InEpochId;                                                // (ConstParm, Parm)
	FActionStateChangeRequestId                        InRequestId;                                              // (ConstParm, Parm)
	FSerialisedActionStateInfo                         InSerialisedActionStateConstructionInfo;                  // (ConstParm, Parm, ReferenceParm)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPassesExceptForId
struct UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysPassesExceptForId_Params
{
	UActionStateMachineComponent*                      InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	UClass*                                            StateId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPasses
struct UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysPasses_Params
{
	UActionStateMachineComponent*                      InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysFails
struct UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysFails_Params
{
	UActionStateMachineComponent*                      InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactoryChangeToNullOnUpdate
struct UActionStateMachineComponentTestFunctions_SetTestStateFactoryChangeToNullOnUpdate_Params
{
	UActionStateMachineComponent*                      InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactory
struct UActionStateMachineComponentTestFunctions_SetTestStateFactory_Params
{
	UActionStateMachineComponent*                      InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetCustomClientValidationTestStateFactory
struct UActionStateMachineComponentTestFunctions_SetCustomClientValidationTestStateFactory_Params
{
	UActionStateMachineComponent*                      InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	UCustomClientValidityCheckCallback*                InCallback;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestUnpredictedTestActionStateWithIdOnTrack
struct UActionStateMachineComponentTestFunctions_RequestUnpredictedTestActionStateWithIdOnTrack_Params
{
	UActionStateMachineComponent*                      InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            ClientStateId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            ServerStateId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestTestActionStateWithIdOnTrack
struct UActionStateMachineComponentTestFunctions_RequestTestActionStateWithIdOnTrack_Params
{
	UActionStateMachineComponent*                      InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            StateId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestNullActionStateOnTrack
struct UActionStateMachineComponentTestFunctions_RequestNullActionStateOnTrack_Params
{
	UActionStateMachineComponent*                      InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.PushTestActionStateSerialisableDataOnTrack
struct UActionStateMachineComponentTestFunctions_PushTestActionStateSerialisableDataOnTrack_Params
{
	UActionStateMachineComponent*                      InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            StateId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DataValue;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.IsActionStateTypeActiveOnTrack
struct UActionStateMachineComponentTestFunctions_IsActionStateTypeActiveOnTrack_Params
{
	UActionStateMachineComponent*                      InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            StateId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTypeOfActionStateActiveOnTrack
struct UActionStateMachineComponentTestFunctions_GetTypeOfActionStateActiveOnTrack_Params
{
	UActionStateMachineComponent*                      InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTestActionStateSerialisableDataOnTrack
struct UActionStateMachineComponentTestFunctions_GetTestActionStateSerialisableDataOnTrack_Params
{
	UActionStateMachineComponent*                      InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	FTestActionStateSerialisableData                   Data;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.CreateCustomClientValidityCheckCallback
struct UActionStateMachineComponentTestFunctions_CreateCustomClientValidityCheckCallback_Params
{
	UCustomClientValidityCheckCallback*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionStateMachine.ActionStatePriorityTableUtility.GetPriority
struct UActionStatePriorityTableUtility_GetPriority_Params
{
	FActionStatePriorityTable                          PriorityTable;                                            // (Parm, OutParm, ReferenceParm)
	UClass*                                            InStateA;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            InStateB;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EActionStatePriority>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionStateMachine.ActionStatePriorityTableUtility.CreatePriorityTable
struct UActionStatePriorityTableUtility_CreatePriorityTable_Params
{
	UActionStatePriorityTableData*                     Data;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FActionStatePriorityTable                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.IsValid
struct USerialisedActionStateConstructionInfoTestFunctions_IsValid_Params
{
	FSerialisedActionStateInfo                         TestStruct;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfoWithInner
struct USerialisedActionStateConstructionInfoTestFunctions_HasTestConstructionInfoWithInner_Params
{
	FSerialisedActionStateInfo                         TestStruct;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfo
struct USerialisedActionStateConstructionInfoTestFunctions_HasTestConstructionInfo_Params
{
	FSerialisedActionStateInfo                         TestStruct;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfoWithInner
struct USerialisedActionStateConstructionInfoTestFunctions_GetTestConstructionInfoWithInner_Params
{
	FSerialisedActionStateInfo                         TestStruct;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	FTestActionStateConstructionInfoWithInner          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfo
struct USerialisedActionStateConstructionInfoTestFunctions_GetTestConstructionInfo_Params
{
	FSerialisedActionStateInfo                         TestStruct;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	FTestActionStateConstructionInfo                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestSerialisableData
struct USerialisedActionStateConstructionInfoTestFunctions_CreateTestSerialisableData_Params
{
	UClass*                                            Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IntProp;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	FSerialisedActionStateInfo                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfoWithInner
struct USerialisedActionStateConstructionInfoTestFunctions_CreateTestConstructionInfoWithInner_Params
{
	UClass*                                            Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FloatProp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BoolProp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            StringProp;                                               // (Parm, ZeroConstructor)
	FSerialisedActionStateInfo                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfo
struct USerialisedActionStateConstructionInfoTestFunctions_CreateTestConstructionInfo_Params
{
	UClass*                                            Id;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IntProp;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	FSerialisedActionStateInfo                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
