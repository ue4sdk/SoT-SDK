// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AggressiveGhostShip_Portal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AggressiveGhostShip_Portal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AggressiveGhostShip_Portal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.StartOpening
// (Event, Protected, BlueprintEvent)

void ABP_AggressiveGhostShip_Portal_C::StartOpening()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.StartOpening"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.StartClosing
// (Event, Protected, BlueprintEvent)

void ABP_AggressiveGhostShip_Portal_C::StartClosing()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.StartClosing"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.End
// (Event, Protected, BlueprintEvent)

void ABP_AggressiveGhostShip_Portal_C::End()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.End"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.ExecuteUbergraph_BP_AggressiveGhostShip_Portal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AggressiveGhostShip_Portal_C::ExecuteUbergraph_BP_AggressiveGhostShip_Portal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.ExecuteUbergraph_BP_AggressiveGhostShip_Portal"));

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
