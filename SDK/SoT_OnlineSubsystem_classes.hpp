#pragma once

// Sea of Thieves (2) SDK

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
	class FString                                      EnvironmentId;                                            // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	uint32_t                                           TitleId;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class FString                                      ServiceConfigId;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      ClientCertificateThumbprint;                              // 0x0050(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OnlineSubsystem.DefaultOnlineEnvironmentSettings"));
		return ptr;
	}

};


// Class OnlineSubsystem.NamedInterfaces
// 0x0038 (0x0060 - 0x0028)
class UNamedInterfaces : public UObject
{
public:
	TArray<struct FNamedInterface>                     NamedInterfaces;                                          // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FNamedInterfaceDef>                  NamedInterfaceDefs;                                       // 0x0038(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OnlineSubsystem.NamedInterfaces"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OnlineSubsystem.TurnBasedMatchInterface"));
		return ptr;
	}


	void OnMatchReceivedTurn(const class FString& Match, bool bDidBecomeActive);
	void OnMatchEnded(const class FString& Match);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
