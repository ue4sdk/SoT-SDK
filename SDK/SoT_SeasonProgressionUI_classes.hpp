#pragma once

// Sea of Thieves (2.0) SDK

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
	struct FName                                       ThemeId;                                                  // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FSeasonIconPopupAsset>               TierInfos;                                                // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<struct FSeasonGoalPopupAsset>               TrialInfos;                                               // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<struct FSeasonGoalPopupAsset>               DeedInfos;                                                // 0x0050(0x0010) (Edit, ZeroConstructor)
	TArray<struct FSeasonGoalPopupAsset>               RenownActionInfos;                                        // 0x0060(0x0010) (Edit, ZeroConstructor)
	struct FSeasonIconPopupAsset                       SeasonInfo;                                               // 0x0070(0x0068) (Edit)
	struct FSeasonIconPopupAsset                       LevelIncreaseInfo;                                        // 0x00D8(0x0068) (Edit)
	struct FSeasonIconPopupAsset                       RewardInfo;                                               // 0x0140(0x0068) (Edit)
	struct FSeasonIconPopupAsset                       MultipleRewardsInfo;                                      // 0x01A8(0x0068) (Edit)
	struct FStringAssetReference                       BackgroundImage;                                          // 0x0210(0x0010) (Edit, ZeroConstructor)
	class FString                                      DefaultToastSfxEventName;                                 // 0x0220(0x0010) (Edit, ZeroConstructor)
	class FString                                      DefaultToastEventName;                                    // 0x0230(0x0010) (Edit, ZeroConstructor)
	class FString                                      DefaultToastSwitchName;                                   // 0x0240(0x0010) (Edit, ZeroConstructor)
	class FString                                      DefaultToastSwitchValue;                                  // 0x0250(0x0010) (Edit, ZeroConstructor)
	class FString                                      DefaultChatSfxEventName;                                  // 0x0260(0x0010) (Edit, ZeroConstructor)
	class FString                                      DefaultChatEventName;                                     // 0x0270(0x0010) (Edit, ZeroConstructor)
	class FString                                      DefaultChatSwitchName;                                    // 0x0280(0x0010) (Edit, ZeroConstructor)
	class FString                                      DefaultChatSwitchValue;                                   // 0x0290(0x0010) (Edit, ZeroConstructor)

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
	TArray<class USeasonPopupAsset*>                   SeasonPopups;                                             // 0x0028(0x0010) (Edit, ZeroConstructor)

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


// Class SeasonProgressionUI.SeasonProgressionUIComponent
// 0x00E0 (0x01A8 - 0x00C8)
class USeasonProgressionUIComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	class USeasonProgressionUIInputBinder*             InputBinder;                                              // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USeasonProgressionUICompositeInputHandler*   InputHandler;                                             // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FEnableMoreButtonEvent>              DetailsNavigationDesc;                                    // 0x00E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xB8];                                      // 0x00F0(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SeasonProgressionUI.SeasonProgressionUIComponent"));
		return ptr;
	}


	void OnHUDDestroyed();
};


// Class SeasonProgressionUI.SeasonProgressionUICompositeInputHandler
// 0x0020 (0x00F8 - 0x00D8)
class USeasonProgressionUICompositeInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00D8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SeasonProgressionUI.SeasonProgressionUICompositeInputHandler"));
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnMenuButtonPressed();
};


// Class SeasonProgressionUI.SeasonProgressionUIInputBinder
// 0x0000 (0x0088 - 0x0088)
class USeasonProgressionUIInputBinder : public UInputBinder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SeasonProgressionUI.SeasonProgressionUIInputBinder"));
		return ptr;
	}

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
// 0x0150 (0x0578 - 0x0428)
class ASeasonProgressionUIService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0428(0x0030) MISSED OFFSET
	class USeasonPopupListAsset*                       SeasonPopupListAsset;                                     // 0x0458(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x118];                                     // 0x0460(0x0118) MISSED OFFSET

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
	struct FStringAssetReference                       SeasonPopupListAsset;                                     // 0x0028(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)

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
