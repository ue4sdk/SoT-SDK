#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_OnboardingBeacon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_OnboardingBeacon.BP_OnboardingBeacon_C
// 0x0019 (0x0841 - 0x0828)
class ABP_OnboardingBeacon_C : public ABeacon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0828(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            ActivationSphere;                                         // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_fire_beacon_onboarding;                               // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // 0x0840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_OnboardingBeacon.BP_OnboardingBeacon_C"));
		return ptr;
	}


	void SetActive(bool Active);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void SetActiveState(bool Active);
	void ExecuteUbergraph_BP_OnboardingBeacon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
