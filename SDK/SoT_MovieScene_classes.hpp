#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MovieScene_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MovieScene.MovieScene
// 0x0058 (0x0080 - 0x0028)
class UMovieScene : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FMovieSceneSpawnable>                Spawnables;                                               // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FMovieScenePossessable>              Possessables;                                             // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneBinding>                  ObjectBindings;                                           // 0x01E3(0x0010) (ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    MasterTracks;                                             // 0x01E3(0x0010) (ZeroConstructor)
	class UMovieSceneTrack*                            ShotTrack;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              InTime;                                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OutTime;                                                  // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieScene");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSection
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneSection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              StartTime;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RowIndex;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsActive : 1;                                            // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSection");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequence
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneSequence : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSequence");
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrack
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneTrack : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
