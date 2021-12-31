#pragma once

// Sea of Thieves (2) SDK

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
// 0x0088 (0x05F0 - 0x0568)
class ABP_HullDamage_C : public AHullDamage
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0568(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	UHitReactionComponent*                             HitReaction;                                              // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBakedDecalComponent*                              ImpactDecalComponent;                                     // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<UTexture2D*>                                Persistent_Damage_Decals;                                 // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	UParticleSystem*                                   Damage_VFX;                                               // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<UMaterialInstance*>                         Deferred_Damage_Decals;                                   // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Deferred_Min_Size;                                        // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Deferred_Max_Size;                                        // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Persistent_Min_Size;                                      // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Persistent_Max_Size;                                      // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FRandomStream                                      RandomDecalStream;                                        // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TEST_HitStrength;                                         // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TEST_PenetrationThreshold;                                // 0x05C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	AShip*                                             ParentShip;                                               // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	FWwiseEmitter                                      CannonballHitEmitter;                                     // 0x05D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_HullDamage.BP_HullDamage_C"));
		return ptr;
	}


	void Apply_Hit(const FVector& HitPosition, const FVector& HitNormal, float HitStrength, bool Has_Decal, UDecalComponent** Decal);
	void PlayHitSFX(const FVector& HitLocation, float HitStrenght);
	void Apply_Visual_Hit(const FVector& HitPosition, const FVector& HitNormal, float HitStrength, bool HasDecal, UDecalComponent** Decal);
	void Process_Hit(FImpactDamageEvent* ImpactDamageEvent);
	void Scale_Hit_Strength_and_Get_Decal_Flag(const FVector& Hit_Normal, const FVector& Hit_Velocity, float Hit_Strength, float* Strength, bool* HasDecal);
	void Get_Random_Deferred_Decal(UMaterialInterface** Decal_Material);
	void Get_Random_Persistent_Decal(UTexture2D** Decal_Texture);
	void Initialize_Damage_Materials(TArray<UStaticMeshComponent*>* StaticMeshes);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature(const FImpactDamageEvent& ImpactDamageEvent);
	void ExecuteUbergraph_BP_HullDamage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
