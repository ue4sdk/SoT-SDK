#pragma once

// Sea of Thieves (2) SDK

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
// 0x0090 (0x00B8 - 0x0028)
class UMediaPlayer : public UObject
{
public:
	FScriptMulticastDelegate                           OnMediaClosed;                                            // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnMediaOpened;                                            // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      Looping : 1;                                              // 0x0048(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	FString                                            URL;                                                      // 0x0050(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0060(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MediaAssets.MediaPlayer"));
		return ptr;
	}


	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float Rate, bool Unthinned);
	bool SetRate(float Rate);
	bool SetLooping(bool InLooping);
	bool Seek(const FTimespan& InTime);
	bool Rewind();
	bool Play();
	bool Pause();
	bool OpenUrl(const FString& NewUrl);
	bool IsStopped();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	FString GetUrl();
	FTimespan GetTime();
	float GetRate();
	FTimespan GetDuration();
	void Close();
	bool CanPlay();
	bool CanPause();
};


// Class MediaAssets.MediaSoundWave
// 0x0060 (0x0278 - 0x0218)
class UMediaSoundWave : public USoundWave
{
public:
	int                                                AudioTrackIndex;                                          // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x021C(0x0004) MISSED OFFSET
	UMediaPlayer*                                      MediaPlayer;                                              // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0228(0x0030) MISSED OFFSET
	TWeakObjectPtr<class UMediaPlayer>                 CurrentMediaPlayer;                                       // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0260(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MediaAssets.MediaSoundWave"));
		return ptr;
	}


	void SetMediaPlayer(UMediaPlayer* InMediaPlayer);
};


// Class MediaAssets.MediaTexture
// 0x0070 (0x01A8 - 0x0138)
class UMediaTexture : public UTexture
{
public:
	TEnumAsByte<ETextureAddress>                       AddressX;                                                 // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressY;                                                 // 0x0139(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x013A(0x0002) MISSED OFFSET
	FLinearColor                                       ClearColor;                                               // 0x013C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VideoTrackIndex;                                          // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UMediaPlayer*                                      MediaPlayer;                                              // 0x0150(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0158(0x0008) MISSED OFFSET
	TWeakObjectPtr<class UMediaPlayer>                 CurrentMediaPlayer;                                       // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x40];                                      // 0x0168(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MediaAssets.MediaTexture"));
		return ptr;
	}


	void SetMediaPlayer(UMediaPlayer* InMediaPlayer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
