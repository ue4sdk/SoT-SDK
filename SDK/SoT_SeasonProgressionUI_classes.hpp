#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SeasonProgressionUI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SeasonProgressionUI.SeasonPopupAsset
// 0x0278 (0x02A0 - 0x0028)
class USeasonPopupAsset : public UDataAsset
{
public:
	FName                                              ThemeId;                                                  // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FSeasonIconPopupAsset>                      TierInfos;                                                // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<FSeasonGoalPopupAsset>                      TrialInfos;                                               // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<FSeasonGoalPopupAsset>                      DeedInfos;                                                // 0x0050(0x0010) (Edit, ZeroConstructor)
	TArray<FSeasonGoalPopupAsset>                      RenownActionInfos;                                        // 0x0060(0x0010) (Edit, ZeroConstructor)
	FSeasonIconPopupAsset                              SeasonInfo;                                               // 0x0070(0x0068) (Edit)
	FSeasonIconPopupAsset                              LevelIncreaseInfo;                                        // 0x00D8(0x0068) (Edit)
	FSeasonIconPopupAsset                              RewardInfo;                                               // 0x0140(0x0068) (Edit)
	FSeasonIconPopupAsset                              MultipleRewardsInfo;                                      // 0x01A8(0x0068) (Edit)
	FStringAssetReference                              BackgroundImage;                                          // 0x0210(0x0010) (Edit, ZeroConstructor)
	FString                                            DefaultToastSfxEventName;                                 // 0x0220(0x0010) (Edit, ZeroConstructor)
	FString                                            DefaultToastEventName;                                    // 0x0230(0x0010) (Edit, ZeroConstructor)
	FString                                            DefaultToastSwitchName;                                   // 0x0240(0x0010) (Edit, ZeroConstructor)
	FString                                            DefaultToastSwitchValue;                                  // 0x0250(0x0010) (Edit, ZeroConstructor)
	FString                                            DefaultChatSfxEventName;                                  // 0x0260(0x0010) (Edit, ZeroConstructor)
	FString                                            DefaultChatEventName;                                     // 0x0270(0x0010) (Edit, ZeroConstructor)
	FString                                            DefaultChatSwitchName;                                    // 0x0280(0x0010) (Edit, ZeroConstructor)
	FString                                            DefaultChatSwitchValue;                                   // 0x0290(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SeasonProgressionUI.SeasonPopupAsset"));
		return ptr;
	}

};


// Class SeasonProgressionUI.SeasonPopupListAsset
// 0x0010 (0x0038 - 0x0028)
class USeasonPopupListAsset : public UDataAsset
{
public:
	TArray<USeasonPopupAsset*>                         SeasonPopups;                                             // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SeasonProgressionUI.SeasonPopupListAsset"));
		return ptr;
	}

};


// Class SeasonProgressionUI.SeasonProgressionUIInterface
// 0x0000 (0x0028 - 0x0028)
class USeasonProgressionUIInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SeasonProgressionUI.SeasonProgressionUIInterface"));
		return ptr;
	}

};


// Class SeasonProgressionUI.SeasonProgressionUITelemetryInterface
// 0x0000 (0x0028 - 0x0028)
class USeasonProgressionUITelemetryInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SeasonProgressionUI.SeasonProgressionUITelemetryInterface"));
		return ptr;
	}

};


// Class SeasonProgressionUI.SeasonProgressionUIComponent
// 0x00E8 (0x01B0 - 0x00C8)
class USeasonProgressionUIComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C8(0x0020) MISSED OFFSET
	TArray<FEnableMoreButtonEvent>                     DetailsNavigationDesc;                                    // 0x00E8(0x0010) (ZeroConstructor)
	FSeasonProgressionUITelemetryFragment              NextReceivedEventsTelemetryData;                          // 0x00F8(0x0018)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0110(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SeasonProgressionUI.SeasonProgressionUIComponent"));
		return ptr;
	}


	void OnHUDDestroyed();
};


// Class SeasonProgressionUI.SeasonProgressionUIServiceInterface
// 0x0000 (0x0028 - 0x0028)
class USeasonProgressionUIServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SeasonProgressionUI.SeasonProgressionUIServiceInterface"));
		return ptr;
	}

};


// Class SeasonProgressionUI.SeasonProgressionUIService
// 0x01C0 (0x0590 - 0x03D0)
class ASeasonProgressionUIService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03D0(0x0030) MISSED OFFSET
	USeasonPopupListAsset*                             SeasonPopupListAsset;                                     // 0x0400(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x188];                                     // 0x0408(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SeasonProgressionUI.SeasonProgressionUIService"));
		return ptr;
	}

};


// Class SeasonProgressionUI.SeasonProgressionUISettings
// 0x0010 (0x0038 - 0x0028)
class USeasonProgressionUISettings : public UObject
{
public:
	FStringAssetReference                              SeasonPopupListAsset;                                     // 0x0028(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SeasonProgressionUI.SeasonProgressionUISettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
