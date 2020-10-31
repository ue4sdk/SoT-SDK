// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Music_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Music.MusicZoneInterface.CanPlayForPlayer
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMusicZoneInterface::CanPlayForPlayer(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Music.MusicZoneInterface.CanPlayForPlayer"));

	struct
	{
		class AActor*                  Player;
		bool                           ReturnValue;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Music.MusicZoneComponent.GetEmitter
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWwiseEmitter UMusicZoneComponent::GetEmitter()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Music.MusicZoneComponent.GetEmitter"));

	struct
	{
		struct FWwiseEmitter           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Music.MusicZoneComponent.DisableZone
// (Final, Native, Public, BlueprintCallable)

void UMusicZoneComponent::DisableZone()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Music.MusicZoneComponent.DisableZone"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Music.MusicZoneComponent.Client_StopMusicAndDisableZone
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void UMusicZoneComponent::Client_StopMusicAndDisableZone()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Music.MusicZoneComponent.Client_StopMusicAndDisableZone"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Music.MusicZoneComponent.Client_PlayOneShot
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMusicZoneComponent::Client_PlayOneShot(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Music.MusicZoneComponent.Client_PlayOneShot"));

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function Music.MusicZoneComponent.ActivateZone
// (Final, Native, Public, BlueprintCallable)

void UMusicZoneComponent::ActivateZone()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Music.MusicZoneComponent.ActivateZone"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Music.AISpawnerMusicZoneComponent.OnRep_SpawnerState
// (Final, Native, Private)

void UAISpawnerMusicZoneComponent::OnRep_SpawnerState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Music.AISpawnerMusicZoneComponent.OnRep_SpawnerState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
