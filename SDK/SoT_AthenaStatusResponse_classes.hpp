#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaStatusResponse_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaStatusResponse.StatusResponseApplyPersistentStatus
// 0x0020 (0x0048 - 0x0028)
class UStatusResponseApplyPersistentStatus : public UStatusResponse
{
public:
	struct FStatus                                     StatusToApply;                                            // 0x0028(0x0018) (Edit, DisableEditOnInstance)
	float                                              DurationMultiplier;                                       // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaStatusResponse.StatusResponseApplyPersistentStatus"));
		return ptr;
	}

};


// Class AthenaStatusResponse.StatusResponseCancelStatus
// 0x0010 (0x0038 - 0x0028)
class UStatusResponseCancelStatus : public UStatusResponse
{
public:
	TArray<class UClass*>                              Status;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaStatusResponse.StatusResponseCancelStatus"));
		return ptr;
	}

};


// Class AthenaStatusResponse.StatusResponseCook
// 0x0000 (0x0028 - 0x0028)
class UStatusResponseCook : public UStatusResponse
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaStatusResponse.StatusResponseCook"));
		return ptr;
	}

};


// Class AthenaStatusResponse.StatusResponseHealthRegenerationPoolChange
// 0x0008 (0x0030 - 0x0028)
class UStatusResponseHealthRegenerationPoolChange : public UStatusResponse
{
public:
	float                                              HealthPoolChangeIntensityMultiplier;                      // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaStatusResponse.StatusResponseHealthRegenerationPoolChange"));
		return ptr;
	}

};


// Class AthenaStatusResponse.StatusResponseReportNoiseEvent
// 0x0038 (0x0060 - 0x0028)
class UStatusResponseReportNoiseEvent : public UStatusResponse
{
public:
	struct FName                                       NoiseTag;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoiseRange;                                               // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoiseLoudness;                                            // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NoiseMultipleTicks;                                       // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              NoiseTimerTick;                                           // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaStatusResponse.StatusResponseReportNoiseEvent"));
		return ptr;
	}

};


// Class AthenaStatusResponse.StatusResponseSetScalarParamOnCharacter
// 0x0010 (0x0038 - 0x0028)
class UStatusResponseSetScalarParamOnCharacter : public UStatusResponse
{
public:
	TArray<struct FScalarParamInfo>                    ParamsToChange;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaStatusResponse.StatusResponseSetScalarParamOnCharacter"));
		return ptr;
	}

};


// Class AthenaStatusResponse.StatusResponseSuspendStatus
// 0x0010 (0x0038 - 0x0028)
class UStatusResponseSuspendStatus : public UStatusResponse
{
public:
	TArray<class UClass*>                              Status;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaStatusResponse.StatusResponseSuspendStatus"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
