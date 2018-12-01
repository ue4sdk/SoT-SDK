#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MovieSceneCapture_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneCapture.MovieSceneCaptureInterface");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCapture
// 0x00B0 (0x00D8 - 0x0028)
class UMovieSceneCapture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FMovieSceneCaptureSettings                  Settings;                                                 // 0x0030(0x0050) (Edit, Config)
	class FString                                      AdditionalCommandLineArguments;                           // 0x0080(0x0010) (Edit, ZeroConstructor, Transient)
	bool                                               bBufferVisualizationDumpFrames;                           // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x47];                                      // 0x0091(0x0047) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneCapture.MovieSceneCapture");
		return ptr;
	}

};


// Class MovieSceneCapture.AutomatedLevelSequenceCapture
// 0x0048 (0x0120 - 0x00D8)
class UAutomatedLevelSequenceCapture : public UMovieSceneCapture
{
public:
	struct FStringAssetReference                       LevelSequence;                                            // 0x00D8(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Level;                                                    // 0x00E8(0x0010) (Edit, ZeroConstructor)
	struct FLevelSequencePlaybackSettings              PlaybackSettings;                                         // 0x00F8(0x0008) (Edit, Config)
	float                                              PrerollAmount;                                            // 0x0100(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	class ULevelSequenceInstance*                      AnimationInstance;                                        // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ULevelSequencePlayer*                        AnimationPlayback;                                        // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneCapture.AutomatedLevelSequenceCapture");
		return ptr;
	}

};


// Class MovieSceneCapture.LevelCapture
// 0x0010 (0x00E8 - 0x00D8)
class ULevelCapture : public UMovieSceneCapture
{
public:
	struct FStringAssetReference                       Level;                                                    // 0x00D8(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneCapture.LevelCapture");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureEnvironment : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneCapture.MovieSceneCaptureEnvironment");
		return ptr;
	}


	int STATIC_GetCaptureFrameNumber();
	float STATIC_GetCaptureElapsedTime();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
