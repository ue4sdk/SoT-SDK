#pragma once

// Sea of Thieves (1.1.6) SDK

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
// 0x0040 (0x08E0 - 0x08A0)
class ABP_MerchantCrate_GunpowderBarrelProxy_C : public AStaticMerchantCrateItemProxy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFuseComponent*                              Fuse;                                                     // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UExplosiveComponent*                         ExplosiveComponent;                                       // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHealthComponent*                            HealthComponent;                                          // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorDamageableComponent*                   ActorDamageable;                                          // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               AttackHitVolume;                                          // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UExplosionComponent*                         ExplosionComponent;                                       // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x08D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerchantCrate_GunPowderBarrelProxy.BP_MerchantCrate_GunpowderBarrelProxy_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MerchantCrate_GunpowderBarrelProxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
