#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WheelsTests_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WheelsTests.WheelMock
// 0x0010 (0x04C0 - 0x04B0)
class AWheelMock : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04B0(0x0008) MISSED OFFSET
	float                                              WheelPosition;                                            // 0x04B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWheelDirection>                       AllowedWheelDirection;                                    // 0x04BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04BD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WheelsTests.WheelMock"));
		return ptr;
	}


	float GetNormalizedWheelPosition();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
