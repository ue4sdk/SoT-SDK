#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Reviving_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Reviving.DeathSelfInteractionComponent.SetGiveUpAvaliable
struct UDeathSelfInteractionComponent_SetGiveUpAvaliable_Params
{
};

// Function Reviving.DeathSelfInteractionComponent.OnRep_HasGivenUp
struct UDeathSelfInteractionComponent_OnRep_HasGivenUp_Params
{
};

// Function Reviving.ReviveComponent.OnRep_ReviveState
struct UReviveComponent_OnRep_ReviveState_Params
{
	TEnumAsByte<EReviveState>                          PreviousReviveState;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Reviving.ReviveComponent.HandleOwningCharacterEndPlay
struct UReviveComponent_HandleOwningCharacterEndPlay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
