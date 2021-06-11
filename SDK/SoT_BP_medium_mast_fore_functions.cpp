// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_medium_mast_fore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_medium_mast_fore.BP_medium_mast_fore_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_medium_mast_fore_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_medium_mast_fore.BP_medium_mast_fore_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_medium_mast_fore.BP_medium_mast_fore_C.OnMastDescLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMastDescAsset*          MastDesc                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_medium_mast_fore_C::OnMastDescLoaded(class UMastDescAsset* MastDesc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_medium_mast_fore.BP_medium_mast_fore_C.OnMastDescLoaded"));

	struct
	{
		class UMastDescAsset*          MastDesc;
	} params;

	params.MastDesc = MastDesc;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_medium_mast_fore.BP_medium_mast_fore_C.ExecuteUbergraph_BP_medium_mast_fore
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_medium_mast_fore_C::ExecuteUbergraph_BP_medium_mast_fore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_medium_mast_fore.BP_medium_mast_fore_C.ExecuteUbergraph_BP_medium_mast_fore"));

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
