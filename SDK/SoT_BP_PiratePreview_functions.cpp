// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PiratePreview_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PiratePreview.BP_PiratePreview_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PiratePreview_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PiratePreview.BP_PiratePreview_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PiratePreview.BP_PiratePreview_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PiratePreview_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PiratePreview.BP_PiratePreview_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PiratePreview.BP_PiratePreview_C.PreviewBusy_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPiratePreviewBusyEvent Data                           (Parm)

void ABP_PiratePreview_C::PreviewBusy_Event(const struct FPiratePreviewBusyEvent& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PiratePreview.BP_PiratePreview_C.PreviewBusy_Event"));

	struct
	{
		struct FPiratePreviewBusyEvent Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PiratePreview.BP_PiratePreview_C.PreviewReady_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPiratePreviewReadyEvent Data                           (Parm)

void ABP_PiratePreview_C::PreviewReady_Event(const struct FPiratePreviewReadyEvent& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PiratePreview.BP_PiratePreview_C.PreviewReady_Event"));

	struct
	{
		struct FPiratePreviewReadyEvent Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PiratePreview.BP_PiratePreview_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PiratePreview_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PiratePreview.BP_PiratePreview_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PiratePreview.BP_PiratePreview_C.ExecuteUbergraph_BP_PiratePreview
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PiratePreview_C::ExecuteUbergraph_BP_PiratePreview(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PiratePreview.BP_PiratePreview_C.ExecuteUbergraph_BP_PiratePreview"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PiratePreview.BP_PiratePreview_C.PreviewShutdown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPiratePreviewShutdownEvent Data                           (Parm)

void ABP_PiratePreview_C::PreviewShutdown__DelegateSignature(const struct FPiratePreviewShutdownEvent& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PiratePreview.BP_PiratePreview_C.PreviewShutdown__DelegateSignature"));

	struct
	{
		struct FPiratePreviewShutdownEvent Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PiratePreview.BP_PiratePreview_C.PreviewReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPiratePreviewReadyEvent Data                           (Parm)

void ABP_PiratePreview_C::PreviewReady__DelegateSignature(const struct FPiratePreviewReadyEvent& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PiratePreview.BP_PiratePreview_C.PreviewReady__DelegateSignature"));

	struct
	{
		struct FPiratePreviewReadyEvent Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PiratePreview.BP_PiratePreview_C.PreviewBusy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPiratePreviewBusyEvent Data                           (Parm)

void ABP_PiratePreview_C::PreviewBusy__DelegateSignature(const struct FPiratePreviewBusyEvent& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PiratePreview.BP_PiratePreview_C.PreviewBusy__DelegateSignature"));

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
