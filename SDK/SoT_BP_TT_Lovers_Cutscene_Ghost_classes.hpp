#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TT_Lovers_Cutscene_Ghost_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TT_Lovers_Cutscene_Ghost.BP_TT_Lovers_Cutscene_Ghost_C
// 0x0038 (0x0448 - 0x0410)
class ABP_TT_Lovers_Cutscene_Ghost_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        shroud;                                                   // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            MaterialInstances;                                        // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    ShroudDynamicMaterial;                                    // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TT_Lovers_Cutscene_Ghost.BP_TT_Lovers_Cutscene_Ghost_C"));
		return ptr;
	}


	void BindToAnimNotify();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void GhostCutsceneEventHandler(float GhostOpacity, float GhostBloom, float ShroudAmount);
	void ExecuteUbergraph_BP_TT_Lovers_Cutscene_Ghost(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
