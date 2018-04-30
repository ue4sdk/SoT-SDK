#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EngineSettings_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EngineSettings.ConsoleSettings
// 0x0028 (0x0050 - 0x0028)
class UConsoleSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	int                                                MaxScrollbackSize;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TArray<struct FAutoCompleteCommand>                ManualAutoCompleteList;                                   // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.ConsoleSettings");
		return ptr;
	}

};


// Class EngineSettings.GameMapsSettings
// 0x0088 (0x00B0 - 0x0028)
class UGameMapsSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class FString                                      EditorStartupMap;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      LocalMapOptions;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      TransitionMap;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bUseSplitscreen;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ETwoPlayerSplitScreenType>             TwoPlayerSplitscreenLayout;                               // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EThreePlayerSplitScreenType>           ThreePlayerSplitscreenLayout;                             // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FStringClassReference                       GameInstanceClass;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, NoClear)
	class FString                                      GameDefaultMap;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      ServerDefaultMap;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringClassReference                       GlobalDefaultGameMode;                                    // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, NoClear)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GameMapsSettings");
		return ptr;
	}

};


// Class EngineSettings.GameNetworkManagerSettings
// 0x0030 (0x0058 - 0x0028)
class UGameNetworkManagerSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	int                                                MinDynamicBandwidth;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                MaxDynamicBandwidth;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                TotalNetBandwidth;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                BadPingThreshold;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bIsStandbyCheckingEnabled : 1;                            // 0x01E3(0x0001) (Edit, Config)
	float                                              StandbyRxCheatTime;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              StandbyTxCheatTime;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PercentMissingForRxStandby;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PercentMissingForTxStandby;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PercentForBadPing;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GameNetworkManagerSettings");
		return ptr;
	}

};


// Class EngineSettings.GameSessionSettings
// 0x0010 (0x0038 - 0x0028)
class UGameSessionSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	int                                                MaxSpectators;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                MaxPlayers;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GameSessionSettings");
		return ptr;
	}

};


// Class EngineSettings.GeneralEngineSettings
// 0x0000 (0x0028 - 0x0028)
class UGeneralEngineSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GeneralEngineSettings");
		return ptr;
	}

};


// Class EngineSettings.GeneralProjectSettings
// 0x00E8 (0x0110 - 0x0028)
class UGeneralProjectSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class FString                                      CompanyName;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      CompanyDistinguishedName;                                 // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      CopyrightNotice;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      Description;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      Homepage;                                                 // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      LicensingTerms;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      PrivacyPolicy;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FGuid                                       ProjectID;                                                // 0x01E3(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData)
	class FString                                      ProjectName;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      ProjectVersion;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      SupportContact;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GeneralProjectSettings");
		return ptr;
	}

};


// Class EngineSettings.HudSettings
// 0x0018 (0x0040 - 0x0028)
class UHudSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	unsigned char                                      bShowHUD : 1;                                             // 0x01E3(0x0001) (Edit, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.HudSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
