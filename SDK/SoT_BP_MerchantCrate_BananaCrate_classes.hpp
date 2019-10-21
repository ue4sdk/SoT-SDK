#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_BananaCrate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_BananaCrate.BP_MerchantCrate_BananaCrate_C
// 0x0030 (0x0838 - 0x0808)
class ABP_MerchantCrate_BananaCrate_C : public AMerchantCrate
{
public:
	class UBP_MerchantCrate_BananaCrate_StorageContainerComponent_C* BP_MerchantCrate_BananaCrate_StorageContainerComponent;   // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               HitVolume;                                                // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAddOpenContainerActionRuleComponent*        AddOpenContainerActionRule;                               // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPickupableComponent*                        Pickupable;                                               // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldable;                                          // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWieldableInteractableComponent*             WieldableInteractable;                                    // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MerchantCrate_BananaCrate.BP_MerchantCrate_BananaCrate_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
