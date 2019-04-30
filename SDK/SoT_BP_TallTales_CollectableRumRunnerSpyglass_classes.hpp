#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TallTales_CollectableRumRunnerSpyglass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TallTales_CollectableRumRunnerSpyglass.BP_TallTales_CollectableRumRunnerSpyglass_C
// 0x0018 (0x0668 - 0x0650)
class ABP_TallTales_CollectableRumRunnerSpyglass_C : public ACollectableQuestObject
{
public:
	class USkeletalMeshComponent*                      SpyglassMesh;                                             // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGlintComponent*                             Glint;                                                    // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TallTales_CollectableRumRunnerSpyglass.BP_TallTales_CollectableRumRunnerSpyglass_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
