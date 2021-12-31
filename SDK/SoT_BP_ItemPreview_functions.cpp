// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ItemPreview_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ItemPreview.BP_ItemPreview_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemPreview_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemPreview.BP_ItemPreview_C.UserConstructionScript"));

	ABP_ItemPreview_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ItemPreview.BP_ItemPreview_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemPreview_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemPreview.BP_ItemPreview_C.ReceiveEndPlay"));

	ABP_ItemPreview_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ItemPreview.BP_ItemPreview_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_ItemPreview_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemPreview.BP_ItemPreview_C.ReceiveBeginPlay"));

	ABP_ItemPreview_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ItemPreview.BP_ItemPreview_C.ExecuteUbergraph_BP_ItemPreview
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemPreview_C::ExecuteUbergraph_BP_ItemPreview(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemPreview.BP_ItemPreview_C.ExecuteUbergraph_BP_ItemPreview"));

	ABP_ItemPreview_C_ExecuteUbergraph_BP_ItemPreview_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ItemPreview.BP_ItemPreview_C.PreviewShutdown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// FPiratePreviewShutdownEvent    Data                           (Parm)

void ABP_ItemPreview_C::PreviewShutdown__DelegateSignature(const FPiratePreviewShutdownEvent& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemPreview.BP_ItemPreview_C.PreviewShutdown__DelegateSignature"));

	ABP_ItemPreview_C_PreviewShutdown__DelegateSignature_Params params;
	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ItemPreview.BP_ItemPreview_C.PreviewReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// FPiratePreviewReadyEvent       Data                           (Parm)

void ABP_ItemPreview_C::PreviewReady__DelegateSignature(const FPiratePreviewReadyEvent& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemPreview.BP_ItemPreview_C.PreviewReady__DelegateSignature"));

	ABP_ItemPreview_C_PreviewReady__DelegateSignature_Params params;
	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ItemPreview.BP_ItemPreview_C.PreviewBusy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// FPiratePreviewBusyEvent        Data                           (Parm)

void ABP_ItemPreview_C::PreviewBusy__DelegateSignature(const FPiratePreviewBusyEvent& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemPreview.BP_ItemPreview_C.PreviewBusy__DelegateSignature"));

	ABP_ItemPreview_C_PreviewBusy__DelegateSignature_Params params;
	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
