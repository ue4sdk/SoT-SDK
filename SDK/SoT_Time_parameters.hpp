#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Time_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Time.TimeInterface.GetTime
struct UTimeInterface_GetTime_Params
{
	FGameTime                                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Time.TimeInterface.GetSmoothRealWorldTime
struct UTimeInterface_GetSmoothRealWorldTime_Params
{
	FDateTime                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Time.TimeInterface.GetPreciseRealWorldTime
struct UTimeInterface_GetPreciseRealWorldTime_Params
{
	FDateTime                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Time.TimeInterface.ConvertRealWorldTimeToGameWorldTime
struct UTimeInterface_ConvertRealWorldTimeToGameWorldTime_Params
{
	FDateTime                                          RealWorldTime;                                            // (ConstParm, Parm, ZeroConstructor)
	FGameTime                                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Time.TimeInterface.ConvertGameWorldTimeToRealWorldTime
struct UTimeInterface_ConvertGameWorldTimeToRealWorldTime_Params
{
	FGameTime                                          GameWorldTime;                                            // (ConstParm, Parm)
	FDateTime                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Time.CustomizableTimeInterface.SetTimeScalar
struct UCustomizableTimeInterface_SetTimeScalar_Params
{
	int                                                RequestedTimeScalar;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Time.CustomizableTimeInterface.SetSunset
struct UCustomizableTimeInterface_SetSunset_Params
{
	float                                              SunsetHours;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Time.CustomizableTimeInterface.SetSunrise
struct UCustomizableTimeInterface_SetSunrise_Params
{
	float                                              SunriseHours;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Time.CustomizableTimeInterface.SetGameWorldTime
struct UCustomizableTimeInterface_SetGameWorldTime_Params
{
	FGameTime                                          RequestedTime;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Time.CustomizableTimeInterface.GetTimeScalar
struct UCustomizableTimeInterface_GetTimeScalar_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Time.CustomizableTimeInterface.EnableQueryServiceTime
struct UCustomizableTimeInterface_EnableQueryServiceTime_Params
{
	bool                                               Enable;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Time.DebugTimeInterface.SetTimeScalar
struct UDebugTimeInterface_SetTimeScalar_Params
{
	int                                                RequestedTimeScalar;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Time.DebugTimeInterface.SetSunset
struct UDebugTimeInterface_SetSunset_Params
{
	float                                              SunsetHours;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Time.DebugTimeInterface.SetSunrise
struct UDebugTimeInterface_SetSunrise_Params
{
	float                                              SunriseHours;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Time.DebugTimeInterface.SetGameWorldTime
struct UDebugTimeInterface_SetGameWorldTime_Params
{
	FGameTime                                          RequestedTime;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Time.DebugTimeInterface.GetTimeScalar
struct UDebugTimeInterface_GetTimeScalar_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Time.DebugTimeInterface.EnableQueryServiceTime
struct UDebugTimeInterface_EnableQueryServiceTime_Params
{
	bool                                               Enable;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Time.TimeBlueprintLibrary.MakeReplicatedDateTimeFromDateTime
struct UTimeBlueprintLibrary_MakeReplicatedDateTimeFromDateTime_Params
{
	FDateTime                                          InDateTime;                                               // (Parm, ZeroConstructor)
	FReplicatedDateTime                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Time.TimeBlueprintLibrary.MakeDateTimeFromReplicatedDateTime
struct UTimeBlueprintLibrary_MakeDateTimeFromReplicatedDateTime_Params
{
	FReplicatedDateTime                                InDateTime;                                               // (Parm)
	FDateTime                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Time.TimeBlueprintLibrary.MakeDateTimeFromRaw
struct UTimeBlueprintLibrary_MakeDateTimeFromRaw_Params
{
	int                                                Year;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Month;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Day;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Hour;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Minute;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Second;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Millisecond;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FDateTime                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Time.TimeBlueprintLibrary.DateTimesWithinTolerance
struct UTimeBlueprintLibrary_DateTimesWithinTolerance_Params
{
	FDateTime                                          FirstDateTime;                                            // (Parm, ZeroConstructor)
	FDateTime                                          SecondDateTime;                                           // (Parm, ZeroConstructor)
	FTimespan                                          Tolerance;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Time.TimeService.OnRep_ReplicatedServerTime
struct ATimeService_OnRep_ReplicatedServerTime_Params
{
};

// Function Time.TimeService.MulticastOnServiceTimeChangedRPC
struct ATimeService_MulticastOnServiceTimeChangedRPC_Params
{
	int64_t                                            ServiceTimeInTicks;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Time.DebugTimeService.MulticastOnTimeScalarOffsetRPC
struct ADebugTimeService_MulticastOnTimeScalarOffsetRPC_Params
{
	int                                                Scalar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Time.CustomizableTimeService.MulticastOnTimeScalarOffsetRPC
struct ACustomizableTimeService_MulticastOnTimeScalarOffsetRPC_Params
{
	int                                                Scalar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
