#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WheelInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WheelInterface.BP_WheelInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_WheelInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_WheelInterface.BP_WheelInterface_C");
		return ptr;
	}


	void Receive_Animation_State(const struct FRotator& WheelRotation, float WheelAnimationTime, TEnumAsByte<EWheel> EWheel, float Direction, float WheelRate);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
