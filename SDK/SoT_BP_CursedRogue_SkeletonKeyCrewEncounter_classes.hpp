#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CursedRogue_SkeletonKeyCrewEncounter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CursedRogue_SkeletonKeyCrewEncounter.BP_CursedRogue_SkeletonKeyCrewEncounter_C
// 0x0010 (0x00B8 - 0x00A8)
class UBP_CursedRogue_SkeletonKeyCrewEncounter_C : public UBlueprintSpawnAIStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class APawn*                                       Target;                                                   // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CursedRogue_SkeletonKeyCrewEncounter.BP_CursedRogue_SkeletonKeyCrewEncounter_C"));
		return ptr;
	}


	void TriggerEventProxyBroadcast();
	void OnDespawn(class APawn* Pawn, TEnumAsByte<ECharacterDeathType> DeathType);
	void ItemPickedUp();
	void OnSpawn(class APawn* Pawn);
	void ExecuteUbergraph_BP_CursedRogue_SkeletonKeyCrewEncounter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
