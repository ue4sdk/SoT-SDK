#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AggressiveGhostShip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AggressiveGhostShip.BP_AggressiveGhostShip_C
// 0x00A0 (0x0980 - 0x08E0)
class ABP_AggressiveGhostShip_C : public AAggressiveGhostShip
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWwiseEmitterComponent*                      WwiseEmitter;                                             // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTetherCustomisationComponent*               TetherCustomisation;                                      // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorDamageableComponent*                   ActorDamageable;                                          // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        IntersectionEffectMesh;                                   // 0x0900(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shroud;                                                   // 0x0908(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0910(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Collision;                                                // 0x0918(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       IgnoreForFadingTag;                                       // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeathFadeDuration;                                        // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactFadeDuration;                                       // 0x092C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FBPStruct_GhostImpact>               Impacts;                                                  // 0x0930(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               ImpactDataMaterialParameterNames;                         // 0x0940(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FBPStruct_GhostPersistentDamage>     PersistentDamageLocations;                                // 0x0950(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               PersistentDamageLocationsParameterNames;                  // 0x0960(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              PersistentDamageScale;                                    // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EntryPortalDistanceOffset;                                // 0x0974(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    IntersectionDynamicMaterial;                              // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AggressiveGhostShip.BP_AggressiveGhostShip_C"));
		return ptr;
	}


	void Show_All_Meshes();
	void EnablePortalClipPlane(const struct FTransform& PortalTransform);
	void DisablePortalClipPlane();
	void ApplyPersistentDamage(const struct FVector& Location);
	void ApplyPersistentDamageDataToMaterials();
	void ApplyImpactDataToMaterials();
	void AddImpact(const struct FVector& Position, float ImpactTime);
	void Set_Ship_Dead();
	void Hide_All_Meshes();
	void Set_Ship_Hidden();
	void Render_Meshes();
	void Set_Ship_Visible();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetShipDeadBP();
	void OnImpactBP(const struct FVector& HitLocation, const struct FVector& SurfaceNormal);
	void ResetVisualEffects();
	void SetShipHiddenBP(bool IsHidden);
	void IsDamagingOverlappingShipBP(bool IsOverlapping);
	void HideAllMeshesBP();
	void SetPersistentDamageScaleBP(float PersistentDamageScale);
	void EnablePortalClipPlaneBP(const struct FTransform& PortalTransform);
	void DisablePortalClipPlaneBP();
	void ExecuteUbergraph_BP_AggressiveGhostShip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
