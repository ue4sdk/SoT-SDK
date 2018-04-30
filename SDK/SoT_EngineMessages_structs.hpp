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

// ScriptStruct EngineMessages.EngineServiceNotification
// 0x0018
struct FEngineServiceNotification
{
	double                                             TimeSeconds;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class FString                                      Text;                                                     // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServiceTerminate
// 0x0010
struct FEngineServiceTerminate
{
	class FString                                      UserName;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServiceExecuteCommand
// 0x0020
struct FEngineServiceExecuteCommand
{
	class FString                                      UserName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class FString                                      Command;                                                  // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServiceAuthGrant
// 0x0020
struct FEngineServiceAuthGrant
{
	class FString                                      UserToGrant;                                              // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class FString                                      UserName;                                                 // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServiceAuthDeny
// 0x0020
struct FEngineServiceAuthDeny
{
	class FString                                      UserToDeny;                                               // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class FString                                      UserName;                                                 // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServicePong
// 0x0050
struct FEngineServicePong
{
	float                                              WorldTimeSeconds;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class FString                                      CurrentLevel;                                             // 0x01E3(0x0010) (ZeroConstructor)
	int                                                EngineVersion;                                            // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               HasBegunPlay;                                             // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       InstanceId;                                               // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	class FString                                      InstanceType;                                             // 0x01E3(0x0010) (ZeroConstructor)
	struct FGuid                                       SessionId;                                                // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
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
