// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasuryWaveMusic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_PlayFinalWaveMusic
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TreasuryWaveMusic_C::Client_PlayFinalWaveMusic()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_PlayFinalWaveMusic"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_StopFinalWaveMusic
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TreasuryWaveMusic_C::Client_StopFinalWaveMusic()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_StopFinalWaveMusic"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_SetSirensOrOceanCrawlers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsSirents                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TreasuryWaveMusic_C::Client_SetSirensOrOceanCrawlers(bool InIsSirents)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_SetSirensOrOceanCrawlers"));

	struct
	{
		bool                           InIsSirents;
	} params;

	params.InIsSirents = InIsSirents;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.OnRep_WaveType
// (BlueprintCallable, BlueprintEvent)

void ABP_TreasuryWaveMusic_C::OnRep_WaveType()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.OnRep_WaveType"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_SetSirensOrOceanCrawlers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSirens                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TreasuryWaveMusic_C::Server_SetSirensOrOceanCrawlers(bool IsSirens)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_SetSirensOrOceanCrawlers"));

	struct
	{
		bool                           IsSirens;
	} params;

	params.IsSirens = IsSirens;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_PlayOneShotSfx_TreasuryFillEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsWaterFilling               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TreasuryWaveMusic_C::Server_PlayOneShotSfx_TreasuryFillEmpty(bool InIsWaterFilling)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_PlayOneShotSfx_TreasuryFillEmpty"));

	struct
	{
		bool                           InIsWaterFilling;
	} params;

	params.InIsWaterFilling = InIsWaterFilling;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_PlayOneShot_TreasuryFillEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsWaterFilling               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TreasuryWaveMusic_C::Server_PlayOneShot_TreasuryFillEmpty(bool InIsWaterFilling)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_PlayOneShot_TreasuryFillEmpty"));

	struct
	{
		bool                           InIsWaterFilling;
	} params;

	params.InIsWaterFilling = InIsWaterFilling;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.OnRep_TreasuryComplete
// (BlueprintCallable, BlueprintEvent)

void ABP_TreasuryWaveMusic_C::OnRep_TreasuryComplete()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.OnRep_TreasuryComplete"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_PlayOneshot_TreasuryComplete
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TreasuryWaveMusic_C::Server_PlayOneshot_TreasuryComplete()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_PlayOneshot_TreasuryComplete"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_PlayOneshot_NewWave
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TreasuryWaveMusic_C::Server_PlayOneshot_NewWave()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_PlayOneshot_NewWave"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_SetIsMusicZoneActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsMusicZoneActive            (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TreasuryWaveMusic_C::Client_SetIsMusicZoneActive(bool InIsMusicZoneActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_SetIsMusicZoneActive"));

	struct
	{
		bool                           InIsMusicZoneActive;
	} params;

	params.InIsMusicZoneActive = InIsMusicZoneActive;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_SetMusicZoneIsActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsMusicZoneActive            (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TreasuryWaveMusic_C::Server_SetMusicZoneIsActive(bool InIsMusicZoneActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_SetMusicZoneIsActive"));

	struct
	{
		bool                           InIsMusicZoneActive;
	} params;

	params.InIsMusicZoneActive = InIsMusicZoneActive;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.OnRep_MusicZoneIsActive
// (BlueprintCallable, BlueprintEvent)

void ABP_TreasuryWaveMusic_C::OnRep_MusicZoneIsActive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.OnRep_MusicZoneIsActive"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_UpdateWaveActiveness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsWaveActive                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TreasuryWaveMusic_C::Server_UpdateWaveActiveness(bool InIsWaveActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_UpdateWaveActiveness"));

	struct
	{
		bool                           InIsWaveActive;
	} params;

	params.InIsWaveActive = InIsWaveActive;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.OnRep_WaveIsActive
// (BlueprintCallable, BlueprintEvent)

void ABP_TreasuryWaveMusic_C::OnRep_WaveIsActive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.OnRep_WaveIsActive"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_SwitchWaveActiveness
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsWaveActive                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TreasuryWaveMusic_C::Client_SwitchWaveActiveness(bool IsWaveActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_SwitchWaveActiveness"));

	struct
	{
		bool                           IsWaveActive;
	} params;

	params.IsWaveActive = IsWaveActive;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TreasuryWaveMusic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_TreasuryWaveMusic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Multicast_PlayFinalMusic
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_TreasuryWaveMusic_C::Multicast_PlayFinalMusic()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Multicast_PlayFinalMusic"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Multicast_StopFinalMusic
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_TreasuryWaveMusic_C::Multicast_StopFinalMusic()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Multicast_StopFinalMusic"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.RefreshState
// (BlueprintCallable, BlueprintEvent)

void ABP_TreasuryWaveMusic_C::RefreshState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.RefreshState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Multicast_RefreshMusic
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_TreasuryWaveMusic_C::Multicast_RefreshMusic()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Multicast_RefreshMusic"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.ExecuteUbergraph_BP_TreasuryWaveMusic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TreasuryWaveMusic_C::ExecuteUbergraph_BP_TreasuryWaveMusic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.ExecuteUbergraph_BP_TreasuryWaveMusic"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
