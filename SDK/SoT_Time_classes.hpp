#pragma once

// Sea of Thieves (2.0) SDK

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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Time.TimeInterface"));
		return ptr;
	}


	struct FGameTime GetTime();
	struct FDateTime GetSmoothRealWorldTime();
	struct FDateTime GetPreciseRealWorldTime();
	struct FGameTime ConvertRealWorldTimeToGameWorldTime(const struct FDateTime& RealWorldTime);
	struct FDateTime ConvertGameWorldTimeToRealWorldTime(const struct FGameTime& GameWorldTime);
};


// Class Time.DebugTimeInterface
// 0x0000 (0x0028 - 0x0028)
class UDebugTimeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Time.DebugTimeInterface"));
		return ptr;
	}


	void SetTimeScalar(int RequestedTimeScalar);
	void SetSunset(float SunsetHours);
	void SetSunrise(float SunriseHours);
	void SetGameWorldTime(const struct FGameTime& RequestedTime);
	int GetTimeScalar();
	void EnableQueryServiceTime(bool Enable);
};


// Class Time.LocationProviderInterface
// 0x0000 (0x0028 - 0x0028)
class ULocationProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Time.LocationProviderInterface"));
		return ptr;
	}

};


// Class Time.TimeBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTimeBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Time.TimeBlueprintLibrary"));
		return ptr;
	}


	static struct FReplicatedDateTime MakeReplicatedDateTimeFromDateTime(const struct FDateTime& InDateTime);
	static struct FDateTime MakeDateTimeFromReplicatedDateTime(const struct FReplicatedDateTime& InDateTime);
	static struct FDateTime MakeDateTimeFromRaw(int Year, int Month, int Day, int Hour, int Minute, int Second, int Millisecond);
	static bool DateTimesWithinTolerance(const struct FDateTime& FirstDateTime, const struct FDateTime& SecondDateTime, const struct FTimespan& Tolerance);
};


// Class Time.TimeFormatterInterface
// 0x0000 (0x0028 - 0x0028)
class UTimeFormatterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Time.TimeFormatterInterface"));
		return ptr;
	}

};


// Class Time.TimeService
// 0x00F0 (0x0598 - 0x04A8)
class ATimeService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x04A8(0x0038) MISSED OFFSET
	struct FTimespan                                   GameWorldTimeOffset;                                      // 0x04E0(0x0008) (Edit, Net, ZeroConstructor, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04E8(0x0008) MISSED OFFSET
	struct FReplicatedAuthoritativeTime                ReplicatedServerTime;                                     // 0x04F0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net)
	uint32_t                                           TimeScalar;                                               // 0x0500(0x0004) (Edit, Net, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	uint32_t                                           NumberOfDaysInEachGameMonth;                              // 0x0504(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	double                                             ServiceTimeQueryRapidFrequencyOffsetMax;                  // 0x0508(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ServiceTimeQueryRapidFrequencyInSeconds;                  // 0x0510(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ServiceTimeQueryFrequencyInSeconds;                       // 0x0514(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ClientTimeUpdateFrequencyInSeconds;                       // 0x0518(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ClientDelayedMessageAdjustmentThreshold;                  // 0x051C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SunriseTimeHours;                                         // 0x0520(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SunsetTimeHours;                                          // 0x0524(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              LocalTimeUpdateAdjustMaxTimeDelta;                        // 0x0528(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              MinLocalTimeUpdateAdjustPercentageToSlowDown;             // 0x052C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLocalTimeUpdateAdjustPercentageToSlowDown;             // 0x0530(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              MinLocalTimeUpdateAdjustPercentageToSpeedUp;              // 0x0534(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLocalTimeUpdateAdjustPercentageToSpeedUp;              // 0x0538(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5C];                                      // 0x053C(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Time.TimeService"));
		return ptr;
	}


	void OnRep_ReplicatedServerTime();
	void MulticastOnServiceTimeChangedRPC(int64_t ServiceTimeInTicks);
};


// Class Time.DebugTimeService
// 0x0008 (0x05A0 - 0x0598)
class ADebugTimeService : public ATimeService
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0598(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Time.DebugTimeService"));
		return ptr;
	}


	void MulticastOnTimeScalarOffsetRPC(int Scalar, int64_t Offset);
};


// Class Time.TestTimeService
// 0x0000 (0x0598 - 0x0598)
class ATestTimeService : public ATimeService
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Time.TestTimeService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
