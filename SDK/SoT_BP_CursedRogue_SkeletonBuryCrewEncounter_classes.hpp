#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CursedRogue_SkeletonBuryCrewEncounter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CursedRogue_SkeletonBuryCrewEncounter.BP_CursedRogue_SkeletonBuryCrewEncounter_C
// 0x0018 (0x00C8 - 0x00B0)
class UBP_CursedRogue_SkeletonBuryCrewEncounter_C : public UBlueprintSpawnAIStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class APawn*                                       Target;                                                   // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                Spawned;                                                  // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Killed;                                                   // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CursedRogue_SkeletonBuryCrewEncounter.BP_CursedRogue_SkeletonBuryCrewEncounter_C"));
		return ptr;
	}


	void TriggerEventProxyBroadcast();
	void OnDespawn(class APawn* Pawn, TEnumAsByte<ECharacterDeathType> DeathType);
	void OnSpawn(class APawn* Pawn);
	void ExecuteUbergraph_BP_CursedRogue_SkeletonBuryCrewEncounter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
