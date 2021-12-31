#pragma once

// Sea of Thieves (2) SDK

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
// 0x00F8 (0x03A0 - 0x02A8)
class ULevelSequence : public UMovieSceneSequence
{
public:
	UMovieScene*                                       MovieScene;                                               // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	FLevelSequenceObjectReferenceMap                   ObjectReferences;                                         // 0x02B0(0x00A0)
	TMap<FString, FLevelSequenceObject>                PossessedObjects;                                         // 0x0350(0x0050) (ZeroConstructor, Deprecated)

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
// 0x0040 (0x0640 - 0x0600)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	AActor*                                            SpawnablesParent;                                         // 0x0600(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0608(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelSequence.LevelSequencePlayer"));
		return ptr;
	}


	static ULevelSequencePlayer* CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, const FMovieSceneSequencePlaybackSettings& Settings);
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
	FStringClassReference                              BurnInClass;                                              // 0x0030(0x0010) (Edit, ZeroConstructor)
	ULevelSequenceBurnInInitSettings*                  Settings;                                                 // 0x0040(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelSequence.LevelSequenceBurnInOptions"));
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceActor
// 0x0070 (0x0440 - 0x03D0)
class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	bool                                               bAutoPlay;                                                // 0x03D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                         // 0x03E0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	ULevelSequencePlayer*                              SequencePlayer;                                           // 0x0408(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	FStringAssetReference                              LevelSequence;                                            // 0x0410(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	ULevelSequenceBurnInOptions*                       BurnInOptions;                                            // 0x0420(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UMovieSceneBindingOverrides*                       BindingOverrides;                                         // 0x0428(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	AActor*                                            SpawnablesParent;                                         // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ULevelSequenceBurnIn*                              BurnInInstance;                                           // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelSequence.LevelSequenceActor"));
		return ptr;
	}


	void SetSequence(ULevelSequence* InSequence, bool LoadSequence);
	void SetBinding(const FMovieSceneObjectBindingPtr& Binding, TArray<AActor*> Actors, bool bAllowBindingsFromAsset);
	void ResetBindings();
	void ResetBinding(const FMovieSceneObjectBindingPtr& Binding);
	void RemoveBinding(const FMovieSceneObjectBindingPtr& Binding, AActor* Actor);
	ULevelSequence* GetSequence(bool Load);
	void AddBinding(const FMovieSceneObjectBindingPtr& Binding, AActor* Actor, bool bAllowBindingsFromAsset);
};


// Class LevelSequence.LevelSequenceBurnIn
// 0x0098 (0x02C8 - 0x0230)
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	FLevelSequencePlayerSnapshot                       FrameInformation;                                         // 0x0230(0x0090) (BlueprintVisible, BlueprintReadOnly)
	ALevelSequenceActor*                               LevelSequenceActor;                                       // 0x02C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LevelSequence.LevelSequenceBurnIn"));
		return ptr;
	}


	void SetSettings(UObject* InSettings);
	UClass* GetSettingsClass();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
