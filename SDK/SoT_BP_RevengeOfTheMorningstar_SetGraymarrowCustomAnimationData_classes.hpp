#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RevengeOfTheMorningstar_SetGraymarrowCustomAnimationData_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RevengeOfTheMorningstar_SetGraymarrowCustomAnimationData.BP_RevengeOfTheMorningstar_SetGraymarrowCustomAnimationData_C
// 0x0008 (0x0098 - 0x0090)
class UBP_RevengeOfTheMorningstar_SetGraymarrowCustomAnimationData_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_RevengeOfTheMorningstar_SetGraymarrowCustomAnimationData.BP_RevengeOfTheMorningstar_SetGraymarrowCustomAnimationData_C"));
		return ptr;
	}


	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void ExecuteUbergraph_BP_RevengeOfTheMorningstar_SetGraymarrowCustomAnimationData(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
