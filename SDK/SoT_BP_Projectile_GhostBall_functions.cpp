// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Projectile_GhostBall_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Projectile_GhostBall.BP_Projectile_GhostBall_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Projectile_GhostBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Projectile_GhostBall.BP_Projectile_GhostBall_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Projectile_GhostBall.BP_Projectile_GhostBall_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Projectile_GhostBall_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Projectile_GhostBall.BP_Projectile_GhostBall_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Projectile_GhostBall.BP_Projectile_GhostBall_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_Projectile_GhostBall_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Projectile_GhostBall.BP_Projectile_GhostBall_C.ReceiveDestroyed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Projectile_GhostBall.BP_Projectile_GhostBall_C.ExecuteUbergraph_BP_Projectile_GhostBall
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Projectile_GhostBall_C::ExecuteUbergraph_BP_Projectile_GhostBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Projectile_GhostBall.BP_Projectile_GhostBall_C.ExecuteUbergraph_BP_Projectile_GhostBall"));

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
