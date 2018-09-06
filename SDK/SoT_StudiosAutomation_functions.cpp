// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_StudiosAutomation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StudiosAutomation.TestablePlayerController.YieldToServer
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void ATestablePlayerController::YieldToServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestablePlayerController.YieldToServer");

	ATestablePlayerController_YieldToServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestablePlayerController.PerformPostTestCleanup
// (Net, NetReliable, Native, Event, Public, NetClient)

void ATestablePlayerController::PerformPostTestCleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestablePlayerController.PerformPostTestCleanup");

	ATestablePlayerController_PerformPostTestCleanup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestablePlayerController.DisconnectClientFromTest
// (Net, NetReliable, Native, Event, Public, NetClient)

void ATestablePlayerController::DisconnectClientFromTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestablePlayerController.DisconnectClientFromTest");

	ATestablePlayerController_DisconnectClientFromTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.YieldToServer
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void ATestLevelScriptActor::STATIC_YieldToServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.YieldToServer");

	ATestLevelScriptActor_YieldToServer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.YieldToOriginalServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void ATestLevelScriptActor::YieldToOriginalServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.YieldToOriginalServer");

	ATestLevelScriptActor_YieldToOriginalServer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.YieldToDynamicServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// int                            ServerIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::YieldToDynamicServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int ServerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.YieldToDynamicServer");

	ATestLevelScriptActor_YieldToDynamicServer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.ServerIndex = ServerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.YieldToClient
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// int                            ClientId                       (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::STATIC_YieldToClient(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int ClientId)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.YieldToClient");

	ATestLevelScriptActor_YieldToClient_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.ClientId = ClientId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.WaitForPossessionAcknowledgement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void ATestLevelScriptActor::STATIC_WaitForPossessionAcknowledgement(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.WaitForPossessionAcknowledgement");

	ATestLevelScriptActor_WaitForPossessionAcknowledgement_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.WaitForOtherServers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// int                            NumberOfServers                (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::WaitForOtherServers(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumberOfServers)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.WaitForOtherServers");

	ATestLevelScriptActor_WaitForOtherServers_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumberOfServers = NumberOfServers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.WaitForClients
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// int                            NumberOfClients                (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::STATIC_WaitForClients(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumberOfClients)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.WaitForClients");

	ATestLevelScriptActor_WaitForClients_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumberOfClients = NumberOfClients;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.TestTriggerServerMigration
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          ActorGroup                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            TargetServerIndex              (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::TestTriggerServerMigration(TArray<class AActor*> ActorGroup, int TargetServerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.TestTriggerServerMigration");

	ATestLevelScriptActor_TestTriggerServerMigration_Params params;
	params.ActorGroup = ActorGroup;
	params.TargetServerIndex = TargetServerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.SyncClientServer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// int                            NumClients                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RegisterPawnsForMPTesting      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ClearPawnInputBindings         (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::STATIC_SyncClientServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumClients, bool RegisterPawnsForMPTesting, bool ClearPawnInputBindings)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.SyncClientServer");

	ATestLevelScriptActor_SyncClientServer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumClients = NumClients;
	params.RegisterPawnsForMPTesting = RegisterPawnsForMPTesting;
	params.ClearPawnInputBindings = ClearPawnInputBindings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.SpawnActorForMPTesting
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SpawnLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                SpawnRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ATestLevelScriptActor::STATIC_SpawnActorForMPTesting(class UObject* WorldContextObject, class UClass* ActorClass, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.SpawnActorForMPTesting");

	ATestLevelScriptActor_SpawnActorForMPTesting_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.SendServerMigrationTestValueInt32
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TestValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::SendServerMigrationTestValueInt32(int TestValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.SendServerMigrationTestValueInt32");

	ATestLevelScriptActor_SendServerMigrationTestValueInt32_Params params;
	params.TestValue = TestValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.RegisterPawnsForMPTesting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::STATIC_RegisterPawnsForMPTesting(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.RegisterPawnsForMPTesting");

	ATestLevelScriptActor_RegisterPawnsForMPTesting_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTestingRecursively
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::RegisterActorForMPTestingRecursively(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTestingRecursively");

	ATestLevelScriptActor_RegisterActorForMPTestingRecursively_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTesting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::RegisterActorForMPTesting(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTesting");

	ATestLevelScriptActor_RegisterActorForMPTesting_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.PostTestCleanup
// (Event, Public, BlueprintEvent)

void ATestLevelScriptActor::PostTestCleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.PostTestCleanup");

	ATestLevelScriptActor_PostTestCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.OnServerMigrationTestValueInt32Received
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            TestValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnServerMigrationTestValueInt32Received(int TestValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnServerMigrationTestValueInt32Received");

	ATestLevelScriptActor_OnServerMigrationTestValueInt32Received_Params params;
	params.TestValue = TestValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationStarted
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                   MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class APlayerController*> Players                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ATestLevelScriptActor::OnOutgoingServerMigrationStarted(const struct FGuid& MigrationId, TArray<class APlayerController*> Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationStarted");

	ATestLevelScriptActor_OnOutgoingServerMigrationStarted_Params params;
	params.MigrationId = MigrationId;
	params.Players = Players;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationCompleted
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                   MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnOutgoingServerMigrationCompleted(const struct FGuid& MigrationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationCompleted");

	ATestLevelScriptActor_OnOutgoingServerMigrationCompleted_Params params;
	params.MigrationId = MigrationId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationAborted
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                   MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnOutgoingServerMigrationAborted(const struct FGuid& MigrationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationAborted");

	ATestLevelScriptActor_OnOutgoingServerMigrationAborted_Params params;
	params.MigrationId = MigrationId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationStarted
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                   MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumPlayers                     (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnIncomingServerMigrationStarted(const struct FGuid& MigrationId, int NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationStarted");

	ATestLevelScriptActor_OnIncomingServerMigrationStarted_Params params;
	params.MigrationId = MigrationId;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationCompleted
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                   MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class APlayerController*> Players                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ATestLevelScriptActor::OnIncomingServerMigrationCompleted(const struct FGuid& MigrationId, TArray<class APlayerController*> Players, TArray<class AActor*> Actors)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationCompleted");

	ATestLevelScriptActor_OnIncomingServerMigrationCompleted_Params params;
	params.MigrationId = MigrationId;
	params.Players = Players;
	params.Actors = Actors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationAborted
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                   MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnIncomingServerMigrationAborted(const struct FGuid& MigrationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationAborted");

	ATestLevelScriptActor_OnIncomingServerMigrationAborted_Params params;
	params.MigrationId = MigrationId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationStarted
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                   MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnClientServerMigrationStarted(const struct FGuid& MigrationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationStarted");

	ATestLevelScriptActor_OnClientServerMigrationStarted_Params params;
	params.MigrationId = MigrationId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationCompleted
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                   MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnClientServerMigrationCompleted(const struct FGuid& MigrationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationCompleted");

	ATestLevelScriptActor_OnClientServerMigrationCompleted_Params params;
	params.MigrationId = MigrationId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationAborted
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                   MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnClientServerMigrationAborted(const struct FGuid& MigrationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationAborted");

	ATestLevelScriptActor_OnClientServerMigrationAborted_Params params;
	params.MigrationId = MigrationId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.GetServerIndex
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATestLevelScriptActor::GetServerIndex(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.GetServerIndex");

	ATestLevelScriptActor_GetServerIndex_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.GetRemoteServerMigrationURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TargetServerIndex              (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString ATestLevelScriptActor::GetRemoteServerMigrationURL(int TargetServerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.GetRemoteServerMigrationURL");

	ATestLevelScriptActor_GetRemoteServerMigrationURL_Params params;
	params.TargetServerIndex = TargetServerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.GetPlayerIndexFromClientId
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ClientId                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATestLevelScriptActor::GetPlayerIndexFromClientId(int ClientId)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.GetPlayerIndexFromClientId");

	ATestLevelScriptActor_GetPlayerIndexFromClientId_Params params;
	params.ClientId = ClientId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.GetNumClientsForMultiplayerTest
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATestLevelScriptActor::GetNumClientsForMultiplayerTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.GetNumClientsForMultiplayerTest");

	ATestLevelScriptActor_GetNumClientsForMultiplayerTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.GetNumAutomationClients
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATestLevelScriptActor::GetNumAutomationClients()
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.GetNumAutomationClients");

	ATestLevelScriptActor_GetNumAutomationClients_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.GetClientPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ClientId                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SplitScreenIndex               (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* ATestLevelScriptActor::GetClientPawn(int ClientId, int SplitScreenIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.GetClientPawn");

	ATestLevelScriptActor_GetClientPawn_Params params;
	params.ClientId = ClientId;
	params.SplitScreenIndex = SplitScreenIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.GetClientId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ErrorOnFailure                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATestLevelScriptActor::GetClientId(bool ErrorOnFailure)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.GetClientId");

	ATestLevelScriptActor_GetClientId_Params params;
	params.ErrorOnFailure = ErrorOnFailure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.DoServerPostTestCleanup
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void ATestLevelScriptActor::DoServerPostTestCleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.DoServerPostTestCleanup");

	ATestLevelScriptActor_DoServerPostTestCleanup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.ClearPawnInputBindings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::STATIC_ClearPawnInputBindings(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.ClearPawnInputBindings");

	ATestLevelScriptActor_ClearPawnInputBindings_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.AddServer
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)

void ATestLevelScriptActor::AddServer(const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.AddServer");

	ATestLevelScriptActor_AddServer_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.TestLevelScriptActor.AddClient
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            Port                           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Name                           (Parm, ZeroConstructor)

void ATestLevelScriptActor::AddClient(int Port, const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.AddClient");

	ATestLevelScriptActor_AddClient_Params params;
	params.Port = Port;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFinished
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_TestFinished(class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFinished");

	UAutomationBlueprintFunctionLibrary_TestFinished_Params params;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFailed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  Message                        (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_TestFailed(const class FString& Message, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFailed");

	UAutomationBlueprintFunctionLibrary_TestFailed_Params params;
	params.Message = Message;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// class ACameraActor*            Camera                         (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  NameOverride                   (Parm, ZeroConstructor)
// float                          DelayBeforeScreenshotSeconds   (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_TakeAutomationScreenshotAtCamera(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ACameraActor* Camera, const class FString& NameOverride, float DelayBeforeScreenshotSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera");

	UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Camera = Camera;
	params.NameOverride = NameOverride;
	params.DelayBeforeScreenshotSeconds = DelayBeforeScreenshotSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// class FString                  Name                           (Parm, ZeroConstructor)

void UAutomationBlueprintFunctionLibrary::STATIC_TakeAutomationScreenshot(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot");

	UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepStarted
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  StepName                       (Parm, ZeroConstructor)

void UAutomationBlueprintFunctionLibrary::STATIC_StepStarted(const class FString& StepName)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepStarted");

	UAutomationBlueprintFunctionLibrary_StepStarted_Params params;
	params.StepName = StepName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepFinished
// (Final, Native, Static, Public, BlueprintCallable)

void UAutomationBlueprintFunctionLibrary::STATIC_StepFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepFinished");

	UAutomationBlueprintFunctionLibrary_StepFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.SetTestTimeoutAsFatal
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           TimeoutIsFatal                 (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_SetTestTimeoutAsFatal(bool TimeoutIsFatal)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.SetTestTimeoutAsFatal");

	UAutomationBlueprintFunctionLibrary_SetTestTimeoutAsFatal_Params params;
	params.TimeoutIsFatal = TimeoutIsFatal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.OpenLevelWithGameMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LevelName                      (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  GameMode                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Absolute                       (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_OpenLevelWithGameMode(class UObject* WorldContextObject, const struct FName& LevelName, class UClass* GameMode, bool Absolute)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.OpenLevelWithGameMode");

	UAutomationBlueprintFunctionLibrary_OpenLevelWithGameMode_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelName = LevelName;
	params.GameMode = GameMode;
	params.Absolute = Absolute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsTravelFinished
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutomationBlueprintFunctionLibrary::STATIC_IsTravelFinished(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsTravelFinished");

	UAutomationBlueprintFunctionLibrary_IsTravelFinished_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsEditor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutomationBlueprintFunctionLibrary::STATIC_IsEditor()
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsEditor");

	UAutomationBlueprintFunctionLibrary_IsEditor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.HasPerformanceDataBeenCaptured
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutomationBlueprintFunctionLibrary::STATIC_HasPerformanceDataBeenCaptured()
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.HasPerformanceDataBeenCaptured");

	UAutomationBlueprintFunctionLibrary_HasPerformanceDataBeenCaptured_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetTestLevelScriptActor
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ErrorOnFailure                 (Parm, ZeroConstructor, IsPlainOldData)
// class ATestLevelScriptActor*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ATestLevelScriptActor* UAutomationBlueprintFunctionLibrary::STATIC_GetTestLevelScriptActor(bool ErrorOnFailure)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetTestLevelScriptActor");

	UAutomationBlueprintFunctionLibrary_GetTestLevelScriptActor_Params params;
	params.ErrorOnFailure = ErrorOnFailure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetPlayerId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState*            State                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAutomationBlueprintFunctionLibrary::STATIC_GetPlayerId(class APlayerState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetPlayerId");

	UAutomationBlueprintFunctionLibrary_GetPlayerId_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetLevelUrl
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UAutomationBlueprintFunctionLibrary::STATIC_GetLevelUrl(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetLevelUrl");

	UAutomationBlueprintFunctionLibrary_GetLevelUrl_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetCurrentMapTestName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UAutomationBlueprintFunctionLibrary::STATIC_GetCurrentMapTestName()
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetCurrentMapTestName");

	UAutomationBlueprintFunctionLibrary_GetCurrentMapTestName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.EndPerformanceCapture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           DumpMemReport                  (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_EndPerformanceCapture(bool DumpMemReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.EndPerformanceCapture");

	UAutomationBlueprintFunctionLibrary_EndPerformanceCapture_Params params;
	params.DumpMemReport = DumpMemReport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReportDelayed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            FrameDelay                     (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_DumpFullMemReportDelayed(int FrameDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReportDelayed");

	UAutomationBlueprintFunctionLibrary_DumpFullMemReportDelayed_Params params;
	params.FrameDelay = FrameDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReport
// (Final, Native, Static, Public, BlueprintCallable)

void UAutomationBlueprintFunctionLibrary::STATIC_DumpFullMemReport()
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReport");

	UAutomationBlueprintFunctionLibrary_DumpFullMemReport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFramesWithDesc
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// int                            NumFrames                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Description                    (Parm, ZeroConstructor)

void UAutomationBlueprintFunctionLibrary::STATIC_DelayForFramesWithDesc(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumFrames, const class FString& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFramesWithDesc");

	UAutomationBlueprintFunctionLibrary_DelayForFramesWithDesc_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumFrames = NumFrames;
	params.Description = Description;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// int                            NumFrames                      (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_DelayForFrames(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumFrames)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFrames");

	UAutomationBlueprintFunctionLibrary_DelayForFrames_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumFrames = NumFrames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BlockAsyncLoading
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           EnableBlock                    (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_BlockAsyncLoading(bool EnableBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BlockAsyncLoading");

	UAutomationBlueprintFunctionLibrary_BlockAsyncLoading_Params params;
	params.EnableBlock = EnableBlock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BeginPerformanceCapture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  FolderName                     (Parm, ZeroConstructor)
// bool                           DumpMemReport                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PreventGarbageCollection       (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_BeginPerformanceCapture(const class FString& FolderName, bool DumpMemReport, bool PreventGarbageCollection)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BeginPerformanceCapture");

	UAutomationBlueprintFunctionLibrary_BeginPerformanceCapture_Params params;
	params.FolderName = FolderName;
	params.DumpMemReport = DumpMemReport;
	params.PreventGarbageCollection = PreventGarbageCollection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Int
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Actual                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EComparisonMethod> ShouldBe                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Expected                       (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  What                           (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_AssertValue_Int(int Actual, TEnumAsByte<EComparisonMethod> ShouldBe, int Expected, const class FString& What, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Int");

	UAutomationBlueprintFunctionLibrary_AssertValue_Int_Params params;
	params.Actual = Actual;
	params.ShouldBe = ShouldBe;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Float
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Actual                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EComparisonMethod> ShouldBe                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Expected                       (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  What                           (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_AssertValue_Float(float Actual, TEnumAsByte<EComparisonMethod> ShouldBe, float Expected, const class FString& What, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Float");

	UAutomationBlueprintFunctionLibrary_AssertValue_Float_Params params;
	params.Actual = Actual;
	params.ShouldBe = ShouldBe;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_DateTime
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDateTime               Actual                         (Parm, ZeroConstructor)
// TEnumAsByte<EComparisonMethod> ShouldBe                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FDateTime               Expected                       (Parm, ZeroConstructor)
// class FString                  What                           (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_AssertValue_DateTime(const struct FDateTime& Actual, TEnumAsByte<EComparisonMethod> ShouldBe, const struct FDateTime& Expected, const class FString& What, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_DateTime");

	UAutomationBlueprintFunctionLibrary_AssertValue_DateTime_Params params;
	params.Actual = Actual;
	params.ShouldBe = ShouldBe;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertTrue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           Condition                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Message                        (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_AssertTrue(bool Condition, const class FString& Message, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertTrue");

	UAutomationBlueprintFunctionLibrary_AssertTrue_Params params;
	params.Condition = Condition;
	params.Message = Message;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Vector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NotExpected                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  What                           (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_AssertNotEqual_Vector(const struct FVector& Actual, const struct FVector& NotExpected, const class FString& What, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Vector");

	UAutomationBlueprintFunctionLibrary_AssertNotEqual_Vector_Params params;
	params.Actual = Actual;
	params.NotExpected = NotExpected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Transform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              Actual                         (ConstParm, Parm, IsPlainOldData)
// struct FTransform              NotExpected                    (ConstParm, Parm, IsPlainOldData)
// class FString                  What                           (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_AssertNotEqual_Transform(const struct FTransform& Actual, const struct FTransform& NotExpected, const class FString& What, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Transform");

	UAutomationBlueprintFunctionLibrary_AssertNotEqual_Transform_Params params;
	params.Actual = Actual;
	params.NotExpected = NotExpected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_String
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  Actual                         (ConstParm, Parm, ZeroConstructor)
// class FString                  NotExpected                    (ConstParm, Parm, ZeroConstructor)
// class FString                  What                           (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_AssertNotEqual_String(const class FString& Actual, const class FString& NotExpected, const class FString& What, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_String");

	UAutomationBlueprintFunctionLibrary_AssertNotEqual_String_Params params;
	params.Actual = Actual;
	params.NotExpected = NotExpected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Rotator
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NotExpected                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  What                           (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_AssertNotEqual_Rotator(const struct FRotator& Actual, const struct FRotator& NotExpected, const class FString& What, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Rotator");

	UAutomationBlueprintFunctionLibrary_AssertNotEqual_Rotator_Params params;
	params.Actual = Actual;
	params.NotExpected = NotExpected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsValid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Message                        (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_AssertIsValid(class UObject* Object, const class FString& Message, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsValid");

	UAutomationBlueprintFunctionLibrary_AssertIsValid_Params params;
	params.Object = Object;
	params.Message = Message;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsNotValid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Message                        (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_AssertIsNotValid(class UObject* Object, const class FString& Message, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsNotValid");

	UAutomationBlueprintFunctionLibrary_AssertIsNotValid_Params params;
	params.Object = Object;
	params.Message = Message;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertFalse
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           Condition                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Message                        (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_AssertFalse(bool Condition, const class FString& Message, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertFalse");

	UAutomationBlueprintFunctionLibrary_AssertFalse_Params params;
	params.Condition = Condition;
	params.Message = Message;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertErrorOccurred
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  ErrorMessage                   (Parm, ZeroConstructor)

void UAutomationBlueprintFunctionLibrary::STATIC_AssertErrorOccurred(const class FString& ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertErrorOccurred");

	UAutomationBlueprintFunctionLibrary_AssertErrorOccurred_Params params;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Expected                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  What                           (Parm, ZeroConstructor)
// float                          Tolerance                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_AssertEqual_Vector2D(const struct FVector2D& Actual, const struct FVector2D& Expected, const class FString& What, float Tolerance, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector2D");

	UAutomationBlueprintFunctionLibrary_AssertEqual_Vector2D_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.Tolerance = Tolerance;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Expected                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  What                           (Parm, ZeroConstructor)
// float                          Tolerance                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_AssertEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const class FString& What, float Tolerance, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector");

	UAutomationBlueprintFunctionLibrary_AssertEqual_Vector_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.Tolerance = Tolerance;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Transform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              Actual                         (ConstParm, Parm, IsPlainOldData)
// struct FTransform              Expected                       (ConstParm, Parm, IsPlainOldData)
// class FString                  What                           (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_AssertEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const class FString& What, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Transform");

	UAutomationBlueprintFunctionLibrary_AssertEqual_Transform_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_String
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  Actual                         (ConstParm, Parm, ZeroConstructor)
// class FString                  Expected                       (ConstParm, Parm, ZeroConstructor)
// class FString                  What                           (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_AssertEqual_String(const class FString& Actual, const class FString& Expected, const class FString& What, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_String");

	UAutomationBlueprintFunctionLibrary_AssertEqual_String_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Rotator
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Expected                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  What                           (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_AssertEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const class FString& What, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Rotator");

	UAutomationBlueprintFunctionLibrary_AssertEqual_Rotator_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Float
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Expected                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  What                           (Parm, ZeroConstructor)
// float                          Tolerance                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::STATIC_AssertEqual_Float(float Actual, float Expected, const class FString& What, float Tolerance, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Float");

	UAutomationBlueprintFunctionLibrary_AssertEqual_Float_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.Tolerance = Tolerance;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AddExpectedError
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  ErrorMessage                   (Parm, ZeroConstructor)

void UAutomationBlueprintFunctionLibrary::STATIC_AddExpectedError(const class FString& ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AddExpectedError");

	UAutomationBlueprintFunctionLibrary_AddExpectedError_Params params;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StudiosAutomation.AutomationLatentActionCallback.LatentCallback
// (Final, Native, Private)
// Parameters:
// int                            Linkage                        (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationLatentActionCallback::LatentCallback(int Linkage)
{
	static auto fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationLatentActionCallback.LatentCallback");

	UAutomationLatentActionCallback_LatentCallback_Params params;
	params.Linkage = Linkage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
