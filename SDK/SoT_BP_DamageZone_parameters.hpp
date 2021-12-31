#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DamageZone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DamageZone.BP_DamageZone_C.GetNumExternalHits
struct ABP_DamageZone_C_GetNumExternalHits_Params
{
	int                                                NumExternalHits;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DamageZone.BP_DamageZone_C.OnRep_Rep_ExternalHitList
struct ABP_DamageZone_C_OnRep_Rep_ExternalHitList_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.GetOrCreateDecalMID
struct ABP_DamageZone_C_GetOrCreateDecalMID_Params
{
	UMaterialInstanceDynamic*                          DecalMID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DamageZone.BP_DamageZone_C.Initialise
struct ABP_DamageZone_C_Initialise_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.Update External Hits
struct ABP_DamageZone_C_Update_External_Hits_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.Clear Decal Flags
struct ABP_DamageZone_C_Clear_Decal_Flags_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.Add Deferred Decal
struct ABP_DamageZone_C_Add_Deferred_Decal_Params
{
	UDecalComponent*                                   Decal;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DamageZone.BP_DamageZone_C.KillDeferredDecal
struct ABP_DamageZone_C_KillDeferredDecal_Params
{
	UDecalComponent*                                   Decal;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_DamageZone.BP_DamageZone_C.RemoveDeferredDecals
struct ABP_DamageZone_C_RemoveDeferredDecals_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.Set Repair Visibility
struct ABP_DamageZone_C_Set_Repair_Visibility_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DamageZone.BP_DamageZone_C.Add External Hit
struct ABP_DamageZone_C_Add_External_Hit_Params
{
	FHullDamageHit                                     HitData;                                                  // (Parm)
};

// Function BP_DamageZone.BP_DamageZone_C.CollectTaggedComponents
struct ABP_DamageZone_C_CollectTaggedComponents_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.UserConstructionScript
struct ABP_DamageZone_C_UserConstructionScript_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.AddExternalHit
struct ABP_DamageZone_C_AddExternalHit_Params
{
	FHullDamageHit                                     Hit_Data;                                                 // (Parm)
};

// Function BP_DamageZone.BP_DamageZone_C.ClearDecalFlags
struct ABP_DamageZone_C_ClearDecalFlags_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.OnRepairableStateUpdate
struct ABP_DamageZone_C_OnRepairableStateUpdate_Params
{
	TEnumAsByte<ERepairableState>                      InRepairableState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DamageZone.BP_DamageZone_C.OnInitialise
struct ABP_DamageZone_C_OnInitialise_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.OnDecalMaterialUpdatedToRepaired
struct ABP_DamageZone_C_OnDecalMaterialUpdatedToRepaired_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.ExecuteUbergraph_BP_DamageZone
struct ABP_DamageZone_C_ExecuteUbergraph_BP_DamageZone_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
