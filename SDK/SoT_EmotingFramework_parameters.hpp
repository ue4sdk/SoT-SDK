#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EmotingFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EmotingFramework.EmoteDice.SetDiceMesh
struct AEmoteDice_SetDiceMesh_Params
{
	TEnumAsByte<EDiceType>                             DiceType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmotingFramework.EmoteDice.SendTelemetryData
struct AEmoteDice_SendTelemetryData_Params
{
	FTransform                                         OrientationUsed;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                RollNumber;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDiceType>                             DiceType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmotingFramework.EmoteDice.RollDice
struct AEmoteDice_RollDice_Params
{
	int                                                RollNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDiceType>                             DiceType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
