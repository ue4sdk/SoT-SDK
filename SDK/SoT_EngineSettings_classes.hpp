#pragma once

// Sea of Thieves (2) SDK

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
	int                                                MaxScrollbackSize;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<FAutoCompleteCommand>                       ManualAutoCompleteList;                                   // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	TArray<FString>                                    AutoCompleteMapPaths;                                     // 0x0040(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EngineSettings.ConsoleSettings"));
		return ptr;
	}

};


// Class EngineSettings.GameMapsSettings
// 0x0088 (0x00B0 - 0x0028)
class UGameMapsSettings : public UObject
{
public:
	FString                                            EditorStartupMap;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	FString                                            LocalMapOptions;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	FString                                            TransitionMap;                                            // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bUseSplitscreen;                                          // 0x0058(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ETwoPlayerSplitScreenType>             TwoPlayerSplitscreenLayout;                               // 0x0059(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EThreePlayerSplitScreenType>           ThreePlayerSplitscreenLayout;                             // 0x005A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x005B(0x0005) MISSED OFFSET
	FStringClassReference                              GameInstanceClass;                                        // 0x0060(0x0010) (Edit, ZeroConstructor, Config, NoClear)
	FString                                            GameDefaultMap;                                           // 0x0070(0x0010) (Edit, ZeroConstructor, Config)
	FString                                            ServerDefaultMap;                                         // 0x0080(0x0010) (Edit, ZeroConstructor, Config)
	FStringClassReference                              GlobalDefaultGameMode;                                    // 0x0090(0x0010) (Edit, ZeroConstructor, Config, NoClear)
	FStringClassReference                              GlobalDefaultServerGameMode;                              // 0x00A0(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EngineSettings.GameMapsSettings"));
		return ptr;
	}

};


// Class EngineSettings.GameNetworkManagerSettings
// 0x0030 (0x0058 - 0x0028)
class UGameNetworkManagerSettings : public UObject
{
public:
	int                                                MinDynamicBandwidth;                                      // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                MaxDynamicBandwidth;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                TotalNetBandwidth;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                BadPingThreshold;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bIsStandbyCheckingEnabled : 1;                            // 0x0038(0x0001) (Edit, Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              StandbyRxCheatTime;                                       // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              StandbyTxCheatTime;                                       // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PercentMissingForRxStandby;                               // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PercentMissingForTxStandby;                               // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PercentForBadPing;                                        // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              JoinInProgressStandbyWaitTime;                            // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EngineSettings.GameNetworkManagerSettings"));
		return ptr;
	}

};


// Class EngineSettings.GameSessionSettings
// 0x0010 (0x0038 - 0x0028)
class UGameSessionSettings : public UObject
{
public:
	int                                                MaxSpectators;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                MaxPlayers;                                               // 0x002C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      bRequiresPushToTalk : 1;                                  // 0x0030(0x0001) (Edit, Config, GlobalConfig)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EngineSettings.GameSessionSettings"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EngineSettings.GeneralEngineSettings"));
		return ptr;
	}

};


// Class EngineSettings.GeneralProjectSettings
// 0x00E8 (0x0110 - 0x0028)
class UGeneralProjectSettings : public UObject
{
public:
	FString                                            CompanyName;                                              // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	FString                                            CompanyDistinguishedName;                                 // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	FString                                            CopyrightNotice;                                          // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	FString                                            Description;                                              // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	FString                                            Homepage;                                                 // 0x0068(0x0010) (Edit, ZeroConstructor, Config)
	FString                                            LicensingTerms;                                           // 0x0078(0x0010) (Edit, ZeroConstructor, Config)
	FString                                            PrivacyPolicy;                                            // 0x0088(0x0010) (Edit, ZeroConstructor, Config)
	FGuid                                              ProjectID;                                                // 0x0098(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData)
	FString                                            ProjectName;                                              // 0x00A8(0x0010) (Edit, ZeroConstructor, Config)
	FString                                            ProjectVersion;                                           // 0x00B8(0x0010) (Edit, ZeroConstructor, Config)
	FString                                            SupportContact;                                           // 0x00C8(0x0010) (Edit, ZeroConstructor, Config)
	FText                                              ProjectDisplayedTitle;                                    // 0x00D8(0x0038) (Edit, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EngineSettings.GeneralProjectSettings"));
		return ptr;
	}

};


// Class EngineSettings.HudSettings
// 0x0018 (0x0040 - 0x0028)
class UHudSettings : public UObject
{
public:
	unsigned char                                      bShowHUD : 1;                                             // 0x0028(0x0001) (Edit, Config)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<FName>                                      DebugDisplay;                                             // 0x0030(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EngineSettings.HudSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
