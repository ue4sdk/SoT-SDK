// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AggressiveGhostShip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.Show All Meshes
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AggressiveGhostShip_C::Show_All_Meshes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.Show All Meshes"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.EnablePortalClipPlane
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              PortalTransform                (Parm, IsPlainOldData)

void ABP_AggressiveGhostShip_C::EnablePortalClipPlane(const struct FTransform& PortalTransform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.EnablePortalClipPlane"));

	struct
	{
		struct FTransform              PortalTransform;
	} params;

	params.PortalTransform = PortalTransform;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.DisablePortalClipPlane
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AggressiveGhostShip_C::DisablePortalClipPlane()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.DisablePortalClipPlane"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.ApplyPersistentDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AggressiveGhostShip_C::ApplyPersistentDamage(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.ApplyPersistentDamage"));

	struct
	{
		struct FVector                 Location;
	} params;

	params.Location = Location;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.ApplyPersistentDamageDataToMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AggressiveGhostShip_C::ApplyPersistentDamageDataToMaterials()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.ApplyPersistentDamageDataToMaterials"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.ApplyImpactDataToMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AggressiveGhostShip_C::ApplyImpactDataToMaterials()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.ApplyImpactDataToMaterials"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.AddImpact
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ImpactTime                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AggressiveGhostShip_C::AddImpact(const struct FVector& Position, float ImpactTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.AddImpact"));

	struct
	{
		struct FVector                 Position;
		float                          ImpactTime;
	} params;

	params.Position = Position;
	params.ImpactTime = ImpactTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.Set Ship Dead
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AggressiveGhostShip_C::Set_Ship_Dead()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.Set Ship Dead"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.Hide All Meshes
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AggressiveGhostShip_C::Hide_All_Meshes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.Hide All Meshes"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.Set Ship Hidden
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AggressiveGhostShip_C::Set_Ship_Hidden()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.Set Ship Hidden"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.Render Meshes
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AggressiveGhostShip_C::Render_Meshes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.Render Meshes"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.Set Ship Visible
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AggressiveGhostShip_C::Set_Ship_Visible()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.Set Ship Visible"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AggressiveGhostShip_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AggressiveGhostShip_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.SetShipDeadBP
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_AggressiveGhostShip_C::SetShipDeadBP()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.SetShipDeadBP"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.OnImpactBP
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 SurfaceNormal                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_AggressiveGhostShip_C::OnImpactBP(const struct FVector& HitLocation, const struct FVector& SurfaceNormal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.OnImpactBP"));

	struct
	{
		struct FVector                 HitLocation;
		struct FVector                 SurfaceNormal;
	} params;

	params.HitLocation = HitLocation;
	params.SurfaceNormal = SurfaceNormal;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.ResetVisualEffects
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_AggressiveGhostShip_C::ResetVisualEffects()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.ResetVisualEffects"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.SetShipHiddenBP
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHidden                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AggressiveGhostShip_C::SetShipHiddenBP(bool IsHidden)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.SetShipHiddenBP"));

	struct
	{
		bool                           IsHidden;
	} params;

	params.IsHidden = IsHidden;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.IsDamagingOverlappingShipBP
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOverlapping                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AggressiveGhostShip_C::IsDamagingOverlappingShipBP(bool IsOverlapping)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.IsDamagingOverlappingShipBP"));

	struct
	{
		bool                           IsOverlapping;
	} params;

	params.IsOverlapping = IsOverlapping;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.HideAllMeshesBP
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_AggressiveGhostShip_C::HideAllMeshesBP()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.HideAllMeshesBP"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.SetPersistentDamageScaleBP
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PersistentDamageScale          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AggressiveGhostShip_C::SetPersistentDamageScaleBP(float PersistentDamageScale)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.SetPersistentDamageScaleBP"));

	struct
	{
		float                          PersistentDamageScale;
	} params;

	params.PersistentDamageScale = PersistentDamageScale;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.EnablePortalClipPlaneBP
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              PortalTransform                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_AggressiveGhostShip_C::EnablePortalClipPlaneBP(const struct FTransform& PortalTransform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.EnablePortalClipPlaneBP"));

	struct
	{
		struct FTransform              PortalTransform;
	} params;

	params.PortalTransform = PortalTransform;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.DisablePortalClipPlaneBP
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_AggressiveGhostShip_C::DisablePortalClipPlaneBP()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.DisablePortalClipPlaneBP"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.ExecuteUbergraph_BP_AggressiveGhostShip
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AggressiveGhostShip_C::ExecuteUbergraph_BP_AggressiveGhostShip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip.BP_AggressiveGhostShip_C.ExecuteUbergraph_BP_AggressiveGhostShip"));

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
