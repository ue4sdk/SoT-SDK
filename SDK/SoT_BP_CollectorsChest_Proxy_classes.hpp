#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CollectorsChest_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C
// 0x0020 (0x09A0 - 0x0980)
class ABP_CollectorsChest_Proxy_C : public ACollectorsChestItemProxy
{
public:
	class UCollectorsChestItemSlotInteractable*        ItemSlotInteractbale_3;                                   // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCollectorsChestItemSlotInteractable*        ItemSlotInteractable_2;                                   // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCollectorsChestItemSlotInteractable*        ItemSlotInteractable_1;                                   // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x0998(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
