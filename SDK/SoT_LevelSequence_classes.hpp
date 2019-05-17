#pragma once

// Sea of Thieves (2.0) SDK

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
	struct FLevelSequenceObjectReferenceMap            DefaultObjectReferences;                                  // 0x0028(0x0050)
	class UMovieScene*                                 MovieScene;                                               // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<class FString, struct FLevelSequenceObject>   PossessedObjects;                                         // 0x0080(0x0050) (ZeroConstructor, Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelSequence.LevelSequence"));
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceInstance
// 0x0108 (0x0130 - 0x0028)
class ULevelSequenceInstance : public UMovieSceneSequence
{
public:
	class ULevelSequence*                              LevelSequence;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCanRemapBindings;                                        // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FLevelSequenceObjectReferenceMap            RemappedObjectReferences;                                 // 0x0038(0x0050)
	unsigned char                                      UnknownData01[0xA8];                                      // 0x0088(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelSequence.LevelSequenceInstance"));
		return ptr;
	}

};


// Class LevelSequence.LevelSequencePlayer
// 0x0098 (0x00C0 - 0x0028)
class ULevelSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class ULevelSequenceInstance*                      LevelSequenceInstance;                                    // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlaying;                                               // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              TimeCursorPosition;                                       // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLevelSequencePlaybackSettings              PlaybackSettings;                                         // 0x0040(0x0008)
	unsigned char                                      UnknownData02[0x78];                                      // 0x0048(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelSequence.LevelSequencePlayer"));
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
	static class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FLevelSequencePlaybackSettings& Settings);
};


// Class LevelSequence.LevelSequenceActor
// 0x0030 (0x04D8 - 0x04A8)
class ALevelSequenceActor : public AActor
{
public:
	bool                                               bAutoPlay;                                                // 0x04A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04A9(0x0003) MISSED OFFSET
	struct FLevelSequencePlaybackSettings              PlaybackSettings;                                         // 0x04AC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	class ULevelSequencePlayer*                        SequencePlayer;                                           // 0x04B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FStringAssetReference                       LevelSequence;                                            // 0x04C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class ULevelSequenceInstance*                      SequenceInstance;                                         // 0x04D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelSequence.LevelSequenceActor"));
		return ptr;
	}


	void SetSequence(class ULevelSequence* InSequence);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
