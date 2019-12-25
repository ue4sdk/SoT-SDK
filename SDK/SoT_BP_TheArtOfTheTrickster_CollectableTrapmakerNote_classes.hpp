#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TheArtOfTheTrickster_CollectableTrapmakerNote_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TheArtOfTheTrickster_CollectableTrapmakerNote.BP_TheArtOfTheTrickster_CollectableTrapmakerNote_C
// 0x0018 (0x05B8 - 0x05A0)
class ABP_TheArtOfTheTrickster_CollectableTrapmakerNote_C : public ACollectableQuestObject
{
public:
	class UStaticMeshComponent*                        NoteMesh;                                                 // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGlintComponent*                             Glint;                                                    // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable1;                                            // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TheArtOfTheTrickster_CollectableTrapmakerNote.BP_TheArtOfTheTrickster_CollectableTrapmakerNote_C"));
		return ptr;
	}


	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
