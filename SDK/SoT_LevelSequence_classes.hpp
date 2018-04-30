#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LevelSequence_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LevelSequence.LevelSequence
// 0x00A8 (0x00D0 - 0x0028)
class ULevelSequence : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FLevelSequenceObjectReferenceMap            DefaultObjectReferences;                                  // 0x01E3(0x0050)
	class UMovieScene*                                 MovieScene;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequence");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceInstance
// 0x0108 (0x0130 - 0x0028)
class ULevelSequenceInstance : public UMovieSceneSequence
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class ULevelSequence*                              LevelSequence;                                            // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCanRemapBindings;                                        // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceInstance");
		return ptr;
	}

};


// Class LevelSequence.LevelSequencePlayer
// 0x0098 (0x00C0 - 0x0028)
class ULevelSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class ULevelSequenceInstance*                      LevelSequenceInstance;                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlaying;                                               // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              TimeCursorPosition;                                       // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return ptr;
	}


	void Stop();
	void SetPlayRate(float PlayRate);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void PlayLooping(int NumLoops);
	void Play();
	void Pause();
	bool IsPlaying();
	float GetPlayRate();
	float GetPlaybackPosition();
	float GetLength();
	class ULevelSequencePlayer* STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FLevelSequencePlaybackSettings& Settings);
};


// Class LevelSequence.LevelSequenceActor
// 0x0030 (0x04A0 - 0x0470)
class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0470(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return ptr;
	}


	void SetSequence(class ULevelSequence* InSequence);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
