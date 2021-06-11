// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Projectile_CannonBall_ChainShot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Projectile_CannonBall_ChainShot.BP_Projectile_CannonBall_ChainShot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Projectile_CannonBall_ChainShot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Projectile_CannonBall_ChainShot.BP_Projectile_CannonBall_ChainShot_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Projectile_CannonBall_ChainShot.BP_Projectile_CannonBall_ChainShot_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Projectile_CannonBall_ChainShot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Projectile_CannonBall_ChainShot.BP_Projectile_CannonBall_ChainShot_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Projectile_CannonBall_ChainShot.BP_Projectile_CannonBall_ChainShot_C.ExecuteUbergraph_BP_Projectile_CannonBall_ChainShot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Projectile_CannonBall_ChainShot_C::ExecuteUbergraph_BP_Projectile_CannonBall_ChainShot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Projectile_CannonBall_ChainShot.BP_Projectile_CannonBall_ChainShot_C.ExecuteUbergraph_BP_Projectile_CannonBall_ChainShot"));

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
