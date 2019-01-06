// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WheelInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WheelInterface.BP_WheelInterface_C.Receive Animation State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                WheelRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          WheelAnimationTime             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EWheel>            EWheel                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          WheelRate                      (Parm, ZeroConstructor, IsPlainOldData)

void UBP_WheelInterface_C::Receive_Animation_State(const struct FRotator& WheelRotation, float WheelAnimationTime, TEnumAsByte<EWheel> EWheel, float Direction, float WheelRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheelInterface.BP_WheelInterface_C.Receive Animation State");

	struct
	{
		struct FRotator                WheelRotation;
		float                          WheelAnimationTime;
		TEnumAsByte<EWheel>            EWheel;
		float                          Direction;
		float                          WheelRate;
	} params;

	params.WheelRotation = WheelRotation;
	params.WheelAnimationTime = WheelAnimationTime;
	params.EWheel = EWheel;
	params.Direction = Direction;
	params.WheelRate = WheelRate;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
