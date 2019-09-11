#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TT_Shores_CutSceneGhost_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TT_Shores_CutSceneGhost.BP_TT_Shores_CutSceneGhost_C
// 0x0030 (0x04D8 - 0x04A8)
class ABP_TT_Shores_CutSceneGhost_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            MaterialInstance;                                         // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              VerticalFadeStart;                                        // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalFadeEnd;                                          // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CurrentDynamicMaterial;                                   // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TT_Shores_CutSceneGhost.BP_TT_Shores_CutSceneGhost_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void GhostCutsceneEventHandler(float GhostOpacity, float GhostBloom, float ShroudOpacity);
	void ExecuteUbergraph_BP_TT_Shores_CutSceneGhost(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
