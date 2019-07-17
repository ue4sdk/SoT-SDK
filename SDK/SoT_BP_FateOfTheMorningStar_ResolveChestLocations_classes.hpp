#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FateOfTheMorningStar_ResolveChestLocations_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FateOfTheMorningStar_ResolveChestLocations.BP_FateOfTheMorningStar_ResolveChestLocations_C
// 0x000C (0x00A4 - 0x0098)
class UBP_FateOfTheMorningStar_ResolveChestLocations_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Index;                                                    // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FateOfTheMorningStar_ResolveChestLocations.BP_FateOfTheMorningStar_ResolveChestLocations_C"));
		return ptr;
	}


	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void ExecuteUbergraph_BP_FateOfTheMorningStar_ResolveChestLocations(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
