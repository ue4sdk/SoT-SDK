#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MaidenVoyage_AnimatedPlayerShip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MaidenVoyage_AnimatedPlayerShip.BP_MaidenVoyage_AnimatedPlayerShip_C
// 0x0044 (0x04E4 - 0x04A0)
class ABP_MaidenVoyage_AnimatedPlayerShip_C : public ASkeletalMeshActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimNotifyWwiseEmitterComponent*            maidenvoyage_skellyship_emitter;                          // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Ship;                                                     // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetShip;                                               // 0x04B8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileGravityScale;                                   // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileSpeed;                                          // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Gravity;                                                  // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CannonFireCounter;                                        // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NearMissOffset;                                           // 0x04D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShotTimer;                                                // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MaidenVoyage_AnimatedPlayerShip.BP_MaidenVoyage_AnimatedPlayerShip_C"));
		return ptr;
	}


	void AngleBetweenVectors2D(const struct FVector& v1, const struct FVector& v2, float* Angle);
	void FireNearMissOnTarget();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void FireProjectile(const struct FVector& SpawnLocation, const struct FVector& LaunchVelocity);
	void ExecuteUbergraph_BP_MaidenVoyage_AnimatedPlayerShip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
