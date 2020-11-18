// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MaidenVoyage_AnimatedPlayerShip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MaidenVoyage_AnimatedPlayerShip.BP_MaidenVoyage_AnimatedPlayerShip_C.AngleBetweenVectors2D
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 v1                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 v2                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MaidenVoyage_AnimatedPlayerShip_C::AngleBetweenVectors2D(const struct FVector& v1, const struct FVector& v2, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_AnimatedPlayerShip.BP_MaidenVoyage_AnimatedPlayerShip_C.AngleBetweenVectors2D"));

	struct
	{
		struct FVector                 v1;
		struct FVector                 v2;
		float                          Angle;
	} params;

	params.v1 = v1;
	params.v2 = v2;

	UObject::ProcessEvent(fn, &params);

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function BP_MaidenVoyage_AnimatedPlayerShip.BP_MaidenVoyage_AnimatedPlayerShip_C.FireNearMissOnTarget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MaidenVoyage_AnimatedPlayerShip_C::FireNearMissOnTarget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_AnimatedPlayerShip.BP_MaidenVoyage_AnimatedPlayerShip_C.FireNearMissOnTarget"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MaidenVoyage_AnimatedPlayerShip.BP_MaidenVoyage_AnimatedPlayerShip_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MaidenVoyage_AnimatedPlayerShip_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_AnimatedPlayerShip.BP_MaidenVoyage_AnimatedPlayerShip_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MaidenVoyage_AnimatedPlayerShip.BP_MaidenVoyage_AnimatedPlayerShip_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MaidenVoyage_AnimatedPlayerShip_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_AnimatedPlayerShip.BP_MaidenVoyage_AnimatedPlayerShip_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MaidenVoyage_AnimatedPlayerShip.BP_MaidenVoyage_AnimatedPlayerShip_C.FireProjectile
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 SpawnLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LaunchVelocity                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MaidenVoyage_AnimatedPlayerShip_C::FireProjectile(const struct FVector& SpawnLocation, const struct FVector& LaunchVelocity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_AnimatedPlayerShip.BP_MaidenVoyage_AnimatedPlayerShip_C.FireProjectile"));

	struct
	{
		struct FVector                 SpawnLocation;
		struct FVector                 LaunchVelocity;
	} params;

	params.SpawnLocation = SpawnLocation;
	params.LaunchVelocity = LaunchVelocity;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MaidenVoyage_AnimatedPlayerShip.BP_MaidenVoyage_AnimatedPlayerShip_C.ExecuteUbergraph_BP_MaidenVoyage_AnimatedPlayerShip
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MaidenVoyage_AnimatedPlayerShip_C::ExecuteUbergraph_BP_MaidenVoyage_AnimatedPlayerShip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_AnimatedPlayerShip.BP_MaidenVoyage_AnimatedPlayerShip_C.ExecuteUbergraph_BP_MaidenVoyage_AnimatedPlayerShip"));

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
