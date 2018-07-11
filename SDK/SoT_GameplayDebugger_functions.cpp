// Sea of Thieves (1.1.6) SDK

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
	static auto fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.ServerReplicateData");

	UGameplayDebuggingComponent_ServerReplicateData_Params params;
	params.InMessage = InMessage;
	params.DataView = DataView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingComponent.ServerDiscardNavmeshData
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UGameplayDebuggingComponent::ServerDiscardNavmeshData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.ServerDiscardNavmeshData");

	UGameplayDebuggingComponent_ServerDiscardNavmeshData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingComponent.ServerCollectNavmeshData
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FVector_NetQuantize10   TargetLocation                 (Parm)

void UGameplayDebuggingComponent::ServerCollectNavmeshData(const struct FVector_NetQuantize10& TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.ServerCollectNavmeshData");

	UGameplayDebuggingComponent_ServerCollectNavmeshData_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateNavmesh
// (Native, Public)

void UGameplayDebuggingComponent::OnRep_UpdateNavmesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateNavmesh");

	UGameplayDebuggingComponent_OnRep_UpdateNavmesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateEQS
// (Native, Public)

void UGameplayDebuggingComponent::OnRep_UpdateEQS()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateEQS");

	UGameplayDebuggingComponent_OnRep_UpdateEQS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateBlackboard
// (Native, Public)

void UGameplayDebuggingComponent::OnRep_UpdateBlackboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateBlackboard");

	UGameplayDebuggingComponent_OnRep_UpdateBlackboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_PathCorridorData
// (Native, Public)

void UGameplayDebuggingComponent::OnRep_PathCorridorData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_PathCorridorData");

	UGameplayDebuggingComponent_OnRep_PathCorridorData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingComponent.OnCycleDetailsView
// (Native, Public)

void UGameplayDebuggingComponent::OnCycleDetailsView()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.OnCycleDetailsView");

	UGameplayDebuggingComponent_OnCycleDetailsView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingComponent.ClientEnableTargetSelection
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayDebuggingComponent::ClientEnableTargetSelection(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.ClientEnableTargetSelection");

	UGameplayDebuggingComponent_ClientEnableTargetSelection_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingReplicator.ServerSetActorToDebug
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayDebuggingReplicator::ServerSetActorToDebug(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.ServerSetActorToDebug");

	AGameplayDebuggingReplicator_ServerSetActorToDebug_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingReplicator.ServerReplicateMessage
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       InMessage                      (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       DataView                       (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayDebuggingReplicator::ServerReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.ServerReplicateMessage");

	AGameplayDebuggingReplicator_ServerReplicateMessage_Params params;
	params.Actor = Actor;
	params.InMessage = InMessage;
	params.DataView = DataView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingReplicator.OnRep_AutoActivate
// (Native, Public)

void AGameplayDebuggingReplicator::OnRep_AutoActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.OnRep_AutoActivate");

	AGameplayDebuggingReplicator_OnRep_AutoActivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingReplicator.ClientReplicateMessage
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       InMessage                      (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       DataView                       (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayDebuggingReplicator::ClientReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.ClientReplicateMessage");

	AGameplayDebuggingReplicator_ClientReplicateMessage_Params params;
	params.Actor = Actor;
	params.InMessage = InMessage;
	params.DataView = DataView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingReplicator.ClientEnableTargetSelection
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       Context                        (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayDebuggingReplicator::ClientEnableTargetSelection(bool bEnable, class APlayerController* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.ClientEnableTargetSelection");

	AGameplayDebuggingReplicator_ClientEnableTargetSelection_Params params;
	params.bEnable = bEnable;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayDebugger.GameplayDebuggingReplicator.ClientAutoActivate
// (Net, NetReliable, Native, Event, Public, NetClient)

void AGameplayDebuggingReplicator::ClientAutoActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.ClientAutoActivate");

	AGameplayDebuggingReplicator_ClientAutoActivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
