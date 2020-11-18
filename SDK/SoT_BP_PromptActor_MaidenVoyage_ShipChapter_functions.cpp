// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_MaidenVoyage_ShipChapter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.OnRep_DisplayPrompts
// (BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_MaidenVoyage_ShipChapter_C::OnRep_DisplayPrompts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.OnRep_DisplayPrompts"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.SetDisplayPrompts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InDisplayPrompts               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_MaidenVoyage_ShipChapter_C::SetDisplayPrompts(bool InDisplayPrompts)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.SetDisplayPrompts"));

	struct
	{
		bool                           InDisplayPrompts;
	} params;

	params.InDisplayPrompts = InDisplayPrompts;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.NewFunction_1
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_MaidenVoyage_ShipChapter_C::NewFunction_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.NewFunction_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.OnRep_WaterThrowEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_MaidenVoyage_ShipChapter_C::OnRep_WaterThrowEvent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.OnRep_WaterThrowEvent"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.OnRep_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_MaidenVoyage_ShipChapter_C::OnRep_Event()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.OnRep_Event"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_MaidenVoyage_ShipChapter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_MaidenVoyage_ShipChapter_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PromptActor_MaidenVoyage_ShipChapter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnLiquidProjectileImpactEvent Event                          (Parm)

void ABP_PromptActor_MaidenVoyage_ShipChapter_C::CustomEvent_1(const struct FOnLiquidProjectileImpactEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.CustomEvent_1"));

	struct
	{
		struct FOnLiquidProjectileImpactEvent Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.WaterAmountChanged
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_MaidenVoyage_ShipChapter_C::WaterAmountChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.WaterAmountChanged"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.WaterProjectileOffShip
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_MaidenVoyage_ShipChapter_C::WaterProjectileOffShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.WaterProjectileOffShip"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.WaterProjectileOnShip
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_MaidenVoyage_ShipChapter_C::WaterProjectileOnShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.WaterProjectileOnShip"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.SetStateNotOnShip
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_MaidenVoyage_ShipChapter_C::SetStateNotOnShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.SetStateNotOnShip"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.IncrementNumRepairs
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_MaidenVoyage_ShipChapter_C::IncrementNumRepairs()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.IncrementNumRepairs"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.OnShipSunk
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventShipBecameUseless Event                          (Parm)

void ABP_PromptActor_MaidenVoyage_ShipChapter_C::OnShipSunk(const struct FEventShipBecameUseless& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.OnShipSunk"));

	struct
	{
		struct FEventShipBecameUseless Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.SetShipSunk
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_MaidenVoyage_ShipChapter_C::SetShipSunk()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.SetShipSunk"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.RegisterMastRepairEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShip*                   Ship                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_MaidenVoyage_ShipChapter_C::RegisterMastRepairEvents(class AShip* Ship)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.RegisterMastRepairEvents"));

	struct
	{
		class AShip*                   Ship;
	} params;

	params.Ship = Ship;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.OnRepair1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DamageLevel                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_MaidenVoyage_ShipChapter_C::OnRepair1(int DamageLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.OnRepair1"));

	struct
	{
		int                            DamageLevel;
	} params;

	params.DamageLevel = DamageLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.OnRepair2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DamageLevel                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_MaidenVoyage_ShipChapter_C::OnRepair2(int DamageLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.OnRepair2"));

	struct
	{
		int                            DamageLevel;
	} params;

	params.DamageLevel = DamageLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.OnRepair3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DamageLevel                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_MaidenVoyage_ShipChapter_C::OnRepair3(int DamageLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.OnRepair3"));

	struct
	{
		int                            DamageLevel;
	} params;

	params.DamageLevel = DamageLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.ExecuteUbergraph_BP_PromptActor_MaidenVoyage_ShipChapter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_MaidenVoyage_ShipChapter_C::ExecuteUbergraph_BP_PromptActor_MaidenVoyage_ShipChapter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C.ExecuteUbergraph_BP_PromptActor_MaidenVoyage_ShipChapter"));

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
