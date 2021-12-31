#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MovieScene_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MovieScene.MovieSceneSignedObject
// 0x0058 (0x0080 - 0x0028)
class UMovieSceneSignedObject : public UObject
{
public:
	FGuid                                              Signature;                                                // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0038(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneSignedObject"));
		return ptr;
	}

};


// Class MovieScene.MovieScene
// 0x0080 (0x0100 - 0x0080)
class UMovieScene : public UMovieSceneSignedObject
{
public:
	TArray<FMovieSceneSpawnable>                       Spawnables;                                               // 0x0080(0x0010) (ZeroConstructor)
	TArray<FMovieScenePossessable>                     Possessables;                                             // 0x0090(0x0010) (ZeroConstructor)
	TArray<FMovieSceneBinding>                         ObjectBindings;                                           // 0x00A0(0x0010) (ZeroConstructor)
	TArray<UMovieSceneTrack*>                          MasterTracks;                                             // 0x00B0(0x0010) (ExportObject, ZeroConstructor)
	UMovieSceneTrack*                                  CameraCutTrack;                                           // 0x00C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	FFloatRange                                        SelectionRange;                                           // 0x00C8(0x0010) (ZeroConstructor, IsPlainOldData)
	FFloatRange                                        PlaybackRange;                                            // 0x00D8(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bForceFixedFrameIntervalPlayback;                         // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	float                                              FixedFrameInterval;                                       // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InTime;                                                   // 0x00F0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              OutTime;                                                  // 0x00F4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              StartTime;                                                // 0x00F8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              EndTime;                                                  // 0x00FC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieScene"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOverridesInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneBindingOverridesInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneBindingOverridesInterface"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOverrides
// 0x0070 (0x0098 - 0x0028)
class UMovieSceneBindingOverrides : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<FMovieSceneBindingOverrideData>             BindingData;                                              // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneBindingOverrides"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneBindingOwnerInterface"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneFolder
// 0x0048 (0x0070 - 0x0028)
class UMovieSceneFolder : public UObject
{
public:
	FName                                              FolderName;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<UMovieSceneFolder*>                         ChildFolders;                                             // 0x0030(0x0010) (ZeroConstructor)
	TArray<UMovieSceneTrack*>                          ChildMasterTracks;                                        // 0x0040(0x0010) (ExportObject, ZeroConstructor)
	TArray<FString>                                    ChildObjectBindingStrings;                                // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneFolder"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequencePlayer
// 0x05D8 (0x0600 - 0x0028)
class UMovieSceneSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x368];                                     // 0x0028(0x0368) MISSED OFFSET
	FScriptMulticastDelegate                           OnPlay;                                                   // 0x0390(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnStop;                                                   // 0x03A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnPause;                                                  // 0x03B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bIsPlaying : 1;                                           // 0x03C0(0x0001)
	unsigned char                                      bReversePlayback : 1;                                     // 0x03C0(0x0001)
	unsigned char                                      bPendingFirstUpdate : 1;                                  // 0x03C0(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	UMovieSceneSequence*                               Sequence;                                                 // 0x03C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeCursorPosition;                                       // 0x03D0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x03D4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x03D8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentNumLoops;                                          // 0x03DC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                         // 0x03F0(0x0028)
	unsigned char                                      UnknownData03[0x1E8];                                     // 0x0418(0x01E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneSequencePlayer"));
		return ptr;
	}


	void Stop();
	void StartPlayingNextTick();
	void SetPlayRate(float PlayRate);
	void SetPlaybackRange(float NewStartTime, float NewEndTime);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void SetOverridePlaybackSettings(const FMovieSceneSequencePlaybackSettings& InSettings);
	void PlayReverse();
	void PlayLooping(int NumLoops);
	void Play();
	void Pause();
	bool IsPlaying();
	float GetPlayRate();
	float GetPlaybackStart();
	float GetPlaybackPosition();
	float GetPlaybackEnd();
	float GetLength();
	void ChangePlaybackDirection();
};


// Class MovieScene.MovieSceneSection
// 0x0018 (0x0098 - 0x0080)
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	FMovieSceneSectionEvalOptions                      EvalOptions;                                              // 0x0080(0x0002) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0082(0x0002) MISSED OFFSET
	float                                              StartTime;                                                // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RowIndex;                                                 // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OverlapPriority;                                          // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsActive : 1;                                            // 0x0094(0x0001) (Edit)
	unsigned char                                      bIsLocked : 1;                                            // 0x0094(0x0001) (Edit)
	unsigned char                                      bIsInfinite : 1;                                          // 0x0094(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0095(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneSection"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrack
// 0x0008 (0x0088 - 0x0080)
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	FMovieSceneTrackEvalOptions                        EvalOptions;                                              // 0x0080(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneTrack"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequence
// 0x0228 (0x02A8 - 0x0080)
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	FCachedMovieSceneEvaluationTemplate                EvaluationTemplate;                                       // 0x0080(0x0220)
	FMovieSceneTrackCompilationParams                  TemplateParameters;                                       // 0x02A0(0x0001)
	bool                                               bParentContextsAreSignificant;                            // 0x02A1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02A2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneSequence"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneNameableTrack
// 0x0000 (0x0088 - 0x0088)
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneNameableTrack"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
