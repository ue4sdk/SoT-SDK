#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_OnlineSubsystem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystem.DefaultOnlineEnvironmentSettings
// 0x0038 (0x0060 - 0x0028)
class UDefaultOnlineEnvironmentSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class FString                                      EnvironmentId;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	uint32_t                                           TitleId;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	class FString                                      ServiceConfigId;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystem.DefaultOnlineEnvironmentSettings");
		return ptr;
	}

};


// Class OnlineSubsystem.NamedInterfaces
// 0x0068 (0x0090 - 0x0028)
class UNamedInterfaces : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FNamedInterface>                     NamedInterfaces;                                          // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystem.NamedInterfaces");
		return ptr;
	}

};


// Class OnlineSubsystem.TurnBasedMatchInterface
// 0x0000 (0x0028 - 0x0028)
class UTurnBasedMatchInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystem.TurnBasedMatchInterface");
		return ptr;
	}


	void OnMatchReceivedTurn(const class FString& Match, bool bDidBecomeActive);
	void OnMatchEnded(const class FString& Match);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
