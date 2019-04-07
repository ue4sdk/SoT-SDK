// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ItemPreview_classes.hpp"

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ItemPreview.BP_ItemPreview_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_ItemPreview_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemPreview.BP_ItemPreview_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ItemPreview.BP_ItemPreview_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemPreview_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemPreview.BP_ItemPreview_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ItemPreview.BP_ItemPreview_C.ExecuteUbergraph_BP_ItemPreview
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemPreview_C::ExecuteUbergraph_BP_ItemPreview(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemPreview.BP_ItemPreview_C.ExecuteUbergraph_BP_ItemPreview"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ItemPreview.BP_ItemPreview_C.PreviewShutdown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPiratePreviewShutdownEvent Data                           (Parm)

void ABP_ItemPreview_C::PreviewShutdown__DelegateSignature(const struct FPiratePreviewShutdownEvent& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemPreview.BP_ItemPreview_C.PreviewShutdown__DelegateSignature"));

	struct
	{
		struct FPiratePreviewShutdownEvent Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ItemPreview.BP_ItemPreview_C.PreviewReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPiratePreviewReadyEvent Data                           (Parm)

void ABP_ItemPreview_C::PreviewReady__DelegateSignature(const struct FPiratePreviewReadyEvent& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemPreview.BP_ItemPreview_C.PreviewReady__DelegateSignature"));

	struct
	{
		struct FPiratePreviewReadyEvent Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ItemPreview.BP_ItemPreview_C.PreviewBusy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPiratePreviewBusyEvent Data                           (Parm)

void ABP_ItemPreview_C::PreviewBusy__DelegateSignature(const struct FPiratePreviewBusyEvent& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ItemPreview.BP_ItemPreview_C.PreviewBusy__DelegateSignature"));

	struct
	{
		struct FPiratePreviewBusyEvent Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
