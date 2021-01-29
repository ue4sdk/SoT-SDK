#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_GunPowderBarrelProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_GunPowderBarrelProxy.BP_MerchantCrate_GunpowderBarrelProxy_C
// 0x0040 (0x0870 - 0x0830)
class ABP_MerchantCrate_GunpowderBarrelProxy_C : public ABP_MerchantCrate_GunpowderProxy_Base_C
{
public:
	class UWaterHeightProviderComponent*               WaterHeightProvider;                                      // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UExplosiveTriggerRammableComponent*          ExplosiveTriggerRammable;                                 // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFuseComponent*                              Fuse;                                                     // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UExplosiveComponent*                         ExplosiveComponent;                                       // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorDamageableComponent*                   ActorDamageable;                                          // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               AttackHitVolume;                                          // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UExplosionComponent*                         ExplosionComponent;                                       // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MerchantCrate_GunPowderBarrelProxy.BP_MerchantCrate_GunpowderBarrelProxy_C"));
		return ptr;
	}


	unsigned char GetPxActorCapacityForPhysXAggregate();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
