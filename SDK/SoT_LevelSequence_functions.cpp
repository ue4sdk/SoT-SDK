// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LevelSequence_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LevelSequence.LevelSequencePlayer.Stop
// (Final, Native, Public, BlueprintCallable)

void ULevelSequencePlayer::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.Stop");

	ULevelSequencePlayer_Stop_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelSequence.LevelSequencePlayer.SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)

void ULevelSequencePlayer::SetPlayRate(float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.SetPlayRate");

	ULevelSequencePlayer_SetPlayRate_Params params;
	params.PlayRate = PlayRate;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelSequence.LevelSequencePlayer.SetPlaybackPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewPlaybackPosition            (Parm, ZeroConstructor, IsPlainOldData)

void ULevelSequencePlayer::SetPlaybackPosition(float NewPlaybackPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.SetPlaybackPosition");

	ULevelSequencePlayer_SetPlaybackPosition_Params params;
	params.NewPlaybackPosition = NewPlaybackPosition;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelSequence.LevelSequencePlayer.PlayLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)

void ULevelSequencePlayer::PlayLooping(int NumLoops)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.PlayLooping");

	ULevelSequencePlayer_PlayLooping_Params params;
	params.NumLoops = NumLoops;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelSequence.LevelSequencePlayer.Play
// (Final, Native, Public, BlueprintCallable)

void ULevelSequencePlayer::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.Play");

	ULevelSequencePlayer_Play_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelSequence.LevelSequencePlayer.Pause
// (Final, Native, Public, BlueprintCallable)

void ULevelSequencePlayer::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.Pause");

	ULevelSequencePlayer_Pause_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelSequence.LevelSequencePlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULevelSequencePlayer::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.IsPlaying");

	ULevelSequencePlayer_IsPlaying_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequencePlayer.GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULevelSequencePlayer::GetPlayRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.GetPlayRate");

	ULevelSequencePlayer_GetPlayRate_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequencePlayer.GetPlaybackPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULevelSequencePlayer::GetPlaybackPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.GetPlaybackPosition");

	ULevelSequencePlayer_GetPlaybackPosition_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequencePlayer.GetLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULevelSequencePlayer::GetLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.GetLength");

	ULevelSequencePlayer_GetLength_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLevelSequencePlaybackSettings Settings                       (Parm)
// class ULevelSequencePlayer*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelSequencePlayer* ULevelSequencePlayer::STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FLevelSequencePlaybackSettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer");

	ULevelSequencePlayer_CreateLevelSequencePlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelSequence = LevelSequence;
	params.Settings = Settings;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*          InSequence                     (Parm, ZeroConstructor, IsPlainOldData)

void ALevelSequenceActor::SetSequence(class ULevelSequence* InSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetSequence");

	ALevelSequenceActor_SetSequence_Params params;
	params.InSequence = InSequence;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
