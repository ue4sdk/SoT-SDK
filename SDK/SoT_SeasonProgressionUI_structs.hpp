#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_SeasonProgressionUI_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_AthenaInput_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SeasonProgressionUI.SeasonIconPopupAsset
// 0x0068
struct FSeasonIconPopupAsset
{
	struct FStringAssetReference                       GlowIcon;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Icon;                                                     // 0x0010(0x0010) (Edit, ZeroConstructor)
	class FString                                      ToastSfxEventName;                                        // 0x0020(0x0010) (Edit, ZeroConstructor)
	class FString                                      ToastEventName;                                           // 0x0030(0x0010) (Edit, ZeroConstructor)
	class FString                                      ToastSwitchName;                                          // 0x0040(0x0010) (Edit, ZeroConstructor)
	class FString                                      ToastSwitchValue;                                         // 0x0050(0x0010) (Edit, ZeroConstructor)
	float                                              ToastHoldDuration;                                        // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct SeasonProgressionUI.SeasonGoalPopupAsset
// 0x0080
struct FSeasonGoalPopupAsset
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       GlowIcon;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Icon;                                                     // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       ChatIcon;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)
	class FString                                      ToastSfxEventName;                                        // 0x0038(0x0010) (Edit, ZeroConstructor)
	class FString                                      ToastEventName;                                           // 0x0048(0x0010) (Edit, ZeroConstructor)
	class FString                                      ToastSwitchName;                                          // 0x0058(0x0010) (Edit, ZeroConstructor)
	class FString                                      ToastSwitchValue;                                         // 0x0068(0x0010) (Edit, ZeroConstructor)
	float                                              ToastHoldDuration;                                        // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct SeasonProgressionUI.NavigationDesc
// 0x0014
struct FNavigationDesc
{
	TEnumAsByte<ENavigationAction>                     Action;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FGuid                                       Id;                                                       // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SeasonProgressionUI.EnableMoreButtonEvent
// 0x0018
struct FEnableMoreButtonEvent
{
	TEnumAsByte<EMoreButtonSource>                     MoreButtonSource;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FNavigationDesc                             Navigation;                                               // 0x0004(0x0014)
};

// ScriptStruct SeasonProgressionUI.SeasonNotificationContent
// 0x0068
struct FSeasonNotificationContent
{
	struct FStringAssetReference                       GlowIcon;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FStringAssetReference                       Icon;                                                     // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      SfxEventName;                                             // 0x0020(0x0010) (ZeroConstructor)
	class FString                                      EventName;                                                // 0x0030(0x0010) (ZeroConstructor)
	class FString                                      SwitchName;                                               // 0x0040(0x0010) (ZeroConstructor)
	class FString                                      SwitchValue;                                              // 0x0050(0x0010) (ZeroConstructor)
	float                                              ToastHoldDuration;                                        // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct SeasonProgressionUI.DeedProgressDesc
// 0x0080
struct FDeedProgressDesc
{
	class FString                                      Description;                                              // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      Icon;                                                     // 0x0010(0x0010) (ZeroConstructor)
	struct FNavigationDesc                             NavigationDesc;                                           // 0x0020(0x0014)
	int                                                ProgressValue;                                            // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Threshold;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FGenericPopupAudioDescriptor                Audio;                                                    // 0x0040(0x0040)
};

// ScriptStruct SeasonProgressionUI.SeasonsChatNotification
// 0x0060
struct FSeasonsChatNotification
{
	class FString                                      IconUrl;                                                  // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      Message;                                                  // 0x0010(0x0010) (ZeroConstructor)
	struct FGenericPopupAudioDescriptor                Audio;                                                    // 0x0020(0x0040)
};

// ScriptStruct SeasonProgressionUI.OpenSeasonsMenuEvent
// 0x0014
struct FOpenSeasonsMenuEvent
{
	TEnumAsByte<ENavigationAction>                     NavigationAction;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FGuid                                       Id;                                                       // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SeasonProgressionUI.DisableMoreButtonEvent
// 0x0001
struct FDisableMoreButtonEvent
{
	TEnumAsByte<EMoreButtonSource>                     MoreButtonSource;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SeasonProgressionUI.ShowDeedProgressEvent
// 0x0080
struct FShowDeedProgressEvent
{
	struct FDeedProgressDesc                           DeedProgressDesc;                                         // 0x0000(0x0080)
};

// ScriptStruct SeasonProgressionUI.SeasonsChatNotificationEvent
// 0x0060
struct FSeasonsChatNotificationEvent
{
	struct FSeasonsChatNotification                    SeasonsChatNotification;                                  // 0x0000(0x0060)
};

// ScriptStruct SeasonProgressionUI.SeasonsPopupEvent
// 0x00A0
struct FSeasonsPopupEvent
{
	TArray<struct FText>                               Text;                                                     // 0x0000(0x0010) (ZeroConstructor)
	TArray<class FString>                              Images;                                                   // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      Background;                                               // 0x0020(0x0010) (ZeroConstructor)
	struct FGenericPopupAudioDescriptor                Audio;                                                    // 0x0030(0x0040)
	TArray<TEnumAsByte<ESeasonStyleModifiers>>         StyleModifiers;                                           // 0x0070(0x0010) (ZeroConstructor)
	int                                                Rank;                                                     // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FNavigationDesc                             NavigationDesc;                                           // 0x0084(0x0014)
	float                                              HoldDuration;                                             // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
