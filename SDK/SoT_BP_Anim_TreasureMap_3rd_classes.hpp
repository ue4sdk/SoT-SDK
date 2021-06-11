#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_TreasureMap_3rd_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_TreasureMap_3rd.BP_Anim_TreasureMap_3rd_C
// 0x0101 (0x0731 - 0x0630)
class UBP_Anim_TreasureMap_3rd_C : public UWieldableItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0630(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_24A0B2B647C712FB320275A8FD7B6C4C;      // 0x0638(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C226407B45B5F0794BEF42841DC3A4B8;      // 0x0680(0x0060)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_740A23004F5FA11BC4270BB73771A4CA;// 0x06E0(0x0050)
	TEnumAsByte<EObjectAnimationState>                 ObjectAnimationState;                                     // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_TreasureMap_3rd.BP_Anim_TreasureMap_3rd_C"));
		return ptr;
	}


	void OnUseStarted(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals);
	void OnUseStopped(class UClass* InputID);
	void ExecuteUbergraph_BP_Anim_TreasureMap_3rd(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
