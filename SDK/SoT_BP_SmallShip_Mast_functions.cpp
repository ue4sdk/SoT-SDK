// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShip_Mast_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SmallShip_Mast.BP_SmallShip_Mast_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SmallShip_Mast_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShip_Mast.BP_SmallShip_Mast_C.UserConstructionScript");

	ABP_SmallShip_Mast_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmallShip_Mast.BP_SmallShip_Mast_C.OnMastDescLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMastDescAsset**         MastDesc                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmallShip_Mast_C::OnMastDescLoaded(class UMastDescAsset** MastDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShip_Mast.BP_SmallShip_Mast_C.OnMastDescLoaded");

	ABP_SmallShip_Mast_C_OnMastDescLoaded_Params params;
	params.MastDesc = MastDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmallShip_Mast.BP_SmallShip_Mast_C.ExecuteUbergraph_BP_SmallShip_Mast
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmallShip_Mast_C::ExecuteUbergraph_BP_SmallShip_Mast(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShip_Mast.BP_SmallShip_Mast_C.ExecuteUbergraph_BP_SmallShip_Mast");

	ABP_SmallShip_Mast_C_ExecuteUbergraph_BP_SmallShip_Mast_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
