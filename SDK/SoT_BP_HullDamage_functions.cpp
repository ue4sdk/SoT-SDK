// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_HullDamage_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.Apply Hit"));

	struct
	{
		struct FVector                 HitPosition;
		struct FVector                 HitNormal;
		float                          HitStrength;
		bool                           Has_Decal;
		class UDecalComponent*         Decal;
	} params;

	params.HitPosition = HitPosition;
	params.HitNormal = HitNormal;
	params.HitStrength = HitStrength;
	params.Has_Decal = Has_Decal;

	UObject::ProcessEvent(fn, &params);

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.PlayHitSFX"));

	struct
	{
		struct FVector                 HitLocation;
		float                          HitStrenght;
	} params;

	params.HitLocation = HitLocation;
	params.HitStrenght = HitStrenght;

	UObject::ProcessEvent(fn, &params);
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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.Apply Visual Hit"));

	struct
	{
		struct FVector                 HitPosition;
		struct FVector                 HitNormal;
		float                          HitStrength;
		bool                           HasDecal;
		class UDecalComponent*         Decal;
	} params;

	params.HitPosition = HitPosition;
	params.HitNormal = HitNormal;
	params.HitStrength = HitStrength;
	params.HasDecal = HasDecal;

	UObject::ProcessEvent(fn, &params);

	if (Decal != nullptr)
		*Decal = params.Decal;
}


// Function BP_HullDamage.BP_HullDamage_C.Process Hit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FImpactDamageEvent      ImpactDamageEvent              (Parm, OutParm, ReferenceParm)

void ABP_HullDamage_C::Process_Hit(struct FImpactDamageEvent* ImpactDamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.Process Hit"));

	struct
	{
		struct FImpactDamageEvent      ImpactDamageEvent;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ImpactDamageEvent != nullptr)
		*ImpactDamageEvent = params.ImpactDamageEvent;
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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.Scale Hit Strength and Get Decal Flag"));

	struct
	{
		struct FVector                 Hit_Normal;
		struct FVector                 Hit_Velocity;
		float                          Hit_Strength;
		float                          Strength;
		bool                           HasDecal;
	} params;

	params.Hit_Normal = Hit_Normal;
	params.Hit_Velocity = Hit_Velocity;
	params.Hit_Strength = Hit_Strength;

	UObject::ProcessEvent(fn, &params);

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.Get Random Deferred Decal"));

	struct
	{
		class UMaterialInterface*      Decal_Material;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Decal_Material != nullptr)
		*Decal_Material = params.Decal_Material;
}


// Function BP_HullDamage.BP_HullDamage_C.Get Random Persistent Decal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Decal_Texture                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HullDamage_C::Get_Random_Persistent_Decal(class UTexture2D** Decal_Texture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.Get Random Persistent Decal"));

	struct
	{
		class UTexture2D*              Decal_Texture;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Decal_Texture != nullptr)
		*Decal_Texture = params.Decal_Texture;
}


// Function BP_HullDamage.BP_HullDamage_C.Initialize Damage Materials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UStaticMeshComponent*> StaticMeshes                   (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_HullDamage_C::Initialize_Damage_Materials(TArray<class UStaticMeshComponent*>* StaticMeshes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.Initialize Damage Materials"));

	struct
	{
		TArray<class UStaticMeshComponent*> StaticMeshes;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (StaticMeshes != nullptr)
		*StaticMeshes = params.StaticMeshes;
}


// Function BP_HullDamage.BP_HullDamage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HullDamage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HullDamage.BP_HullDamage_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_HullDamage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HullDamage.BP_HullDamage_C.BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FImpactDamageEvent      ImpactDamageEvent              (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_HullDamage_C::BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature(const struct FImpactDamageEvent& ImpactDamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature"));

	struct
	{
		struct FImpactDamageEvent      ImpactDamageEvent;
	} params;

	params.ImpactDamageEvent = ImpactDamageEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_HullDamage.BP_HullDamage_C.ExecuteUbergraph_BP_HullDamage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_HullDamage_C::ExecuteUbergraph_BP_HullDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullDamage.BP_HullDamage_C.ExecuteUbergraph_BP_HullDamage"));

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
