// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_large_mast_fore_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_large_mast_fore.BP_large_mast_fore_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_large_mast_fore_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_large_mast_fore.BP_large_mast_fore_C.UserConstructionScript");

	ABP_large_mast_fore_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_large_mast_fore.BP_large_mast_fore_C.OnMastDescLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMastDescAsset*          MastDesc                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_large_mast_fore_C::OnMastDescLoaded(class UMastDescAsset* MastDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_large_mast_fore.BP_large_mast_fore_C.OnMastDescLoaded");

	ABP_large_mast_fore_C_OnMastDescLoaded_Params params;
	params.MastDesc = MastDesc;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_large_mast_fore.BP_large_mast_fore_C.ExecuteUbergraph_BP_large_mast_fore
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_large_mast_fore_C::ExecuteUbergraph_BP_large_mast_fore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_large_mast_fore.BP_large_mast_fore_C.ExecuteUbergraph_BP_large_mast_fore");

	ABP_large_mast_fore_C_ExecuteUbergraph_BP_large_mast_fore_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
