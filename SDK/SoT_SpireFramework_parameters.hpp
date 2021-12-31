#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SpireFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SpireFramework.HeightTriggerableEffectsComponent.SetMovementDirection
struct UHeightTriggerableEffectsComponent_SetMovementDirection_Params
{
	TEnumAsByte<EDirectionOfMovement>                  InMovement;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpireFramework.SpireService.OnRep_SpireLevels
struct ASpireService_OnRep_SpireLevels_Params
{
	TArray<FSpireInfo>                                 InPreviousSpireLevels;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SpireFramework.TaleSpireService.RegisterResetMechanismInterface
struct UTaleSpireService_RegisterResetMechanismInterface_Params
{
	AActor*                                            InMechanismResetInterface;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpireFramework.TaleSpireService.IsSpireVisible
struct UTaleSpireService_IsSpireVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
