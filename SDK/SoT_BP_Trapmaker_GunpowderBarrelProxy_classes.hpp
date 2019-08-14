#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Trapmaker_GunpowderBarrelProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Trapmaker_GunpowderBarrelProxy.BP_Trapmaker_GunpowderBarrelProxy_C
// 0x0038 (0x0880 - 0x0848)
class ABP_Trapmaker_GunpowderBarrelProxy_C : public AStaticMerchantCrateItemProxy
{
public:
	class UExplosiveTriggerRammableComponent*          ExplosiveTriggerRammable;                                 // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UExplosiveComponent*                         ExplosiveComponent;                                       // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHealthComponent*                            HealthComponent;                                          // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorDamageableComponent*                   ActorDamageable;                                          // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               AttackHitVolume;                                          // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UExplosionComponent*                         ExplosionComponent;                                       // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Trapmaker_GunpowderBarrelProxy.BP_Trapmaker_GunpowderBarrelProxy_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
