// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Projectile_Trail_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Projectile_Trail.BP_Projectile_Trail_C.SetVelocity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Projectile_Trail_C::SetVelocity(const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Projectile_Trail.BP_Projectile_Trail_C.SetVelocity"));

	struct
	{
		struct FVector                 Velocity;
	} params;

	params.Velocity = Velocity;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Projectile_Trail.BP_Projectile_Trail_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Projectile_Trail_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Projectile_Trail.BP_Projectile_Trail_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Projectile_Trail.BP_Projectile_Trail_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Projectile_Trail_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Projectile_Trail.BP_Projectile_Trail_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Projectile_Trail.BP_Projectile_Trail_C.KillTrail
// (BlueprintCallable, BlueprintEvent)

void ABP_Projectile_Trail_C::KillTrail()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Projectile_Trail.BP_Projectile_Trail_C.KillTrail"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Projectile_Trail.BP_Projectile_Trail_C.ExecuteUbergraph_BP_Projectile_Trail
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Projectile_Trail_C::ExecuteUbergraph_BP_Projectile_Trail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Projectile_Trail.BP_Projectile_Trail_C.ExecuteUbergraph_BP_Projectile_Trail"));

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
