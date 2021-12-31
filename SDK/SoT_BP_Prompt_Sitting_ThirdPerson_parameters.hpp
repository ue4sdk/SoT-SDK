#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_Sitting_ThirdPerson_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.Evaluate
struct UBP_Prompt_Sitting_ThirdPerson_C_Evaluate_Params
{
};

// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.RegisterOtherEvents_Implementable
struct UBP_Prompt_Sitting_ThirdPerson_C_RegisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.UnregisterOtherEvents_Implementable
struct UBP_Prompt_Sitting_ThirdPerson_C_UnregisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerEnteredSittingState
struct UBP_Prompt_Sitting_ThirdPerson_C_LocalPlayerEnteredSittingState_Params
{
	FEventLocalPlayerEnteredSittingState               Event;                                                    // (Parm)
};

// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerExitedSittingState
struct UBP_Prompt_Sitting_ThirdPerson_C_LocalPlayerExitedSittingState_Params
{
	FEventLocalPlayerExittedSittingState               Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerEnteredSittingThirdPersonCamera
struct UBP_Prompt_Sitting_ThirdPerson_C_LocalPlayerEnteredSittingThirdPersonCamera_Params
{
	FEventLocalPlayerEnteredSittingThirdPersonCameraState Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.ExecuteUbergraph_BP_Prompt_Sitting_ThirdPerson
struct UBP_Prompt_Sitting_ThirdPerson_C_ExecuteUbergraph_BP_Prompt_Sitting_ThirdPerson_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
