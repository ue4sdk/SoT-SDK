#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_audio_prem_shop_wsp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_audio_prem_shop_wsp.BP_audio_prem_shop_wsp_C.UserConstructionScript
struct ABP_audio_prem_shop_wsp_C_UserConstructionScript_Params
{
};

// Function BP_audio_prem_shop_wsp.BP_audio_prem_shop_wsp_C.ReceiveBeginPlay
struct ABP_audio_prem_shop_wsp_C_ReceiveBeginPlay_Params
{
};

// Function BP_audio_prem_shop_wsp.BP_audio_prem_shop_wsp_C.BndEvt__AudioSpace_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_audio_prem_shop_wsp_C_BndEvt__AudioSpace_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_audio_prem_shop_wsp.BP_audio_prem_shop_wsp_C.ExecuteUbergraph_BP_audio_prem_shop_wsp
struct ABP_audio_prem_shop_wsp_C_ExecuteUbergraph_BP_audio_prem_shop_wsp_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
