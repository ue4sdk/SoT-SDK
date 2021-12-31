#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WwiseAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WwiseAudio.WwiseEvent.IsAudible
struct UWwiseEvent_IsAudible_Params
{
	FVector                                            SoundPosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FVector                                            ListenerPos;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              AttenuationScaler;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseEvent.GetMaxAttenuation
struct UWwiseEvent_GetMaxAttenuation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseEvent.GetDurationType
struct UWwiseEvent_GetDurationType_Params
{
	TEnumAsByte<EWwiseEventDurationType>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseEvent.GetDurationMin
struct UWwiseEvent_GetDurationMin_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseEvent.GetDurationMax
struct UWwiseEvent_GetDurationMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
