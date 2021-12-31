// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ActionStateMachine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActionStateMachine.ActionStateMachineComponent.Server_RequestActionWithMessageForCurrentState
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// FActionStateChangeRequestId    InEpochId                      (ConstParm, Parm)
// FActionStateChangeRequestId    InRequestId                    (ConstParm, Parm)
// FSerialisedActionStateInfo     InSerialisedActionStateConstructionInfo (ConstParm, Parm, ReferenceParm)
// FSerialisedActionStateMessage  InSerialisedPreviousStateMessage (ConstParm, Parm, ReferenceParm)

void UActionStateMachineComponent::Server_RequestActionWithMessageForCurrentState(const FActionStateChangeRequestId& InEpochId, const FActionStateChangeRequestId& InRequestId, const FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo, const FSerialisedActionStateMessage& InSerialisedPreviousStateMessage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.Server_RequestActionWithMessageForCurrentState"));

	UActionStateMachineComponent_Server_RequestActionWithMessageForCurrentState_Params params;
	params.InEpochId = InEpochId;
	params.InRequestId = InRequestId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;
	params.InSerialisedPreviousStateMessage = InSerialisedPreviousStateMessage;

	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponent.Server_RequestAction
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// FActionStateChangeRequestId    InEpochId                      (ConstParm, Parm)
// FActionStateChangeRequestId    InRequestId                    (ConstParm, Parm)
// FSerialisedActionStateInfo     InSerialisedActionStateConstructionInfo (ConstParm, Parm, ReferenceParm)
// TEnumAsByte<EActionPredictionType> ClientPredicted                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UActionStateMachineComponent::Server_RequestAction(const FActionStateChangeRequestId& InEpochId, const FActionStateChangeRequestId& InRequestId, const FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo, TEnumAsByte<EActionPredictionType> ClientPredicted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.Server_RequestAction"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.PostNetInit"));

	UActionStateMachineComponent_PostNetInit_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponent.OnNetOwnershipChanged
// (Final, Native, Protected)

void UActionStateMachineComponent::OnNetOwnershipChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.OnNetOwnershipChanged"));

	UActionStateMachineComponent_OnNetOwnershipChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushSerialisableData
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// FActionStateChangeRequestId    InEpochId                      (ConstParm, Parm)
// FSerialisedActionStateInfo     InSerialisedActionStateSerialisationStateInfo (ConstParm, Parm, ReferenceParm)

void UActionStateMachineComponent::Multicast_PushSerialisableData(const FActionStateChangeRequestId& InEpochId, const FSerialisedActionStateInfo& InSerialisedActionStateSerialisationStateInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushSerialisableData"));

	UActionStateMachineComponent_Multicast_PushSerialisableData_Params params;
	params.InEpochId = InEpochId;
	params.InSerialisedActionStateSerialisationStateInfo = InSerialisedActionStateSerialisationStateInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushActionFromRequest
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// FActionStateChangeRequestId    InEpochId                      (ConstParm, Parm)
// FSerialisedActionStateInfo     InSerialisedActionStateConstructionInfo (ConstParm, Parm, ReferenceParm)

void UActionStateMachineComponent::Multicast_PushActionFromRequest(const FActionStateChangeRequestId& InEpochId, const FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushActionFromRequest"));

	UActionStateMachineComponent_Multicast_PushActionFromRequest_Params params;
	params.InEpochId = InEpochId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushAction
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// FActionStateChangeRequestId    InEpochId                      (ConstParm, Parm)
// FSerialisedActionStateInfo     InSerialisedActionStateConstructionInfo (ConstParm, Parm, ReferenceParm)

void UActionStateMachineComponent::Multicast_PushAction(const FActionStateChangeRequestId& InEpochId, const FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushAction"));

	UActionStateMachineComponent_Multicast_PushAction_Params params;
	params.InEpochId = InEpochId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponent.End
// (Final, Native, Public, BlueprintCallable)

void UActionStateMachineComponent::End()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.End"));

	UActionStateMachineComponent_End_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponent.Client_ResetStateMachine
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// FResetStateMachineRpc          Rpc                            (ConstParm, Parm)

void UActionStateMachineComponent::Client_ResetStateMachine(const FResetStateMachineRpc& Rpc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.Client_ResetStateMachine"));

	UActionStateMachineComponent_Client_ResetStateMachine_Params params;
	params.Rpc = Rpc;

	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponent.Client_CorrectAction
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// FActionStateChangeRequestId    InEpochId                      (ConstParm, Parm)
// FActionStateChangeRequestId    InRequestId                    (ConstParm, Parm)
// FSerialisedActionStateInfo     InSerialisedActionStateConstructionInfo (ConstParm, Parm, ReferenceParm)

void UActionStateMachineComponent::Client_CorrectAction(const FActionStateChangeRequestId& InEpochId, const FActionStateChangeRequestId& InRequestId, const FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.Client_CorrectAction"));

	UActionStateMachineComponent_Client_CorrectAction_Params params;
	params.InEpochId = InEpochId;
	params.InRequestId = InRequestId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPassesExceptForId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UActionStateMachineComponent*  InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// UClass*                        StateId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::SetTestStateValidatorThatAlwaysPassesExceptForId(UActionStateMachineComponent* InComponent, UClass* StateId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPassesExceptForId"));

	UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysPassesExceptForId_Params params;
	params.InComponent = InComponent;
	params.StateId = StateId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPasses
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UActionStateMachineComponent*  InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::SetTestStateValidatorThatAlwaysPasses(UActionStateMachineComponent* InComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPasses"));

	UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysPasses_Params params;
	params.InComponent = InComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysFails
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UActionStateMachineComponent*  InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::SetTestStateValidatorThatAlwaysFails(UActionStateMachineComponent* InComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysFails"));

	UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysFails_Params params;
	params.InComponent = InComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactoryChangeToNullOnUpdate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UActionStateMachineComponent*  InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::SetTestStateFactoryChangeToNullOnUpdate(UActionStateMachineComponent* InComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactoryChangeToNullOnUpdate"));

	UActionStateMachineComponentTestFunctions_SetTestStateFactoryChangeToNullOnUpdate_Params params;
	params.InComponent = InComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UActionStateMachineComponent*  InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::SetTestStateFactory(UActionStateMachineComponent* InComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactory"));

	UActionStateMachineComponentTestFunctions_SetTestStateFactory_Params params;
	params.InComponent = InComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetCustomClientValidationTestStateFactory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UActionStateMachineComponent*  InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// UCustomClientValidityCheckCallback* InCallback                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::SetCustomClientValidationTestStateFactory(UActionStateMachineComponent* InComponent, UCustomClientValidityCheckCallback* InCallback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetCustomClientValidationTestStateFactory"));

	UActionStateMachineComponentTestFunctions_SetCustomClientValidationTestStateFactory_Params params;
	params.InComponent = InComponent;
	params.InCallback = InCallback;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestUnpredictedTestActionStateWithIdOnTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UActionStateMachineComponent*  InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        ClientStateId                  (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        ServerStateId                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::RequestUnpredictedTestActionStateWithIdOnTrack(UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, UClass* ClientStateId, UClass* ServerStateId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestUnpredictedTestActionStateWithIdOnTrack"));

	UActionStateMachineComponentTestFunctions_RequestUnpredictedTestActionStateWithIdOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;
	params.ClientStateId = ClientStateId;
	params.ServerStateId = ServerStateId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestTestActionStateWithIdOnTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UActionStateMachineComponent*  InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        StateId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::RequestTestActionStateWithIdOnTrack(UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, UClass* StateId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestTestActionStateWithIdOnTrack"));

	UActionStateMachineComponentTestFunctions_RequestTestActionStateWithIdOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;
	params.StateId = StateId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestNullActionStateOnTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UActionStateMachineComponent*  InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::RequestNullActionStateOnTrack(UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestNullActionStateOnTrack"));

	UActionStateMachineComponentTestFunctions_RequestNullActionStateOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.PushTestActionStateSerialisableDataOnTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UActionStateMachineComponent*  InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        StateId                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            DataValue                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UActionStateMachineComponentTestFunctions::PushTestActionStateSerialisableDataOnTrack(UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, UClass* StateId, int DataValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.PushTestActionStateSerialisableDataOnTrack"));

	UActionStateMachineComponentTestFunctions_PushTestActionStateSerialisableDataOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;
	params.StateId = StateId;
	params.DataValue = DataValue;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.IsActionStateTypeActiveOnTrack
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// UActionStateMachineComponent*  InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        StateId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::IsActionStateTypeActiveOnTrack(UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, UClass* StateId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.IsActionStateTypeActiveOnTrack"));

	UActionStateMachineComponentTestFunctions_IsActionStateTypeActiveOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;
	params.StateId = StateId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTypeOfActionStateActiveOnTrack
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// UActionStateMachineComponent*  InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UClass* UActionStateMachineComponentTestFunctions::GetTypeOfActionStateActiveOnTrack(UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTypeOfActionStateActiveOnTrack"));

	UActionStateMachineComponentTestFunctions_GetTypeOfActionStateActiveOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTestActionStateSerialisableDataOnTrack
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UActionStateMachineComponent*  InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData)
// FTestActionStateSerialisableData Data                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::GetTestActionStateSerialisableDataOnTrack(UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, FTestActionStateSerialisableData* Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTestActionStateSerialisableDataOnTrack"));

	UActionStateMachineComponentTestFunctions_GetTestActionStateSerialisableDataOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.CreateCustomClientValidityCheckCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UCustomClientValidityCheckCallback* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UCustomClientValidityCheckCallback* UActionStateMachineComponentTestFunctions::CreateCustomClientValidityCheckCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.CreateCustomClientValidityCheckCallback"));

	UActionStateMachineComponentTestFunctions_CreateCustomClientValidityCheckCallback_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStatePriorityTableUtility.GetPriority
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FActionStatePriorityTable      PriorityTable                  (Parm, OutParm, ReferenceParm)
// UClass*                        InStateA                       (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        InStateB                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EActionStatePriority> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EActionStatePriority> UActionStatePriorityTableUtility::GetPriority(UClass* InStateA, UClass* InStateB, FActionStatePriorityTable* PriorityTable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStatePriorityTableUtility.GetPriority"));

	UActionStatePriorityTableUtility_GetPriority_Params params;
	params.InStateA = InStateA;
	params.InStateB = InStateB;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PriorityTable != nullptr)
		*PriorityTable = params.PriorityTable;

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStatePriorityTableUtility.CreatePriorityTable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// UActionStatePriorityTableData* Data                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FActionStatePriorityTable      ReturnValue                    (Parm, OutParm, ReturnParm)

FActionStatePriorityTable UActionStatePriorityTableUtility::CreatePriorityTable(UActionStatePriorityTableData* Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStatePriorityTableUtility.CreatePriorityTable"));

	UActionStatePriorityTableUtility_CreatePriorityTable_Params params;
	params.Data = Data;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.IsValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FSerialisedActionStateInfo     TestStruct                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USerialisedActionStateConstructionInfoTestFunctions::IsValid(const FSerialisedActionStateInfo& TestStruct)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.IsValid"));

	USerialisedActionStateConstructionInfoTestFunctions_IsValid_Params params;
	params.TestStruct = TestStruct;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfoWithInner
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FSerialisedActionStateInfo     TestStruct                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USerialisedActionStateConstructionInfoTestFunctions::HasTestConstructionInfoWithInner(const FSerialisedActionStateInfo& TestStruct)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfoWithInner"));

	USerialisedActionStateConstructionInfoTestFunctions_HasTestConstructionInfoWithInner_Params params;
	params.TestStruct = TestStruct;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FSerialisedActionStateInfo     TestStruct                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USerialisedActionStateConstructionInfoTestFunctions::HasTestConstructionInfo(const FSerialisedActionStateInfo& TestStruct)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfo"));

	USerialisedActionStateConstructionInfoTestFunctions_HasTestConstructionInfo_Params params;
	params.TestStruct = TestStruct;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfoWithInner
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FSerialisedActionStateInfo     TestStruct                     (ConstParm, Parm, OutParm, ReferenceParm)
// FTestActionStateConstructionInfoWithInner ReturnValue                    (Parm, OutParm, ReturnParm)

FTestActionStateConstructionInfoWithInner USerialisedActionStateConstructionInfoTestFunctions::GetTestConstructionInfoWithInner(const FSerialisedActionStateInfo& TestStruct)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfoWithInner"));

	USerialisedActionStateConstructionInfoTestFunctions_GetTestConstructionInfoWithInner_Params params;
	params.TestStruct = TestStruct;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FSerialisedActionStateInfo     TestStruct                     (ConstParm, Parm, OutParm, ReferenceParm)
// FTestActionStateConstructionInfo ReturnValue                    (Parm, OutParm, ReturnParm)

FTestActionStateConstructionInfo USerialisedActionStateConstructionInfoTestFunctions::GetTestConstructionInfo(const FSerialisedActionStateInfo& TestStruct)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfo"));

	USerialisedActionStateConstructionInfoTestFunctions_GetTestConstructionInfo_Params params;
	params.TestStruct = TestStruct;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestSerialisableData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UClass*                        Id                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            IntProp                        (Parm, ZeroConstructor, IsPlainOldData)
// FSerialisedActionStateInfo     ReturnValue                    (Parm, OutParm, ReturnParm)

FSerialisedActionStateInfo USerialisedActionStateConstructionInfoTestFunctions::CreateTestSerialisableData(UClass* Id, int IntProp)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestSerialisableData"));

	USerialisedActionStateConstructionInfoTestFunctions_CreateTestSerialisableData_Params params;
	params.Id = Id;
	params.IntProp = IntProp;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfoWithInner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UClass*                        Id                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          FloatProp                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           BoolProp                       (Parm, ZeroConstructor, IsPlainOldData)
// FString                        StringProp                     (Parm, ZeroConstructor)
// FSerialisedActionStateInfo     ReturnValue                    (Parm, OutParm, ReturnParm)

FSerialisedActionStateInfo USerialisedActionStateConstructionInfoTestFunctions::CreateTestConstructionInfoWithInner(UClass* Id, float FloatProp, bool BoolProp, const FString& StringProp)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfoWithInner"));

	USerialisedActionStateConstructionInfoTestFunctions_CreateTestConstructionInfoWithInner_Params params;
	params.Id = Id;
	params.FloatProp = FloatProp;
	params.BoolProp = BoolProp;
	params.StringProp = StringProp;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UClass*                        Id                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            IntProp                        (Parm, ZeroConstructor, IsPlainOldData)
// FSerialisedActionStateInfo     ReturnValue                    (Parm, OutParm, ReturnParm)

FSerialisedActionStateInfo USerialisedActionStateConstructionInfoTestFunctions::CreateTestConstructionInfo(UClass* Id, int IntProp)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfo"));

	USerialisedActionStateConstructionInfoTestFunctions_CreateTestConstructionInfo_Params params;
	params.Id = Id;
	params.IntProp = IntProp;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
