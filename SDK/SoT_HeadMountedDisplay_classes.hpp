#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_HeadMountedDisplay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class HeadMountedDisplay.MotionControllerComponent
// 0x0030 (0x05E0 - 0x05B0)
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	int                                                PlayerIndex;                                              // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EControllerHand>                       Hand;                                                     // 0x05B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05B5(0x0003) MISSED OFFSET
	unsigned char                                      bDisableLowLatencyUpdate : 1;                             // 0x05B8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x27];                                      // 0x05B9(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class HeadMountedDisplay.MotionControllerComponent");
		return ptr;
	}


	bool IsTracked();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
