#pragma once

// Sea of Thieves (1.1.6) SDK

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
// 0x003B (0x08D0 - 0x0895)
class ABP_BaseInternalDamageZone_C : public ABP_DamageZone_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0895(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0898(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        RepairWood;                                               // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 Start_Repair_Cue;                                         // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWwiseEmitter                               RepairEmitter;                                            // 0x08B0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C");
		return ptr;
	}


	void OnRepairMounted();
	bool GetRepairMountLocation(class USceneComponent** MountLocation, struct FName* MountSocket);
	bool ShouldDrawTooltipInWorldSpace(class AActor** InInteractor, struct FVector* DesiredTooltipWorldPosition);
	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_BaseInternalDamageZone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
