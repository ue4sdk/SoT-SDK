#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PiratePreview_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PiratePreview.BP_PiratePreview_C.UserConstructionScript
struct ABP_PiratePreview_C_UserConstructionScript_Params
{
};

// Function BP_PiratePreview.BP_PiratePreview_C.ReceiveBeginPlay
struct ABP_PiratePreview_C_ReceiveBeginPlay_Params
{
};

// Function BP_PiratePreview.BP_PiratePreview_C.PreviewBusy_Event
struct ABP_PiratePreview_C_PreviewBusy_Event_Params
{
	FPiratePreviewBusyEvent                            Data;                                                     // (Parm)
};

// Function BP_PiratePreview.BP_PiratePreview_C.PreviewReady_Event
struct ABP_PiratePreview_C_PreviewReady_Event_Params
{
	FPiratePreviewReadyEvent                           Data;                                                     // (Parm)
};

// Function BP_PiratePreview.BP_PiratePreview_C.ReceiveEndPlay
struct ABP_PiratePreview_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PiratePreview.BP_PiratePreview_C.ExecuteUbergraph_BP_PiratePreview
struct ABP_PiratePreview_C_ExecuteUbergraph_BP_PiratePreview_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PiratePreview.BP_PiratePreview_C.PreviewShutdown__DelegateSignature
struct ABP_PiratePreview_C_PreviewShutdown__DelegateSignature_Params
{
	FPiratePreviewShutdownEvent                        Data;                                                     // (Parm)
};

// Function BP_PiratePreview.BP_PiratePreview_C.PreviewReady__DelegateSignature
struct ABP_PiratePreview_C_PreviewReady__DelegateSignature_Params
{
	FPiratePreviewReadyEvent                           Data;                                                     // (Parm)
};

// Function BP_PiratePreview.BP_PiratePreview_C.PreviewBusy__DelegateSignature
struct ABP_PiratePreview_C_PreviewBusy__DelegateSignature_Params
{
	FPiratePreviewBusyEvent                            Data;                                                     // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
