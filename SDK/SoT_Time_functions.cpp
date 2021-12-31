// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Time_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Time.TimeInterface.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FGameTime                      ReturnValue                    (Parm, OutParm, ReturnParm)

FGameTime UTimeInterface::GetTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeInterface.GetTime"));

	UTimeInterface_GetTime_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.TimeInterface.GetSmoothRealWorldTime
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FDateTime                      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

FDateTime UTimeInterface::GetSmoothRealWorldTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeInterface.GetSmoothRealWorldTime"));

	UTimeInterface_GetSmoothRealWorldTime_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.TimeInterface.GetPreciseRealWorldTime
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FDateTime                      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

FDateTime UTimeInterface::GetPreciseRealWorldTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeInterface.GetPreciseRealWorldTime"));

	UTimeInterface_GetPreciseRealWorldTime_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.TimeInterface.ConvertRealWorldTimeToGameWorldTime
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FDateTime                      RealWorldTime                  (ConstParm, Parm, ZeroConstructor)
// FGameTime                      ReturnValue                    (Parm, OutParm, ReturnParm)

FGameTime UTimeInterface::ConvertRealWorldTimeToGameWorldTime(const FDateTime& RealWorldTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeInterface.ConvertRealWorldTimeToGameWorldTime"));

	UTimeInterface_ConvertRealWorldTimeToGameWorldTime_Params params;
	params.RealWorldTime = RealWorldTime;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.TimeInterface.ConvertGameWorldTimeToRealWorldTime
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FGameTime                      GameWorldTime                  (ConstParm, Parm)
// FDateTime                      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

FDateTime UTimeInterface::ConvertGameWorldTimeToRealWorldTime(const FGameTime& GameWorldTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeInterface.ConvertGameWorldTimeToRealWorldTime"));

	UTimeInterface_ConvertGameWorldTimeToRealWorldTime_Params params;
	params.GameWorldTime = GameWorldTime;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.CustomizableTimeInterface.SetTimeScalar
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            RequestedTimeScalar            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCustomizableTimeInterface::SetTimeScalar(int RequestedTimeScalar)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.CustomizableTimeInterface.SetTimeScalar"));

	UCustomizableTimeInterface_SetTimeScalar_Params params;
	params.RequestedTimeScalar = RequestedTimeScalar;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.CustomizableTimeInterface.SetSunset
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          SunsetHours                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCustomizableTimeInterface::SetSunset(float SunsetHours)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.CustomizableTimeInterface.SetSunset"));

	UCustomizableTimeInterface_SetSunset_Params params;
	params.SunsetHours = SunsetHours;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.CustomizableTimeInterface.SetSunrise
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          SunriseHours                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCustomizableTimeInterface::SetSunrise(float SunriseHours)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.CustomizableTimeInterface.SetSunrise"));

	UCustomizableTimeInterface_SetSunrise_Params params;
	params.SunriseHours = SunriseHours;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.CustomizableTimeInterface.SetGameWorldTime
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FGameTime                      RequestedTime                  (ConstParm, Parm, OutParm, ReferenceParm)

void UCustomizableTimeInterface::SetGameWorldTime(const FGameTime& RequestedTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.CustomizableTimeInterface.SetGameWorldTime"));

	UCustomizableTimeInterface_SetGameWorldTime_Params params;
	params.RequestedTime = RequestedTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.CustomizableTimeInterface.GetTimeScalar
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomizableTimeInterface::GetTimeScalar()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.CustomizableTimeInterface.GetTimeScalar"));

	UCustomizableTimeInterface_GetTimeScalar_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.CustomizableTimeInterface.EnableQueryServiceTime
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCustomizableTimeInterface::EnableQueryServiceTime(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.CustomizableTimeInterface.EnableQueryServiceTime"));

	UCustomizableTimeInterface_EnableQueryServiceTime_Params params;
	params.Enable = Enable;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.DebugTimeInterface.SetTimeScalar
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            RequestedTimeScalar            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugTimeInterface::SetTimeScalar(int RequestedTimeScalar)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.DebugTimeInterface.SetTimeScalar"));

	UDebugTimeInterface_SetTimeScalar_Params params;
	params.RequestedTimeScalar = RequestedTimeScalar;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.DebugTimeInterface.SetSunset
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          SunsetHours                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugTimeInterface::SetSunset(float SunsetHours)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.DebugTimeInterface.SetSunset"));

	UDebugTimeInterface_SetSunset_Params params;
	params.SunsetHours = SunsetHours;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.DebugTimeInterface.SetSunrise
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          SunriseHours                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugTimeInterface::SetSunrise(float SunriseHours)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.DebugTimeInterface.SetSunrise"));

	UDebugTimeInterface_SetSunrise_Params params;
	params.SunriseHours = SunriseHours;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.DebugTimeInterface.SetGameWorldTime
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FGameTime                      RequestedTime                  (ConstParm, Parm, OutParm, ReferenceParm)

void UDebugTimeInterface::SetGameWorldTime(const FGameTime& RequestedTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.DebugTimeInterface.SetGameWorldTime"));

	UDebugTimeInterface_SetGameWorldTime_Params params;
	params.RequestedTime = RequestedTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.DebugTimeInterface.GetTimeScalar
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDebugTimeInterface::GetTimeScalar()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.DebugTimeInterface.GetTimeScalar"));

	UDebugTimeInterface_GetTimeScalar_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.DebugTimeInterface.EnableQueryServiceTime
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugTimeInterface::EnableQueryServiceTime(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.DebugTimeInterface.EnableQueryServiceTime"));

	UDebugTimeInterface_EnableQueryServiceTime_Params params;
	params.Enable = Enable;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.TimeBlueprintLibrary.MakeReplicatedDateTimeFromDateTime
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FDateTime                      InDateTime                     (Parm, ZeroConstructor)
// FReplicatedDateTime            ReturnValue                    (Parm, OutParm, ReturnParm)

FReplicatedDateTime UTimeBlueprintLibrary::MakeReplicatedDateTimeFromDateTime(const FDateTime& InDateTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeBlueprintLibrary.MakeReplicatedDateTimeFromDateTime"));

	UTimeBlueprintLibrary_MakeReplicatedDateTimeFromDateTime_Params params;
	params.InDateTime = InDateTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.TimeBlueprintLibrary.MakeDateTimeFromReplicatedDateTime
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FReplicatedDateTime            InDateTime                     (Parm)
// FDateTime                      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

FDateTime UTimeBlueprintLibrary::MakeDateTimeFromReplicatedDateTime(const FReplicatedDateTime& InDateTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeBlueprintLibrary.MakeDateTimeFromReplicatedDateTime"));

	UTimeBlueprintLibrary_MakeDateTimeFromReplicatedDateTime_Params params;
	params.InDateTime = InDateTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.TimeBlueprintLibrary.MakeDateTimeFromRaw
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Year                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Month                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Day                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Hour                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Minute                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Second                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Millisecond                    (Parm, ZeroConstructor, IsPlainOldData)
// FDateTime                      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

FDateTime UTimeBlueprintLibrary::MakeDateTimeFromRaw(int Year, int Month, int Day, int Hour, int Minute, int Second, int Millisecond)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeBlueprintLibrary.MakeDateTimeFromRaw"));

	UTimeBlueprintLibrary_MakeDateTimeFromRaw_Params params;
	params.Year = Year;
	params.Month = Month;
	params.Day = Day;
	params.Hour = Hour;
	params.Minute = Minute;
	params.Second = Second;
	params.Millisecond = Millisecond;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.TimeBlueprintLibrary.DateTimesWithinTolerance
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FDateTime                      FirstDateTime                  (Parm, ZeroConstructor)
// FDateTime                      SecondDateTime                 (Parm, ZeroConstructor)
// FTimespan                      Tolerance                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTimeBlueprintLibrary::DateTimesWithinTolerance(const FDateTime& FirstDateTime, const FDateTime& SecondDateTime, const FTimespan& Tolerance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeBlueprintLibrary.DateTimesWithinTolerance"));

	UTimeBlueprintLibrary_DateTimesWithinTolerance_Params params;
	params.FirstDateTime = FirstDateTime;
	params.SecondDateTime = SecondDateTime;
	params.Tolerance = Tolerance;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.TimeService.OnRep_ReplicatedServerTime
// (Final, Native, Protected)

void ATimeService::OnRep_ReplicatedServerTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeService.OnRep_ReplicatedServerTime"));

	ATimeService_OnRep_ReplicatedServerTime_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.TimeService.MulticastOnServiceTimeChangedRPC
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// int64_t                        ServiceTimeInTicks             (Parm, ZeroConstructor, IsPlainOldData)

void ATimeService::MulticastOnServiceTimeChangedRPC(int64_t ServiceTimeInTicks)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeService.MulticastOnServiceTimeChangedRPC"));

	ATimeService_MulticastOnServiceTimeChangedRPC_Params params;
	params.ServiceTimeInTicks = ServiceTimeInTicks;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.DebugTimeService.MulticastOnTimeScalarOffsetRPC
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// int                            Scalar                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Offset                         (Parm, ZeroConstructor, IsPlainOldData)

void ADebugTimeService::MulticastOnTimeScalarOffsetRPC(int Scalar, int64_t Offset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.DebugTimeService.MulticastOnTimeScalarOffsetRPC"));

	ADebugTimeService_MulticastOnTimeScalarOffsetRPC_Params params;
	params.Scalar = Scalar;
	params.Offset = Offset;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.CustomizableTimeService.MulticastOnTimeScalarOffsetRPC
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// int                            Scalar                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Offset                         (Parm, ZeroConstructor, IsPlainOldData)

void ACustomizableTimeService::MulticastOnTimeScalarOffsetRPC(int Scalar, int64_t Offset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.CustomizableTimeService.MulticastOnTimeScalarOffsetRPC"));

	ACustomizableTimeService_MulticastOnTimeScalarOffsetRPC_Params params;
	params.Scalar = Scalar;
	params.Offset = Offset;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
