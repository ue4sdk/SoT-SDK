// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DamageZone_classes.hpp"

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

	struct
	{
		int                            NumExternalHits;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NumExternalHits != nullptr)
		*NumExternalHits = params.NumExternalHits;
}


// Function BP_DamageZone.BP_DamageZone_C.OnRep_Rep_ExternalHitList
// (BlueprintCallable, BlueprintEvent)

void ABP_DamageZone_C::OnRep_Rep_ExternalHitList()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.OnRep_Rep_ExternalHitList"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.GetOrCreateDecalMID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* DecalMID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DamageZone_C::GetOrCreateDecalMID(class UMaterialInstanceDynamic** DecalMID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.GetOrCreateDecalMID"));

	struct
	{
		class UMaterialInstanceDynamic* DecalMID;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (DecalMID != nullptr)
		*DecalMID = params.DecalMID;
}


// Function BP_DamageZone.BP_DamageZone_C.Initialise
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DamageZone_C::Initialise()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.Initialise"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.Update External Hits
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DamageZone_C::Update_External_Hits()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.Update External Hits"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.Clear Decal Flags
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DamageZone_C::Clear_Decal_Flags()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.Clear Decal Flags"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.Add Deferred Decal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDecalComponent*         Decal                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DamageZone_C::Add_Deferred_Decal(class UDecalComponent* Decal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.Add Deferred Decal"));

	struct
	{
		class UDecalComponent*         Decal;
	} params;

	params.Decal = Decal;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.KillDeferredDecal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDecalComponent*         Decal                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_DamageZone_C::KillDeferredDecal(class UDecalComponent** Decal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.KillDeferredDecal"));

	struct
	{
		class UDecalComponent*         Decal;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Decal != nullptr)
		*Decal = params.Decal;
}


// Function BP_DamageZone.BP_DamageZone_C.RemoveDeferredDecals
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DamageZone_C::RemoveDeferredDecals()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.RemoveDeferredDecals"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.Set Repair Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DamageZone_C::Set_Repair_Visibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.Set Repair Visibility"));

	struct
	{
		bool                           Visible;
	} params;

	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.Add External Hit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHullDamageHit          HitData                        (Parm)

void ABP_DamageZone_C::Add_External_Hit(const struct FHullDamageHit& HitData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.Add External Hit"));

	struct
	{
		struct FHullDamageHit          HitData;
	} params;

	params.HitData = HitData;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.CollectTaggedComponents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DamageZone_C::CollectTaggedComponents()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.CollectTaggedComponents"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DamageZone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.AddExternalHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHullDamageHit          Hit_Data                       (Parm)

void ABP_DamageZone_C::AddExternalHit(const struct FHullDamageHit& Hit_Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.AddExternalHit"));

	struct
	{
		struct FHullDamageHit          Hit_Data;
	} params;

	params.Hit_Data = Hit_Data;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.ClearDecalFlags
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DamageZone_C::ClearDecalFlags()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.ClearDecalFlags"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.OnRepairableStateUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ERepairableState>  InRepairableState              (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DamageZone_C::OnRepairableStateUpdate(TEnumAsByte<ERepairableState> InRepairableState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.OnRepairableStateUpdate"));

	struct
	{
		TEnumAsByte<ERepairableState>  InRepairableState;
	} params;

	params.InRepairableState = InRepairableState;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.OnInitialise
// (Event, Public, BlueprintEvent)

void ABP_DamageZone_C::OnInitialise()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.OnInitialise"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.OnDecalMaterialUpdatedToRepaired
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void ABP_DamageZone_C::OnDecalMaterialUpdatedToRepaired()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.OnDecalMaterialUpdatedToRepaired"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZone.BP_DamageZone_C.ExecuteUbergraph_BP_DamageZone
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DamageZone_C::ExecuteUbergraph_BP_DamageZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DamageZone.BP_DamageZone_C.ExecuteUbergraph_BP_DamageZone"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
