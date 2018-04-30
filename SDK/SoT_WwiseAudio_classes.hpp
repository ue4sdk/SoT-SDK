#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WwiseAudio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WwiseAudio.WwiseAudioSettings
// 0x0290 (0x02B8 - 0x0028)
class UWwiseAudioSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FWwiseAudioReverbPresets                    ReverbPresetSettings;                                     // 0x01E3(0x0064) (Edit, Config)
	struct FWwiseBinkSettings                          BinkSettings;                                             // 0x01E3(0x0038) (Edit, Config)
	TArray<struct FStringAssetReference>               PersistentSoundBanks;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       InitBank;                                                 // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FDirectoryPath                              WwiseSoundbanksRoot;                                      // 0x01E3(0x0010) (Edit, Config)
	struct FDirectoryPath                              WwiseStreamedFilesDirectory;                              // 0x01E3(0x0010) (Edit, Config)
	struct FDirectoryPath                              TritonAcousticMapsDirectory;                              // 0x01E3(0x0010) (Edit, Config)
	class FString                                      DefaultLanguage;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      SinkSharesetName;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       PauseEventStart;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       PauseEventRelease;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       StopAllEvent;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FWwiseNetworkRelationship                   NetworkRelationship;                                      // 0x01E3(0x0018) (Edit, Config)
	struct FWwiseAudioGameStateSettings                AudioStateSettings;                                       // 0x01E3(0x0080) (Edit, Config)
	class UWwiseEvent*                                 PauseEventStartInstance;                                  // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWwiseEvent*                                 PauseEventReleaseInstance;                                // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWwiseEvent*                                 StopAllEventInstance;                                     // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UWwiseEvent*>                         EventsToPlayOnFrontendStartInstance;                      // 0x01E3(0x0010) (ZeroConstructor, Transient)
	TArray<class UWwiseEvent*>                         EventsToPlayOnFrontendEndInstance;                        // 0x01E3(0x0010) (ZeroConstructor, Transient)
	TArray<class UWwiseEvent*>                         EventsToPlayOnLoadingStartInstance;                       // 0x01E3(0x0010) (ZeroConstructor, Transient)
	TArray<class UWwiseEvent*>                         EventsToPlayOnLoadingEndInstance;                         // 0x01E3(0x0010) (ZeroConstructor, Transient)
	TArray<class UWwiseEvent*>                         EventsToPlayOnFrontEndOrLoadingStartInstance;             // 0x01E3(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0xC5];                                      // 0x01F3(0x00C5) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseAudioSettings");
		return ptr;
	}

};


// Class WwiseAudio.WwiseBank
// 0x0030 (0x0058 - 0x0028)
class UWwiseBank : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class FString                                      path;                                                     // 0x01E3(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseBank");
		return ptr;
	}

};


// Class WwiseAudio.WwiseSubSystemInterface
// 0x0000 (0x0028 - 0x0028)
class UWwiseSubSystemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseSubSystemInterface");
		return ptr;
	}

};


// Class WwiseAudio.WwiseDebugManager
// 0x0048 (0x0070 - 0x0028)
class UWwiseDebugManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseDebugManager");
		return ptr;
	}

};


// Class WwiseAudio.WwiseEmitterManager
// 0x0020 (0x0048 - 0x0028)
class UWwiseEmitterManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseEmitterManager");
		return ptr;
	}

};


// Class WwiseAudio.WwiseEvent
// 0x0020 (0x0048 - 0x0028)
class UWwiseEvent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UWwiseBank*                                  RequiredBank;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               WaitForBankToLoad;                                        // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           WwiseId;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DurationMin;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DurationMax;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MaxAttenuation;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseEvent");
		return ptr;
	}


	bool IsAudible(const struct FVector& SoundPosition, const struct FVector& ListenerPos);
	float GetMaxAttenuation();
	TEnumAsByte<EWwiseEventDurationType> GetDurationType();
	float GetDurationMin();
	float GetDurationMax();
};


// Class WwiseAudio.WwiseInputManager
// 0x0020 (0x0048 - 0x0028)
class UWwiseInputManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseInputManager");
		return ptr;
	}

};


// Class WwiseAudio.WwisePersistentContentStore
// 0x0010 (0x0038 - 0x0028)
class UWwisePersistentContentStore : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwisePersistentContentStore");
		return ptr;
	}

};


// Class WwiseAudio.WwiseSoundFrameManager
// 0x0020 (0x0048 - 0x0028)
class UWwiseSoundFrameManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseSoundFrameManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
