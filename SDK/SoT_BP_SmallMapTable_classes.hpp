#pragma once

// Sea of Thieves (1.1.6) SDK

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
// 0x004D (0x068D - 0x0640)
class ABP_SmallMapTable_C : public AMapTable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0640(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        ControlPoint_4;                                           // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ControlPoint_3;                                           // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ControlPoint_2;                                           // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ControlPoint_1;                                           // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureFeedbackComponent*                   TextureFeedback;                                          // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Cube;                                                     // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Map;                                                      // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActiveRange;                                              // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsActive;                                                 // 0x068C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SmallMapTable.BP_SmallMapTable_C");
		return ptr;
	}


	void UpdateBlurEffect();
	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetEffectActiveWhenClose();
	void OnMapActivate(bool* IsMapActive, class UTextureRenderTarget2D** Texture);
	void OnMapMove(struct FVector2D* CentreLocation, float* ZoomLevel);
	void ExecuteUbergraph_BP_SmallMapTable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
