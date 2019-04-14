#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CollectablePage_ScrollContainer_RevengeOfTheMorningstar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CollectablePage_ScrollContainer_RevengeOfTheMorningstar.BP_CollectablePage_ScrollContainer_RevengeOfTheMorningstar_C
// 0x0018 (0x0668 - 0x0650)
class ABP_CollectablePage_ScrollContainer_RevengeOfTheMorningstar_C : public ACollectableQuestObject
{
public:
	class UGlintComponent*                             Glint;                                                    // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable1;                                            // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CollectablePage_ScrollContainer_RevengeOfTheMorningstar.BP_CollectablePage_ScrollContainer_RevengeOfTheMorningstar_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
