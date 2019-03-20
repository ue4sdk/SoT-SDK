// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_StudiosAutomation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StudiosAutomation.TestablePlayerController.YieldToServer
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void ATestablePlayerController::YieldToServer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestablePlayerController.YieldToServer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestablePlayerController.PerformPostTestCleanup
// (Net, NetReliable, Native, Event, Public, NetClient)

void ATestablePlayerController::PerformPostTestCleanup()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestablePlayerController.PerformPostTestCleanup"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestablePlayerController.DisconnectClientFromTest
// (Net, NetReliable, Native, Event, Public, NetClient)

void ATestablePlayerController::DisconnectClientFromTest()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestablePlayerController.DisconnectClientFromTest"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.YieldToServer
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void ATestLevelScriptActor::YieldToServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.YieldToServer"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.YieldToOriginalServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void ATestLevelScriptActor::YieldToOriginalServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.YieldToOriginalServer"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.YieldToDynamicServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// int                            ServerIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::YieldToDynamicServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int ServerIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.YieldToDynamicServer"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		int                            ServerIndex;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.ServerIndex = ServerIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.YieldToClient
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// int                            ClientId                       (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::YieldToClient(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int ClientId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.YieldToClient"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		int                            ClientId;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.ClientId = ClientId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.WaitForPossessionAcknowledgement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void ATestLevelScriptActor::WaitForPossessionAcknowledgement(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.WaitForPossessionAcknowledgement"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.WaitForOtherServers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// int                            NumberOfServers                (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::WaitForOtherServers(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumberOfServers)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.WaitForOtherServers"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		int                            NumberOfServers;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumberOfServers = NumberOfServers;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.WaitForClients
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// int                            NumberOfClients                (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::WaitForClients(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumberOfClients)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.WaitForClients"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		int                            NumberOfClients;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumberOfClients = NumberOfClients;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.TestTriggerServerMigration
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          ActorGroup                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            TargetServerIndex              (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::TestTriggerServerMigration(TArray<class AActor*> ActorGroup, int TargetServerIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.TestTriggerServerMigration"));

	struct
	{
		TArray<class AActor*>          ActorGroup;
		int                            TargetServerIndex;
	} params;

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

	struct
	{
		int                            ConnectionIdx;
		bool                           ReturnValue;
	} params;

	params.ConnectionIdx = ConnectionIdx;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.SyncClientServer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// int                            NumClients                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RegisterPawnsForMPTesting      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ClearPawnInputBindings         (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::SyncClientServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumClients, bool RegisterPawnsForMPTesting, bool ClearPawnInputBindings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.SyncClientServer"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		int                            NumClients;
		bool                           RegisterPawnsForMPTesting;
		bool                           ClearPawnInputBindings;
	} params;

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
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SpawnLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                SpawnRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ATestLevelScriptActor::SpawnActorForMPTesting(class UObject* WorldContextObject, class UClass* ActorClass, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.SpawnActorForMPTesting"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UClass*                  ActorClass;
		struct FVector                 SpawnLocation;
		struct FRotator                SpawnRotation;
		class AActor*                  ReturnValue;
	} params;

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

	struct
	{
		int                            TestValue;
	} params;

	params.TestValue = TestValue;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.RegisterPawnsForMPTesting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::RegisterPawnsForMPTesting(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.RegisterPawnsForMPTesting"));

	struct
	{
		class UObject*                 WorldContextObject;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTestingRecursively
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::RegisterActorForMPTestingRecursively(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTestingRecursively"));

	struct
	{
		class AActor*                  TargetActor;
	} params;

	params.TargetActor = TargetActor;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTesting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::RegisterActorForMPTesting(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTesting"));

	struct
	{
		class AActor*                  TargetActor;
	} params;

	params.TargetActor = TargetActor;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.PostTestCleanup
// (Event, Public, BlueprintEvent)

void ATestLevelScriptActor::PostTestCleanup()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.PostTestCleanup"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.OnServerMigrationTestValueInt32Received
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            TestValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnServerMigrationTestValueInt32Received(int TestValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnServerMigrationTestValueInt32Received"));

	struct
	{
		int                            TestValue;
	} params;

	params.TestValue = TestValue;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationStarted
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                   MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class APlayerController*> Players                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ATestLevelScriptActor::OnOutgoingServerMigrationStarted(const struct FGuid& MigrationId, TArray<class APlayerController*> Players)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationStarted"));

	struct
	{
		struct FGuid                   MigrationId;
		TArray<class APlayerController*> Players;
	} params;

	params.MigrationId = MigrationId;
	params.Players = Players;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationCompleted
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                   MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnOutgoingServerMigrationCompleted(const struct FGuid& MigrationId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationCompleted"));

	struct
	{
		struct FGuid                   MigrationId;
	} params;

	params.MigrationId = MigrationId;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationAborted
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                   MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnOutgoingServerMigrationAborted(const struct FGuid& MigrationId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationAborted"));

	struct
	{
		struct FGuid                   MigrationId;
	} params;

	params.MigrationId = MigrationId;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationStarted
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                   MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumPlayers                     (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnIncomingServerMigrationStarted(const struct FGuid& MigrationId, int NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationStarted"));

	struct
	{
		struct FGuid                   MigrationId;
		int                            NumPlayers;
	} params;

	params.MigrationId = MigrationId;
	params.NumPlayers = NumPlayers;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationCompleted
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                   MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class APlayerController*> Players                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ATestLevelScriptActor::OnIncomingServerMigrationCompleted(const struct FGuid& MigrationId, TArray<class APlayerController*> Players, TArray<class AActor*> Actors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationCompleted"));

	struct
	{
		struct FGuid                   MigrationId;
		TArray<class APlayerController*> Players;
		TArray<class AActor*>          Actors;
	} params;

	params.MigrationId = MigrationId;
	params.Players = Players;
	params.Actors = Actors;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationAborted
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                   MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnIncomingServerMigrationAborted(const struct FGuid& MigrationId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationAborted"));

	struct
	{
		struct FGuid                   MigrationId;
	} params;

	params.MigrationId = MigrationId;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationStarted
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                   MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnClientServerMigrationStarted(const struct FGuid& MigrationId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationStarted"));

	struct
	{
		struct FGuid                   MigrationId;
	} params;

	params.MigrationId = MigrationId;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationCompleted
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                   MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnClientServerMigrationCompleted(const struct FGuid& MigrationId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationCompleted"));

	struct
	{
		struct FGuid                   MigrationId;
	} params;

	params.MigrationId = MigrationId;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationAborted
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                   MigrationId                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::OnClientServerMigrationAborted(const struct FGuid& MigrationId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationAborted"));

	struct
	{
		struct FGuid                   MigrationId;
	} params;

	params.MigrationId = MigrationId;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.GetServerIndex
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATestLevelScriptActor::GetServerIndex(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.GetServerIndex"));

	struct
	{
		class UObject*                 WorldContextObject;
		int                            ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.GetRemoteServerMigrationURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TargetServerIndex              (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString ATestLevelScriptActor::GetRemoteServerMigrationURL(int TargetServerIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.GetRemoteServerMigrationURL"));

	struct
	{
		int                            TargetServerIndex;
		class FString                  ReturnValue;
	} params;

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

	struct
	{
		int                            ClientId;
		int                            ReturnValue;
	} params;

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

	struct
	{
		int                            ReturnValue;
	} params;


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

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.GetClientPawn"));

	struct
	{
		int                            ClientId;
		int                            SplitScreenIndex;
		class APawn*                   ReturnValue;
	} params;

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

	struct
	{
		bool                           ErrorOnFailure;
		int                            ReturnValue;
	} params;

	params.ErrorOnFailure = ErrorOnFailure;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.TestLevelScriptActor.DoServerPostTestCleanup
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void ATestLevelScriptActor::DoServerPostTestCleanup()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.DoServerPostTestCleanup"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.ClearPawnInputBindings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void ATestLevelScriptActor::ClearPawnInputBindings(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.ClearPawnInputBindings"));

	struct
	{
		class UObject*                 WorldContextObject;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.AddServer
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)

void ATestLevelScriptActor::AddServer(const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.AddServer"));

	struct
	{
		class FString                  Name;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.TestLevelScriptActor.AddClient
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            Port                           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Name                           (Parm, ZeroConstructor)

void ATestLevelScriptActor::AddClient(int Port, const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.TestLevelScriptActor.AddClient"));

	struct
	{
		int                            Port;
		class FString                  Name;
	} params;

	params.Port = Port;
	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFinished
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::TestFinished(class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFinished"));

	struct
	{
		class UObject*                 ContextObject;
	} params;

	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFailed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  Message                        (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::TestFailed(const class FString& Message, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFailed"));

	struct
	{
		class FString                  Message;
		class UObject*                 ContextObject;
	} params;

	params.Message = Message;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// class ACameraActor*            Camera                         (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  NameOverride                   (Parm, ZeroConstructor)
// float                          DelayBeforeScreenshotSeconds   (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshotAtCamera(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ACameraActor* Camera, const class FString& NameOverride, float DelayBeforeScreenshotSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		class ACameraActor*            Camera;
		class FString                  NameOverride;
		float                          DelayBeforeScreenshotSeconds;
	} params;

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
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// class FString                  Name                           (Parm, ZeroConstructor)

void UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshot(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		class FString                  Name;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Name = Name;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepStarted
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  StepName                       (Parm, ZeroConstructor)

void UAutomationBlueprintFunctionLibrary::StepStarted(const class FString& StepName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepStarted"));

	struct
	{
		class FString                  StepName;
	} params;

	params.StepName = StepName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepFinished
// (Final, Native, Static, Public, BlueprintCallable)

void UAutomationBlueprintFunctionLibrary::StepFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepFinished"));

	struct
	{
	} params;


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

	struct
	{
		bool                           TimeoutIsFatal;
	} params;

	params.TimeoutIsFatal = TimeoutIsFatal;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.OpenLevelWithGameMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LevelName                      (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  GameMode                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Absolute                       (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::OpenLevelWithGameMode(class UObject* WorldContextObject, const struct FName& LevelName, class UClass* GameMode, bool Absolute)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.OpenLevelWithGameMode"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FName                   LevelName;
		class UClass*                  GameMode;
		bool                           Absolute;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.LevelName = LevelName;
	params.GameMode = GameMode;
	params.Absolute = Absolute;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsTravelFinished
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutomationBlueprintFunctionLibrary::IsTravelFinished(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsTravelFinished"));

	struct
	{
		class UObject*                 WorldContextObject;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

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

	struct
	{
		bool                           ReturnValue;
	} params;


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

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetTestLevelScriptActor
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ErrorOnFailure                 (Parm, ZeroConstructor, IsPlainOldData)
// class ATestLevelScriptActor*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ATestLevelScriptActor* UAutomationBlueprintFunctionLibrary::GetTestLevelScriptActor(bool ErrorOnFailure)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetTestLevelScriptActor"));

	struct
	{
		bool                           ErrorOnFailure;
		class ATestLevelScriptActor*   ReturnValue;
	} params;

	params.ErrorOnFailure = ErrorOnFailure;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetPlayerId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState*            State                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAutomationBlueprintFunctionLibrary::GetPlayerId(class APlayerState* State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetPlayerId"));

	struct
	{
		class APlayerState*            State;
		int                            ReturnValue;
	} params;

	params.State = State;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetLevelUrl
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UAutomationBlueprintFunctionLibrary::GetLevelUrl(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetLevelUrl"));

	struct
	{
		class UObject*                 WorldContextObject;
		class FString                  ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetCurrentMapTestName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UAutomationBlueprintFunctionLibrary::GetCurrentMapTestName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetCurrentMapTestName"));

	struct
	{
		class FString                  ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.EndPerformanceCapture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           DumpMemReport                  (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::EndPerformanceCapture(bool DumpMemReport)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.EndPerformanceCapture"));

	struct
	{
		bool                           DumpMemReport;
	} params;

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

	struct
	{
		int                            FrameDelay;
	} params;

	params.FrameDelay = FrameDelay;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReport
// (Final, Native, Static, Public, BlueprintCallable)

void UAutomationBlueprintFunctionLibrary::DumpFullMemReport()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReport"));

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFramesWithDesc
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// int                            NumFrames                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Description                    (Parm, ZeroConstructor)

void UAutomationBlueprintFunctionLibrary::DelayForFramesWithDesc(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumFrames, const class FString& Description)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFramesWithDesc"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		int                            NumFrames;
		class FString                  Description;
	} params;

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
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// int                            NumFrames                      (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::DelayForFrames(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumFrames)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFrames"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		int                            NumFrames;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumFrames = NumFrames;

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

	struct
	{
		bool                           EnableBlock;
	} params;

	params.EnableBlock = EnableBlock;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BeginPerformanceCapture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  FolderName                     (Parm, ZeroConstructor)
// bool                           DumpMemReport                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PreventGarbageCollection       (Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::BeginPerformanceCapture(const class FString& FolderName, bool DumpMemReport, bool PreventGarbageCollection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BeginPerformanceCapture"));

	struct
	{
		class FString                  FolderName;
		bool                           DumpMemReport;
		bool                           PreventGarbageCollection;
	} params;

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
// class FString                  What                           (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertValue_Int(int Actual, TEnumAsByte<EComparisonMethod> ShouldBe, int Expected, const class FString& What, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Int"));

	struct
	{
		int                            Actual;
		TEnumAsByte<EComparisonMethod> ShouldBe;
		int                            Expected;
		class FString                  What;
		class UObject*                 ContextObject;
	} params;

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
// class FString                  What                           (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertValue_Float(float Actual, TEnumAsByte<EComparisonMethod> ShouldBe, float Expected, const class FString& What, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Float"));

	struct
	{
		float                          Actual;
		TEnumAsByte<EComparisonMethod> ShouldBe;
		float                          Expected;
		class FString                  What;
		class UObject*                 ContextObject;
	} params;

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
// struct FDateTime               Actual                         (Parm, ZeroConstructor)
// TEnumAsByte<EComparisonMethod> ShouldBe                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FDateTime               Expected                       (Parm, ZeroConstructor)
// class FString                  What                           (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertValue_DateTime(const struct FDateTime& Actual, TEnumAsByte<EComparisonMethod> ShouldBe, const struct FDateTime& Expected, const class FString& What, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_DateTime"));

	struct
	{
		struct FDateTime               Actual;
		TEnumAsByte<EComparisonMethod> ShouldBe;
		struct FDateTime               Expected;
		class FString                  What;
		class UObject*                 ContextObject;
	} params;

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
// class FString                  Message                        (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertTrue(bool Condition, const class FString& Message, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertTrue"));

	struct
	{
		bool                           Condition;
		class FString                  Message;
		class UObject*                 ContextObject;
	} params;

	params.Condition = Condition;
	params.Message = Message;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Vector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NotExpected                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  What                           (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertNotEqual_Vector(const struct FVector& Actual, const struct FVector& NotExpected, const class FString& What, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Vector"));

	struct
	{
		struct FVector                 Actual;
		struct FVector                 NotExpected;
		class FString                  What;
		class UObject*                 ContextObject;
	} params;

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
// struct FTransform              Actual                         (ConstParm, Parm, IsPlainOldData)
// struct FTransform              NotExpected                    (ConstParm, Parm, IsPlainOldData)
// class FString                  What                           (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertNotEqual_Transform(const struct FTransform& Actual, const struct FTransform& NotExpected, const class FString& What, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Transform"));

	struct
	{
		struct FTransform              Actual;
		struct FTransform              NotExpected;
		class FString                  What;
		class UObject*                 ContextObject;
	} params;

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
// class FString                  Actual                         (ConstParm, Parm, ZeroConstructor)
// class FString                  NotExpected                    (ConstParm, Parm, ZeroConstructor)
// class FString                  What                           (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertNotEqual_String(const class FString& Actual, const class FString& NotExpected, const class FString& What, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_String"));

	struct
	{
		class FString                  Actual;
		class FString                  NotExpected;
		class FString                  What;
		class UObject*                 ContextObject;
	} params;

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
// struct FRotator                Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NotExpected                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  What                           (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertNotEqual_Rotator(const struct FRotator& Actual, const struct FRotator& NotExpected, const class FString& What, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Rotator"));

	struct
	{
		struct FRotator                Actual;
		struct FRotator                NotExpected;
		class FString                  What;
		class UObject*                 ContextObject;
	} params;

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
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Message                        (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertIsValid(class UObject* Object, const class FString& Message, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsValid"));

	struct
	{
		class UObject*                 Object;
		class FString                  Message;
		class UObject*                 ContextObject;
	} params;

	params.Object = Object;
	params.Message = Message;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsNotValid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Message                        (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertIsNotValid(class UObject* Object, const class FString& Message, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsNotValid"));

	struct
	{
		class UObject*                 Object;
		class FString                  Message;
		class UObject*                 ContextObject;
	} params;

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
// class FString                  Message                        (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertFalse(bool Condition, const class FString& Message, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertFalse"));

	struct
	{
		bool                           Condition;
		class FString                  Message;
		class UObject*                 ContextObject;
	} params;

	params.Condition = Condition;
	params.Message = Message;
	params.ContextObject = ContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertErrorOccurred
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  ErrorMessage                   (Parm, ZeroConstructor)

void UAutomationBlueprintFunctionLibrary::AssertErrorOccurred(const class FString& ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertErrorOccurred"));

	struct
	{
		class FString                  ErrorMessage;
	} params;

	params.ErrorMessage = ErrorMessage;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Expected                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  What                           (Parm, ZeroConstructor)
// float                          Tolerance                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertEqual_Vector2D(const struct FVector2D& Actual, const struct FVector2D& Expected, const class FString& What, float Tolerance, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector2D"));

	struct
	{
		struct FVector2D               Actual;
		struct FVector2D               Expected;
		class FString                  What;
		float                          Tolerance;
		class UObject*                 ContextObject;
	} params;

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
// struct FVector                 Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Expected                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  What                           (Parm, ZeroConstructor)
// float                          Tolerance                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const class FString& What, float Tolerance, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector"));

	struct
	{
		struct FVector                 Actual;
		struct FVector                 Expected;
		class FString                  What;
		float                          Tolerance;
		class UObject*                 ContextObject;
	} params;

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
// struct FTransform              Actual                         (ConstParm, Parm, IsPlainOldData)
// struct FTransform              Expected                       (ConstParm, Parm, IsPlainOldData)
// class FString                  What                           (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const class FString& What, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Transform"));

	struct
	{
		struct FTransform              Actual;
		struct FTransform              Expected;
		class FString                  What;
		class UObject*                 ContextObject;
	} params;

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
// class FString                  Actual                         (ConstParm, Parm, ZeroConstructor)
// class FString                  Expected                       (ConstParm, Parm, ZeroConstructor)
// class FString                  What                           (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertEqual_String(const class FString& Actual, const class FString& Expected, const class FString& What, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_String"));

	struct
	{
		class FString                  Actual;
		class FString                  Expected;
		class FString                  What;
		class UObject*                 ContextObject;
	} params;

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
// struct FRotator                Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Expected                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  What                           (Parm, ZeroConstructor)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const class FString& What, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Rotator"));

	struct
	{
		struct FRotator                Actual;
		struct FRotator                Expected;
		class FString                  What;
		class UObject*                 ContextObject;
	} params;

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
// class FString                  What                           (Parm, ZeroConstructor)
// float                          Tolerance                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationBlueprintFunctionLibrary::AssertEqual_Float(float Actual, float Expected, const class FString& What, float Tolerance, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Float"));

	struct
	{
		float                          Actual;
		float                          Expected;
		class FString                  What;
		float                          Tolerance;
		class UObject*                 ContextObject;
	} params;

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
// class FString                  ErrorMessage                   (Parm, ZeroConstructor)

void UAutomationBlueprintFunctionLibrary::AddExpectedError(const class FString& ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AddExpectedError"));

	struct
	{
		class FString                  ErrorMessage;
	} params;

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

	struct
	{
		int                            Linkage;
	} params;

	params.Linkage = Linkage;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
