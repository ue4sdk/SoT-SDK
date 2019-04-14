#pragma once

// Sea of Thieves (1.4) SDK

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
// 0x0028 (0x04D0 - 0x04A8)
class ABP_TT_Lovers_Cutscene_Ghost_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            MaterialInstances;                                        // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TT_Lovers_Cutscene_Ghost.BP_TT_Lovers_Cutscene_Ghost_C"));
		return ptr;
	}


	void BindToAnimNotify();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void GhostCutsceneEventHandler(float GhostOpacity, float GhostBloom);
	void ExecuteUbergraph_BP_TT_Lovers_Cutscene_Ghost(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
