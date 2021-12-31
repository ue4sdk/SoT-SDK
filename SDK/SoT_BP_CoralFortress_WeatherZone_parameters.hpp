#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CoralFortress_WeatherZone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.IsLocalPlayer
struct ABP_CoralFortress_WeatherZone_C_IsLocalPlayer_Params
{
	AActor*                                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.OnRep_Opacity
struct ABP_CoralFortress_WeatherZone_C_OnRep_Opacity_Params
{
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.CreateDynamicMaterialAtSlot0
struct ABP_CoralFortress_WeatherZone_C_CreateDynamicMaterialAtSlot0_Params
{
	UPrimitiveComponent*                               Primitive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	UMaterialInstanceDynamic*                          Material;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.UserConstructionScript
struct ABP_CoralFortress_WeatherZone_C_UserConstructionScript_Params
{
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.RainBlend__FinishedFunc
struct ABP_CoralFortress_WeatherZone_C_RainBlend__FinishedFunc_Params
{
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.RainBlend__UpdateFunc
struct ABP_CoralFortress_WeatherZone_C_RainBlend__UpdateFunc_Params
{
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ReceiveBeginPlay
struct ABP_CoralFortress_WeatherZone_C_ReceiveBeginPlay_Params
{
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.StartRainBlend
struct ABP_CoralFortress_WeatherZone_C_StartRainBlend_Params
{
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ReceiveEndPlay
struct ABP_CoralFortress_WeatherZone_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.StopRainBlend
struct ABP_CoralFortress_WeatherZone_C_StopRainBlend_Params
{
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_438_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_CoralFortress_WeatherZone_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_438_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	AActor*                                            OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	UPrimitiveComponent*                               OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	FHitResult                                         SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_441_ComponentEndOverlapSignature__DelegateSignature
struct ABP_CoralFortress_WeatherZone_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_441_ComponentEndOverlapSignature__DelegateSignature_Params
{
	AActor*                                            OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	UPrimitiveComponent*                               OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ExecuteUbergraph_BP_CoralFortress_WeatherZone
struct ABP_CoralFortress_WeatherZone_C_ExecuteUbergraph_BP_CoralFortress_WeatherZone_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
