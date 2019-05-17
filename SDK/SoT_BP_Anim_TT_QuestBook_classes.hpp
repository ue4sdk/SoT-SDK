#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_TT_QuestBook_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_TT_QuestBook.BP_Anim_TT_QuestBook_C
// 0x0209 (0x0839 - 0x0630)
class UBP_Anim_TT_QuestBook_C : public UQuestBookAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0630(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_871DEE9B418E2AF99C3111A6916A7870;      // 0x0638(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_137F52054E24043A4FE9E691CCEEC5C4;      // 0x0680(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_105BE18747C0D72005C162B40144F67C;// 0x06E0(0x0058)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_343B610E48119296940386BBDC1A951A;// 0x0738(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BD83DD6D4500E63F13E9B88694D453FD;// 0x0788(0x00B0)
	bool                                               InUse;                                                    // 0x0838(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_TT_QuestBook.BP_Anim_TT_QuestBook_C"));
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void OnUseStarted(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals);
	void OnUseStopped(class UClass* InputID);
	void ExecuteUbergraph_BP_Anim_TT_QuestBook(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
