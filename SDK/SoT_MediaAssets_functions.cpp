// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MediaAssets_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MediaAssets.MediaPlayer.SupportsSeeking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::SupportsSeeking()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsSeeking");

	UMediaPlayer_SupportsSeeking_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SupportsScrubbing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::SupportsScrubbing()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsScrubbing");

	UMediaPlayer_SupportsScrubbing_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SupportsRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Unthinned                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::SupportsRate(float Rate, bool Unthinned)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsRate");

	UMediaPlayer_SupportsRate_Params params;
	params.Rate = Rate;
	params.Unthinned = Unthinned;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::SetRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetRate");

	UMediaPlayer_SetRate_Params params;
	params.Rate = Rate;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InLooping                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::SetLooping(bool InLooping)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetLooping");

	UMediaPlayer_SetLooping_Params params;
	params.InLooping = InLooping;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Seek
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan               InTime                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::Seek(const struct FTimespan& InTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Seek");

	UMediaPlayer_Seek_Params params;
	params.InTime = InTime;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Rewind
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::Rewind()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Rewind");

	UMediaPlayer_Rewind_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Play");

	UMediaPlayer_Play_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Pause");

	UMediaPlayer_Pause_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  NewUrl                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::OpenUrl(const class FString& NewUrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenUrl");

	UMediaPlayer_OpenUrl_Params params;
	params.NewUrl = NewUrl;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsStopped
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::IsStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsStopped");

	UMediaPlayer_IsStopped_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPlaying");

	UMediaPlayer_IsPlaying_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPaused");

	UMediaPlayer_IsPaused_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::IsLooping()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsLooping");

	UMediaPlayer_IsLooping_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetUrl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UMediaPlayer::GetUrl()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetUrl");

	UMediaPlayer_GetUrl_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FTimespan UMediaPlayer::GetTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTime");

	UMediaPlayer_GetTime_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMediaPlayer::GetRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetRate");

	UMediaPlayer_GetRate_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetDuration
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FTimespan UMediaPlayer::GetDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetDuration");

	UMediaPlayer_GetDuration_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Close
// (Final, Native, Public, BlueprintCallable)

void UMediaPlayer::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Close");

	UMediaPlayer_Close_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaPlayer.CanPlay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::CanPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPlay");

	UMediaPlayer_CanPlay_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.CanPause
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::CanPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPause");

	UMediaPlayer_CanPause_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaSoundWave.SetMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*            InMediaPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UMediaSoundWave::SetMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundWave.SetMediaPlayer");

	UMediaSoundWave_SetMediaPlayer_Params params;
	params.InMediaPlayer = InMediaPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaTexture.SetMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*            InMediaPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UMediaTexture::SetMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.SetMediaPlayer");

	UMediaTexture_SetMediaPlayer_Params params;
	params.InMediaPlayer = InMediaPlayer;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
