#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Time_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Time.TimeInterface
// 0x0000 (0x0028 - 0x0028)
class UTimeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Time.TimeInterface");
		return ptr;
	}


	struct FDateTime GetTime();
	struct FDateTime GetSmoothRealWorldTime();
	struct FDateTime GetPreciseRealWorldTime();
};


// Class Time.DebugTimeInterface
// 0x0000 (0x0028 - 0x0028)
class UDebugTimeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Time.DebugTimeInterface");
		return ptr;
	}


	void SetTimeSlowdownScalar(float RequestedSlowdownScalar);
	void SetTimeScalar(int RequestedTimeScalar);
	void SetTimeCatchupScalar(float RequestedCatchupScalar);
	void SetGameWorldTime(const struct FDateTime& RequestedTime);
	float GetTimeSlowdownScalar();
	int GetTimeScalar();
	float GetTimeCatchupScalar();
	void EnableQueryServiceTime(bool Enable);
};


// Class Time.TimeBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTimeBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Time.TimeBlueprintLibrary");
		return ptr;
	}


	struct FReplicatedDateTime STATIC_MakeReplicatedDateTimeFromDateTime(const struct FDateTime& InDateTime);
	struct FDateTime STATIC_MakeDateTimeFromReplicatedDateTime(const struct FReplicatedDateTime& InDateTime);
	struct FDateTime STATIC_MakeDateTimeFromRaw(int Year, int Month, int Day, int Hour, int Minute, int Second, int Millisecond);
	bool STATIC_DateTimesWithinTolerance(const struct FDateTime& FirstDateTime, const struct FDateTime& SecondDateTime, const struct FTimespan& Tolerance);
};


// Class Time.TimeService
// 0x0088 (0x04F8 - 0x0470)
class ATimeService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0470(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Time.TimeService");
		return ptr;
	}


	void OnRep_ReplicatedServerTime();
	void MulticastOnServiceTimeChangedRPC(int64_t ServiceTimeInTicks);
};


// Class Time.DebugTimeService
// 0x0008 (0x0500 - 0x04F8)
class ADebugTimeService : public ATimeService
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Time.DebugTimeService");
		return ptr;
	}


	void MulticastOnTimeScalarOffsetRPC(int Scalar, int64_t Offset);
	void MulticastOnSynchronizeTimeSpeedupRateRPC(float Rate);
	void MulticastOnSynchronizeTimeSlowdownRateRPC(float Rate);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
