#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FlintlockPistol_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.SetScopeEffectOn
struct ABP_FlintlockPistol_C_SetScopeEffectOn_Params
{
	bool                                               IsOn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.determine sfx relationship
struct ABP_FlintlockPistol_C_determine_sfx_relationship_Params
{
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.DoFireEffect
struct ABP_FlintlockPistol_C_DoFireEffect_Params
{
};

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.UserConstructionScript
struct ABP_FlintlockPistol_C_UserConstructionScript_Params
{
};

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.OnWeaponFired
struct ABP_FlintlockPistol_C_OnWeaponFired_Params
{
};

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.RadialBlurOn
struct ABP_FlintlockPistol_C_RadialBlurOn_Params
{
};

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.RadialBlurOff
struct ABP_FlintlockPistol_C_RadialBlurOff_Params
{
};

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.ExecuteUbergraph_BP_FlintlockPistol
struct ABP_FlintlockPistol_C_ExecuteUbergraph_BP_FlintlockPistol_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
