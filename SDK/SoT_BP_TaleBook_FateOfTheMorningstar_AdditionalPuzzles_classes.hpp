#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TaleBook_FateOfTheMorningstar_AdditionalPuzzles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TaleBook_FateOfTheMorningstar_AdditionalPuzzles.BP_TaleBook_FateOfTheMorningstar_AdditionalPuzzles_C
// 0x0030 (0x0768 - 0x0738)
class ABP_TaleBook_FateOfTheMorningstar_AdditionalPuzzles_C : public AVoyageProposalContainer
{
public:
	class UChildActorComponent*                        TaleSelectionSlot_6;                                      // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        TaleSelectionSlot_5;                                      // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        TaleSelectionSlot_4;                                      // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        TaleSelectionSlot_3;                                      // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        TaleSelectionSlot_2;                                      // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        TaleSelectionSlot_1;                                      // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TaleBook_FateOfTheMorningstar_AdditionalPuzzles.BP_TaleBook_FateOfTheMorningstar_AdditionalPuzzles_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
