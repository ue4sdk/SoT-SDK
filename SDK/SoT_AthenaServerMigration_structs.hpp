#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_AthenaEngine_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaServerMigration.IncomingMigrationPreventionZone
// 0x000C
struct FIncomingMigrationPreventionZone
{
	struct FVector2D                                   Location;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaServerMigration.ServerMigrationSetupCompleteEvent
// 0x0001
struct FServerMigrationSetupCompleteEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaServerMigration.ServerMigrationSetupRequestEvent
// 0x0001
struct FServerMigrationSetupRequestEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaServerMigration.ServerMigrationReadyToTransferActors
// 0x0090
struct FServerMigrationReadyToTransferActors
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct AthenaServerMigration.PrepareForWorldSwitchRpc
// 0x0000 (0x0010 - 0x0010)
struct FPrepareForWorldSwitchRpc : public FBoxedRpc
{

};

// ScriptStruct AthenaServerMigration.ServerMigrationAboutToStartEvent
// 0x0020
struct FServerMigrationAboutToStartEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AthenaServerMigration.ServerMigrationConfigChangedEvent
// 0x0008
struct FServerMigrationConfigChangedEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AthenaServerMigration.ServerMigrationAbortEvent
// 0x0010
struct FServerMigrationAbortEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaServerMigration.ServerMigrationCompleteEvent
// 0x0001
struct FServerMigrationCompleteEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaServerMigration.ServerMigrationHeartbeatEvent
// 0x0078
struct FServerMigrationHeartbeatEvent
{
	struct FGuid                                       ServerId;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class FString                                      ServerLocation;                                           // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      GameEndpoint;                                             // 0x0020(0x0010) (ZeroConstructor)
	class FString                                      MigrationEndpoint;                                        // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FServerMigrationCrewMigrationStatus> CrewsMigrationStatus;                                     // 0x0040(0x0010) (ZeroConstructor)
	int                                                SequenceId;                                               // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FTimespan                                   ServerUptime;                                             // 0x0058(0x0008) (ZeroConstructor)
	struct FTimespan                                   ExpectedServerLifetime;                                   // 0x0060(0x0008) (ZeroConstructor)
	struct FTimespan                                   MessageInterval;                                          // 0x0068(0x0008) (ZeroConstructor)
	bool                                               ContestMatchmaking;                                       // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaServerMigration.ServerMigrationRefusedEvent
// 0x0020
struct FServerMigrationRefusedEvent
{
	struct FGuid                                       MigrationId;                                              // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaServerMigration.ServerMigrationInstanceEventBase
// 0x0020
struct FServerMigrationInstanceEventBase
{
	struct FGuid                                       ServerId;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MigrationId;                                              // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaServerMigration.OutgoingServerMigrationAbortedEvent
// 0x0000 (0x0020 - 0x0020)
struct FOutgoingServerMigrationAbortedEvent : public FServerMigrationInstanceEventBase
{

};

// ScriptStruct AthenaServerMigration.OutgoingServerMigrationCompletedEvent
// 0x0000 (0x0020 - 0x0020)
struct FOutgoingServerMigrationCompletedEvent : public FServerMigrationInstanceEventBase
{

};

// ScriptStruct AthenaServerMigration.OutgoingServerMigrationStartedEvent
// 0x0000 (0x0020 - 0x0020)
struct FOutgoingServerMigrationStartedEvent : public FServerMigrationInstanceEventBase
{

};

// ScriptStruct AthenaServerMigration.ServerMigrationSetServerConfigMessage
// 0x0008
struct FServerMigrationSetServerConfigMessage
{
	struct FTimespan                                   ExpectedServerLifetime;                                   // 0x0000(0x0008) (ZeroConstructor)
};

// ScriptStruct AthenaServerMigration.ServerMigrationRequestEvent
// 0x0040
struct FServerMigrationRequestEvent
{
	struct FGuid                                       MigrationId;                                              // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class FString                                      DestinationAddress;                                       // 0x0010(0x0010) (ZeroConstructor)
	struct FGuid                                       CrewId;                                                   // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	class FString                                      SubMode;                                                  // 0x0030(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
