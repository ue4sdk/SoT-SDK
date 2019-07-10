// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AILargeShipTemplate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.SetShipSkeleton
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AILargeShipTemplate_C::SetShipSkeleton()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.SetShipSkeleton"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnRep_SailData
// (BlueprintCallable, BlueprintEvent)

void ABP_AILargeShipTemplate_C::OnRep_SailData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnRep_SailData"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnRep_NewVar_2
// (BlueprintCallable, BlueprintEvent)

void ABP_AILargeShipTemplate_C::OnRep_NewVar_2()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnRep_NewVar_2"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AILargeShipTemplate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnShipSurface_Client
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_AILargeShipTemplate_C::OnShipSurface_Client()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnShipSurface_Client"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnShipSurface
// (Event, Public, BlueprintEvent)

void ABP_AILargeShipTemplate_C::OnShipSurface()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnShipSurface"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnShipDive_Client
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_AILargeShipTemplate_C::OnShipDive_Client()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnShipDive_Client"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnShipDive
// (Event, Public, BlueprintEvent)

void ABP_AILargeShipTemplate_C::OnShipDive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnShipDive"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AILargeShipTemplate_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.SetCursedCrewCustomisationProperties
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FAIShipSailData         SailData                       (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_AILargeShipTemplate_C::SetCursedCrewCustomisationProperties(const struct FAIShipSailData& SailData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.SetCursedCrewCustomisationProperties"));

	struct
	{
		struct FAIShipSailData         SailData;
	} params;

	params.SailData = SailData;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.ExecuteUbergraph_BP_AILargeShipTemplate
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AILargeShipTemplate_C::ExecuteUbergraph_BP_AILargeShipTemplate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.ExecuteUbergraph_BP_AILargeShipTemplate"));

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
