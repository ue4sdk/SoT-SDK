// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MediaAssets_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SupportsSeeking"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SupportsScrubbing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::SupportsScrubbing()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SupportsScrubbing"));

	struct
	{
		bool                           ReturnValue;
	} params;


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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SupportsRate"));

	struct
	{
		float                          Rate;
		bool                           Unthinned;
		bool                           ReturnValue;
	} params;

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetRate"));

	struct
	{
		float                          Rate;
		bool                           ReturnValue;
	} params;

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetLooping"));

	struct
	{
		bool                           InLooping;
		bool                           ReturnValue;
	} params;

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Seek"));

	struct
	{
		struct FTimespan               InTime;
		bool                           ReturnValue;
	} params;

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Rewind"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::Play()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Play"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::Pause()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Pause"));

	struct
	{
		bool                           ReturnValue;
	} params;


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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenUrl"));

	struct
	{
		class FString                  NewUrl;
		bool                           ReturnValue;
	} params;

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsStopped"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsPlaying"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsPaused"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::IsLooping()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsLooping"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetUrl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UMediaPlayer::GetUrl()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetUrl"));

	struct
	{
		class FString                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FTimespan UMediaPlayer::GetTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTime"));

	struct
	{
		struct FTimespan               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMediaPlayer::GetRate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetRate"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetDuration
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FTimespan UMediaPlayer::GetDuration()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetDuration"));

	struct
	{
		struct FTimespan               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Close
// (Final, Native, Public, BlueprintCallable)

void UMediaPlayer::Close()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Close"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaPlayer.CanPlay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::CanPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.CanPlay"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.CanPause
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::CanPause()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.CanPause"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaSoundWave.SetMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*            InMediaPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UMediaSoundWave::SetMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundWave.SetMediaPlayer"));

	struct
	{
		class UMediaPlayer*            InMediaPlayer;
	} params;

	params.InMediaPlayer = InMediaPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaTexture.SetMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*            InMediaPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UMediaTexture::SetMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.SetMediaPlayer"));

	struct
	{
		class UMediaPlayer*            InMediaPlayer;
	} params;

	params.InMediaPlayer = InMediaPlayer;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
