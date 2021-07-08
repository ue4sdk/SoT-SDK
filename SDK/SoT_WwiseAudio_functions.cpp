// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WwiseAudio_classes.hpp"

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
// float                          AttenuationScaler              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEvent::IsAudible(const struct FVector& SoundPosition, const struct FVector& ListenerPos, float AttenuationScaler)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WwiseAudio.WwiseEvent.IsAudible"));

	struct
	{
		struct FVector                 SoundPosition;
		struct FVector                 ListenerPos;
		float                          AttenuationScaler;
		bool                           ReturnValue;
	} params;

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

	struct
	{
		float                          ReturnValue;
	} params;


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

	struct
	{
		TEnumAsByte<EWwiseEventDurationType> ReturnValue;
	} params;


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

	struct
	{
		float                          ReturnValue;
	} params;


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

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
