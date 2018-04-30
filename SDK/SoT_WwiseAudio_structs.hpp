#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WwiseAudio.ReverbPresetControllerSettings
// 0x0028
struct FReverbPresetControllerSettings
{
	uint32_t                                           MaxNumSampleFramesInHistory;                              // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	uint32_t                                           VectorsPerSegment;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           TracesPerSegmentPerFrame;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           HorizontalSegments;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              HorizontalConeSegmentElevationAngle;                      // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              UpwardsConeAngle;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TraceVectorLength;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TimeToDiscardSample;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DistanceToDiscardSample;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BiasTowardsVerticalSegment;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct WwiseAudio.WwiseAudioReverbPresets
// 0x0064
struct FWwiseAudioReverbPresets
{
	struct FReverbPresetControllerSettings             SamplingSettings;                                         // 0x0000(0x0028) (Edit, Config)
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FName                                       ShortEarlyReflectionPresetName;                           // 0x01E3(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       LongEarlyReflectionPresetName;                            // 0x01E3(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       SpaceSizeRTPCName;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       EnclosedRatioRTPCName;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       MaterialThicknessRTPCName;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       MaterialReflectivityRTPCName;                             // 0x01E3(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     EnvironmentTraceChannel;                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinSpaceSizeWindowForEarlyReflections;                    // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxSpaceSizeWindowforEarlyReflections;                    // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct WwiseAudio.WwiseBinkTrackMapping
// 0x0008
struct FWwiseBinkTrackMapping
{
	float                                              mVolumeDb;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TEnumAsByte<EWwise7Point1Order>                    mChannelMapping;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               mRequired;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct WwiseAudio.WwiseBinkTrackMappings
// 0x0018
struct FWwiseBinkTrackMappings
{
	TArray<struct FWwiseBinkTrackMapping>              mChannels;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TEnumAsByte<EWwiseLanguageOrder>                   mLanguage;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct WwiseAudio.WwiseBinkSettings
// 0x0038
struct FWwiseBinkSettings
{
	TArray<struct FWwiseBinkTrackMappings>             Mappings;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FStringAssetReference                       PlayEvent;                                                // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       StopEvent;                                                // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	int                                                PreBufferCount;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct WwiseAudio.WwiseNetworkRelationship
// 0x0018
struct FWwiseNetworkRelationship
{
	struct FName                                       LocalPlayerSwitchValue;                                   // 0x0000(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FName                                       SwitchGroupName;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       RemotePlayerSwitchValue;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct WwiseAudio.WwiseAudioGameStateSettings
// 0x0080
struct FWwiseAudioGameStateSettings
{
	TArray<struct FStringAssetReference>               EventsToPlayOnFrontEndOrLoadingEnd;                       // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       AudioGameStateGroupName;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       AudioGameStateFrontend;                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       AudioGameStateLoading;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       AudioGameStateIngame;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FStringAssetReference>               EventsToPlayOnLobbyStart;                                 // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               EventsToPlayOnLobbyEnd;                                   // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               EventsToPlayOnLoadingStart;                               // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               EventsToPlayOnLoadingEnd;                                 // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               EventsToPlayOnFrontEndOrLoadingStart;                     // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct WwiseAudio.WwiseAudioAcousticSurfaceParams
// 0x0008
struct FWwiseAudioAcousticSurfaceParams
{
	float                                              Reflectivity;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              Thickness;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WwiseAudio.WwiseEventParam
// 0x0018
struct FWwiseEventParam
{
	struct FName                                       SourceObj;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	TWeakObjectPtr<class UWwiseEvent>                  WwiseEvent;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourcePath;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WwiseAudio.WwiseEmitterParams
// 0x0002
struct FWwiseEmitterParams
{
	bool                                               bEnableAccoustics;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	bool                                               bEnableObstructionAndOcclusion;                           // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WwiseAudio.WwiseExternalSource
// 0x0010
struct FWwiseExternalSource
{
	class FString                                      path;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct WwiseAudio.WwiseListenerInfo
// 0x003C
struct FWwiseListenerInfo
{
	struct FVector                                     Velocity;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Up;                                                       // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Right;                                                    // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Front;                                                    // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WwiseAudio.WwiseSubtitle
// 0x0010
struct FWwiseSubtitle
{
	class FString                                      Subtitle;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
