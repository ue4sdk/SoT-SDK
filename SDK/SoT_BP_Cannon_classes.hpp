#pragma once

// Sea of Thieves (1.1.1) SDK

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
// 0x01D0 (0x0BF8 - 0x0A28)
class ABP_Cannon_C : public ACannon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A28(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UGroupedInteractableAreaComponent*           GroupedInteractableArea;                                  // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Collision;                                                // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FObjectMessagingHandle                      CannonAimingCenteredPitchEvent;                           // 0x0A48(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      CannonAimingStartedPitchEvent;                            // 0x0A90(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      CannonAimingStoppedPitchEvent;                            // 0x0AD8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      CannonAimingCenteredYawEvent;                             // 0x0B20(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      CannonAimingStartedYawEvent;                              // 0x0B68(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      CannonAimingStoppedYawEvent;                              // 0x0BB0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

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
