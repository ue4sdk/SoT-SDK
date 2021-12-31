#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Music_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Music.MusicZoneInterface.CanPlayForPlayer
struct UMusicZoneInterface_CanPlayForPlayer_Params
{
	AActor*                                            Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Music.MusicZoneComponent.GetEmitter
struct UMusicZoneComponent_GetEmitter_Params
{
	FWwiseEmitter                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Music.MusicZoneComponent.DisableZone
struct UMusicZoneComponent_DisableZone_Params
{
};

// Function Music.MusicZoneComponent.Client_StopMusicAndDisableZone
struct UMusicZoneComponent_Client_StopMusicAndDisableZone_Params
{
};

// Function Music.MusicZoneComponent.Client_PlayOneShot
struct UMusicZoneComponent_Client_PlayOneShot_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Music.MusicZoneComponent.ActivateZone
struct UMusicZoneComponent_ActivateZone_Params
{
};

// Function Music.AISpawnerMusicZoneComponent.OnRep_SpawnerState
struct UAISpawnerMusicZoneComponent_OnRep_SpawnerState_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
