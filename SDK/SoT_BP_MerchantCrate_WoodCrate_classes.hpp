#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_WoodCrate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_WoodCrate.BP_MerchantCrate_WoodCrate_C
// 0x0018 (0x0820 - 0x0808)
class ABP_MerchantCrate_WoodCrate_C : public AMerchantCrate
{
public:
	class UWieldableInteractableComponent*             WieldableInteractable;                                    // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageContainerComponent*                  StorageContainer;                                         // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerchantCrate_WoodCrate.BP_MerchantCrate_WoodCrate_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
