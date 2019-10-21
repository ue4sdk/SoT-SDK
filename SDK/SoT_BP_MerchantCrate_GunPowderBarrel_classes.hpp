#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_GunPowderBarrel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_GunPowderBarrel.BP_MerchantCrate_GunpowderBarrel_C
// 0x0048 (0x0878 - 0x0830)
class ABP_MerchantCrate_GunpowderBarrel_C : public ABP_MerchantCrate_GunpowderBarrel_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0830(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFlammableWieldableComponent*                FlammableWieldable_1;                                     // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULightWeightStatusEffectManagerComponent*    LightweightStatusEffectManager_1;                         // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFuseComponent*                              Fuse;                                                     // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               StashedAttackHitVolume;                                   // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               AttackHitVolume;                                          // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UExplosionComponent*                         Explosion;                                                // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UExplosiveComponent*                         Explosive;                                                // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorDamageableComponent*                   ActorDamageable;                                          // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MerchantCrate_GunPowderBarrel.BP_MerchantCrate_GunpowderBarrel_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MerchantCrate_GunpowderBarrel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
