// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AISmallShipTemplate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.SetShipSkeleton
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AISmallShipTemplate_C::SetShipSkeleton()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.SetShipSkeleton"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.OnRep_SailData
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AISmallShipTemplate_C::OnRep_SailData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.OnRep_SailData"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AISmallShipTemplate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.OnShipSurface_Client
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_AISmallShipTemplate_C::OnShipSurface_Client()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.OnShipSurface_Client"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.OnShipSurface
// (Event, Public, BlueprintEvent)

void ABP_AISmallShipTemplate_C::OnShipSurface()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.OnShipSurface"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.OnShipDive_Client
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_AISmallShipTemplate_C::OnShipDive_Client()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.OnShipDive_Client"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.OnShipDive
// (Event, Public, BlueprintEvent)

void ABP_AISmallShipTemplate_C::OnShipDive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.OnShipDive"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AISmallShipTemplate_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.SetCursedCrewCustomisationProperties
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FAIShipSailData         SailData                       (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_AISmallShipTemplate_C::SetCursedCrewCustomisationProperties(const struct FAIShipSailData& SailData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.SetCursedCrewCustomisationProperties"));

	struct
	{
		struct FAIShipSailData         SailData;
	} params;

	params.SailData = SailData;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.ExecuteUbergraph_BP_AISmallShipTemplate
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AISmallShipTemplate_C::ExecuteUbergraph_BP_AISmallShipTemplate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISmallShipTemplate.BP_AISmallShipTemplate_C.ExecuteUbergraph_BP_AISmallShipTemplate"));

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
