#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Cleanliness_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Cleanliness.CleanlinessInterface
// 0x0000 (0x0028 - 0x0028)
class UCleanlinessInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Cleanliness.CleanlinessInterface"));
		return ptr;
	}

};


// Class Cleanliness.CleanlinessTransferInterface
// 0x0000 (0x0028 - 0x0028)
class UCleanlinessTransferInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Cleanliness.CleanlinessTransferInterface"));
		return ptr;
	}

};


// Class Cleanliness.CleanlinessComponent
// 0x0050 (0x0120 - 0x00D0)
class UCleanlinessComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET
	struct FCleanlinessInfo                            CleanlinessInfo;                                          // 0x00E0(0x0010) (Net, Transient)
	float                                              DirtinessDecayRatePerSecond;                              // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x00F4(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Cleanliness.CleanlinessComponent"));
		return ptr;
	}


	void OnRep_CleanlinessInfo(const struct FCleanlinessInfo& PreviousInfo);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
