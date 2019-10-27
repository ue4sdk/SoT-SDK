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
// 0x0080 (0x0150 - 0x00D0)
class UCleanlinessComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET
	class UCurveFloat*                                 DirtinessStrengthToMaterialStrength;                      // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FCleanlinessInfo                            CleanlinessInfo;                                          // 0x00E8(0x000C) (Net, Transient)
	float                                              DirtinessDecayRatePerSecond;                              // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              QuickCleanDirtynessDecayRatePerSecond;                    // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x54];                                      // 0x00FC(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Cleanliness.CleanlinessComponent"));
		return ptr;
	}


	void OnRep_CleanlinessInfo();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
