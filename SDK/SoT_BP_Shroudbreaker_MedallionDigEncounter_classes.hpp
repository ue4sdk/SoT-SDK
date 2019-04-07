#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shroudbreaker_MedallionDigEncounter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Shroudbreaker_MedallionDigEncounter.BP_Shroudbreaker_MedallionDigEncounter_C
// 0x000C (0x00B4 - 0x00A8)
class UBP_Shroudbreaker_MedallionDigEncounter_C : public UBlueprintSpawnAIStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Killed;                                                   // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Shroudbreaker_MedallionDigEncounter.BP_Shroudbreaker_MedallionDigEncounter_C"));
		return ptr;
	}


	void OnDespawn(class APawn* Pawn, TEnumAsByte<ECharacterDeathType> DeathType);
	void ExecuteUbergraph_BP_Shroudbreaker_MedallionDigEncounter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
