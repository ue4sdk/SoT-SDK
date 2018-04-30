#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieScene.MovieSceneSpawnable
// 0x0030
struct FMovieSceneSpawnable
{
	class UClass*                                      GeneratedClass;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FGuid                                       Guid;                                                     // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieScenePossessable
// 0x0028
struct FMovieScenePossessable
{
	class UClass*                                      PossessedObjectClass;                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FGuid                                       Guid;                                                     // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneBinding
// 0x0030
struct FMovieSceneBinding
{
	TArray<class UMovieSceneTrack*>                    Tracks;                                                   // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FGuid                                       ObjectGuid;                                               // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	class FString                                      BindingName;                                              // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneExpansionState
// 0x0001
struct FMovieSceneExpansionState
{
	bool                                               bExpanded;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEditorData
// 0x0050
struct FMovieSceneEditorData
{
	TMap<class FString, struct FMovieSceneExpansionState> ExpansionStates;                                          // 0x0000(0x0050) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
