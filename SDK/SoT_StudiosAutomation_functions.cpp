// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_StudiosAutomation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StudiosAutomation.TestLevelScriptActor.YieldToServer
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FLatentActionInfo              LatentInfo                     (Parm)

void ATestLevelScriptActor::YieldToServer(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.YieldToServer"));

	ATestLevelScriptActor_YieldToServer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.YieldToOriginalServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FLatentActionInfo              LatentInfo                     (Parm)

void ATestLevelScriptActor::YieldToOriginalServer(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.YieldToOriginalServer"));

	ATestLevelScriptActor_YieldToOriginalServer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.YieldToDynamicServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FLatentActionInfo              LatentInfo                     (Parm)
// int                            ServerIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::YieldToDynamicServer(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, int ServerIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.YieldToDynamicServer"));

	ATestLevelScriptActor_YieldToDynamicServer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.ServerIndex = ServerIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.YieldToClient
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FLatentActionInfo              LatentInfo                     (Parm)
// int                            ClientId                       (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::YieldToClient(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, int ClientId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.YieldToClient"));

	ATestLevelScriptActor_YieldToClient_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.ClientId = ClientId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.WaitForPossessionAcknowledgement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FLatentActionInfo              LatentInfo                     (Parm)

void ATestLevelScriptActor::WaitForPossessionAcknowledgement(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.WaitForPossessionAcknowledgement"));

	ATestLevelScriptActor_WaitForPossessionAcknowledgement_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.WaitForOtherServers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FLatentActionInfo              LatentInfo                     (Parm)
// int                            NumberOfServers                (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::WaitForOtherServers(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, int NumberOfServers)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.WaitForOtherServers"));

	ATestLevelScriptActor_WaitForOtherServers_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumberOfServers = NumberOfServers;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.WaitForClients
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FLatentActionInfo              LatentInfo                     (Parm)
// int                            NumberOfClients                (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::WaitForClients(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, int NumberOfClients)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.WaitForClients"));

	ATestLevelScriptActor_WaitForClients_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumberOfClients = NumberOfClients;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.TestTriggerServerMigration
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<AActor*>                ActorGroup                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            TargetServerIndex              (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::TestTriggerServerMigration(TArray<AActor*> ActorGroup, int TargetServerIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.TestTriggerServerMigration"));

	ATestLevelScriptActor_TestTriggerServerMigration_Params params;
	params.ActorGroup = ActorGroup;
	params.TargetServerIndex = TargetServerIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.TestCloseConnection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ConnectionIdx                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATestLevelScriptActor::TestCloseConnection(int ConnectionIdx)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.TestCloseConnection"));

	ATestLevelScriptActor_TestCloseConnection_Params params;
	params.ConnectionIdx = ConnectionIdx;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.SyncClientServer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FLatentActionInfo              LatentInfo                     (Parm)
// int                            NumClients                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RegisterPawnsForMPTesting      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ClearPawnInputBindings         (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::SyncClientServer(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, int NumClients, bool RegisterPawnsForMPTesting, bool ClearPawnInputBindings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.SyncClientServer"));

	ATestLevelScriptActor_SyncClientServer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumClients = NumClients;
	params.RegisterPawnsForMPTesting = RegisterPawnsForMPTesting;
	params.ClearPawnInputBindings = ClearPawnInputBindings;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.SpawnActorForMPTesting
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        SpawnLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// FRotator                       SpawnRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// AActor*                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

AActor* ATestLevelScriptActor::SpawnActorForMPTesting(UObject* WorldContextObject, UClass* ActorClass, const FVector& SpawnLocation, const FRotator& SpawnRotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.SpawnActorForMPTesting"));

	ATestLevelScriptActor_SpawnActorForMPTesting_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.SendServerMigrationTestValueInt32
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TestValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::SendServerMigrationTestValueInt32(int TestValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.SendServerMigrationTestValueInt32"));

	ATestLevelScriptActor_SendServerMigrationTestValueInt32_Params params;
	params.TestValue = TestValue;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.RegisterPawnsForMPTesting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::RegisterPawnsForMPTesting(UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.RegisterPawnsForMPTesting"));

	ATestLevelScriptActor_RegisterPawnsForMPTesting_Params params;
	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTestingRecursively
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::RegisterActorForMPTestingRecursively(AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTestingRecursively"));

	ATestLevelScriptActor_RegisterActorForMPTestingRecursively_Params params;
	params.TargetActor = TargetActor;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTesting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::RegisterActorForMPTesting(AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTesting"));

	ATestLevelScriptActor_RegisterActorForMPTesting_Params params;
	params.TargetActor = TargetActor;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.PostTestCleanup
// (Event, Public, BlueprintEvent)

void ATestLevelScriptActor::PostTestCleanup()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.PostTestCleanup"));

	ATestLevelScriptActor_PostTestCleanup_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.OnServerMigrationTestValueInt32Received
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            TestValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnServerMigrationTestValueInt32Received(int TestValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnServerMigrationTestValueInt32Received"));

	ATestLevelScriptActor_OnServerMigrationTestValueInt32Received_Params params;
	params.TestValue = TestValue;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationStarted
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// FGuid                          MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<APlayerController*>     Players                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ATestLevelScriptActor::OnOutgoingServerMigrationStarted(const FGuid& MigrationId, TArray<APlayerController*> Players)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationStarted"));

	ATestLevelScriptActor_OnOutgoingServerMigrationStarted_Params params;
	params.MigrationId = MigrationId;
	params.Players = Players;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationCompleted
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// FGuid                          MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnOutgoingServerMigrationCompleted(const FGuid& MigrationId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationCompleted"));

	ATestLevelScriptActor_OnOutgoingServerMigrationCompleted_Params params;
	params.MigrationId = MigrationId;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationAborted
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// FGuid                          MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnOutgoingServerMigrationAborted(const FGuid& MigrationId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationAborted"));

	ATestLevelScriptActor_OnOutgoingServerMigrationAborted_Params params;
	params.MigrationId = MigrationId;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationStarted
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// FGuid                          MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumPlayers                     (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnIncomingServerMigrationStarted(const FGuid& MigrationId, int NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationStarted"));

	ATestLevelScriptActor_OnIncomingServerMigrationStarted_Params params;
	params.MigrationId = MigrationId;
	params.NumPlayers = NumPlayers;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationCompleted
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// FGuid                          MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<APlayerController*>     Players                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<AActor*>                Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ATestLevelScriptActor::OnIncomingServerMigrationCompleted(const FGuid& MigrationId, TArray<APlayerController*> Players, TArray<AActor*> Actors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationCompleted"));

	ATestLevelScriptActor_OnIncomingServerMigrationCompleted_Params params;
	params.MigrationId = MigrationId;
	params.Players = Players;
	params.Actors = Actors;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationAborted
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// FGuid                          MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnIncomingServerMigrationAborted(const FGuid& MigrationId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationAborted"));

	ATestLevelScriptActor_OnIncomingServerMigrationAborted_Params params;
	params.MigrationId = MigrationId;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationStarted
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// FGuid                          MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnClientServerMigrationStarted(const FGuid& MigrationId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationStarted"));

	ATestLevelScriptActor_OnClientServerMigrationStarted_Params params;
	params.MigrationId = MigrationId;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationCompleted
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// FGuid                          MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnClientServerMigrationCompleted(const FGuid& MigrationId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationCompleted"));

	ATestLevelScriptActor_OnClientServerMigrationCompleted_Params params;
	params.MigrationId = MigrationId;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationAborted
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// FGuid                          MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnClientServerMigrationAborted(const FGuid& MigrationId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationAborted"));

	ATestLevelScriptActor_OnClientServerMigrationAborted_Params params;
	params.MigrationId = MigrationId;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.GetServerIndex
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UObject*                       WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATestLevelScriptActor::GetServerIndex(UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.GetServerIndex"));

	ATestLevelScriptActor_GetServerIndex_Params params;
	params.WorldContextObject = WorldContextObject;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.GetRemoteServerMigrationURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TargetServerIndex              (Parm, ZeroConstructor, IsPlainOldData)
// FString                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

FString ATestLevelScriptActor::GetRemoteServerMigrationURL(int TargetServerIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.GetRemoteServerMigrationURL"));

	ATestLevelScriptActor_GetRemoteServerMigrationURL_Params params;
	params.TargetServerIndex = TargetServerIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.GetPlayerIndexFromClientId
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ClientId                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATestLevelScriptActor::GetPlayerIndexFromClientId(int ClientId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.GetPlayerIndexFromClientId"));

	ATestLevelScriptActor_GetPlayerIndexFromClientId_Params params;
	params.ClientId = ClientId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.GetNumClientsForMultiplayerTest
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATestLevelScriptActor::GetNumClientsForMultiplayerTest()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.GetNumClientsForMultiplayerTest"));

	ATestLevelScriptActor_GetNumClientsForMultiplayerTest_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.GetNumAutomationClients
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATestLevelScriptActor::GetNumAutomationClients()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.GetNumAutomationClients"));

	ATestLevelScriptActor_GetNumAutomationClients_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.GetClientPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ClientId                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SplitScreenIndex               (Parm, ZeroConstructor, IsPlainOldData)
// APawn*                         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

APawn* ATestLevelScriptActor::GetClientPawn(int ClientId, int SplitScreenIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.GetClientPawn"));

	ATestLevelScriptActor_GetClientPawn_Params params;
	params.ClientId = ClientId;
	params.SplitScreenIndex = SplitScreenIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.GetClientId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ErrorOnFailure                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATestLevelScriptActor::GetClientId(bool ErrorOnFailure)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.GetClientId"));

	ATestLevelScriptActor_GetClientId_Params params;
	params.ErrorOnFailure = ErrorOnFailure;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.DoServerPostTestCleanup
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void ATestLevelScriptActor::DoServerPostTestCleanup()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.DoServerPostTestCleanup"));

	ATestLevelScriptActor_DoServerPostTestCleanup_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.ClearPawnInputBindings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::ClearPawnInputBindings(UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.ClearPawnInputBindings"));

	ATestLevelScriptActor_ClearPawnInputBindings_Params params;
	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.AddServerOnNewMap
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
// Parameters:
// FString                        Name                           (Parm, ZeroConstructor)
// FString                        MapPath                        (Parm, ZeroConstructor)

void ATestLevelScriptActor::AddServerOnNewMap(const FString& Name, const FString& MapPath)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.AddServerOnNewMap"));

	ATestLevelScriptActor_AddServerOnNewMap_Params params;
	params.Name = Name;
	params.MapPath = MapPath;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.AddServer
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
// Parameters:
// FString                        Name                           (Parm, ZeroConstructor)

void ATestLevelScriptActor::AddServer(const FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.AddServer"));

	ATestLevelScriptActor_AddServer_Params params;
	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.AddClient
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            Port                           (Parm, ZeroConstructor, IsPlainOldData)
// FString                        Name                           (Parm, ZeroConstructor)

void ATestLevelScriptActor::AddClient(int Port, const FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.AddClient"));

	ATestLevelScriptActor_AddClient_Params params;
	params.Port = Port;
	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFinished
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::TestFinished(UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFinished"));

	UAutomationBlueprintFunctionLibrary_TestFinished_Params params;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFailed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FString                        Message                        (Parm, ZeroConstructor)
// UObject*                       ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::TestFailed(const FString& Message, UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFailed"));

	UAutomationBlueprintFunctionLibrary_TestFailed_Params params;
	params.Message = Message;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FLatentActionInfo              LatentInfo                     (Parm)
// ACameraActor*                  Camera                         (Parm, ZeroConstructor, IsPlainOldData)
// FString                        NameOverride                   (Parm, ZeroConstructor)
// float                          DelayBeforeScreenshotSeconds   (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshotAtCamera(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, ACameraActor* Camera, const FString& NameOverride, float DelayBeforeScreenshotSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera"));

	UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Camera = Camera;
	params.NameOverride = NameOverride;
	params.DelayBeforeScreenshotSeconds = DelayBeforeScreenshotSeconds;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FLatentActionInfo              LatentInfo                     (Parm)
// FString                        Name                           (Parm, ZeroConstructor)

void UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshot(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, const FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot"));

	UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Name = Name;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepStarted
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// FString                        StepName                       (Parm, ZeroConstructor)

void UAutomationBlueprintFunctionLibrary::StepStarted(const FString& StepName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepStarted"));

	UAutomationBlueprintFunctionLibrary_StepStarted_Params params;
	params.StepName = StepName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepFinished
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)

void UAutomationBlueprintFunctionLibrary::StepFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepFinished"));

	UAutomationBlueprintFunctionLibrary_StepFinished_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.SetTestTimeoutAsFatal
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           TimeoutIsFatal                 (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::SetTestTimeoutAsFatal(bool TimeoutIsFatal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.SetTestTimeoutAsFatal"));

	UAutomationBlueprintFunctionLibrary_SetTestTimeoutAsFatal_Params params;
	params.TimeoutIsFatal = TimeoutIsFatal;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.PreventGarbageCollection
// (Final, Native, Static, Public, BlueprintCallable)

void UAutomationBlueprintFunctionLibrary::PreventGarbageCollection()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.PreventGarbageCollection"));

	UAutomationBlueprintFunctionLibrary_PreventGarbageCollection_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.OpenLevelWithGameMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FName                          LevelName                      (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        GameMode                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Absolute                       (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::OpenLevelWithGameMode(UObject* WorldContextObject, const FName& LevelName, UClass* GameMode, bool Absolute)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.OpenLevelWithGameMode"));

	UAutomationBlueprintFunctionLibrary_OpenLevelWithGameMode_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelName = LevelName;
	params.GameMode = GameMode;
	params.Absolute = Absolute;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.LogPlatformMemoryStats
// (Final, Native, Static, Public, BlueprintCallable)

void UAutomationBlueprintFunctionLibrary::LogPlatformMemoryStats()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.LogPlatformMemoryStats"));

	UAutomationBlueprintFunctionLibrary_LogPlatformMemoryStats_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsTravelFinished
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutomationBlueprintFunctionLibrary::IsTravelFinished(UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsTravelFinished"));

	UAutomationBlueprintFunctionLibrary_IsTravelFinished_Params params;
	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsFeatureToggleEnabled
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FName                          FeatureToggleName              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutomationBlueprintFunctionLibrary::IsFeatureToggleEnabled(const FName& FeatureToggleName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsFeatureToggleEnabled"));

	UAutomationBlueprintFunctionLibrary_IsFeatureToggleEnabled_Params params;
	params.FeatureToggleName = FeatureToggleName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsEditor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutomationBlueprintFunctionLibrary::IsEditor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsEditor"));

	UAutomationBlueprintFunctionLibrary_IsEditor_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.HasPerformanceDataBeenCaptured
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutomationBlueprintFunctionLibrary::HasPerformanceDataBeenCaptured()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.HasPerformanceDataBeenCaptured"));

	UAutomationBlueprintFunctionLibrary_HasPerformanceDataBeenCaptured_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetTestLevelScriptActor
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ErrorOnFailure                 (Parm, ZeroConstructor, IsPlainOldData)
// ATestLevelScriptActor*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ATestLevelScriptActor* UAutomationBlueprintFunctionLibrary::GetTestLevelScriptActor(bool ErrorOnFailure)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetTestLevelScriptActor"));

	UAutomationBlueprintFunctionLibrary_GetTestLevelScriptActor_Params params;
	params.ErrorOnFailure = ErrorOnFailure;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetPlayerId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// APlayerState*                  State                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAutomationBlueprintFunctionLibrary::GetPlayerId(APlayerState* State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetPlayerId"));

	UAutomationBlueprintFunctionLibrary_GetPlayerId_Params params;
	params.State = State;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetLevelUrl
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FString                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

FString UAutomationBlueprintFunctionLibrary::GetLevelUrl(UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetLevelUrl"));

	UAutomationBlueprintFunctionLibrary_GetLevelUrl_Params params;
	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetCurrentMapTestName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FString                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

FString UAutomationBlueprintFunctionLibrary::GetCurrentMapTestName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetCurrentMapTestName"));

	UAutomationBlueprintFunctionLibrary_GetCurrentMapTestName_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.EndPerformanceCapture
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           DumpMemReport                  (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::EndPerformanceCapture(bool DumpMemReport)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.EndPerformanceCapture"));

	UAutomationBlueprintFunctionLibrary_EndPerformanceCapture_Params params;
	params.DumpMemReport = DumpMemReport;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReportDelayed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            FrameDelay                     (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::DumpFullMemReportDelayed(int FrameDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReportDelayed"));

	UAutomationBlueprintFunctionLibrary_DumpFullMemReportDelayed_Params params;
	params.FrameDelay = FrameDelay;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReport
// (Final, Native, Static, Public, BlueprintCallable)

void UAutomationBlueprintFunctionLibrary::DumpFullMemReport()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReport"));

	UAutomationBlueprintFunctionLibrary_DumpFullMemReport_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFramesWithDesc
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FLatentActionInfo              LatentInfo                     (Parm)
// int                            NumFrames                      (Parm, ZeroConstructor, IsPlainOldData)
// FString                        Description                    (Parm, ZeroConstructor)

void UAutomationBlueprintFunctionLibrary::DelayForFramesWithDesc(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, int NumFrames, const FString& Description)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFramesWithDesc"));

	UAutomationBlueprintFunctionLibrary_DelayForFramesWithDesc_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumFrames = NumFrames;
	params.Description = Description;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FLatentActionInfo              LatentInfo                     (Parm)
// int                            NumFrames                      (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::DelayForFrames(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, int NumFrames)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFrames"));

	UAutomationBlueprintFunctionLibrary_DelayForFrames_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumFrames = NumFrames;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.CollectGarbageNow
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           FullPurge                      (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::CollectGarbageNow(bool FullPurge)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.CollectGarbageNow"));

	UAutomationBlueprintFunctionLibrary_CollectGarbageNow_Params params;
	params.FullPurge = FullPurge;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BlockAsyncLoading
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           EnableBlock                    (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::BlockAsyncLoading(bool EnableBlock)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BlockAsyncLoading"));

	UAutomationBlueprintFunctionLibrary_BlockAsyncLoading_Params params;
	params.EnableBlock = EnableBlock;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BeginPerformanceCapture
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// FString                        FolderName                     (Parm, ZeroConstructor)
// bool                           DumpMemReport                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PreventGarbageCollection       (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::BeginPerformanceCapture(const FString& FolderName, bool DumpMemReport, bool PreventGarbageCollection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BeginPerformanceCapture"));

	UAutomationBlueprintFunctionLibrary_BeginPerformanceCapture_Params params;
	params.FolderName = FolderName;
	params.DumpMemReport = DumpMemReport;
	params.PreventGarbageCollection = PreventGarbageCollection;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Int
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Actual                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EComparisonMethod> ShouldBe                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Expected                       (Parm, ZeroConstructor, IsPlainOldData)
// FString                        What                           (Parm, ZeroConstructor)
// UObject*                       ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertValue_Int(int Actual, TEnumAsByte<EComparisonMethod> ShouldBe, int Expected, const FString& What, UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Int"));

	UAutomationBlueprintFunctionLibrary_AssertValue_Int_Params params;
	params.Actual = Actual;
	params.ShouldBe = ShouldBe;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Float
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Actual                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EComparisonMethod> ShouldBe                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Expected                       (Parm, ZeroConstructor, IsPlainOldData)
// FString                        What                           (Parm, ZeroConstructor)
// UObject*                       ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertValue_Float(float Actual, TEnumAsByte<EComparisonMethod> ShouldBe, float Expected, const FString& What, UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Float"));

	UAutomationBlueprintFunctionLibrary_AssertValue_Float_Params params;
	params.Actual = Actual;
	params.ShouldBe = ShouldBe;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_DateTime
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// FDateTime                      Actual                         (Parm, ZeroConstructor)
// TEnumAsByte<EComparisonMethod> ShouldBe                       (Parm, ZeroConstructor, IsPlainOldData)
// FDateTime                      Expected                       (Parm, ZeroConstructor)
// FString                        What                           (Parm, ZeroConstructor)
// UObject*                       ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertValue_DateTime(const FDateTime& Actual, TEnumAsByte<EComparisonMethod> ShouldBe, const FDateTime& Expected, const FString& What, UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_DateTime"));

	UAutomationBlueprintFunctionLibrary_AssertValue_DateTime_Params params;
	params.Actual = Actual;
	params.ShouldBe = ShouldBe;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertTrue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           Condition                      (Parm, ZeroConstructor, IsPlainOldData)
// FString                        Message                        (Parm, ZeroConstructor)
// UObject*                       ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertTrue(bool Condition, const FString& Message, UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertTrue"));

	UAutomationBlueprintFunctionLibrary_AssertTrue_Params params;
	params.Condition = Condition;
	params.Message = Message;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Vector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// FVector                        Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FVector                        NotExpected                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FString                        What                           (Parm, ZeroConstructor)
// UObject*                       ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertNotEqual_Vector(const FVector& Actual, const FVector& NotExpected, const FString& What, UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Vector"));

	UAutomationBlueprintFunctionLibrary_AssertNotEqual_Vector_Params params;
	params.Actual = Actual;
	params.NotExpected = NotExpected;
	params.What = What;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Transform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// FTransform                     Actual                         (ConstParm, Parm, IsPlainOldData)
// FTransform                     NotExpected                    (ConstParm, Parm, IsPlainOldData)
// FString                        What                           (Parm, ZeroConstructor)
// UObject*                       ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertNotEqual_Transform(const FTransform& Actual, const FTransform& NotExpected, const FString& What, UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Transform"));

	UAutomationBlueprintFunctionLibrary_AssertNotEqual_Transform_Params params;
	params.Actual = Actual;
	params.NotExpected = NotExpected;
	params.What = What;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_String
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FString                        Actual                         (ConstParm, Parm, ZeroConstructor)
// FString                        NotExpected                    (ConstParm, Parm, ZeroConstructor)
// FString                        What                           (Parm, ZeroConstructor)
// UObject*                       ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertNotEqual_String(const FString& Actual, const FString& NotExpected, const FString& What, UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_String"));

	UAutomationBlueprintFunctionLibrary_AssertNotEqual_String_Params params;
	params.Actual = Actual;
	params.NotExpected = NotExpected;
	params.What = What;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Rotator
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// FRotator                       Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FRotator                       NotExpected                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FString                        What                           (Parm, ZeroConstructor)
// UObject*                       ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertNotEqual_Rotator(const FRotator& Actual, const FRotator& NotExpected, const FString& What, UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Rotator"));

	UAutomationBlueprintFunctionLibrary_AssertNotEqual_Rotator_Params params;
	params.Actual = Actual;
	params.NotExpected = NotExpected;
	params.What = What;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsValid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       Object                         (Parm, ZeroConstructor, IsPlainOldData)
// FString                        Message                        (Parm, ZeroConstructor)
// UObject*                       ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertIsValid(UObject* Object, const FString& Message, UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsValid"));

	UAutomationBlueprintFunctionLibrary_AssertIsValid_Params params;
	params.Object = Object;
	params.Message = Message;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsNotValid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       Object                         (Parm, ZeroConstructor, IsPlainOldData)
// FString                        Message                        (Parm, ZeroConstructor)
// UObject*                       ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertIsNotValid(UObject* Object, const FString& Message, UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsNotValid"));

	UAutomationBlueprintFunctionLibrary_AssertIsNotValid_Params params;
	params.Object = Object;
	params.Message = Message;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertFalse
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           Condition                      (Parm, ZeroConstructor, IsPlainOldData)
// FString                        Message                        (Parm, ZeroConstructor)
// UObject*                       ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertFalse(bool Condition, const FString& Message, UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertFalse"));

	UAutomationBlueprintFunctionLibrary_AssertFalse_Params params;
	params.Condition = Condition;
	params.Message = Message;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertErrorOccurred
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FString                        ErrorMessage                   (Parm, ZeroConstructor)

void UAutomationBlueprintFunctionLibrary::AssertErrorOccurred(const FString& ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertErrorOccurred"));

	UAutomationBlueprintFunctionLibrary_AssertErrorOccurred_Params params;
	params.ErrorMessage = ErrorMessage;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// FVector2D                      Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FVector2D                      Expected                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FString                        What                           (Parm, ZeroConstructor)
// float                          Tolerance                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertEqual_Vector2D(const FVector2D& Actual, const FVector2D& Expected, const FString& What, float Tolerance, UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector2D"));

	UAutomationBlueprintFunctionLibrary_AssertEqual_Vector2D_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.Tolerance = Tolerance;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// FVector                        Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Expected                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FString                        What                           (Parm, ZeroConstructor)
// float                          Tolerance                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertEqual_Vector(const FVector& Actual, const FVector& Expected, const FString& What, float Tolerance, UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector"));

	UAutomationBlueprintFunctionLibrary_AssertEqual_Vector_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.Tolerance = Tolerance;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Transform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// FTransform                     Actual                         (ConstParm, Parm, IsPlainOldData)
// FTransform                     Expected                       (ConstParm, Parm, IsPlainOldData)
// FString                        What                           (Parm, ZeroConstructor)
// UObject*                       ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertEqual_Transform(const FTransform& Actual, const FTransform& Expected, const FString& What, UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Transform"));

	UAutomationBlueprintFunctionLibrary_AssertEqual_Transform_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_String
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FString                        Actual                         (ConstParm, Parm, ZeroConstructor)
// FString                        Expected                       (ConstParm, Parm, ZeroConstructor)
// FString                        What                           (Parm, ZeroConstructor)
// UObject*                       ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertEqual_String(const FString& Actual, const FString& Expected, const FString& What, UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_String"));

	UAutomationBlueprintFunctionLibrary_AssertEqual_String_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Rotator
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// FRotator                       Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FRotator                       Expected                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FString                        What                           (Parm, ZeroConstructor)
// UObject*                       ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertEqual_Rotator(const FRotator& Actual, const FRotator& Expected, const FString& What, UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Rotator"));

	UAutomationBlueprintFunctionLibrary_AssertEqual_Rotator_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Float
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Expected                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FString                        What                           (Parm, ZeroConstructor)
// float                          Tolerance                      (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertEqual_Float(float Actual, float Expected, const FString& What, float Tolerance, UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Float"));

	UAutomationBlueprintFunctionLibrary_AssertEqual_Float_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.Tolerance = Tolerance;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AddExpectedError
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FString                        ErrorMessage                   (Parm, ZeroConstructor)

void UAutomationBlueprintFunctionLibrary::AddExpectedError(const FString& ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AddExpectedError"));

	UAutomationBlueprintFunctionLibrary_AddExpectedError_Params params;
	params.ErrorMessage = ErrorMessage;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationLatentActionCallback.LatentCallback
// (Final, Native, Private)
// Parameters:
// int                            Linkage                        (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationLatentActionCallback::LatentCallback(int Linkage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationLatentActionCallback.LatentCallback"));

	UAutomationLatentActionCallback_LatentCallback_Params params;
	params.Linkage = Linkage;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestablePlayerControllerComponent.YieldToServer
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void UTestablePlayerControllerComponent::YieldToServer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestablePlayerControllerComponent.YieldToServer"));

	UTestablePlayerControllerComponent_YieldToServer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestablePlayerControllerComponent.PerformPostTestCleanup
// (Final, Net, NetReliable, Native, Event, Private, NetClient)

void UTestablePlayerControllerComponent::PerformPostTestCleanup()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestablePlayerControllerComponent.PerformPostTestCleanup"));

	UTestablePlayerControllerComponent_PerformPostTestCleanup_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestablePlayerControllerComponent.DisconnectClientFromTest
// (Final, Net, NetReliable, Native, Event, Private, NetClient)

void UTestablePlayerControllerComponent::DisconnectClientFromTest()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestablePlayerControllerComponent.DisconnectClientFromTest"));

	UTestablePlayerControllerComponent_DisconnectClientFromTest_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
