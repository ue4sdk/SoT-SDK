#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RevengeOfTheMorningstar_SetupVariables_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RevengeOfTheMorningstar_SetupVariables.BP_RevengeOfTheMorningstar_SetupVariables_C
// 0x0018 (0x00B0 - 0x0098)
class UBP_RevengeOfTheMorningstar_SetupVariables_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<TAssetPtr<class AActor>>                    TempGraymarrowPossibleLocations;                          // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_RevengeOfTheMorningstar_SetupVariables.BP_RevengeOfTheMorningstar_SetupVariables_C"));
		return ptr;
	}


	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void ExecuteUbergraph_BP_RevengeOfTheMorningstar_SetupVariables(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
