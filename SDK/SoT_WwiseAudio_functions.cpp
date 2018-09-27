// Sea of Thieves (1.2.6) SDK

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
// struct FVector                 SoundPosition                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ListenerPos                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEvent::IsAudible(const struct FVector& SoundPosition, const struct FVector& ListenerPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseEvent.IsAudible");

	UWwiseEvent_IsAudible_Params params;
	params.SoundPosition = SoundPosition;
	params.ListenerPos = ListenerPos;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseEvent.GetMaxAttenuation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWwiseEvent::GetMaxAttenuation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseEvent.GetMaxAttenuation");

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
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseEvent.GetDurationType");

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
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseEvent.GetDurationMin");

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
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseEvent.GetDurationMax");

	UWwiseEvent_GetDurationMax_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
