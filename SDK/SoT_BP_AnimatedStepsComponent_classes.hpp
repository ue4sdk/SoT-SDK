#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AnimatedStepsComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C
// 0x003C (0x0134 - 0x00F8)
class UBP_AnimatedStepsComponent_C : public UAnimatedStepsComponent
{
public:
	unsigned char                                      UnknownData00[0xEB];                                      // 0x00F8(0x00EB) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E3(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<float>                                      BoxDelays;                                                // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      BoxTargetZs;                                              // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCurveFloat*                                 AnimCurve;                                                // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementTimer;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimationDuration;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimationStartDelay;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C");
		return ptr;
	}


	void StartOpeningSteps();
	void SetAllStepsZs(bool OpeningOrClosing, TArray<float>* TargetZOffsets);
	void UpdateStep(int BoneIndex, float TargetZ, float MovementDelay, class UBoxComponent* AttachedBox, const struct FVector& BoxOrigin);
	void ReceiveTick(float* DeltaSeconds);
	void StartOpening();
	void OpenImmediate();
	void Close();
	void ExecuteUbergraph_BP_AnimatedStepsComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
