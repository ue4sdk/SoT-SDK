// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EmotingFramework_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EmotingFramework.EmoteDice.SetDiceMesh
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDiceType>         DiceType                       (Parm, ZeroConstructor, IsPlainOldData)

void AEmoteDice::SetDiceMesh(TEnumAsByte<EDiceType> DiceType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EmotingFramework.EmoteDice.SetDiceMesh"));

	AEmoteDice_SetDiceMesh_Params params;
	params.DiceType = DiceType;

	UObject::ProcessEvent(fn, &params);
}


// Function EmotingFramework.EmoteDice.SendTelemetryData
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FTransform                     OrientationUsed                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            RollNumber                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDiceType>         DiceType                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AEmoteDice::SendTelemetryData(const FTransform& OrientationUsed, int RollNumber, TEnumAsByte<EDiceType> DiceType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EmotingFramework.EmoteDice.SendTelemetryData"));

	AEmoteDice_SendTelemetryData_Params params;
	params.OrientationUsed = OrientationUsed;
	params.RollNumber = RollNumber;
	params.DiceType = DiceType;

	UObject::ProcessEvent(fn, &params);
}


// Function EmotingFramework.EmoteDice.RollDice
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RollNumber                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDiceType>         DiceType                       (Parm, ZeroConstructor, IsPlainOldData)

void AEmoteDice::RollDice(int RollNumber, TEnumAsByte<EDiceType> DiceType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EmotingFramework.EmoteDice.RollDice"));

	AEmoteDice_RollDice_Params params;
	params.RollNumber = RollNumber;
	params.DiceType = DiceType;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
