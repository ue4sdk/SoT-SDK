// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WwiseAudio_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WwiseAudio.WwiseEvent.IsAudible
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FVector                        SoundPosition                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FVector                        ListenerPos                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          AttenuationScaler              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEvent::IsAudible(const FVector& SoundPosition, const FVector& ListenerPos, float AttenuationScaler)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WwiseAudio.WwiseEvent.IsAudible"));

	UWwiseEvent_IsAudible_Params params;
	params.SoundPosition = SoundPosition;
	params.ListenerPos = ListenerPos;
	params.AttenuationScaler = AttenuationScaler;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseEvent.GetMaxAttenuation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWwiseEvent::GetMaxAttenuation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WwiseAudio.WwiseEvent.GetMaxAttenuation"));

	UWwiseEvent_GetMaxAttenuation_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseEvent.GetDurationType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EWwiseEventDurationType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EWwiseEventDurationType> UWwiseEvent::GetDurationType()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WwiseAudio.WwiseEvent.GetDurationType"));

	UWwiseEvent_GetDurationType_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseEvent.GetDurationMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWwiseEvent::GetDurationMin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WwiseAudio.WwiseEvent.GetDurationMin"));

	UWwiseEvent_GetDurationMin_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseEvent.GetDurationMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWwiseEvent::GetDurationMax()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WwiseAudio.WwiseEvent.GetDurationMax"));

	UWwiseEvent_GetDurationMax_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
