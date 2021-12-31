#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DamageZoneInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DamageZoneInterface.BP_DamageZoneInterface_C.GetNumExternalHits
struct UBP_DamageZoneInterface_C_GetNumExternalHits_Params
{
	int                                                NumExternalHits;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DamageZoneInterface.BP_DamageZoneInterface_C.ClearDecalFlags
struct UBP_DamageZoneInterface_C_ClearDecalFlags_Params
{
};

// Function BP_DamageZoneInterface.BP_DamageZoneInterface_C.AddExternalHit
struct UBP_DamageZoneInterface_C_AddExternalHit_Params
{
	FHullDamageHit                                     Hit_Data;                                                 // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
