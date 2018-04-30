// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_HullDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HullDamage.BP_HullDamage_C.Apply Hit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitPosition                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          HitStrength                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Has_Decal                      (Parm, ZeroConstructor, IsPlainOldData)
// class UDecalComponent*         Decal                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HullDamage_C::Apply_Hit(const struct FVector& HitPosition, const struct FVector& HitNormal, float HitStrength, bool Has_Decal, class UDecalComponent** Decal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.Apply Hit");

	ABP_HullDamage_C_Apply_Hit_Params params;
	params.HitPosition = HitPosition;
	params.HitNormal = HitNormal;
	params.HitStrength = HitStrength;
	params.Has_Decal = Has_Decal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Decal != nullptr)
		*Decal = params.Decal;
}


// Function BP_HullDamage.BP_HullDamage_C.PlayHitSFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          HitStrenght                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_HullDamage_C::PlayHitSFX(const struct FVector& HitLocation, float HitStrenght)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.PlayHitSFX");

	ABP_HullDamage_C_PlayHitSFX_Params params;
	params.HitLocation = HitLocation;
	params.HitStrenght = HitStrenght;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.Apply Visual Hit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitPosition                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          HitStrength                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasDecal                       (Parm, ZeroConstructor, IsPlainOldData)
// class UDecalComponent*         Decal                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HullDamage_C::Apply_Visual_Hit(const struct FVector& HitPosition, const struct FVector& HitNormal, float HitStrength, bool HasDecal, class UDecalComponent** Decal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.Apply Visual Hit");

	ABP_HullDamage_C_Apply_Visual_Hit_Params params;
	params.HitPosition = HitPosition;
	params.HitNormal = HitNormal;
	params.HitStrength = HitStrength;
	params.HasDecal = HasDecal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Decal != nullptr)
		*Decal = params.Decal;
}


// Function BP_HullDamage.BP_HullDamage_C.Process Hit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  DamagerType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitPosition                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitVelocity                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumDamageZones                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_HullDamage_C::Process_Hit(class UClass* DamagerType, const struct FVector& HitPosition, const struct FVector& HitNormal, const struct FVector& HitVelocity, int NumDamageZones)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.Process Hit");

	ABP_HullDamage_C_Process_Hit_Params params;
	params.DamagerType = DamagerType;
	params.HitPosition = HitPosition;
	params.HitNormal = HitNormal;
	params.HitVelocity = HitVelocity;
	params.NumDamageZones = NumDamageZones;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.Scale Hit Strength and Get Decal Flag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Hit_Normal                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Hit_Velocity                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Hit_Strength                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Strength                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HasDecal                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HullDamage_C::Scale_Hit_Strength_and_Get_Decal_Flag(const struct FVector& Hit_Normal, const struct FVector& Hit_Velocity, float Hit_Strength, float* Strength, bool* HasDecal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.Scale Hit Strength and Get Decal Flag");

	ABP_HullDamage_C_Scale_Hit_Strength_and_Get_Decal_Flag_Params params;
	params.Hit_Normal = Hit_Normal;
	params.Hit_Velocity = Hit_Velocity;
	params.Hit_Strength = Hit_Strength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Strength != nullptr)
		*Strength = params.Strength;
	if (HasDecal != nullptr)
		*HasDecal = params.HasDecal;
}


// Function BP_HullDamage.BP_HullDamage_C.Get Random Deferred Decal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Decal_Material                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HullDamage_C::Get_Random_Deferred_Decal(class UMaterialInterface** Decal_Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.Get Random Deferred Decal");

	ABP_HullDamage_C_Get_Random_Deferred_Decal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Decal_Material != nullptr)
		*Decal_Material = params.Decal_Material;
}


// Function BP_HullDamage.BP_HullDamage_C.Get Random Persistent Decal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Decal_Texture                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HullDamage_C::Get_Random_Persistent_Decal(class UTexture2D** Decal_Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.Get Random Persistent Decal");

	ABP_HullDamage_C_Get_Random_Persistent_Decal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Decal_Texture != nullptr)
		*Decal_Texture = params.Decal_Texture;
}


// Function BP_HullDamage.BP_HullDamage_C.Add Hit To HitList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitPosition                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Hit_Normal                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          HitStrength                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasDecal                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageZone                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            HitLevel                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_HullDamage_C::Add_Hit_To_HitList(const struct FVector& HitPosition, const struct FVector& Hit_Normal, float HitStrength, bool HasDecal, class AActor* DamageZone, int HitLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.Add Hit To HitList");

	ABP_HullDamage_C_Add_Hit_To_HitList_Params params;
	params.HitPosition = HitPosition;
	params.Hit_Normal = Hit_Normal;
	params.HitStrength = HitStrength;
	params.HasDecal = HasDecal;
	params.DamageZone = DamageZone;
	params.HitLevel = HitLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.Initialize Damage Materials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UStaticMeshComponent*> StaticMeshes                   (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_HullDamage_C::Initialize_Damage_Materials(TArray<class UStaticMeshComponent*>* StaticMeshes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.Initialize Damage Materials");

	ABP_HullDamage_C_Initialize_Damage_Materials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StaticMeshes != nullptr)
		*StaticMeshes = params.StaticMeshes;
}


// Function BP_HullDamage.BP_HullDamage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HullDamage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.UserConstructionScript");

	ABP_HullDamage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_HullDamage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.ReceiveBeginPlay");

	ABP_HullDamage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FImpactDamageEvent      ImpactDamageEvent              (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_HullDamage_C::BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature(const struct FImpactDamageEvent& ImpactDamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature");

	ABP_HullDamage_C_BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature_Params params;
	params.ImpactDamageEvent = ImpactDamageEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.ExecuteUbergraph_BP_HullDamage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_HullDamage_C::ExecuteUbergraph_BP_HullDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.ExecuteUbergraph_BP_HullDamage");

	ABP_HullDamage_C_ExecuteUbergraph_BP_HullDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
