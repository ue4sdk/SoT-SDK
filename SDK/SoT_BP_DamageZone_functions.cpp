// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DamageZone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DamageZone.BP_DamageZone_C.GetNumExternalHits
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumExternalHits                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DamageZone_C::GetNumExternalHits(int* NumExternalHits)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.GetNumExternalHits"));

	ABP_DamageZone_C_GetNumExternalHits_Params params;

	UObject::ProcessEvent(fn, &params);

	if (NumExternalHits != nullptr)
		*NumExternalHits = params.NumExternalHits;
}


// Function BP_DamageZone.BP_DamageZone_C.OnRep_Rep_ExternalHitList
// (BlueprintCallable, BlueprintEvent)

void ABP_DamageZone_C::OnRep_Rep_ExternalHitList()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.OnRep_Rep_ExternalHitList"));

	ABP_DamageZone_C_OnRep_Rep_ExternalHitList_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.GetOrCreateDecalMID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// UMaterialInstanceDynamic*      DecalMID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DamageZone_C::GetOrCreateDecalMID(UMaterialInstanceDynamic** DecalMID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.GetOrCreateDecalMID"));

	ABP_DamageZone_C_GetOrCreateDecalMID_Params params;

	UObject::ProcessEvent(fn, &params);

	if (DecalMID != nullptr)
		*DecalMID = params.DecalMID;
}


// Function BP_DamageZone.BP_DamageZone_C.Initialise
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DamageZone_C::Initialise()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.Initialise"));

	ABP_DamageZone_C_Initialise_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.Update External Hits
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DamageZone_C::Update_External_Hits()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.Update External Hits"));

	ABP_DamageZone_C_Update_External_Hits_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.Clear Decal Flags
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DamageZone_C::Clear_Decal_Flags()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.Clear Decal Flags"));

	ABP_DamageZone_C_Clear_Decal_Flags_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.Add Deferred Decal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDecalComponent*               Decal                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DamageZone_C::Add_Deferred_Decal(UDecalComponent* Decal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.Add Deferred Decal"));

	ABP_DamageZone_C_Add_Deferred_Decal_Params params;
	params.Decal = Decal;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.KillDeferredDecal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDecalComponent*               Decal                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_DamageZone_C::KillDeferredDecal(UDecalComponent** Decal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.KillDeferredDecal"));

	ABP_DamageZone_C_KillDeferredDecal_Params params;

	UObject::ProcessEvent(fn, &params);

	if (Decal != nullptr)
		*Decal = params.Decal;
}


// Function BP_DamageZone.BP_DamageZone_C.RemoveDeferredDecals
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DamageZone_C::RemoveDeferredDecals()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.RemoveDeferredDecals"));

	ABP_DamageZone_C_RemoveDeferredDecals_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.Set Repair Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DamageZone_C::Set_Repair_Visibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.Set Repair Visibility"));

	ABP_DamageZone_C_Set_Repair_Visibility_Params params;
	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.Add External Hit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FHullDamageHit                 HitData                        (Parm)

void ABP_DamageZone_C::Add_External_Hit(const FHullDamageHit& HitData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.Add External Hit"));

	ABP_DamageZone_C_Add_External_Hit_Params params;
	params.HitData = HitData;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.CollectTaggedComponents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DamageZone_C::CollectTaggedComponents()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.CollectTaggedComponents"));

	ABP_DamageZone_C_CollectTaggedComponents_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DamageZone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.UserConstructionScript"));

	ABP_DamageZone_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.AddExternalHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FHullDamageHit                 Hit_Data                       (Parm)

void ABP_DamageZone_C::AddExternalHit(const FHullDamageHit& Hit_Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.AddExternalHit"));

	ABP_DamageZone_C_AddExternalHit_Params params;
	params.Hit_Data = Hit_Data;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.ClearDecalFlags
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DamageZone_C::ClearDecalFlags()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.ClearDecalFlags"));

	ABP_DamageZone_C_ClearDecalFlags_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.OnRepairableStateUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ERepairableState>  InRepairableState              (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DamageZone_C::OnRepairableStateUpdate(TEnumAsByte<ERepairableState> InRepairableState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.OnRepairableStateUpdate"));

	ABP_DamageZone_C_OnRepairableStateUpdate_Params params;
	params.InRepairableState = InRepairableState;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.OnInitialise
// (Event, Public, BlueprintEvent)

void ABP_DamageZone_C::OnInitialise()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.OnInitialise"));

	ABP_DamageZone_C_OnInitialise_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.OnDecalMaterialUpdatedToRepaired
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void ABP_DamageZone_C::OnDecalMaterialUpdatedToRepaired()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.OnDecalMaterialUpdatedToRepaired"));

	ABP_DamageZone_C_OnDecalMaterialUpdatedToRepaired_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.ExecuteUbergraph_BP_DamageZone
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DamageZone_C::ExecuteUbergraph_BP_DamageZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.ExecuteUbergraph_BP_DamageZone"));

	ABP_DamageZone_C_ExecuteUbergraph_BP_DamageZone_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
