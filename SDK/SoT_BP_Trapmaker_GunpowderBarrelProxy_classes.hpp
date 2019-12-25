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
// 0x0030 (0x0818 - 0x07E8)
class ABP_Trapmaker_GunpowderBarrelProxy_C : public ABP_MerchantCrate_GunpowderProxy_Base_C
{
public:
	class UExplosiveTriggerRammableComponent*          ExplosiveTriggerRammable;                                 // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UExplosiveComponent*                         ExplosiveComponent;                                       // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorDamageableComponent*                   ActorDamageable;                                          // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               AttackHitVolume;                                          // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UExplosionComponent*                         ExplosionComponent;                                       // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
