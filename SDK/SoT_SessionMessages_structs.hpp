#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// 0x0001
struct FSessionServiceLogUnsubscribe
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServiceLogSubscribe
// 0x0001
struct FSessionServiceLogSubscribe
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServiceLog
// 0x0038
struct FSessionServiceLog
{
	unsigned char                                      Verbosity;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FName                                       Category;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      Data;                                                     // 0x01E3(0x0010) (ZeroConstructor)
	struct FGuid                                       InstanceId;                                               // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	double                                             TimeSeconds;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SessionMessages.SessionServicePong
// 0x0090
struct FSessionServicePong
{
	bool                                               Standalone;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class FString                                      BuildDate;                                                // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      DeviceName;                                               // 0x01E3(0x0010) (ZeroConstructor)
	struct FGuid                                       InstanceId;                                               // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	class FString                                      InstanceName;                                             // 0x01E3(0x0010) (ZeroConstructor)
	bool                                               IsConsoleBuild;                                           // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	class FString                                      PlatformName;                                             // 0x01E3(0x0010) (ZeroConstructor)
	struct FGuid                                       SessionId;                                                // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	class FString                                      SessionName;                                              // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      SessionOwner;                                             // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct SessionMessages.SessionServicePing
// 0x0001
struct FSessionServicePing
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
