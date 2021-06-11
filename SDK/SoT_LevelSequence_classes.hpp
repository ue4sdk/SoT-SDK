#pragma once

// Sea of Thieves (2.1) SDK

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
// 0x00A8 (0x0350 - 0x02A8)
class ULevelSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLevelSequenceObjectReferenceMap            ObjectReferences;                                         // 0x02B0(0x0050)
	TMap<class FString, struct FLevelSequenceObject>   PossessedObjects;                                         // 0x0300(0x0050) (ZeroConstructor, Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelSequence.LevelSequence"));
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceSubtitlesInterface
// 0x0000 (0x0028 - 0x0028)
class ULevelSequenceSubtitlesInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelSequence.LevelSequenceSubtitlesInterface"));
		return ptr;
	}

};


// Class LevelSequence.LevelSequencePlayer
// 0x0040 (0x06A0 - 0x0660)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	class AActor*                                      SpawnablesParent;                                         // 0x0660(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0668(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelSequence.LevelSequencePlayer"));
		return ptr;
	}


	static class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings);
};


// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0000 (0x0028 - 0x0028)
class ULevelSequenceBurnInInitSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelSequence.LevelSequenceBurnInInitSettings"));
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0020 (0x0048 - 0x0028)
class ULevelSequenceBurnInOptions : public UObject
{
public:
	bool                                               bUseBurnIn;                                               // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FStringClassReference                       BurnInClass;                                              // 0x0030(0x0010) (Edit, ZeroConstructor)
	class ULevelSequenceBurnInInitSettings*            Settings;                                                 // 0x0040(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelSequence.LevelSequenceBurnInOptions"));
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceActor
// 0x0070 (0x04A0 - 0x0430)
class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0430(0x0008) MISSED OFFSET
	bool                                               bAutoPlay;                                                // 0x0438(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x0440(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	class ULevelSequencePlayer*                        SequencePlayer;                                           // 0x0468(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FStringAssetReference                       LevelSequence;                                            // 0x0470(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                            // 0x0480(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                         // 0x0488(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class AActor*                                      SpawnablesParent;                                         // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULevelSequenceBurnIn*                        BurnInInstance;                                           // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelSequence.LevelSequenceActor"));
		return ptr;
	}


	void SetSequence(class ULevelSequence* InSequence, bool LoadSequence);
	void SetBinding(const struct FMovieSceneObjectBindingPtr& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
	void ResetBindings();
	void ResetBinding(const struct FMovieSceneObjectBindingPtr& Binding);
	void RemoveBinding(const struct FMovieSceneObjectBindingPtr& Binding, class AActor* Actor);
	class ULevelSequence* GetSequence(bool Load);
	void AddBinding(const struct FMovieSceneObjectBindingPtr& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
};


// Class LevelSequence.LevelSequenceBurnIn
// 0x0098 (0x02C8 - 0x0230)
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot                FrameInformation;                                         // 0x0230(0x0090) (BlueprintVisible, BlueprintReadOnly)
	class ALevelSequenceActor*                         LevelSequenceActor;                                       // 0x02C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelSequence.LevelSequenceBurnIn"));
		return ptr;
	}


	void SetSettings(class UObject* InSettings);
	class UClass* GetSettingsClass();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
