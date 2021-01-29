#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Wayfinder_MultiTargetCompass_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Wayfinder_MultiTargetCompass_Wieldable.BP_Wayfinder_MultiTargetCompass_Wieldable_C
// 0x00B8 (0x0988 - 0x08D0)
class ABP_Wayfinder_MultiTargetCompass_Wieldable_C : public APrototypeMultiTargetEnchantedCompass
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*                    RetargetGlowDynamicMaterial;                              // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FObjectMessagingHandle                      OnWieldedHandle;                                          // 0x08E0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MinTrackingDistance;                                      // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTrackingDistance;                                      // 0x092C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetDistance;                                           // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0934(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetYaw;                                                // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseYaw;                                                  // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              OutputYaw;                                                // 0x0948(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x094C(0x0004) MISSED OFFSET
	TArray<struct FWayfinderWobbleData>                WobbleCurves;                                             // 0x0950(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      WobbleTimes;                                              // 0x0960(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	class UCurveFloat*                                 SpinCurve;                                                // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              YawVelocity;                                              // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YawAcceleration;                                          // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YawTargetSpeed;                                           // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YawDamping;                                               // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Wayfinder_MultiTargetCompass_Wieldable.BP_Wayfinder_MultiTargetCompass_Wieldable_C"));
		return ptr;
	}


	float CalculateDesiredYaw(const struct FRotator& CompassRotation);
	void RemoveTargetImpl(class AActor* Target);
	void AddTargetImpl(class AActor* NewTarget);
	void GetTargetLocation(const struct FVector& WielderLocation);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Wayfinder_MultiTargetCompass_Wieldable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
