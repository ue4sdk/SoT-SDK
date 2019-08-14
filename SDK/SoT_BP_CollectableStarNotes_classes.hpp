#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CollectableStarNotes_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CollectableStarNotes.BP_CollectableStarNotes_C
// 0x0018 (0x0658 - 0x0640)
class ABP_CollectableStarNotes_C : public ACollectableQuestObject
{
public:
	class UStaticMeshComponent*                        NoteMesh;                                                 // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGlintComponent*                             Glint;                                                    // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable1;                                            // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CollectableStarNotes.BP_CollectableStarNotes_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
