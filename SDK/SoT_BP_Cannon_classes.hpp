#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Cannon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Cannon.BP_Cannon_C
// 0x01D0 (0x0BD0 - 0x0A00)
class ABP_Cannon_C : public ACannon
{
public:
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x0A00(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cannon.BP_Cannon_C");
		return ptr;
	}


	struct FDockableInfo GetDockableInfo();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void CannonAimingCenteredPitch(const struct FEventCannonAimingCenteredPitch& Event);
	void CannonAimingStartedPitch(const struct FEventCannonAimingStartedPitch& Event);
	void CannonAimingStoppedPitch(const struct FEventCannonAimingStoppedPitch& Event);
	void CannonAimingCenteredYaw(const struct FEventCannonAimingCenteredYaw& Event);
	void CannonAimingStartedYaw(const struct FEventCannonAimingStartedYaw& Event);
	void CannonAimingStoppedYaw(const struct FEventCannonAimingStoppedYaw& Event);
	void OnCannonDescLoaded(class UCannonDescAsset** CannonDesc);
	void ExecuteUbergraph_BP_Cannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
