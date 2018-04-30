#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_HullDamage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HullDamage.BP_HullDamage_C
// 0x0094 (0x063C - 0x05A8)
class ABP_HullDamage_C : public AHullDamage
{
public:
	unsigned char                                      UnknownData00[0x94];                                      // 0x05A8(0x0094) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HullDamage.BP_HullDamage_C");
		return ptr;
	}


	void Apply_Hit(const struct FVector& HitPosition, const struct FVector& HitNormal, float HitStrength, bool Has_Decal, class UDecalComponent** Decal);
	void PlayHitSFX(const struct FVector& HitLocation, float HitStrenght);
	void Apply_Visual_Hit(const struct FVector& HitPosition, const struct FVector& HitNormal, float HitStrength, bool HasDecal, class UDecalComponent** Decal);
	void Process_Hit(class UClass* DamagerType, const struct FVector& HitPosition, const struct FVector& HitNormal, const struct FVector& HitVelocity, int NumDamageZones);
	void Scale_Hit_Strength_and_Get_Decal_Flag(const struct FVector& Hit_Normal, const struct FVector& Hit_Velocity, float Hit_Strength, float* Strength, bool* HasDecal);
	void Get_Random_Deferred_Decal(class UMaterialInterface** Decal_Material);
	void Get_Random_Persistent_Decal(class UTexture2D** Decal_Texture);
	void Add_Hit_To_HitList(const struct FVector& HitPosition, const struct FVector& Hit_Normal, float HitStrength, bool HasDecal, class AActor* DamageZone, int HitLevel);
	void Initialize_Damage_Materials(TArray<class UStaticMeshComponent*>* StaticMeshes);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature(const struct FImpactDamageEvent& ImpactDamageEvent);
	void ExecuteUbergraph_BP_HullDamage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
