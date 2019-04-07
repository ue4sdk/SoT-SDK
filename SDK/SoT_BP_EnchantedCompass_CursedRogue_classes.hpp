#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_EnchantedCompass_CursedRogue_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_EnchantedCompass_CursedRogue.BP_EnchantedCompass_CursedRogue_C
// 0x0010 (0x0658 - 0x0648)
class ABP_EnchantedCompass_CursedRogue_C : public ACollectableQuestObject
{
public:
	class USkeletalMeshComponent*                      CompassMesh;                                              // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_EnchantedCompass_CursedRogue.BP_EnchantedCompass_CursedRogue_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
