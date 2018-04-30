// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_large_mast_mizzen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_large_mast_mizzen.BP_large_mast_mizzen_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_large_mast_mizzen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_large_mast_mizzen.BP_large_mast_mizzen_C.UserConstructionScript");

	ABP_large_mast_mizzen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_large_mast_mizzen.BP_large_mast_mizzen_C.OnMastDescLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMastDescAsset**         MastDesc                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_large_mast_mizzen_C::OnMastDescLoaded(class UMastDescAsset** MastDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_large_mast_mizzen.BP_large_mast_mizzen_C.OnMastDescLoaded");

	ABP_large_mast_mizzen_C_OnMastDescLoaded_Params params;
	params.MastDesc = MastDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_large_mast_mizzen.BP_large_mast_mizzen_C.ExecuteUbergraph_BP_large_mast_mizzen
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_large_mast_mizzen_C::ExecuteUbergraph_BP_large_mast_mizzen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_large_mast_mizzen.BP_large_mast_mizzen_C.ExecuteUbergraph_BP_large_mast_mizzen");

	ABP_large_mast_mizzen_C_ExecuteUbergraph_BP_large_mast_mizzen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
