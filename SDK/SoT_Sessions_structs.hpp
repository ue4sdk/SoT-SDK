#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Sessions_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Sessions.SessionTemplate
// 0x0018
struct FSessionTemplate
{
	class FString                                      TemplateName;                                             // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<ECrewSessionType>                      SessionType;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                MaxPlayers;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Sessions.CrewSessionTemplate
// 0x0020 (0x0038 - 0x0018)
struct FCrewSessionTemplate : public FSessionTemplate
{
	class FString                                      MatchmakingHopper;                                        // 0x0018(0x0010) (ZeroConstructor)
	class UClass*                                      ShipSize;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MaxMatchmakingPlayers;                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Sessions.SessionLostEvent
// 0x0001
struct FSessionLostEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Sessions.SessionDetailsChangedEvent
// 0x0020
struct FSessionDetailsChangedEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Sessions.SessionInfoUpdateAvailableEvent
// 0x0010
struct FSessionInfoUpdateAvailableEvent
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Sessions.CrewSessionOperationFailedTelemetryEvent
// 0x0018
struct FCrewSessionOperationFailedTelemetryEvent
{
	class FString                                      ErrorMessage;                                             // 0x0000(0x0010) (ZeroConstructor)
	int                                                OperationTypeCode;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               WasCancelled;                                             // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Sessions.CrewSessionBaseTelemetryEvent
// 0x0010
struct FCrewSessionBaseTelemetryEvent
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Sessions.CrewSessionMemberTelemetry
// 0x0028
struct FCrewSessionMemberTelemetry
{
	class FString                                      UserId;                                                   // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      StatusString;                                             // 0x0010(0x0010) (ZeroConstructor)
	bool                                               IsSessionHost;                                            // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Sessions.CrewSessionTelemetry
// 0x0040
struct FCrewSessionTelemetry
{
	TArray<struct FCrewSessionMemberTelemetry>         SessionMembers;                                           // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      SessionTemplate;                                          // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      SessionVisibility;                                        // 0x0020(0x0010) (ZeroConstructor)
	class FString                                      PlayMode;                                                 // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Sessions.CrewSessionBaseSessionTelemetryEvent
// 0x0040 (0x0050 - 0x0010)
struct FCrewSessionBaseSessionTelemetryEvent : public FCrewSessionBaseTelemetryEvent
{
	struct FCrewSessionTelemetry                       Session;                                                  // 0x0010(0x0040)
};

// ScriptStruct Sessions.CrewSessionMatchmakingFollowedTelemetryEvent
// 0x0028 (0x0078 - 0x0050)
struct FCrewSessionMatchmakingFollowedTelemetryEvent : public FCrewSessionBaseSessionTelemetryEvent
{
	struct FGuid                                       NewCrewId;                                                // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                ResultCode;                                               // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	class FString                                      Message;                                                  // 0x0068(0x0010) (ZeroConstructor)
};

// ScriptStruct Sessions.CrewSessionMatchmakingEndedTelemetryEvent
// 0x0028 (0x0078 - 0x0050)
struct FCrewSessionMatchmakingEndedTelemetryEvent : public FCrewSessionBaseSessionTelemetryEvent
{
	struct FGuid                                       NewCrewId;                                                // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                ResultCode;                                               // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	class FString                                      Message;                                                  // 0x0068(0x0010) (ZeroConstructor)
};

// ScriptStruct Sessions.CrewSessionMatchmakingStartedTelemetryEvent
// 0x0008 (0x0018 - 0x0010)
struct FCrewSessionMatchmakingStartedTelemetryEvent : public FCrewSessionBaseTelemetryEvent
{
	float                                              TimeoutSeconds;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               PreserveSession;                                          // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ResubmitTicket;                                           // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
};

// ScriptStruct Sessions.CrewSessionLeaveTelemetryEvent
// 0x0000 (0x0010 - 0x0010)
struct FCrewSessionLeaveTelemetryEvent : public FCrewSessionBaseTelemetryEvent
{

};

// ScriptStruct Sessions.CrewSessionQoSMeasurementTelemetry
// 0x0020
struct FCrewSessionQoSMeasurementTelemetry
{
	class FString                                      Location;                                                 // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           AvgLatency;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumReceivedPings;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumFailedPings;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECrewSessionQoSServerResolveResult>    ResolveResult;                                            // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               LocationWasConsidered;                                    // 0x001D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct Sessions.CrewSessionJoinedTelemetryEvent
// 0x0020 (0x0070 - 0x0050)
struct FCrewSessionJoinedTelemetryEvent : public FCrewSessionBaseSessionTelemetryEvent
{
	class FString                                      JoinMethod;                                               // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FCrewSessionQoSMeasurementTelemetry> QoSTelemetry;                                             // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct Sessions.CrewSessionCreatedTelemetryEvent
// 0x0010 (0x0060 - 0x0050)
struct FCrewSessionCreatedTelemetryEvent : public FCrewSessionBaseSessionTelemetryEvent
{
	TArray<struct FCrewSessionQoSMeasurementTelemetry> QoSTelemetry;                                             // 0x0050(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
