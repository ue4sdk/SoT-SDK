#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Castaway_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Castaway.BP_Castaway_C.UserConstructionScript
struct ABP_Castaway_C_UserConstructionScript_Params
{
};

// Function BP_Castaway.BP_Castaway_C.TriggerAudioEvent
struct ABP_Castaway_C_TriggerAudioEvent_Params
{
	class UWwiseEvent*                                 AudioEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Castaway.BP_Castaway_C.StopCurrentAudioEvent
struct ABP_Castaway_C_StopCurrentAudioEvent_Params
{
};

// Function BP_Castaway.BP_Castaway_C.Multicast_TriggerAudioEvent
struct ABP_Castaway_C_Multicast_TriggerAudioEvent_Params
{
	int                                                EventIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Castaway.BP_Castaway_C.ResetVisibility
struct ABP_Castaway_C_ResetVisibility_Params
{
};

// Function BP_Castaway.BP_Castaway_C.ExecuteUbergraph_BP_Castaway
struct ABP_Castaway_C_ExecuteUbergraph_BP_Castaway_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
