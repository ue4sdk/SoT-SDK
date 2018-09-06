#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaLoadingScreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAthenaLoadingScreenBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary");
		return ptr;
	}


	bool STATIC_IsLoadingScreenVisible();
	bool STATIC_IsLoadingScreenRegistered();
};


// Class AthenaLoadingScreen.SlateLoadingScreenParams
// 0x01E0 (0x0208 - 0x0028)
class USlateLoadingScreenParams : public UDataAsset
{
public:
	bool                                               DrawBackground;                                           // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DrawBackgroundImage;                                      // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DrawTips;                                                 // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DrawSpinner;                                              // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ViewportWidth;                                            // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ViewportHeight;                                           // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FooterHeight;                                             // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       PlaceholderSpinnerTexture;                                // 0x0038(0x0010) (Edit, ZeroConstructor)
	struct FLinearColor                                BackgroundColour;                                         // 0x0048(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateLoadingScreenImageParams              PrimaryImage;                                             // 0x0058(0x0020) (Edit)
	TArray<struct FSlateLoadingScreenImageParams>      CyclingImages;                                            // 0x0078(0x0010) (Edit, ZeroConstructor)
	int                                                MaxNumImagesPerLoad;                                      // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FText                                       SpinnerText;                                              // 0x0090(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x20];                                      // 0x008C(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FSlateColor                                 SpinnerTextColour;                                        // 0x00C8(0x0030) (Edit)
	struct FSlateFontInfo                              SpinnerTextFont;                                          // 0x00F8(0x0040) (Edit)
	float                                              SpinnerSize;                                              // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     SpinnerMargin;                                            // 0x013C(0x0010) (Edit)
	float                                              SpinnerPadding;                                           // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       SpinnerIcon;                                              // 0x0150(0x0010) (Edit, ZeroConstructor)
	struct FMargin                                     TipsMargin;                                               // 0x0160(0x0010) (Edit)
	float                                              TipWrapLength;                                            // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TipDisplayDuration;                                       // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TipDurationBetweenTips;                                   // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumTipsPerImage;                                          // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateFontInfo                              LoadingTipFont;                                           // 0x0180(0x0040) (Edit)
	float                                              LoadingTipFontLineHeightPercentage;                       // 0x01C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01C4(0x0004) MISSED OFFSET
	TArray<struct FText>                               LoadingScreenTips;                                        // 0x01C8(0x0010) (Edit, ZeroConstructor)
	struct FSlateColor                                 LoadingScreenTipColour;                                   // 0x01D8(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaLoadingScreen.SlateLoadingScreenParams");
		return ptr;
	}

};


// Class AthenaLoadingScreen.AthenaLoadingScreenParams
// 0x0030 (0x0068 - 0x0038)
class UAthenaLoadingScreenParams : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       GameLoadingScreen;                                        // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       BootLoadingScreen;                                        // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       TeleportLoadingScreen;                                    // 0x0058(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaLoadingScreen.AthenaLoadingScreenParams");
		return ptr;
	}

};


// Class AthenaLoadingScreen.LoadingUtilities
// 0x0000 (0x0028 - 0x0028)
class ULoadingUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaLoadingScreen.LoadingUtilities");
		return ptr;
	}


	bool STATIC_IsStreaming(class UObject* WorldContextObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
