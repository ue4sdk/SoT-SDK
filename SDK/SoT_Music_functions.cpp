// Sea of Thieves (1.4) SDK

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
// (Native, Event, Public, BlueprintEvent, Const)
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
