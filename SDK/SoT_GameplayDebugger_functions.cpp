// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameplayDebugger_classes.hpp"

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

	struct
	{
		uint32_t                       InMessage;
		uint32_t                       DataView;
	} params;

	params.InMessage = InMessage;
	params.DataView = DataView;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingComponent.ServerDiscardNavmeshData
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UGameplayDebuggingComponent::ServerDiscardNavmeshData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.ServerDiscardNavmeshData"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingComponent.ServerCollectNavmeshData
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FVector_NetQuantize10   TargetLocation                 (Parm)

void UGameplayDebuggingComponent::ServerCollectNavmeshData(const struct FVector_NetQuantize10& TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.ServerCollectNavmeshData"));

	struct
	{
		struct FVector_NetQuantize10   TargetLocation;
	} params;

	params.TargetLocation = TargetLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateNavmesh
// (Native, Public)

void UGameplayDebuggingComponent::OnRep_UpdateNavmesh()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateNavmesh"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateEQS
// (Native, Public)

void UGameplayDebuggingComponent::OnRep_UpdateEQS()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateEQS"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateBlackboard
// (Native, Public)

void UGameplayDebuggingComponent::OnRep_UpdateBlackboard()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateBlackboard"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_PathCorridorData
// (Native, Public)

void UGameplayDebuggingComponent::OnRep_PathCorridorData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_PathCorridorData"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingComponent.OnCycleDetailsView
// (Native, Public)

void UGameplayDebuggingComponent::OnCycleDetailsView()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.OnCycleDetailsView"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingComponent.ClientEnableTargetSelection
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayDebuggingComponent::ClientEnableTargetSelection(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingComponent.ClientEnableTargetSelection"));

	struct
	{
		bool                           bEnable;
	} params;

	params.bEnable = bEnable;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingReplicator.ServerSetActorToDebug
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayDebuggingReplicator::ServerSetActorToDebug(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingReplicator.ServerSetActorToDebug"));

	struct
	{
		class AActor*                  InActor;
	} params;

	params.InActor = InActor;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingReplicator.ServerReplicateMessage
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       InMessage                      (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       DataView                       (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayDebuggingReplicator::ServerReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingReplicator.ServerReplicateMessage"));

	struct
	{
		class AActor*                  Actor;
		uint32_t                       InMessage;
		uint32_t                       DataView;
	} params;

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingReplicator.ClientReplicateMessage
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       InMessage                      (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       DataView                       (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayDebuggingReplicator::ClientReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingReplicator.ClientReplicateMessage"));

	struct
	{
		class AActor*                  Actor;
		uint32_t                       InMessage;
		uint32_t                       DataView;
	} params;

	params.Actor = Actor;
	params.InMessage = InMessage;
	params.DataView = DataView;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingReplicator.ClientEnableTargetSelection
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       Context                        (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayDebuggingReplicator::ClientEnableTargetSelection(bool bEnable, class APlayerController* Context)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingReplicator.ClientEnableTargetSelection"));

	struct
	{
		bool                           bEnable;
		class APlayerController*       Context;
	} params;

	params.bEnable = bEnable;
	params.Context = Context;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayDebugger.GameplayDebuggingReplicator.ClientAutoActivate
// (Net, NetReliable, Native, Event, Public, NetClient)

void AGameplayDebuggingReplicator::ClientAutoActivate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayDebugger.GameplayDebuggingReplicator.ClientAutoActivate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
