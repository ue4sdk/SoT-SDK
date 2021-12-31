#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_MaidenVoyage_RowboatTutorial_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.OnStrokeEndedFunc
struct UBP_Prompt_MaidenVoyage_RowboatTutorial_C_OnStrokeEndedFunc_Params
{
};

// Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.OnLeaveRowboatFunc
struct UBP_Prompt_MaidenVoyage_RowboatTutorial_C_OnLeaveRowboatFunc_Params
{
};

// Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.OnSitInRowboatFunc
struct UBP_Prompt_MaidenVoyage_RowboatTutorial_C_OnSitInRowboatFunc_Params
{
	FEventPlayerTakenControlOfControllable             EventPlayerTakenControlOfControllable;                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.ResetState
struct UBP_Prompt_MaidenVoyage_RowboatTutorial_C_ResetState_Params
{
};

// Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.PostInitialize
struct UBP_Prompt_MaidenVoyage_RowboatTutorial_C_PostInitialize_Params
{
};

// Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.Evaluate
struct UBP_Prompt_MaidenVoyage_RowboatTutorial_C_Evaluate_Params
{
};

// Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.UnregisterOtherEvents_Implementable
struct UBP_Prompt_MaidenVoyage_RowboatTutorial_C_UnregisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.OnSitInRowboat
struct UBP_Prompt_MaidenVoyage_RowboatTutorial_C_OnSitInRowboat_Params
{
	FEventPlayerTakenControlOfControllable             Event;                                                    // (Parm)
};

// Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.OnLeaveRowboat
struct UBP_Prompt_MaidenVoyage_RowboatTutorial_C_OnLeaveRowboat_Params
{
	FEventPlayerReliquishedControlOfControllable       Event;                                                    // (Parm)
};

// Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.OnStrokeEnded
struct UBP_Prompt_MaidenVoyage_RowboatTutorial_C_OnStrokeEnded_Params
{
	FEventOarStrokeEnded                               Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C.ExecuteUbergraph_BP_Prompt_MaidenVoyage_RowboatTutorial
struct UBP_Prompt_MaidenVoyage_RowboatTutorial_C_ExecuteUbergraph_BP_Prompt_MaidenVoyage_RowboatTutorial_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
