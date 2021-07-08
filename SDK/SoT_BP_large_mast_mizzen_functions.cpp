// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_large_mast_mizzen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_large_mast_mizzen.BP_large_mast_mizzen_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_large_mast_mizzen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_large_mast_mizzen.BP_large_mast_mizzen_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_large_mast_mizzen.BP_large_mast_mizzen_C.OnMastDescLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMastDescAsset*          MastDesc                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_large_mast_mizzen_C::OnMastDescLoaded(class UMastDescAsset* MastDesc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_large_mast_mizzen.BP_large_mast_mizzen_C.OnMastDescLoaded"));

	struct
	{
		class UMastDescAsset*          MastDesc;
	} params;

	params.MastDesc = MastDesc;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_large_mast_mizzen.BP_large_mast_mizzen_C.ExecuteUbergraph_BP_large_mast_mizzen
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_large_mast_mizzen_C::ExecuteUbergraph_BP_large_mast_mizzen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_large_mast_mizzen.BP_large_mast_mizzen_C.ExecuteUbergraph_BP_large_mast_mizzen"));

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
