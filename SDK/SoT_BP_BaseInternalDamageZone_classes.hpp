#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BaseInternalDamageZone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C
// 0x0038 (0x07F0 - 0x07B8)
class ABP_BaseInternalDamageZone_C : public ABP_DamageZone_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        RepairWood;                                               // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 Start_Repair_Cue;                                         // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWwiseEmitter                               RepairEmitter;                                            // 0x07D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C"));
		return ptr;
	}


	void OnRepairMounted();
	bool GetRepairMountLocation(class USceneComponent** MountLocation, struct FName* MountSocket);
	bool ShouldDrawTooltipInWorldSpace(class AActor* InInteractor, struct FVector* DesiredTooltipWorldPosition);
	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_BaseInternalDamageZone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
