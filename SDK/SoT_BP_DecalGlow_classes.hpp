#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DecalGlow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DecalGlow.BP_DecalGlow_C
// 0x0035 (0x04CD - 0x0498)
class ABP_DecalGlow_C : public ALandmarkReactionActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            DecalMaterials;                                           // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ADecalActor*>                         DecalActors;                                              // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              Reveal_Duration;                                          // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GatheredMaterials;                                        // 0x04CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_DecalGlow.BP_DecalGlow_C");
		return ptr;
	}


	void StartGlowEffect();
	bool StartReaction();
	bool StopReaction();
	void CollectDecalMaterials();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DecalGlow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
