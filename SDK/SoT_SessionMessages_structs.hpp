#pragma once

// Sea of Thieves (2.1) SDK

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
	struct FName                                       Category;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      Data;                                                     // 0x0008(0x0010) (ZeroConstructor)
	struct FGuid                                       InstanceId;                                               // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
	double                                             TimeSeconds;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Verbosity;                                                // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServicePong
// 0x0090
struct FSessionServicePong
{
	class FString                                      BuildDate;                                                // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      DeviceName;                                               // 0x0010(0x0010) (ZeroConstructor)
	struct FGuid                                       InstanceId;                                               // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	class FString                                      InstanceName;                                             // 0x0030(0x0010) (ZeroConstructor)
	bool                                               IsConsoleBuild;                                           // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class FString                                      PlatformName;                                             // 0x0048(0x0010) (ZeroConstructor)
	struct FGuid                                       SessionId;                                                // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	class FString                                      SessionName;                                              // 0x0068(0x0010) (ZeroConstructor)
	class FString                                      SessionOwner;                                             // 0x0078(0x0010) (ZeroConstructor)
	bool                                               Standalone;                                               // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
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
