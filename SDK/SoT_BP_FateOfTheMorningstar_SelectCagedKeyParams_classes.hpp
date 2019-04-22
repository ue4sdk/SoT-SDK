#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FateOfTheMorningstar_SelectCagedKeyParams_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FateOfTheMorningstar_SelectCagedKeyParams.BP_FateOfTheMorningstar_SelectCagedKeyParams_C
// 0x0008 (0x0098 - 0x0090)
class UBP_FateOfTheMorningstar_SelectCagedKeyParams_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FateOfTheMorningstar_SelectCagedKeyParams.BP_FateOfTheMorningstar_SelectCagedKeyParams_C"));
		return ptr;
	}


	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void On_Item_Pickup_Event();
	void ExecuteUbergraph_BP_FateOfTheMorningstar_SelectCagedKeyParams(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
