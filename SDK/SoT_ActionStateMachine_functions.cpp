// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ActionStateMachine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActionStateMachine.ActionStateMachineComponent.Server_RequestActionWithMessageForCurrentState
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FActionStateChangeRequestId InEpochId                      (ConstParm, Parm)
// struct FActionStateChangeRequestId InRequestId                    (ConstParm, Parm)
// struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo (ConstParm, Parm, ReferenceParm)
// struct FSerialisedActionStateMessage InSerialisedPreviousStateMessage (ConstParm, Parm, ReferenceParm)

void UActionStateMachineComponent::Server_RequestActionWithMessageForCurrentState(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo, const struct FSerialisedActionStateMessage& InSerialisedPreviousStateMessage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.Server_RequestActionWithMessageForCurrentState"));

	struct
	{
		struct FActionStateChangeRequestId InEpochId;
		struct FActionStateChangeRequestId InRequestId;
		struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo;
		struct FSerialisedActionStateMessage InSerialisedPreviousStateMessage;
	} params;

	params.InEpochId = InEpochId;
	params.InRequestId = InRequestId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;
	params.InSerialisedPreviousStateMessage = InSerialisedPreviousStateMessage;

	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponent.Server_RequestAction
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FActionStateChangeRequestId InEpochId                      (ConstParm, Parm)
// struct FActionStateChangeRequestId InRequestId                    (ConstParm, Parm)
// struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo (ConstParm, Parm, ReferenceParm)
// TEnumAsByte<EActionPredictionType> ClientPredicted                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UActionStateMachineComponent::Server_RequestAction(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo, TEnumAsByte<EActionPredictionType> ClientPredicted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.Server_RequestAction"));

	struct
	{
		struct FActionStateChangeRequestId InEpochId;
		struct FActionStateChangeRequestId InRequestId;
		struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo;
		TEnumAsByte<EActionPredictionType> ClientPredicted;
	} params;

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponent.OnNetOwnershipChanged
// (Final, Native, Protected)

void UActionStateMachineComponent::OnNetOwnershipChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.OnNetOwnershipChanged"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushSerialisableData
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FActionStateChangeRequestId InEpochId                      (ConstParm, Parm)
// struct FSerialisedActionStateInfo InSerialisedActionStateSerialisationStateInfo (ConstParm, Parm, ReferenceParm)

void UActionStateMachineComponent::Multicast_PushSerialisableData(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateSerialisationStateInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushSerialisableData"));

	struct
	{
		struct FActionStateChangeRequestId InEpochId;
		struct FSerialisedActionStateInfo InSerialisedActionStateSerialisationStateInfo;
	} params;

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushActionFromRequest"));

	struct
	{
		struct FActionStateChangeRequestId InEpochId;
		struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo;
	} params;

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushAction"));

	struct
	{
		struct FActionStateChangeRequestId InEpochId;
		struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo;
	} params;

	params.InEpochId = InEpochId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponent.End
// (Final, Native, Public, BlueprintCallable)

void UActionStateMachineComponent::End()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.End"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ActionStateMachine.ActionStateMachineComponent.Client_ResetStateMachine
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FResetStateMachineRpc   Rpc                            (ConstParm, Parm)

void UActionStateMachineComponent::Client_ResetStateMachine(const struct FResetStateMachineRpc& Rpc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.Client_ResetStateMachine"));

	struct
	{
		struct FResetStateMachineRpc   Rpc;
	} params;

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponent.Client_CorrectAction"));

	struct
	{
		struct FActionStateChangeRequestId InEpochId;
		struct FActionStateChangeRequestId InRequestId;
		struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo;
	} params;

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

bool UActionStateMachineComponentTestFunctions::SetTestStateValidatorThatAlwaysPassesExceptForId(class UActionStateMachineComponent* InComponent, class UClass* StateId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPassesExceptForId"));

	struct
	{
		class UActionStateMachineComponent* InComponent;
		class UClass*                  StateId;
		bool                           ReturnValue;
	} params;

	params.InComponent = InComponent;
	params.StateId = StateId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPasses
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::SetTestStateValidatorThatAlwaysPasses(class UActionStateMachineComponent* InComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPasses"));

	struct
	{
		class UActionStateMachineComponent* InComponent;
		bool                           ReturnValue;
	} params;

	params.InComponent = InComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysFails
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::SetTestStateValidatorThatAlwaysFails(class UActionStateMachineComponent* InComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysFails"));

	struct
	{
		class UActionStateMachineComponent* InComponent;
		bool                           ReturnValue;
	} params;

	params.InComponent = InComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactoryChangeToNullOnUpdate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::SetTestStateFactoryChangeToNullOnUpdate(class UActionStateMachineComponent* InComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactoryChangeToNullOnUpdate"));

	struct
	{
		class UActionStateMachineComponent* InComponent;
		bool                           ReturnValue;
	} params;

	params.InComponent = InComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::SetTestStateFactory(class UActionStateMachineComponent* InComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactory"));

	struct
	{
		class UActionStateMachineComponent* InComponent;
		bool                           ReturnValue;
	} params;

	params.InComponent = InComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetCustomClientValidationTestStateFactory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UCustomClientValidityCheckCallback* InCallback                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::SetCustomClientValidationTestStateFactory(class UActionStateMachineComponent* InComponent, class UCustomClientValidityCheckCallback* InCallback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetCustomClientValidationTestStateFactory"));

	struct
	{
		class UActionStateMachineComponent* InComponent;
		class UCustomClientValidityCheckCallback* InCallback;
		bool                           ReturnValue;
	} params;

	params.InComponent = InComponent;
	params.InCallback = InCallback;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

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

bool UActionStateMachineComponentTestFunctions::RequestUnpredictedTestActionStateWithIdOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, class UClass* ClientStateId, class UClass* ServerStateId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestUnpredictedTestActionStateWithIdOnTrack"));

	struct
	{
		class UActionStateMachineComponent* InComponent;
		TEnumAsByte<EActionStateMachineTrackId> TrackId;
		class UClass*                  ClientStateId;
		class UClass*                  ServerStateId;
		bool                           ReturnValue;
	} params;

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
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  StateId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::RequestTestActionStateWithIdOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, class UClass* StateId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestTestActionStateWithIdOnTrack"));

	struct
	{
		class UActionStateMachineComponent* InComponent;
		TEnumAsByte<EActionStateMachineTrackId> TrackId;
		class UClass*                  StateId;
		bool                           ReturnValue;
	} params;

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
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::RequestNullActionStateOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestNullActionStateOnTrack"));

	struct
	{
		class UActionStateMachineComponent* InComponent;
		TEnumAsByte<EActionStateMachineTrackId> TrackId;
		bool                           ReturnValue;
	} params;

	params.InComponent = InComponent;
	params.TrackId = TrackId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.PushTestActionStateSerialisableDataOnTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  StateId                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            DataValue                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UActionStateMachineComponentTestFunctions::PushTestActionStateSerialisableDataOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, class UClass* StateId, int DataValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.PushTestActionStateSerialisableDataOnTrack"));

	struct
	{
		class UActionStateMachineComponent* InComponent;
		TEnumAsByte<EActionStateMachineTrackId> TrackId;
		class UClass*                  StateId;
		int                            DataValue;
	} params;

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
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  StateId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::IsActionStateTypeActiveOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, class UClass* StateId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.IsActionStateTypeActiveOnTrack"));

	struct
	{
		class UActionStateMachineComponent* InComponent;
		TEnumAsByte<EActionStateMachineTrackId> TrackId;
		class UClass*                  StateId;
		bool                           ReturnValue;
	} params;

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
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UActionStateMachineComponentTestFunctions::GetTypeOfActionStateActiveOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTypeOfActionStateActiveOnTrack"));

	struct
	{
		class UActionStateMachineComponent* InComponent;
		TEnumAsByte<EActionStateMachineTrackId> TrackId;
		class UClass*                  ReturnValue;
	} params;

	params.InComponent = InComponent;
	params.TrackId = TrackId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTestActionStateSerialisableDataOnTrack
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FTestActionStateSerialisableData Data                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActionStateMachineComponentTestFunctions::GetTestActionStateSerialisableDataOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, struct FTestActionStateSerialisableData* Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTestActionStateSerialisableDataOnTrack"));

	struct
	{
		class UActionStateMachineComponent* InComponent;
		TEnumAsByte<EActionStateMachineTrackId> TrackId;
		struct FTestActionStateSerialisableData Data;
		bool                           ReturnValue;
	} params;

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
// class UCustomClientValidityCheckCallback* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCustomClientValidityCheckCallback* UActionStateMachineComponentTestFunctions::CreateCustomClientValidityCheckCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.CreateCustomClientValidityCheckCallback"));

	struct
	{
		class UCustomClientValidityCheckCallback* ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStatePriorityTableUtility.GetPriority
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FActionStatePriorityTable PriorityTable                  (Parm, OutParm, ReferenceParm)
// class UClass*                  InStateA                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  InStateB                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EActionStatePriority> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EActionStatePriority> UActionStatePriorityTableUtility::GetPriority(class UClass* InStateA, class UClass* InStateB, struct FActionStatePriorityTable* PriorityTable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStatePriorityTableUtility.GetPriority"));

	struct
	{
		struct FActionStatePriorityTable PriorityTable;
		class UClass*                  InStateA;
		class UClass*                  InStateB;
		TEnumAsByte<EActionStatePriority> ReturnValue;
	} params;

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
// class UActionStatePriorityTableData* Data                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FActionStatePriorityTable ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActionStatePriorityTable UActionStatePriorityTableUtility::CreatePriorityTable(class UActionStatePriorityTableData* Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.ActionStatePriorityTableUtility.CreatePriorityTable"));

	struct
	{
		class UActionStatePriorityTableData* Data;
		struct FActionStatePriorityTable ReturnValue;
	} params;

	params.Data = Data;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.IsValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSerialisedActionStateInfo TestStruct                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USerialisedActionStateConstructionInfoTestFunctions::IsValid(const struct FSerialisedActionStateInfo& TestStruct)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.IsValid"));

	struct
	{
		struct FSerialisedActionStateInfo TestStruct;
		bool                           ReturnValue;
	} params;

	params.TestStruct = TestStruct;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfoWithInner
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSerialisedActionStateInfo TestStruct                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USerialisedActionStateConstructionInfoTestFunctions::HasTestConstructionInfoWithInner(const struct FSerialisedActionStateInfo& TestStruct)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfoWithInner"));

	struct
	{
		struct FSerialisedActionStateInfo TestStruct;
		bool                           ReturnValue;
	} params;

	params.TestStruct = TestStruct;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSerialisedActionStateInfo TestStruct                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USerialisedActionStateConstructionInfoTestFunctions::HasTestConstructionInfo(const struct FSerialisedActionStateInfo& TestStruct)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfo"));

	struct
	{
		struct FSerialisedActionStateInfo TestStruct;
		bool                           ReturnValue;
	} params;

	params.TestStruct = TestStruct;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfoWithInner
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSerialisedActionStateInfo TestStruct                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTestActionStateConstructionInfoWithInner ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTestActionStateConstructionInfoWithInner USerialisedActionStateConstructionInfoTestFunctions::GetTestConstructionInfoWithInner(const struct FSerialisedActionStateInfo& TestStruct)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfoWithInner"));

	struct
	{
		struct FSerialisedActionStateInfo TestStruct;
		struct FTestActionStateConstructionInfoWithInner ReturnValue;
	} params;

	params.TestStruct = TestStruct;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSerialisedActionStateInfo TestStruct                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTestActionStateConstructionInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTestActionStateConstructionInfo USerialisedActionStateConstructionInfoTestFunctions::GetTestConstructionInfo(const struct FSerialisedActionStateInfo& TestStruct)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfo"));

	struct
	{
		struct FSerialisedActionStateInfo TestStruct;
		struct FTestActionStateConstructionInfo ReturnValue;
	} params;

	params.TestStruct = TestStruct;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestSerialisableData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Id                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            IntProp                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FSerialisedActionStateInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSerialisedActionStateInfo USerialisedActionStateConstructionInfoTestFunctions::CreateTestSerialisableData(class UClass* Id, int IntProp)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestSerialisableData"));

	struct
	{
		class UClass*                  Id;
		int                            IntProp;
		struct FSerialisedActionStateInfo ReturnValue;
	} params;

	params.Id = Id;
	params.IntProp = IntProp;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

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

struct FSerialisedActionStateInfo USerialisedActionStateConstructionInfoTestFunctions::CreateTestConstructionInfoWithInner(class UClass* Id, float FloatProp, bool BoolProp, const class FString& StringProp)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfoWithInner"));

	struct
	{
		class UClass*                  Id;
		float                          FloatProp;
		bool                           BoolProp;
		class FString                  StringProp;
		struct FSerialisedActionStateInfo ReturnValue;
	} params;

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
// class UClass*                  Id                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            IntProp                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FSerialisedActionStateInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSerialisedActionStateInfo USerialisedActionStateConstructionInfoTestFunctions::CreateTestConstructionInfo(class UClass* Id, int IntProp)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfo"));

	struct
	{
		class UClass*                  Id;
		int                            IntProp;
		struct FSerialisedActionStateInfo ReturnValue;
	} params;

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
