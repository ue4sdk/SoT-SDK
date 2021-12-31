// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameplayDebugger_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameplayDebugger.GameplayDebuggingComponent.ServerReplicateData
// (Final, Exec, Native, Public)
// Parameters:
// uint32_t                       InMessage                      (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       DataView                       (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayDebuggingComponent::ServerReplicateData(uint32_t InMessage, uint32_t DataView)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.ServerReplicateData"));

	UGameplayDebuggingComponent_ServerReplicateData_Params params;
	params.InMessage = InMessage;
	params.DataView = DataView;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingComponent.ServerDiscardNavmeshData
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UGameplayDebuggingComponent::ServerDiscardNavmeshData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.ServerDiscardNavmeshData"));

	UGameplayDebuggingComponent_ServerDiscardNavmeshData_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingComponent.ServerCollectNavmeshData
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// FVector_NetQuantize10          TargetLocation                 (Parm)

void UGameplayDebuggingComponent::ServerCollectNavmeshData(const FVector_NetQuantize10& TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.ServerCollectNavmeshData"));

	UGameplayDebuggingComponent_ServerCollectNavmeshData_Params params;
	params.TargetLocation = TargetLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateNavmesh
// (Native, Public)

void UGameplayDebuggingComponent::OnRep_UpdateNavmesh()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateNavmesh"));

	UGameplayDebuggingComponent_OnRep_UpdateNavmesh_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateEQS
// (Native, Public)

void UGameplayDebuggingComponent::OnRep_UpdateEQS()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateEQS"));

	UGameplayDebuggingComponent_OnRep_UpdateEQS_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateBlackboard
// (Native, Public)

void UGameplayDebuggingComponent::OnRep_UpdateBlackboard()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateBlackboard"));

	UGameplayDebuggingComponent_OnRep_UpdateBlackboard_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_PathCorridorData
// (Native, Public)

void UGameplayDebuggingComponent::OnRep_PathCorridorData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_PathCorridorData"));

	UGameplayDebuggingComponent_OnRep_PathCorridorData_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingComponent.OnCycleDetailsView
// (Native, Public)

void UGameplayDebuggingComponent::OnCycleDetailsView()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.OnCycleDetailsView"));

	UGameplayDebuggingComponent_OnCycleDetailsView_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingComponent.ClientEnableTargetSelection
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayDebuggingComponent::ClientEnableTargetSelection(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.ClientEnableTargetSelection"));

	UGameplayDebuggingComponent_ClientEnableTargetSelection_Params params;
	params.bEnable = bEnable;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingReplicator.ServerSetActorToDebug
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// AActor*                        InActor                        (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayDebuggingReplicator::ServerSetActorToDebug(AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingReplicator.ServerSetActorToDebug"));

	AGameplayDebuggingReplicator_ServerSetActorToDebug_Params params;
	params.InActor = InActor;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingReplicator.ServerReplicateMessage
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// AActor*                        Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       InMessage                      (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       DataView                       (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayDebuggingReplicator::ServerReplicateMessage(AActor* Actor, uint32_t InMessage, uint32_t DataView)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingReplicator.ServerReplicateMessage"));

	AGameplayDebuggingReplicator_ServerReplicateMessage_Params params;
	params.Actor = Actor;
	params.InMessage = InMessage;
	params.DataView = DataView;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingReplicator.OnRep_AutoActivate
// (Native, Public)

void AGameplayDebuggingReplicator::OnRep_AutoActivate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingReplicator.OnRep_AutoActivate"));

	AGameplayDebuggingReplicator_OnRep_AutoActivate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingReplicator.ClientReplicateMessage
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// AActor*                        Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       InMessage                      (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       DataView                       (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayDebuggingReplicator::ClientReplicateMessage(AActor* Actor, uint32_t InMessage, uint32_t DataView)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingReplicator.ClientReplicateMessage"));

	AGameplayDebuggingReplicator_ClientReplicateMessage_Params params;
	params.Actor = Actor;
	params.InMessage = InMessage;
	params.DataView = DataView;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingReplicator.ClientEnableTargetSelection
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// APlayerController*             Context                        (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayDebuggingReplicator::ClientEnableTargetSelection(bool bEnable, APlayerController* Context)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingReplicator.ClientEnableTargetSelection"));

	AGameplayDebuggingReplicator_ClientEnableTargetSelection_Params params;
	params.bEnable = bEnable;
	params.Context = Context;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingReplicator.ClientAutoActivate
// (Net, NetReliable, Native, Event, Public, NetClient)

void AGameplayDebuggingReplicator::ClientAutoActivate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingReplicator.ClientAutoActivate"));

	AGameplayDebuggingReplicator_ClientAutoActivate_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
