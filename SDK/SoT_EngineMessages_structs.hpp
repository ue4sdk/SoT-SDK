#pragma once

// Sea of Thieves (2) SDK

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

// ScriptStruct EngineMessages.EngineServiceNotification
// 0x0018
struct FEngineServiceNotification
{
	FString                                            Text;                                                     // 0x0000(0x0010) (ZeroConstructor)
	double                                             TimeSeconds;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EngineMessages.EngineServiceTerminate
// 0x0010
struct FEngineServiceTerminate
{
	FString                                            UserName;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServiceExecuteCommand
// 0x0020
struct FEngineServiceExecuteCommand
{
	FString                                            Command;                                                  // 0x0000(0x0010) (ZeroConstructor)
	FString                                            UserName;                                                 // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServiceAuthGrant
// 0x0020
struct FEngineServiceAuthGrant
{
	FString                                            UserName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	FString                                            UserToGrant;                                              // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServiceAuthDeny
// 0x0020
struct FEngineServiceAuthDeny
{
	FString                                            UserName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	FString                                            UserToDeny;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServicePong
// 0x0050
struct FEngineServicePong
{
	FString                                            CurrentLevel;                                             // 0x0000(0x0010) (ZeroConstructor)
	int                                                EngineVersion;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               HasBegunPlay;                                             // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	FGuid                                              InstanceId;                                               // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
	FString                                            InstanceType;                                             // 0x0028(0x0010) (ZeroConstructor)
	FGuid                                              SessionId;                                                // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              WorldTimeSeconds;                                         // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServicePing
// 0x0001
struct FEngineServicePing
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
