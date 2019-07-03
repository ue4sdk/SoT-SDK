#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FAteOfTheMorningstar_Setup_GhostScenes_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FAteOfTheMorningstar_Setup_GhostScenes.BP_FAteOfTheMorningstar_Setup_GhostScenes_C
// 0x0010 (0x00A8 - 0x0098)
class UBP_FAteOfTheMorningstar_Setup_GhostScenes_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      LocationActor;                                            // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FAteOfTheMorningstar_Setup_GhostScenes.BP_FAteOfTheMorningstar_Setup_GhostScenes_C"));
		return ptr;
	}


	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void ExecuteUbergraph_BP_FAteOfTheMorningstar_Setup_GhostScenes(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
