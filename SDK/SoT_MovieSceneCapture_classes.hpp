#pragma once

// Sea of Thieves (1.0.5) SDK

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
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureInterface");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCapture
// 0x00B0 (0x00D8 - 0x0028)
class UMovieSceneCapture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FMovieSceneCaptureSettings                  Settings;                                                 // 0x01E3(0x0050) (Edit, Config)
	class FString                                      AdditionalCommandLineArguments;                           // 0x01E3(0x0010) (Edit, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCapture");
		return ptr;
	}

};


// Class MovieSceneCapture.AutomatedLevelSequenceCapture
// 0x0048 (0x0120 - 0x00D8)
class UAutomatedLevelSequenceCapture : public UMovieSceneCapture
{
public:
	unsigned char                                      UnknownData00[0x10B];                                     // 0x00D8(0x010B) MISSED OFFSET
	struct FStringAssetReference                       LevelSequence;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Level;                                                    // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FLevelSequencePlaybackSettings              PlaybackSettings;                                         // 0x01E3(0x0008) (Edit, Config)
	float                                              PrerollAmount;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	class ULevelSequenceInstance*                      AnimationInstance;                                        // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ULevelSequencePlayer*                        AnimationPlayback;                                        // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.AutomatedLevelSequenceCapture");
		return ptr;
	}

};


// Class MovieSceneCapture.LevelCapture
// 0x0010 (0x00E8 - 0x00D8)
class ULevelCapture : public UMovieSceneCapture
{
public:
	unsigned char                                      UnknownData00[0x10B];                                     // 0x00D8(0x010B) MISSED OFFSET
	struct FStringAssetReference                       Level;                                                    // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.LevelCapture");
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
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureEnvironment");
		return ptr;
	}


	int STATIC_GetCaptureFrameNumber();
	float STATIC_GetCaptureElapsedTime();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
