#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_EyeOfReach_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_EyeOfReach.BP_EyeOfReach_C.determine sfx relationship
struct ABP_EyeOfReach_C_determine_sfx_relationship_Params
{
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EyeOfReach.BP_EyeOfReach_C.DoFireEffect
struct ABP_EyeOfReach_C_DoFireEffect_Params
{
};

// Function BP_EyeOfReach.BP_EyeOfReach_C.UserConstructionScript
struct ABP_EyeOfReach_C_UserConstructionScript_Params
{
};

// Function BP_EyeOfReach.BP_EyeOfReach_C.OnWeaponFired
struct ABP_EyeOfReach_C_OnWeaponFired_Params
{
};

// Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOn
struct ABP_EyeOfReach_C_ScopeOn_Params
{
};

// Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOff
struct ABP_EyeOfReach_C_ScopeOff_Params
{
};

// Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeTick
struct ABP_EyeOfReach_C_ScopeTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOffImmediate
struct ABP_EyeOfReach_C_ScopeOffImmediate_Params
{
};

// Function BP_EyeOfReach.BP_EyeOfReach_C.GlintOn
struct ABP_EyeOfReach_C_GlintOn_Params
{
};

// Function BP_EyeOfReach.BP_EyeOfReach_C.GlintOff
struct ABP_EyeOfReach_C_GlintOff_Params
{
};

// Function BP_EyeOfReach.BP_EyeOfReach_C.ExecuteUbergraph_BP_EyeOfReach
struct ABP_EyeOfReach_C_ExecuteUbergraph_BP_EyeOfReach_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
