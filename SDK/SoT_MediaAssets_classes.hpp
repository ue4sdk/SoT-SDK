#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MediaAssets_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MediaAssets.MediaPlayer
// 0x00F0 (0x0118 - 0x0028)
class UMediaPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMediaClosed;                                            // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMediaOpened;                                            // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      Looping : 1;                                              // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaPlayer");
		return ptr;
	}


	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float Rate, bool Unthinned);
	bool SetRate(float Rate);
	bool SetLooping(bool InLooping);
	bool Seek(const struct FTimespan& InTime);
	bool Rewind();
	bool Play();
	bool Pause();
	bool OpenUrl(const class FString& NewUrl);
	bool IsStopped();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	class FString GetUrl();
	struct FTimespan GetTime();
	float GetRate();
	struct FTimespan GetDuration();
	void Close();
	bool CanPlay();
	bool CanPause();
};


// Class MediaAssets.MediaSoundWave
// 0x0060 (0x0278 - 0x0218)
class UMediaSoundWave : public USoundWave
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0218(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaSoundWave");
		return ptr;
	}


	void SetMediaPlayer(class UMediaPlayer* InMediaPlayer);
};


// Class MediaAssets.MediaTexture
// 0x0070 (0x01A8 - 0x0138)
class UMediaTexture : public UTexture
{
public:
	unsigned char                                      UnknownData00[0xAB];                                      // 0x0138(0x00AB) MISSED OFFSET
	TEnumAsByte<ETextureAddress>                       AddressX;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressY;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ClearColor;                                               // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VideoTrackIndex;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMediaPlayer*                                MediaPlayer;                                              // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UMediaPlayer>                 CurrentMediaPlayer;                                       // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaTexture");
		return ptr;
	}


	void SetMediaPlayer(class UMediaPlayer* InMediaPlayer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
