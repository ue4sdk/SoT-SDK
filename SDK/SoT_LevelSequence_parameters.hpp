#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LevelSequence_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LevelSequence.LevelSequencePlayer.Stop
struct ULevelSequencePlayer_Stop_Params
{
};

// Function LevelSequence.LevelSequencePlayer.SetPlayRate
struct ULevelSequencePlayer_SetPlayRate_Params
{
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.SetPlaybackPosition
struct ULevelSequencePlayer_SetPlaybackPosition_Params
{
	float                                              NewPlaybackPosition;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.PlayLooping
struct ULevelSequencePlayer_PlayLooping_Params
{
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.Play
struct ULevelSequencePlayer_Play_Params
{
};

// Function LevelSequence.LevelSequencePlayer.Pause
struct ULevelSequencePlayer_Pause_Params
{
};

// Function LevelSequence.LevelSequencePlayer.IsPlaying
struct ULevelSequencePlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.GetPlayRate
struct ULevelSequencePlayer_GetPlayRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.GetPlaybackPosition
struct ULevelSequencePlayer_GetPlaybackPosition_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.GetLength
struct ULevelSequencePlayer_GetLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
struct ULevelSequencePlayer_CreateLevelSequencePlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              LevelSequence;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLevelSequencePlaybackSettings              Settings;                                                 // (Parm)
	class ULevelSequencePlayer*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.SetSequence
struct ALevelSequenceActor_SetSequence_Params
{
	class ULevelSequence*                              InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
