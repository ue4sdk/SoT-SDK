// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SKD_ShrineShimmer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.OnRep_ShimmerIsVisible
// (BlueprintCallable, BlueprintEvent)

void ABP_SKD_ShrineShimmer_C::OnRep_ShimmerIsVisible()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.OnRep_ShimmerIsVisible"));

	ABP_SKD_ShrineShimmer_C_OnRep_ShimmerIsVisible_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SKD_ShrineShimmer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.UserConstructionScript"));

	ABP_SKD_ShrineShimmer_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.FadeCurve__FinishedFunc
// (BlueprintEvent)

void ABP_SKD_ShrineShimmer_C::FadeCurve__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.FadeCurve__FinishedFunc"));

	ABP_SKD_ShrineShimmer_C_FadeCurve__FinishedFunc_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.FadeCurve__UpdateFunc
// (BlueprintEvent)

void ABP_SKD_ShrineShimmer_C::FadeCurve__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.FadeCurve__UpdateFunc"));

	ABP_SKD_ShrineShimmer_C_FadeCurve__UpdateFunc_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.OnActivateShimmer
// (Event, Public, BlueprintEvent)

void ABP_SKD_ShrineShimmer_C::OnActivateShimmer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.OnActivateShimmer"));

	ABP_SKD_ShrineShimmer_C_OnActivateShimmer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.OnDeactivateShimmer
// (Event, Public, BlueprintEvent)

void ABP_SKD_ShrineShimmer_C::OnDeactivateShimmer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.OnDeactivateShimmer"));

	ABP_SKD_ShrineShimmer_C_OnDeactivateShimmer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.Shimmer_FadeIn
// (BlueprintCallable, BlueprintEvent)

void ABP_SKD_ShrineShimmer_C::Shimmer_FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.Shimmer_FadeIn"));

	ABP_SKD_ShrineShimmer_C_Shimmer_FadeIn_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.Shimmer_FadeOut
// (BlueprintCallable, BlueprintEvent)

void ABP_SKD_ShrineShimmer_C::Shimmer_FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.Shimmer_FadeOut"));

	ABP_SKD_ShrineShimmer_C_Shimmer_FadeOut_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.ExecuteUbergraph_BP_SKD_ShrineShimmer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SKD_ShrineShimmer_C::ExecuteUbergraph_BP_SKD_ShrineShimmer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.ExecuteUbergraph_BP_SKD_ShrineShimmer"));

	ABP_SKD_ShrineShimmer_C_ExecuteUbergraph_BP_SKD_ShrineShimmer_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
