#pragma once

// Sea of Thieves (1.4) SDK

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
