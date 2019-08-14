#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CollectableEnchantedLantern_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CollectableEnchantedLantern.BP_CollectableEnchantedLantern_C
// 0x0010 (0x0650 - 0x0640)
class ABP_CollectableEnchantedLantern_C : public ACollectableQuestObject
{
public:
	class UInteractableComponent*                      Interactable;                                             // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        LaternMesh;                                               // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CollectableEnchantedLantern.BP_CollectableEnchantedLantern_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
