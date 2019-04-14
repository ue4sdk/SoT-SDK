#pragma once

// Sea of Thieves (1.4) SDK

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
// 0x0038 (0x04E0 - 0x04A8)
class ABP_TaleDistanceTrackerProxy_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnDistanceTravelled;                                      // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
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
	void OnDistanceTravelled__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
