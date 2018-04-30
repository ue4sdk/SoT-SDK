#pragma once

// Sea of Thieves (1.0.5) SDK

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
// 0x01C0 (0x01E8 - 0x0028)
class USlateLoadingScreenParams : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	bool                                               DrawBackground;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DrawBackgroundImage;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DrawTips;                                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DrawSpinner;                                              // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       PlaceholderSpinnerTexture;                                // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       PlaceholderBackgroundTexture;                             // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FLinearColor                                BackgroundColour;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FStringAssetReference>               LoadingScreenImages;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor)
	int                                                MaxNumImagesPerLoad;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       SpinnerText;                                              // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x20];                                      // 0x01E7(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FSlateColor                                 SpinnerTextColour;                                        // 0x01E3(0x0030) (Edit)
	struct FSlateFontInfo                              SpinnerTextFont;                                          // 0x01E3(0x0040) (Edit)
	float                                              SpinnerSize;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     SpinnerMargin;                                            // 0x01E3(0x0010) (Edit)
	float                                              SpinnerPadding;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       SpinnerIcon;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FMargin                                     TipsMargin;                                               // 0x01E3(0x0010) (Edit)
	float                                              TipWrapLength;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TipDisplayDuration;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TipDurationBetweenTips;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumTipsPerImage;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateFontInfo                              LoadingTipFont;                                           // 0x01E3(0x0040) (Edit)
	TArray<struct FText>                               LoadingScreenTips;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor)

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
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FStringAssetReference                       GameLoadingScreen;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       BootLoadingScreen;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)

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
