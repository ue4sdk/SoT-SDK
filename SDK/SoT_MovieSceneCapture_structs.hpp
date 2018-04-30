#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_LevelSequence_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneCapture.CaptureResolution
// 0x0008
struct FCaptureResolution
{
	uint32_t                                           ResY;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	uint32_t                                           ResX;                                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// 0x0050
struct FMovieSceneCaptureSettings
{
	bool                                               bShowHUD;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FDirectoryPath                              OutputDirectory;                                          // 0x01E3(0x0010) (Edit, Config)
	class FString                                      OutputFormat;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	int                                                FrameRate;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FCaptureResolution                          Resolution;                                               // 0x01E3(0x0008) (Edit, Config)
	TEnumAsByte<EMovieCaptureType>                     CaptureType;                                              // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseCompression;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CompressionQuality;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	class FString                                      Codec;                                                    // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bEnableTextureStreaming;                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCinematicMode;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowMovement;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowTurning;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShowPlayer;                                              // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
