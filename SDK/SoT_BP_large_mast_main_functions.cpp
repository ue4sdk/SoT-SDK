// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_large_mast_main_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_large_mast_main.BP_large_mast_main_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_large_mast_main_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_large_mast_main.BP_large_mast_main_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_large_mast_main.BP_large_mast_main_C.OnMastDescLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMastDescAsset*          MastDesc                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_large_mast_main_C::OnMastDescLoaded(class UMastDescAsset* MastDesc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_large_mast_main.BP_large_mast_main_C.OnMastDescLoaded"));

	struct
	{
		class UMastDescAsset*          MastDesc;
	} params;

	params.MastDesc = MastDesc;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_large_mast_main.BP_large_mast_main_C.ExecuteUbergraph_BP_large_mast_main
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_large_mast_main_C::ExecuteUbergraph_BP_large_mast_main(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_large_mast_main.BP_large_mast_main_C.ExecuteUbergraph_BP_large_mast_main"));

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
