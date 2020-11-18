// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AILargeShip_StandardHull_Damage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AILargeShip_StandardHull_Damage.BP_AILargeShip_StandardHull_Damage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AILargeShip_StandardHull_Damage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AILargeShip_StandardHull_Damage.BP_AILargeShip_StandardHull_Damage_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AILargeShip_StandardHull_Damage.BP_AILargeShip_StandardHull_Damage_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AILargeShip_StandardHull_Damage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AILargeShip_StandardHull_Damage.BP_AILargeShip_StandardHull_Damage_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AILargeShip_StandardHull_Damage.BP_AILargeShip_StandardHull_Damage_C.ExecuteUbergraph_BP_AILargeShip_StandardHull_Damage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AILargeShip_StandardHull_Damage_C::ExecuteUbergraph_BP_AILargeShip_StandardHull_Damage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AILargeShip_StandardHull_Damage.BP_AILargeShip_StandardHull_Damage_C.ExecuteUbergraph_BP_AILargeShip_StandardHull_Damage"));

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
