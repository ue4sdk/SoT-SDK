#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TaleDistanceTrackerProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TaleDistanceTrackerProxy.BP_TaleDistanceTrackerProxy_C
// 0x0020 (0x04E0 - 0x04C0)
class ABP_TaleDistanceTrackerProxy_C : public ABP_TaleEventDispatcherProxy_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      TrackedTarget;                                            // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     TargetOrigin;                                             // 0x04D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TriggerDistance;                                          // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TaleDistanceTrackerProxy.BP_TaleDistanceTrackerProxy_C"));
		return ptr;
	}


	void Initialise(class AActor* TrackedTarget, const struct FVector& TargetOrigin, float TriggerDistance);
	void GetDistance(class AActor* ActorA, const struct FVector& ActorB, float* DistanceMagnitude);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_TaleDistanceTrackerProxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
