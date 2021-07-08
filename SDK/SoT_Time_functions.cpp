// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Time_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Time.TimeInterface.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameTime               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameTime UTimeInterface::GetTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeInterface.GetTime"));

	struct
	{
		struct FGameTime               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.TimeInterface.GetSmoothRealWorldTime
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FDateTime UTimeInterface::GetSmoothRealWorldTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeInterface.GetSmoothRealWorldTime"));

	struct
	{
		struct FDateTime               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.TimeInterface.GetPreciseRealWorldTime
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FDateTime UTimeInterface::GetPreciseRealWorldTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeInterface.GetPreciseRealWorldTime"));

	struct
	{
		struct FDateTime               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.TimeInterface.ConvertRealWorldTimeToGameWorldTime
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime               RealWorldTime                  (ConstParm, Parm, ZeroConstructor)
// struct FGameTime               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameTime UTimeInterface::ConvertRealWorldTimeToGameWorldTime(const struct FDateTime& RealWorldTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeInterface.ConvertRealWorldTimeToGameWorldTime"));

	struct
	{
		struct FDateTime               RealWorldTime;
		struct FGameTime               ReturnValue;
	} params;

	params.RealWorldTime = RealWorldTime;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.TimeInterface.ConvertGameWorldTimeToRealWorldTime
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameTime               GameWorldTime                  (ConstParm, Parm)
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FDateTime UTimeInterface::ConvertGameWorldTimeToRealWorldTime(const struct FGameTime& GameWorldTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeInterface.ConvertGameWorldTimeToRealWorldTime"));

	struct
	{
		struct FGameTime               GameWorldTime;
		struct FDateTime               ReturnValue;
	} params;

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

	struct
	{
		int                            RequestedTimeScalar;
	} params;

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

	struct
	{
		float                          SunsetHours;
	} params;

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

	struct
	{
		float                          SunriseHours;
	} params;

	params.SunriseHours = SunriseHours;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.CustomizableTimeInterface.SetGameWorldTime
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameTime               RequestedTime                  (ConstParm, Parm, OutParm, ReferenceParm)

void UCustomizableTimeInterface::SetGameWorldTime(const struct FGameTime& RequestedTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.CustomizableTimeInterface.SetGameWorldTime"));

	struct
	{
		struct FGameTime               RequestedTime;
	} params;

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

	struct
	{
		int                            ReturnValue;
	} params;


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

	struct
	{
		bool                           Enable;
	} params;

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

	struct
	{
		int                            RequestedTimeScalar;
	} params;

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

	struct
	{
		float                          SunsetHours;
	} params;

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

	struct
	{
		float                          SunriseHours;
	} params;

	params.SunriseHours = SunriseHours;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.DebugTimeInterface.SetGameWorldTime
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameTime               RequestedTime                  (ConstParm, Parm, OutParm, ReferenceParm)

void UDebugTimeInterface::SetGameWorldTime(const struct FGameTime& RequestedTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.DebugTimeInterface.SetGameWorldTime"));

	struct
	{
		struct FGameTime               RequestedTime;
	} params;

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

	struct
	{
		int                            ReturnValue;
	} params;


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

	struct
	{
		bool                           Enable;
	} params;

	params.Enable = Enable;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.TimeBlueprintLibrary.MakeReplicatedDateTimeFromDateTime
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime               InDateTime                     (Parm, ZeroConstructor)
// struct FReplicatedDateTime     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FReplicatedDateTime UTimeBlueprintLibrary::MakeReplicatedDateTimeFromDateTime(const struct FDateTime& InDateTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeBlueprintLibrary.MakeReplicatedDateTimeFromDateTime"));

	struct
	{
		struct FDateTime               InDateTime;
		struct FReplicatedDateTime     ReturnValue;
	} params;

	params.InDateTime = InDateTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.TimeBlueprintLibrary.MakeDateTimeFromReplicatedDateTime
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FReplicatedDateTime     InDateTime                     (Parm)
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FDateTime UTimeBlueprintLibrary::MakeDateTimeFromReplicatedDateTime(const struct FReplicatedDateTime& InDateTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeBlueprintLibrary.MakeDateTimeFromReplicatedDateTime"));

	struct
	{
		struct FReplicatedDateTime     InDateTime;
		struct FDateTime               ReturnValue;
	} params;

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
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FDateTime UTimeBlueprintLibrary::MakeDateTimeFromRaw(int Year, int Month, int Day, int Hour, int Minute, int Second, int Millisecond)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeBlueprintLibrary.MakeDateTimeFromRaw"));

	struct
	{
		int                            Year;
		int                            Month;
		int                            Day;
		int                            Hour;
		int                            Minute;
		int                            Second;
		int                            Millisecond;
		struct FDateTime               ReturnValue;
	} params;

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
// struct FDateTime               FirstDateTime                  (Parm, ZeroConstructor)
// struct FDateTime               SecondDateTime                 (Parm, ZeroConstructor)
// struct FTimespan               Tolerance                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTimeBlueprintLibrary::DateTimesWithinTolerance(const struct FDateTime& FirstDateTime, const struct FDateTime& SecondDateTime, const struct FTimespan& Tolerance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeBlueprintLibrary.DateTimesWithinTolerance"));

	struct
	{
		struct FDateTime               FirstDateTime;
		struct FDateTime               SecondDateTime;
		struct FTimespan               Tolerance;
		bool                           ReturnValue;
	} params;

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Time.TimeService.MulticastOnServiceTimeChangedRPC
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// int64_t                        ServiceTimeInTicks             (Parm, ZeroConstructor, IsPlainOldData)

void ATimeService::MulticastOnServiceTimeChangedRPC(int64_t ServiceTimeInTicks)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Time.TimeService.MulticastOnServiceTimeChangedRPC"));

	struct
	{
		int64_t                        ServiceTimeInTicks;
	} params;

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

	struct
	{
		int                            Scalar;
		int64_t                        Offset;
	} params;

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

	struct
	{
		int                            Scalar;
		int64_t                        Offset;
	} params;

	params.Scalar = Scalar;
	params.Offset = Offset;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
