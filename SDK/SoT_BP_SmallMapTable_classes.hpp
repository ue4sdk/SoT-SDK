#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallMapTable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmallMapTable.BP_SmallMapTable_C
// 0x0055 (0x07C5 - 0x0770)
class ABP_SmallMapTable_C : public AMapTable
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0770(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	UHitRegSnapshotRedirectImpactToReplicatedMovementAttachParentComponent* HitRegSnapshotRedirectImpactToReplicatedMovementAttachParent;// 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBoxComponent*                                     NavBlocker;                                               // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              ControlPoint_4;                                           // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              ControlPoint_3;                                           // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              ControlPoint_2;                                           // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              ControlPoint_1;                                           // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UTextureFeedbackComponent*                         TextureFeedback;                                          // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              Cube;                                                     // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              Map;                                                      // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActiveRange;                                              // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsActive;                                                 // 0x07C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SmallMapTable.BP_SmallMapTable_C"));
		return ptr;
	}


	void UpdateBlurEffect();
	FVector GetClosestInteractionPoint(const FVector& ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetEffectActiveWhenClose();
	void OnMapActivate(bool IsMapActive, UTextureRenderTarget2D* Texture);
	void OnMapMove(const FVector2D& CentreLocation, const FVector2D& ZoomLevel);
	void ExecuteUbergraph_BP_SmallMapTable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
