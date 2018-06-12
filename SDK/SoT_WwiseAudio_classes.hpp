#pragma once

// Sea of Thieves (1.1.1) SDK

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
// 0x02A0 (0x02C8 - 0x0028)
class UWwiseAudioSettings : public UObject
{
public:
	struct FWwiseAudioReverbPresets                    ReverbPresetSettings;                                     // 0x0028(0x0064) (Edit, Config)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FWwiseBinkSettings                          BinkSettings;                                             // 0x0090(0x0038) (Edit, Config)
	TArray<struct FStringAssetReference>               PersistentSoundBanks;                                     // 0x00C8(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       InitBank;                                                 // 0x00D8(0x0010) (Edit, ZeroConstructor, Config)
	struct FDirectoryPath                              WwiseSoundbanksRoot;                                      // 0x00E8(0x0010) (Edit, Config)
	struct FDirectoryPath                              WwiseStreamedFilesDirectory;                              // 0x00F8(0x0010) (Edit, Config)
	TArray<struct FWwiseIOPriorityMappingConfig>       AsyncIOPriorityMappings;                                  // 0x0108(0x0010) (Edit, ZeroConstructor, Config)
	struct FDirectoryPath                              TritonAcousticMapsDirectory;                              // 0x0118(0x0010) (Edit, Config)
	class FString                                      DefaultLanguage;                                          // 0x0128(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      SinkSharesetName;                                         // 0x0138(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       PauseEventStart;                                          // 0x0148(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       PauseEventRelease;                                        // 0x0158(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       StopAllEvent;                                             // 0x0168(0x0010) (Edit, ZeroConstructor, Config)
	struct FWwiseNetworkRelationship                   NetworkRelationship;                                      // 0x0178(0x0018) (Edit, Config)
	struct FWwiseAudioGameStateSettings                AudioStateSettings;                                       // 0x0190(0x0080) (Edit, Config)
	class UWwiseEvent*                                 PauseEventStartInstance;                                  // 0x0210(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWwiseEvent*                                 PauseEventReleaseInstance;                                // 0x0218(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWwiseEvent*                                 StopAllEventInstance;                                     // 0x0220(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0228(0x0040) MISSED OFFSET
	TArray<class UWwiseEvent*>                         EventsToPlayOnFrontendStartInstance;                      // 0x0268(0x0010) (ZeroConstructor, Transient)
	TArray<class UWwiseEvent*>                         EventsToPlayOnFrontendEndInstance;                        // 0x0278(0x0010) (ZeroConstructor, Transient)
	TArray<class UWwiseEvent*>                         EventsToPlayOnLoadingStartInstance;                       // 0x0288(0x0010) (ZeroConstructor, Transient)
	TArray<class UWwiseEvent*>                         EventsToPlayOnLoadingEndInstance;                         // 0x0298(0x0010) (ZeroConstructor, Transient)
	TArray<class UWwiseEvent*>                         EventsToPlayOnFrontEndOrLoadingStartInstance;             // 0x02A8(0x0010) (ZeroConstructor, Transient)
	TArray<class UWwiseEvent*>                         EventsToPlayOnFrontEndOrLoadingEndInstance;               // 0x02B8(0x0010) (ZeroConstructor, Transient)

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
	class FString                                      path;                                                     // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	uint32_t                                           WwiseId;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x003C(0x001C) MISSED OFFSET

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
// 0x0028 (0x0050 - 0x0028)
class UWwiseEvent : public UObject
{
public:
	class UWwiseBank*                                  RequiredBank;                                             // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               WaitForBankToLoad;                                        // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	uint32_t                                           WwiseId;                                                  // 0x0034(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DurationMin;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DurationMax;                                              // 0x003C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MaxAttenuation;                                           // 0x0040(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EWwiseEventDurationType>               DurationType;                                             // 0x0044(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0045(0x000B) MISSED OFFSET

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


// Class WwiseAudio.WwiseMediaManager
// 0x0020 (0x0048 - 0x0028)
class UWwiseMediaManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseMediaManager");
		return ptr;
	}

};


// Class WwiseAudio.WwisePersistentContentStore
// 0x0010 (0x0038 - 0x0028)
class UWwisePersistentContentStore : public UObject
{
public:
	TArray<class UWwiseBank*>                          PersistentlyLoadedBanks;                                  // 0x0028(0x0010) (Edit, ZeroConstructor, Transient, EditConst)

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
