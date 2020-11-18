#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_SeasonProgressionFramework_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SeasonProgressionFramework.PlayerTrackedObjective
// 0x0010
struct FPlayerTrackedObjective
{
	struct FGuid                                       ObjectiveId;                                              // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SeasonProgressionFramework.TrackedObjectiveEvent
// 0x0018
struct FTrackedObjectiveEvent
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct SeasonProgressionFramework.TrackedObjectiveCompletionMessage
// 0x0088
struct FTrackedObjectiveCompletionMessage
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	struct FPirateIdentity                             PirateIdentity;                                           // 0x0010(0x0028)
	struct FPlayerBaseTelemetryFragment                PlayerInfo;                                               // 0x0038(0x0048)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
};

// ScriptStruct SeasonProgressionFramework.TrackedObjectiveProgressUpdateMessage
// 0x0090
struct FTrackedObjectiveProgressUpdateMessage
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	struct FPirateIdentity                             PirateIdentity;                                           // 0x0010(0x0028)
	struct FPlayerBaseTelemetryFragment                PlayerInfo;                                               // 0x0038(0x0048)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
