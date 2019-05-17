// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TheArtOfTheTrickster_CaveMusicZoneComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TheArtOfTheTrickster_CaveMusicZoneComponent.BP_TheArtOfTheTrickster_CaveMusicZoneComponent_C.CanPlayForPlayer
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_TheArtOfTheTrickster_CaveMusicZoneComponent_C::CanPlayForPlayer(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TheArtOfTheTrickster_CaveMusicZoneComponent.BP_TheArtOfTheTrickster_CaveMusicZoneComponent_C.CanPlayForPlayer"));

	struct
	{
		class AActor*                  Player;
		bool                           ReturnValue;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
