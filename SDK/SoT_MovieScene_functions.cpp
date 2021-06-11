// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MovieScene_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MovieScene.MovieSceneSequencePlayer.Stop
// (Final, Native, Public, BlueprintCallable)

void UMovieSceneSequencePlayer::Stop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.Stop"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.StartPlayingNextTick
// (Final, Native, Public, BlueprintCallable)

void UMovieSceneSequencePlayer::StartPlayingNextTick()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.StartPlayingNextTick"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.SetPlayRate"));

	struct
	{
		float                          PlayRate;
	} params;

	params.PlayRate = PlayRate;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewStartTime                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewEndTime                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequencePlayer::SetPlaybackRange(float NewStartTime, float NewEndTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange"));

	struct
	{
		float                          NewStartTime;
		float                          NewEndTime;
	} params;

	params.NewStartTime = NewStartTime;
	params.NewEndTime = NewEndTime;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewPlaybackPosition            (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequencePlayer::SetPlaybackPosition(float NewPlaybackPosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition"));

	struct
	{
		float                          NewPlaybackPosition;
	} params;

	params.NewPlaybackPosition = NewPlaybackPosition;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.PlayReverse
// (Final, Native, Public, BlueprintCallable)

void UMovieSceneSequencePlayer::PlayReverse()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.PlayReverse"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequencePlayer::PlayLooping(int NumLoops)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.PlayLooping"));

	struct
	{
		int                            NumLoops;
	} params;

	params.NumLoops = NumLoops;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.Play
// (Final, Native, Public, BlueprintCallable)

void UMovieSceneSequencePlayer::Play()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.Play"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.Pause
// (Final, Native, Public, BlueprintCallable)

void UMovieSceneSequencePlayer::Pause()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.Pause"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneSequencePlayer::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.IsPlaying"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneSequencePlayer::GetPlayRate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.GetPlayRate"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneSequencePlayer::GetPlaybackStart()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneSequencePlayer::GetPlaybackPosition()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneSequencePlayer::GetPlaybackEnd()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneSequencePlayer::GetLength()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.GetLength"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
// (Final, Native, Public, BlueprintCallable)

void UMovieSceneSequencePlayer::ChangePlaybackDirection()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
