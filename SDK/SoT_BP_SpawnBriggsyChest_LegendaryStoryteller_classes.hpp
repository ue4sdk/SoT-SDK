#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SpawnBriggsyChest_LegendaryStoryteller_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SpawnBriggsyChest_LegendaryStoryteller.BP_SpawnBriggsyChest_LegendaryStoryteller_C
// 0x0010 (0x00A8 - 0x0098)
class UBP_SpawnBriggsyChest_LegendaryStoryteller_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      BriggsyChest;                                             // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SpawnBriggsyChest_LegendaryStoryteller.BP_SpawnBriggsyChest_LegendaryStoryteller_C"));
		return ptr;
	}


	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void OnItemPickedUp();
	void ExecuteUbergraph_BP_SpawnBriggsyChest_LegendaryStoryteller(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
