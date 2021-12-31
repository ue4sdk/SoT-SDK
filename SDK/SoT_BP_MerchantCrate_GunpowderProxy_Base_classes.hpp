#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_GunpowderProxy_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_GunpowderProxy_Base.BP_MerchantCrate_GunpowderProxy_Base_C
// 0x0028 (0x0800 - 0x07D8)
class ABP_MerchantCrate_GunpowderProxy_Base_C : public AStaticMerchantCrateItemProxy
{
public:
	class UConfigurableBuryableItemComponent*          ConfigurableBuryableItem;                                 // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URewindComponent*                            Rewind;                                                   // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UItemHealthComponent*                        ItemHealth;                                               // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULightWeightStatusEffectManagerComponent*    LightweightStatusEffectManager;                           // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFlammableWieldableComponent*                FlammableWieldable;                                       // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MerchantCrate_GunpowderProxy_Base.BP_MerchantCrate_GunpowderProxy_Base_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
