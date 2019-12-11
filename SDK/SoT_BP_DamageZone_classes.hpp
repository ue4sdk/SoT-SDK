#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DamageZone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DamageZone.BP_DamageZone_C
// 0x0058 (0x07B8 - 0x0760)
class ABP_DamageZone_C : public ADamageZone
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0760(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       Repair_Tag;                                               // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_InternalDamageGroup                     RepairGroup;                                              // 0x0770(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                ExternalHitBufferIndex;                                   // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxStoredHits;                                            // 0x0784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UDecalComponent*>                     Deferred_Decals;                                          // 0x0788(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Rep_ServerUpdateEventCount;                               // 0x0798(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ClientUpdateEventCount;                                   // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExternalDecalBufferIndex;                                 // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasBeenInitialized;                                       // 0x07A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07A5(0x0003) MISSED OFFSET
	TArray<struct FHullDamageHit>                      Rep_ExternalHitList;                                      // 0x07A8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DamageZone.BP_DamageZone_C"));
		return ptr;
	}


	void GetNumExternalHits(int* NumExternalHits);
	void OnRep_Rep_ExternalHitList();
	void GetOrCreateDecalMID(class UMaterialInstanceDynamic** DecalMID);
	void Initialise();
	void Update_External_Hits();
	void Clear_Decal_Flags();
	void Add_Deferred_Decal(class UDecalComponent* Decal);
	void KillDeferredDecal(class UDecalComponent** Decal);
	void RemoveDeferredDecals();
	void Set_Repair_Visibility(bool Visible);
	void Add_External_Hit(const struct FHullDamageHit& HitData);
	void CollectTaggedComponents();
	void UserConstructionScript();
	void AddExternalHit(const struct FHullDamageHit& Hit_Data);
	void ClearDecalFlags();
	void OnRepairableStateUpdate(TEnumAsByte<ERepairableState> InRepairableState);
	void OnInitialise();
	void OnDecalMaterialUpdatedToRepaired();
	void ExecuteUbergraph_BP_DamageZone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
