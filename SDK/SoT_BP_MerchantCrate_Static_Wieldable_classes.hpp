#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_Static_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_Static_Wieldable.BP_MerchantCrate_Static_Wieldable_C
// 0x0040 (0x0870 - 0x0830)
class ABP_MerchantCrate_Static_Wieldable_C : public AStaticMerchantCrate
{
public:
	class ULightWeightStatusEffectManagerComponent*    LightweightStatusEffectManager;                           // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFlammableWieldableComponent*                FlammableWieldable;                                       // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               HitVolume;                                                // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWieldableInteractableComponent*             WieldableInteractable;                                    // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPickupableComponent*                        Pickupable;                                               // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldable;                                          // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFeedingComponent*                           Feeding;                                                  // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMountpointComponent*                        Mountpoint;                                               // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MerchantCrate_Static_Wieldable.BP_MerchantCrate_Static_Wieldable_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
