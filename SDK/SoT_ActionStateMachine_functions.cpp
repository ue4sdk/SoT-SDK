// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ActionStateMachine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActionStateMachine.ActionStateMachineComponent.Server_RequestAction
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FActionStateChangeRequestId InEpochId                      (ConstParm, Parm)
// struct FActionStateChangeRequestId InRequestId                    (ConstParm, Parm)
// struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo (ConstParm, Parm, ReferenceParm)
// TEnumAsByte<EActionPredictionType> ClientPredicted                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UActionStateMachineComponent::Server_RequestAction(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo, TEnumAsByte<EActionPredictionType> ClientPredicted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Server_RequestAction");

	UActionStateMachineComponent_Server_RequestAction_Params params;
	params.InEpochId = InEpochId;
	params.InRequestId = InRequestId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;
	params.ClientPredicted = ClientPredicted;

	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponent.PostNetInit
// (Final, Native, Public, BlueprintCallable)

void UActionStateMachineComponent::PostNetInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.PostNetInit");

	UActionStateMachineComponent_PostNetInit_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponent.OnNetOwnershipChanged
// (Final, Native, Protected)

void UActionStateMachineComponent::OnNetOwnershipChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.OnNetOwnershipChanged");

	UActionStateMachineComponent_OnNetOwnershipChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushSerialisableData
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FActionStateChangeRequestId InEpochId                      (ConstParm, Parm)
// struct FSerialisedActionStateInfo InSerialisedActionStateSerialisationStateInfo (ConstParm, Parm, ReferenceParm)

void UActionStateMachineComponent::Multicast_PushSerialisableData(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateSerialisationStateInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushSerialisableData");

	UActionStateMachineComponent_Multicast_PushSerialisableData_Params params;
	params.InEpochId = InEpochId;
	params.InSerialisedActionStateSerialisationStateInfo = InSerialisedActionStateSerialisationStateInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushActionFromRequest
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FActionStateChangeRequestId InEpochId                      (ConstParm, Parm)
// struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo (ConstParm, Parm, ReferenceParm)

void UActionStateMachineComponent::Multicast_PushActionFromRequest(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushActionFromRequest");

	UActionStateMachineComponent_Multicast_PushActionFromRequest_Params params;
	params.InEpochId = InEpochId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushAction
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FActionStateChangeRequestId InEpochId                      (ConstParm, Parm)
// struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo (ConstParm, Parm, ReferenceParm)

void UActionStateMachineComponent::Multicast_PushAction(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushAction");

	UActionStateMachineComponent_Multicast_PushAction_Params params;
	params.InEpochId = InEpochId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponent.End
// (Final, Native, Public, BlueprintCallable)

void UActionStateMachineComponent::End()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.End");

	UActionStateMachineComponent_End_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponent.Client_ResetStateMachine
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FResetStateMachineRpc   Rpc                            (ConstParm, Parm)

void UActionStateMachineComponent::Client_ResetStateMachine(const struct FResetStateMachineRpc& Rpc)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Client_ResetStateMachine");

	UActionStateMachineComponent_Client_ResetStateMachine_Params params;
	params.Rpc = Rpc;

	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponent.Client_CorrectAction
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FActionStateChangeRequestId InEpochId                      (ConstParm, Parm)
// struct FActionStateChangeRequestId InRequestId                    (ConstParm, Parm)
// struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo (ConstParm, Parm, ReferenceParm)

void UActionStateMachineComponent::Client_CorrectAction(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Client_CorrectAction");

	UActionStateMachineComponent_Client_CorrectAction_Params params;
	params.InEpochId = InEpochId;
	params.InRequestId = InRequestId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPassesExceptForId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass*                  StateId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::STATIC_SetTestStateValidatorThatAlwaysPassesExceptForId(class UActionStateMachineComponent* InComponent, class UClass* StateId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPassesExceptForId");

	UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysPassesExceptForId_Params params;
	params.InComponent = InComponent;
	params.StateId = StateId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPasses
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::STATIC_SetTestStateValidatorThatAlwaysPasses(class UActionStateMachineComponent* InComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPasses");

	UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysPasses_Params params;
	params.InComponent = InComponent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysFails
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::STATIC_SetTestStateValidatorThatAlwaysFails(class UActionStateMachineComponent* InComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysFails");

	UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysFails_Params params;
	params.InComponent = InComponent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactoryChangeToNullOnUpdate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::STATIC_SetTestStateFactoryChangeToNullOnUpdate(class UActionStateMachineComponent* InComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactoryChangeToNullOnUpdate");

	UActionStateMachineComponentTestFunctions_SetTestStateFactoryChangeToNullOnUpdate_Params params;
	params.InComponent = InComponent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::STATIC_SetTestStateFactory(class UActionStateMachineComponent* InComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactory");

	UActionStateMachineComponentTestFunctions_SetTestStateFactory_Params params;
	params.InComponent = InComponent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetCustomClientValidationTestStateFactory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UCustomClientValidityCheckCallback* InCallback                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::STATIC_SetCustomClientValidationTestStateFactory(class UActionStateMachineComponent* InComponent, class UCustomClientValidityCheckCallback* InCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetCustomClientValidationTestStateFactory");

	UActionStateMachineComponentTestFunctions_SetCustomClientValidationTestStateFactory_Params params;
	params.InComponent = InComponent;
	params.InCallback = InCallback;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestUnpredictedTestActionStateWithIdOnTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ClientStateId                  (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ServerStateId                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::STATIC_RequestUnpredictedTestActionStateWithIdOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, class UClass* ClientStateId, class UClass* ServerStateId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestUnpredictedTestActionStateWithIdOnTrack");

	UActionStateMachineComponentTestFunctions_RequestUnpredictedTestActionStateWithIdOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;
	params.ClientStateId = ClientStateId;
	params.ServerStateId = ServerStateId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestTestActionStateWithIdOnTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  StateId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::STATIC_RequestTestActionStateWithIdOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, class UClass* StateId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestTestActionStateWithIdOnTrack");

	UActionStateMachineComponentTestFunctions_RequestTestActionStateWithIdOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;
	params.StateId = StateId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestNullActionStateOnTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::STATIC_RequestNullActionStateOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestNullActionStateOnTrack");

	UActionStateMachineComponentTestFunctions_RequestNullActionStateOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.PushTestActionStateSerialisableDataOnTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  StateId                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            DataValue                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UActionStateMachineComponentTestFunctions::STATIC_PushTestActionStateSerialisableDataOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, class UClass* StateId, int DataValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.PushTestActionStateSerialisableDataOnTrack");

	UActionStateMachineComponentTestFunctions_PushTestActionStateSerialisableDataOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;
	params.StateId = StateId;
	params.DataValue = DataValue;

	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.IsActionStateTypeActiveOnTrack
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  StateId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::STATIC_IsActionStateTypeActiveOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, class UClass* StateId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.IsActionStateTypeActiveOnTrack");

	UActionStateMachineComponentTestFunctions_IsActionStateTypeActiveOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;
	params.StateId = StateId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTypeOfActionStateActiveOnTrack
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UActionStateMachineComponentTestFunctions::STATIC_GetTypeOfActionStateActiveOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTypeOfActionStateActiveOnTrack");

	UActionStateMachineComponentTestFunctions_GetTypeOfActionStateActiveOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTestActionStateSerialisableDataOnTrack
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FTestActionStateSerialisableData Data                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::STATIC_GetTestActionStateSerialisableDataOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, struct FTestActionStateSerialisableData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTestActionStateSerialisableDataOnTrack");

	UActionStateMachineComponentTestFunctions_GetTestActionStateSerialisableDataOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;

	UObject::ProcessEvent(fn, &params);

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.CreateCustomClientValidityCheckCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCustomClientValidityCheckCallback* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCustomClientValidityCheckCallback* UActionStateMachineComponentTestFunctions::STATIC_CreateCustomClientValidityCheckCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.CreateCustomClientValidityCheckCallback");

	UActionStateMachineComponentTestFunctions_CreateCustomClientValidityCheckCallback_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStatePriorityTableUtility.GetPriority
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FActionStatePriorityTable PriorityTable                  (Parm, OutParm, ReferenceParm)
// class UClass*                  InStateA                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  InStateB                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EActionStatePriority> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EActionStatePriority> UActionStatePriorityTableUtility::STATIC_GetPriority(class UClass* InStateA, class UClass* InStateB, struct FActionStatePriorityTable* PriorityTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStatePriorityTableUtility.GetPriority");

	UActionStatePriorityTableUtility_GetPriority_Params params;
	params.InStateA = InStateA;
	params.InStateB = InStateB;

	UObject::ProcessEvent(fn, &params);

	if (PriorityTable != nullptr)
		*PriorityTable = params.PriorityTable;

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStatePriorityTableUtility.CreatePriorityTable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActionStatePriorityTableData* Data                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FActionStatePriorityTable ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActionStatePriorityTable UActionStatePriorityTableUtility::STATIC_CreatePriorityTable(class UActionStatePriorityTableData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStatePriorityTableUtility.CreatePriorityTable");

	UActionStatePriorityTableUtility_CreatePriorityTable_Params params;
	params.Data = Data;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.IsValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSerialisedActionStateInfo TestStruct                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USerialisedActionStateConstructionInfoTestFunctions::STATIC_IsValid(const struct FSerialisedActionStateInfo& TestStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.IsValid");

	USerialisedActionStateConstructionInfoTestFunctions_IsValid_Params params;
	params.TestStruct = TestStruct;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfoWithInner
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSerialisedActionStateInfo TestStruct                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USerialisedActionStateConstructionInfoTestFunctions::STATIC_HasTestConstructionInfoWithInner(const struct FSerialisedActionStateInfo& TestStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfoWithInner");

	USerialisedActionStateConstructionInfoTestFunctions_HasTestConstructionInfoWithInner_Params params;
	params.TestStruct = TestStruct;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSerialisedActionStateInfo TestStruct                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USerialisedActionStateConstructionInfoTestFunctions::STATIC_HasTestConstructionInfo(const struct FSerialisedActionStateInfo& TestStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfo");

	USerialisedActionStateConstructionInfoTestFunctions_HasTestConstructionInfo_Params params;
	params.TestStruct = TestStruct;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfoWithInner
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSerialisedActionStateInfo TestStruct                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTestActionStateConstructionInfoWithInner ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTestActionStateConstructionInfoWithInner USerialisedActionStateConstructionInfoTestFunctions::STATIC_GetTestConstructionInfoWithInner(const struct FSerialisedActionStateInfo& TestStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfoWithInner");

	USerialisedActionStateConstructionInfoTestFunctions_GetTestConstructionInfoWithInner_Params params;
	params.TestStruct = TestStruct;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSerialisedActionStateInfo TestStruct                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTestActionStateConstructionInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTestActionStateConstructionInfo USerialisedActionStateConstructionInfoTestFunctions::STATIC_GetTestConstructionInfo(const struct FSerialisedActionStateInfo& TestStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfo");

	USerialisedActionStateConstructionInfoTestFunctions_GetTestConstructionInfo_Params params;
	params.TestStruct = TestStruct;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestSerialisableData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Id                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            IntProp                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FSerialisedActionStateInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSerialisedActionStateInfo USerialisedActionStateConstructionInfoTestFunctions::STATIC_CreateTestSerialisableData(class UClass* Id, int IntProp)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestSerialisableData");

	USerialisedActionStateConstructionInfoTestFunctions_CreateTestSerialisableData_Params params;
	params.Id = Id;
	params.IntProp = IntProp;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfoWithInner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Id                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          FloatProp                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           BoolProp                       (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  StringProp                     (Parm, ZeroConstructor)
// struct FSerialisedActionStateInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSerialisedActionStateInfo USerialisedActionStateConstructionInfoTestFunctions::STATIC_CreateTestConstructionInfoWithInner(class UClass* Id, float FloatProp, bool BoolProp, const class FString& StringProp)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfoWithInner");

	USerialisedActionStateConstructionInfoTestFunctions_CreateTestConstructionInfoWithInner_Params params;
	params.Id = Id;
	params.FloatProp = FloatProp;
	params.BoolProp = BoolProp;
	params.StringProp = StringProp;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Id                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            IntProp                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FSerialisedActionStateInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSerialisedActionStateInfo USerialisedActionStateConstructionInfoTestFunctions::STATIC_CreateTestConstructionInfo(class UClass* Id, int IntProp)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfo");

	USerialisedActionStateConstructionInfoTestFunctions_CreateTestConstructionInfo_Params params;
	params.Id = Id;
	params.IntProp = IntProp;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
