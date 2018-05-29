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
	uint32_t                                           VectorsPerSegment;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           TracesPerSegmentPerFrame;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           HorizontalSegments;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              HorizontalConeSegmentElevationAngle;                      // 0x000C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              UpwardsConeAngle;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TraceVectorLength;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TimeToDiscardSample;                                      // 0x0018(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DistanceToDiscardSample;                                  // 0x001C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BiasTowardsVerticalSegment;                               // 0x0020(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           MaxNumSampleFramesInHistory;                              // 0x0024(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct WwiseAudio.WwiseAudioReverbPresets
// 0x0064
struct FWwiseAudioReverbPresets
{
	struct FName                                       ShortEarlyReflectionPresetName;                           // 0x0000(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       LongEarlyReflectionPresetName;                            // 0x0008(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       SpaceSizeRTPCName;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       EnclosedRatioRTPCName;                                    // 0x0018(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       MaterialThicknessRTPCName;                                // 0x0020(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       MaterialReflectivityRTPCName;                             // 0x0028(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     EnvironmentTraceChannel;                                  // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              MinSpaceSizeWindowForEarlyReflections;                    // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxSpaceSizeWindowforEarlyReflections;                    // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FReverbPresetControllerSettings             SamplingSettings;                                         // 0x003C(0x0028) (Edit, Config)
};

// ScriptStruct WwiseAudio.WwiseBinkTrackMapping
// 0x0008
struct FWwiseBinkTrackMapping
{
	TEnumAsByte<EWwise7Point1Order>                    mChannelMapping;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               mRequired;                                                // 0x0001(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              mVolumeDb;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct WwiseAudio.WwiseBinkTrackMappings
// 0x0018
struct FWwiseBinkTrackMappings
{
	TEnumAsByte<EWwiseLanguageOrder>                   mLanguage;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FWwiseBinkTrackMapping>              mChannels;                                                // 0x0008(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct WwiseAudio.WwiseBinkSettings
// 0x0038
struct FWwiseBinkSettings
{
	struct FStringAssetReference                       PlayEvent;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       StopEvent;                                                // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
	int                                                PreBufferCount;                                           // 0x0020(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FWwiseBinkTrackMappings>             Mappings;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct WwiseAudio.WwiseIOPriorityMappingConfig
// 0x0008
struct FWwiseIOPriorityMappingConfig
{
	int                                                WwisePriority;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EWwiseAsyncIOPriorityDisplay>          AsyncIOPriority;                                          // 0x0004(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct WwiseAudio.WwiseNetworkRelationship
// 0x0018
struct FWwiseNetworkRelationship
{
	struct FName                                       SwitchGroupName;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       RemotePlayerSwitchValue;                                  // 0x0008(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       LocalPlayerSwitchValue;                                   // 0x0010(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct WwiseAudio.WwiseAudioGameStateSettings
// 0x0080
struct FWwiseAudioGameStateSettings
{
	struct FName                                       AudioGameStateGroupName;                                  // 0x0000(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       AudioGameStateFrontend;                                   // 0x0008(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       AudioGameStateLoading;                                    // 0x0010(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       AudioGameStateIngame;                                     // 0x0018(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FStringAssetReference>               EventsToPlayOnLobbyStart;                                 // 0x0020(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               EventsToPlayOnLobbyEnd;                                   // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               EventsToPlayOnLoadingStart;                               // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               EventsToPlayOnLoadingEnd;                                 // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               EventsToPlayOnFrontEndOrLoadingStart;                     // 0x0060(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               EventsToPlayOnFrontEndOrLoadingEnd;                       // 0x0070(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct WwiseAudio.WwiseAudioAcousticSurfaceParams
// 0x0008
struct FWwiseAudioAcousticSurfaceParams
{
	float                                              Thickness;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Reflectivity;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WwiseAudio.WwiseEventParam
// 0x0018
struct FWwiseEventParam
{
	TWeakObjectPtr<class UWwiseEvent>                  WwiseEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourcePath;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceObj;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WwiseAudio.WwiseEmitterParams
// 0x0002
struct FWwiseEmitterParams
{
	bool                                               bEnableObstructionAndOcclusion;                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAccoustics;                                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
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
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Up;                                                       // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Right;                                                    // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Front;                                                    // 0x0024(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0030(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
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
