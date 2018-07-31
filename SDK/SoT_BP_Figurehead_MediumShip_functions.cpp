// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Figurehead_MediumShip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Figurehead_MediumShip_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.UserConstructionScript");

	ABP_Figurehead_MediumShip_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.OnPartMeshLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UStaticMesh**            Mesh                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Figurehead_MediumShip_C::OnPartMeshLoaded(class UStaticMesh** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.OnPartMeshLoaded");

	ABP_Figurehead_MediumShip_C_OnPartMeshLoaded_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.OnPartDescLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UGenericPartDescAsset**  Desc                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Figurehead_MediumShip_C::OnPartDescLoaded(class UGenericPartDescAsset** Desc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.OnPartDescLoaded");

	ABP_Figurehead_MediumShip_C_OnPartDescLoaded_Params params;
	params.Desc = Desc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.ExecuteUbergraph_BP_Figurehead_MediumShip
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Figurehead_MediumShip_C::ExecuteUbergraph_BP_Figurehead_MediumShip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.ExecuteUbergraph_BP_Figurehead_MediumShip");

	ABP_Figurehead_MediumShip_C_ExecuteUbergraph_BP_Figurehead_MediumShip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
