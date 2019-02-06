#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_BigGunpowderBarrel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_BigGunpowderBarrel.BP_MerchantCrate_BigGunpowderBarrel_C
// 0x0040 (0x0860 - 0x0820)
class ABP_MerchantCrate_BigGunpowderBarrel_C : public AStaticMerchantCrate
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0820(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFuseComponent*                              Fuse;                                                     // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               StashedAttackHitVolume;                                   // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               AttackHitVolume;                                          // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UExplosionComponent*                         Explosion;                                                // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UExplosiveComponent*                         Explosive;                                                // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHealthComponent*                            Health;                                                   // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorDamageableComponent*                   ActorDamageable;                                          // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MerchantCrate_BigGunpowderBarrel.BP_MerchantCrate_BigGunpowderBarrel_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MerchantCrate_BigGunpowderBarrel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
