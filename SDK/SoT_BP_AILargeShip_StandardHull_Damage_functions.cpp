// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AILargeShip_StandardHull_Damage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AILargeShip_StandardHull_Damage.BP_AILargeShip_StandardHull_Damage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AILargeShip_StandardHull_Damage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShip_StandardHull_Damage.BP_AILargeShip_StandardHull_Damage_C.UserConstructionScript");

	ABP_AILargeShip_StandardHull_Damage_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AILargeShip_StandardHull_Damage.BP_AILargeShip_StandardHull_Damage_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AILargeShip_StandardHull_Damage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShip_StandardHull_Damage.BP_AILargeShip_StandardHull_Damage_C.ReceiveBeginPlay");

	ABP_AILargeShip_StandardHull_Damage_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AILargeShip_StandardHull_Damage.BP_AILargeShip_StandardHull_Damage_C.ExecuteUbergraph_BP_AILargeShip_StandardHull_Damage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AILargeShip_StandardHull_Damage_C::ExecuteUbergraph_BP_AILargeShip_StandardHull_Damage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShip_StandardHull_Damage.BP_AILargeShip_StandardHull_Damage_C.ExecuteUbergraph_BP_AILargeShip_StandardHull_Damage");

	ABP_AILargeShip_StandardHull_Damage_C_ExecuteUbergraph_BP_AILargeShip_StandardHull_Damage_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
