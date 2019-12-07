// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AISmallShip_StandardHull_Art_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AISmallShip_StandardHull_Art.BP_AISmallShip_StandardHull_Art_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AISmallShip_StandardHull_Art_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISmallShip_StandardHull_Art.BP_AISmallShip_StandardHull_Art_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AISmallShip_StandardHull_Art.BP_AISmallShip_StandardHull_Art_C.StartWetEffect
// (BlueprintCallable, BlueprintEvent)

void ABP_AISmallShip_StandardHull_Art_C::StartWetEffect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISmallShip_StandardHull_Art.BP_AISmallShip_StandardHull_Art_C.StartWetEffect"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AISmallShip_StandardHull_Art.BP_AISmallShip_StandardHull_Art_C.HideWetDecals
// (BlueprintCallable, BlueprintEvent)

void ABP_AISmallShip_StandardHull_Art_C::HideWetDecals()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISmallShip_StandardHull_Art.BP_AISmallShip_StandardHull_Art_C.HideWetDecals"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AISmallShip_StandardHull_Art.BP_AISmallShip_StandardHull_Art_C.SetSailColour
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAIShipSailData         SailParams                     (Parm)

void ABP_AISmallShip_StandardHull_Art_C::SetSailColour(const struct FAIShipSailData& SailParams)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISmallShip_StandardHull_Art.BP_AISmallShip_StandardHull_Art_C.SetSailColour"));

	struct
	{
		struct FAIShipSailData         SailParams;
	} params;

	params.SailParams = SailParams;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AISmallShip_StandardHull_Art.BP_AISmallShip_StandardHull_Art_C.ExecuteUbergraph_BP_AISmallShip_StandardHull_Art
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AISmallShip_StandardHull_Art_C::ExecuteUbergraph_BP_AISmallShip_StandardHull_Art(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISmallShip_StandardHull_Art.BP_AISmallShip_StandardHull_Art_C.ExecuteUbergraph_BP_AISmallShip_StandardHull_Art"));

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
