#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Blunderbuss_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Blunderbuss.BP_Blunderbuss_C.SetScopeEffectOn
struct ABP_Blunderbuss_C_SetScopeEffectOn_Params
{
	bool                                               IsOn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Blunderbuss.BP_Blunderbuss_C.determine sfx relationship
struct ABP_Blunderbuss_C_determine_sfx_relationship_Params
{
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Blunderbuss.BP_Blunderbuss_C.DoFireEffect
struct ABP_Blunderbuss_C_DoFireEffect_Params
{
};

// Function BP_Blunderbuss.BP_Blunderbuss_C.UserConstructionScript
struct ABP_Blunderbuss_C_UserConstructionScript_Params
{
};

// Function BP_Blunderbuss.BP_Blunderbuss_C.OnWeaponFired
struct ABP_Blunderbuss_C_OnWeaponFired_Params
{
};

// Function BP_Blunderbuss.BP_Blunderbuss_C.RadialBlurOn
struct ABP_Blunderbuss_C_RadialBlurOn_Params
{
};

// Function BP_Blunderbuss.BP_Blunderbuss_C.RadialBlurOff
struct ABP_Blunderbuss_C_RadialBlurOff_Params
{
};

// Function BP_Blunderbuss.BP_Blunderbuss_C.ExecuteUbergraph_BP_Blunderbuss
struct ABP_Blunderbuss_C_ExecuteUbergraph_BP_Blunderbuss_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
