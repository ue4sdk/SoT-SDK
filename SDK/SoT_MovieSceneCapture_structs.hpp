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
	uint32_t                                           ResX;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ResY;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// 0x0050
struct FMovieSceneCaptureSettings
{
	struct FDirectoryPath                              OutputDirectory;                                          // 0x0000(0x0010) (Edit, Config)
	class FString                                      OutputFormat;                                             // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
	int                                                FrameRate;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FCaptureResolution                          Resolution;                                               // 0x0024(0x0008) (Edit, Config)
	TEnumAsByte<EMovieCaptureType>                     CaptureType;                                              // 0x002C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseCompression;                                          // 0x002D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	float                                              CompressionQuality;                                       // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class FString                                      Codec;                                                    // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bEnableTextureStreaming;                                  // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCinematicMode;                                           // 0x0049(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowMovement;                                           // 0x004A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowTurning;                                            // 0x004B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShowPlayer;                                              // 0x004C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShowHUD;                                                 // 0x004D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
