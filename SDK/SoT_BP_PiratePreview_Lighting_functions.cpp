// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PiratePreview_Lighting_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PiratePreview_Lighting_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C.UserConstructionScript"));

	ABP_PiratePreview_Lighting_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C.PreviewReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// FPiratePreviewReadyEvent       Data                           (Parm)

void ABP_PiratePreview_Lighting_C::PreviewReady__DelegateSignature(const FPiratePreviewReadyEvent& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C.PreviewReady__DelegateSignature"));

	ABP_PiratePreview_Lighting_C_PreviewReady__DelegateSignature_Params params;
	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C.PreviewBusy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// FPiratePreviewBusyEvent        Data                           (Parm)

void ABP_PiratePreview_Lighting_C::PreviewBusy__DelegateSignature(const FPiratePreviewBusyEvent& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C.PreviewBusy__DelegateSignature"));

	ABP_PiratePreview_Lighting_C_PreviewBusy__DelegateSignature_Params params;
	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
