#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CursedRogue_CollectorsChestItemGenerator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CursedRogue_CollectorsChestItemGenerator.BP_CursedRogue_CollectorsChestItemGenerator_C
// 0x0008 (0x00A0 - 0x0098)
class UBP_CursedRogue_CollectorsChestItemGenerator_C : public UTaleQuestParallelForeachStep
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CursedRogue_CollectorsChestItemGenerator.BP_CursedRogue_CollectorsChestItemGenerator_C"));
		return ptr;
	}


	void ForIndex(int Index);
	void ExecuteUbergraph_BP_CursedRogue_CollectorsChestItemGenerator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
