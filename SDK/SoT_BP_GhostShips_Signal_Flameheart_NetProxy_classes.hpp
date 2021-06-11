#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GhostShips_Signal_Flameheart_NetProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GhostShips_Signal_Flameheart_NetProxy.BP_GhostShips_Signal_Flameheart_NetProxy_C
// 0x0048 (0x04A0 - 0x0458)
class ABP_GhostShips_Signal_Flameheart_NetProxy_C : public ANetProxy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0458(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URotateMeshToLocalPlayerComponent*           RotateMeshToLocalPlayer;                                  // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FarCloudDistortion;                                       // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shroud;                                                   // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeIn_GhostBloom_8A3F310E4DA80126C74D32B4D69B71D3;       // 0x0478(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FadeIn_GhostOpacity_8A3F310E4DA80126C74D32B4D69B71D3;     // 0x047C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeIn__Direction_8A3F310E4DA80126C74D32B4D69B71D3;       // 0x0480(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0481(0x0007) MISSED OFFSET
	class UTimelineComponent*                          FadeIn;                                                   // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GhostShips_Signal_Flameheart_NetProxy.BP_GhostShips_Signal_Flameheart_NetProxy_C"));
		return ptr;
	}


	void CollectMaterials();
	void UserConstructionScript();
	void FadeIn__FinishedFunc();
	void FadeIn__UpdateFunc();
	void ReceiveBeginPlay();
	void FlameheartAppear();
	void FlameheartDisappear();
	void BndEvt__Default__BP_GhostShips_Signal_Flameheart_NetProxy_C_K2Node_InstancedActorBoundEvent_3_NetProxyVisibilityChanged__DelegateSignature(bool IsVisible);
	void ExecuteUbergraph_BP_GhostShips_Signal_Flameheart_NetProxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
