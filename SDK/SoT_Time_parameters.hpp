#pragma once

// Sea of Thieves (1.1.1) SDK

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
	struct FGameTime                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Time.TimeInterface.GetSmoothRealWorldTime
struct UTimeInterface_GetSmoothRealWorldTime_Params
{
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Time.TimeInterface.GetPreciseRealWorldTime
struct UTimeInterface_GetPreciseRealWorldTime_Params
{
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Time.TimeInterface.ConvertRealWorldTimeToGameWorldTime
struct UTimeInterface_ConvertRealWorldTimeToGameWorldTime_Params
{
	struct FDateTime                                   RealWorldTime;                                            // (ConstParm, Parm, ZeroConstructor)
	struct FGameTime                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Time.TimeInterface.ConvertGameWorldTimeToRealWorldTime
struct UTimeInterface_ConvertGameWorldTimeToRealWorldTime_Params
{
	struct FGameTime                                   GameWorldTime;                                            // (ConstParm, Parm)
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Time.DebugTimeInterface.SetTimeSlowdownScalar
struct UDebugTimeInterface_SetTimeSlowdownScalar_Params
{
	float                                              RequestedSlowdownScalar;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Time.DebugTimeInterface.SetTimeScalar
struct UDebugTimeInterface_SetTimeScalar_Params
{
	int                                                RequestedTimeScalar;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Time.DebugTimeInterface.SetTimeCatchupScalar
struct UDebugTimeInterface_SetTimeCatchupScalar_Params
{
	float                                              RequestedCatchupScalar;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
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
	struct FGameTime                                   RequestedTime;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Time.DebugTimeInterface.GetTimeSlowdownScalar
struct UDebugTimeInterface_GetTimeSlowdownScalar_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Time.DebugTimeInterface.GetTimeScalar
struct UDebugTimeInterface_GetTimeScalar_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Time.DebugTimeInterface.GetTimeCatchupScalar
struct UDebugTimeInterface_GetTimeCatchupScalar_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Time.DebugTimeInterface.EnableQueryServiceTime
struct UDebugTimeInterface_EnableQueryServiceTime_Params
{
	bool                                               Enable;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Time.TimeBlueprintLibrary.MakeReplicatedDateTimeFromDateTime
struct UTimeBlueprintLibrary_MakeReplicatedDateTimeFromDateTime_Params
{
	struct FDateTime                                   InDateTime;                                               // (Parm, ZeroConstructor)
	struct FReplicatedDateTime                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Time.TimeBlueprintLibrary.MakeDateTimeFromReplicatedDateTime
struct UTimeBlueprintLibrary_MakeDateTimeFromReplicatedDateTime_Params
{
	struct FReplicatedDateTime                         InDateTime;                                               // (Parm)
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
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
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Time.TimeBlueprintLibrary.DateTimesWithinTolerance
struct UTimeBlueprintLibrary_DateTimesWithinTolerance_Params
{
	struct FDateTime                                   FirstDateTime;                                            // (Parm, ZeroConstructor)
	struct FDateTime                                   SecondDateTime;                                           // (Parm, ZeroConstructor)
	struct FTimespan                                   Tolerance;                                                // (Parm, ZeroConstructor)
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

// Function Time.DebugTimeService.MulticastOnSynchronizeTimeSpeedupRateRPC
struct ADebugTimeService_MulticastOnSynchronizeTimeSpeedupRateRPC_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Time.DebugTimeService.MulticastOnSynchronizeTimeSlowdownRateRPC
struct ADebugTimeService_MulticastOnSynchronizeTimeSlowdownRateRPC_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
