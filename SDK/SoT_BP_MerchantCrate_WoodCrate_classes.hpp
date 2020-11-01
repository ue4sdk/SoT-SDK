#pragma once

// Sea of Thieves (2.0) SDK

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
// 0x0038 (0x0888 - 0x0850)
class ABP_MerchantCrate_WoodCrate_C : public AStaticMerchantCrate
{
public:
	class UMaterialManipulationComponent*              MaterialManipulation;                                     // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               HitVolume;                                                // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAddOpenContainerActionRuleComponent*        AddOpenContainerActionRule;                               // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPickupableComponent*                        Pickupable;                                               // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldable;                                          // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWieldableInteractableComponent*             WieldableInteractable;                                    // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageContainerComponent*                  StorageContainer;                                         // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MerchantCrate_WoodCrate.BP_MerchantCrate_WoodCrate_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
