#pragma once

// Sea of Thieves (1.0.5) SDK

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
// 0x0090 (0x0868 - 0x07D8)
class ABP_DamageZone_C : public ADamageZone
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x07D8(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DamageZone.BP_DamageZone_C");
		return ptr;
	}


	void GetNumExternalHits(int* NumExternalHits);
	void Initialise();
	void Update_External_Hits();
	void OnRep_Rep_ExternalHitList();
	void Clear_Decal_Flags();
	void Add_Deferred_Decal(class UDecalComponent* Decal);
	void KillDeferredDecal(class UDecalComponent** Decal);
	void RemoveDeferredDecals();
	void Set_Repair_Visibility(bool Visible);
	void Add_External_Hit(const struct FHullDamageHit& HitData);
	void Show_Damage_Level(int DamageLevel);
	void Set_Damage_Level_Visibility(bool Visibility, int Damage_Level);
	void CollectTaggedComponents();
	void UserConstructionScript();
	void AddExternalHit(const struct FHullDamageHit& Hit_Data);
	void ClearDecalFlags();
	void OnDamageLevelUpdate(int* InDamageLevel);
	void OnRepairableStateUpdate(TEnumAsByte<ERepairableState>* InRepairableState);
	void OnInitialise();
	void ExecuteUbergraph_BP_DamageZone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
