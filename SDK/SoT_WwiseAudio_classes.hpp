#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WwiseAudio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WwiseAudio.AnimNotifyWwiseEmitterComponentRetrievalInterface
// 0x0000 (0x0028 - 0x0028)
class UAnimNotifyWwiseEmitterComponentRetrievalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.AnimNotifyWwiseEmitterComponentRetrievalInterface"));
		return ptr;
	}

};


// Class WwiseAudio.WwiseEvent
// 0x0028 (0x0050 - 0x0028)
class UWwiseEvent : public UObject
{
public:
	UWwiseBank*                                        RequiredBank;                                             // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               WaitForBankToLoad;                                        // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	uint32_t                                           WwiseId;                                                  // 0x0034(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DurationMin;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DurationMax;                                              // 0x003C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MaxAttenuation;                                           // 0x0040(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EWwiseEventDurationType>               DurationType;                                             // 0x0044(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               CookedIsStopEvent;                                        // 0x0045(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA];                                       // 0x0046(0x000A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseEvent"));
		return ptr;
	}


	bool IsAudible(const FVector& SoundPosition, const FVector& ListenerPos, float AttenuationScaler);
	float GetMaxAttenuation();
	TEnumAsByte<EWwiseEventDurationType> GetDurationType();
	float GetDurationMin();
	float GetDurationMax();
};


// Class WwiseAudio.MovieSceneAkAudioEventSection
// 0x0008 (0x00A0 - 0x0098)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	UWwiseEvent*                                       Event;                                                    // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.MovieSceneAkAudioEventSection"));
		return ptr;
	}

};


// Class WwiseAudio.MovieSceneAkAudioRTPCSection
// 0x0090 (0x0128 - 0x0098)
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	FString                                            Name;                                                     // 0x00A0(0x0010) (Edit, ZeroConstructor)
	FRichCurve                                         FloatCurve;                                               // 0x00B0(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.MovieSceneAkAudioRTPCSection"));
		return ptr;
	}

};


// Class WwiseAudio.MovieSceneAkTrack
// 0x0018 (0x00A0 - 0x0088)
class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:
	TArray<UMovieSceneSection*>                        Sections;                                                 // 0x0088(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      bIsAMasterTrack : 1;                                      // 0x0098(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.MovieSceneAkTrack"));
		return ptr;
	}

};


// Class WwiseAudio.MovieSceneAkAudioEventTrack
// 0x0000 (0x00A0 - 0x00A0)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.MovieSceneAkAudioEventTrack"));
		return ptr;
	}

};


// Class WwiseAudio.MovieSceneAkAudioRTPCTrack
// 0x0000 (0x00A0 - 0x00A0)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.MovieSceneAkAudioRTPCTrack"));
		return ptr;
	}

};


// Class WwiseAudio.WwiseAudioSettings
// 0x03C0 (0x03E8 - 0x0028)
class UWwiseAudioSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET
	FWwiseAudioReverbPresets                           ReverbPresetSettings;                                     // 0x00E8(0x0064) (Edit, Config)
	unsigned char                                      UnknownData01[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	FWwiseBinkSettings                                 BinkSettings;                                             // 0x0150(0x0038) (Edit, Config)
	TArray<FStringAssetReference>                      PersistentSoundBanks;                                     // 0x0188(0x0010) (Edit, ZeroConstructor, Config)
	FStringAssetReference                              InitBank;                                                 // 0x0198(0x0010) (Edit, ZeroConstructor, Config)
	FDirectoryPath                                     WwiseSoundbanksRoot;                                      // 0x01A8(0x0010) (Edit, Config)
	FStringAssetReference                              WwiseIDsDatabase;                                         // 0x01B8(0x0010) (Edit, ZeroConstructor, Config)
	FDirectoryPath                                     WwiseStreamedFilesDirectory;                              // 0x01C8(0x0010) (Edit, Config)
	TArray<FWwiseIOPriorityMappingConfig>              AsyncIOPriorityMappings;                                  // 0x01D8(0x0010) (Edit, ZeroConstructor, Config)
	FDirectoryPath                                     TritonAcousticMapsDirectory;                              // 0x01E8(0x0010) (Edit, Config)
	FString                                            DefaultLanguage;                                          // 0x01F8(0x0010) (Edit, ZeroConstructor, Config)
	FString                                            SinkSharesetName;                                         // 0x0208(0x0010) (Edit, ZeroConstructor, Config)
	FStringAssetReference                              PauseEventStart;                                          // 0x0218(0x0010) (Edit, ZeroConstructor, Config)
	FStringAssetReference                              PauseEventRelease;                                        // 0x0228(0x0010) (Edit, ZeroConstructor, Config)
	FStringAssetReference                              StopAllEvent;                                             // 0x0238(0x0010) (Edit, ZeroConstructor, Config)
	FWwiseNetworkRelationship                          NetworkRelationship;                                      // 0x0248(0x0018) (Edit, Config)
	FWwiseAudioGameStateSettings                       AudioStateSettings;                                       // 0x0260(0x00A0) (Edit, Config)
	uint32_t                                           WaapiInterpreterPort;                                     // 0x0300(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0304(0x0004) MISSED OFFSET
	UWwiseEvent*                                       PauseEventStartInstance;                                  // 0x0308(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	UWwiseEvent*                                       PauseEventReleaseInstance;                                // 0x0310(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	UWwiseEvent*                                       StopAllEventInstance;                                     // 0x0318(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	UWwiseObjectPoolWrapper*                           AnimNotifyPoolInstance;                                   // 0x0320(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x40];                                      // 0x0328(0x0040) MISSED OFFSET
	TArray<UWwiseEvent*>                               EventsToPlayOnFrontendStartInstance;                      // 0x0368(0x0010) (ZeroConstructor, Transient)
	TArray<UWwiseEvent*>                               EventsToPlayOnFrontendEndInstance;                        // 0x0378(0x0010) (ZeroConstructor, Transient)
	TArray<UWwiseEvent*>                               EventsToPlayOnStartEngagementInstance;                    // 0x0388(0x0010) (ZeroConstructor, Transient)
	TArray<UWwiseEvent*>                               EventsToPlayOnEndEngagementInstance;                      // 0x0398(0x0010) (ZeroConstructor, Transient)
	TArray<UWwiseEvent*>                               EventsToPlayOnLoadingStartInstance;                       // 0x03A8(0x0010) (ZeroConstructor, Transient)
	TArray<UWwiseEvent*>                               EventsToPlayOnLoadingEndInstance;                         // 0x03B8(0x0010) (ZeroConstructor, Transient)
	TArray<UWwiseEvent*>                               EventsToPlayOnFrontEndOrLoadingStartInstance;             // 0x03C8(0x0010) (ZeroConstructor, Transient)
	TArray<UWwiseEvent*>                               EventsToPlayOnFrontEndOrLoadingEndInstance;               // 0x03D8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseAudioSettings"));
		return ptr;
	}

};


// Class WwiseAudio.WwiseBank
// 0x0040 (0x0068 - 0x0028)
class UWwiseBank : public UObject
{
public:
	FString                                            path;                                                     // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	uint32_t                                           WwiseId;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x003C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseBank"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseSubSystemInterface"));
		return ptr;
	}

};


// Class WwiseAudio.WwiseDebugManager
// 0x0060 (0x0088 - 0x0028)
class UWwiseDebugManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseDebugManager"));
		return ptr;
	}

};


// Class WwiseAudio.WwiseEmitterInterface
// 0x0000 (0x0028 - 0x0028)
class UWwiseEmitterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseEmitterInterface"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseEmitterManager"));
		return ptr;
	}

};


// Class WwiseAudio.WwiseDDSEvent
// 0x0010 (0x0060 - 0x0050)
class UWwiseDDSEvent : public UWwiseEvent
{
public:
	TArray<uint32_t>                                   DDSArgumentsGroupsIDs;                                    // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseDDSEvent"));
		return ptr;
	}

};


// Class WwiseAudio.WwiseIDsDatabase
// 0x0080 (0x00A8 - 0x0028)
class UWwiseIDsDatabase : public UDataAsset
{
public:
	TArray<uint32_t>                                   StateGroupIDs;                                            // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<FName>                                      StateGroupNames;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<uint32_t>                                   StateValueIDs;                                            // 0x0048(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<FName>                                      StateValueNames;                                          // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<uint32_t>                                   SwitchGroupIDs;                                           // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<FName>                                      SwitchGroupNames;                                         // 0x0078(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<uint32_t>                                   SwitchStateIDs;                                           // 0x0088(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<FName>                                      SwitchStateNames;                                         // 0x0098(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseIDsDatabase"));
		return ptr;
	}

};


// Class WwiseAudio.WwiseInputManagerInterface
// 0x0000 (0x0028 - 0x0028)
class UWwiseInputManagerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseInputManagerInterface"));
		return ptr;
	}

};


// Class WwiseAudio.WwiseInputManager
// 0x0028 (0x0050 - 0x0028)
class UWwiseInputManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseInputManager"));
		return ptr;
	}

};


// Class WwiseAudio.WwiseMediaManager
// 0x0050 (0x0078 - 0x0028)
class UWwiseMediaManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseMediaManager"));
		return ptr;
	}

};


// Class WwiseAudio.WwisePersistentContentStore
// 0x0010 (0x0038 - 0x0028)
class UWwisePersistentContentStore : public UObject
{
public:
	TArray<UWwiseBank*>                                PersistentlyLoadedBanks;                                  // 0x0028(0x0010) (Edit, ZeroConstructor, Transient, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwisePersistentContentStore"));
		return ptr;
	}

};


// Class WwiseAudio.WwisePoolManager
// 0x00D0 (0x00F8 - 0x0028)
class UWwisePoolManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0028(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwisePoolManager"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudio.WwiseSoundFrameManager"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
