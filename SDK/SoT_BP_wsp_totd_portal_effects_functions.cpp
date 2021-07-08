// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_wsp_totd_portal_effects_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_wsp_totd_portal_effects.BP_wsp_totd_portal_effects_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_wsp_totd_portal_effects_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_wsp_totd_portal_effects.BP_wsp_totd_portal_effects_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_wsp_totd_portal_effects.BP_wsp_totd_portal_effects_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_wsp_totd_portal_effects_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_wsp_totd_portal_effects.BP_wsp_totd_portal_effects_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_wsp_totd_portal_effects.BP_wsp_totd_portal_effects_C.ExecuteUbergraph_BP_wsp_totd_portal_effects
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_wsp_totd_portal_effects_C::ExecuteUbergraph_BP_wsp_totd_portal_effects(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_wsp_totd_portal_effects.BP_wsp_totd_portal_effects_C.ExecuteUbergraph_BP_wsp_totd_portal_effects"));

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
