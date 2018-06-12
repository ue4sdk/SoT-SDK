#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Concertina_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_Concertina.BP_Anim_Concertina_C
// 0x0109 (0x0739 - 0x0630)
class UBP_Anim_Concertina_C : public UWieldableItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0630(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1DEFFA064699D8E6099882A07E015CFC;      // 0x0638(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8FB8B3AD41DDBE46E9AA00B94F72B643;      // 0x0680(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4FA004554F3D39839ABDF59B7BAB6781;// 0x06E0(0x0058)
	TEnumAsByte<EObjectAnimationState>                 ObjectAnimationState;                                     // 0x0738(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_Concertina.BP_Anim_Concertina_C");
		return ptr;
	}


	void OnUseStarted(class UClass** InputID, struct FWieldableItemActionVisuals* ActionVisuals);
	void OnUseStopped(class UClass** InputID);
	void ExecuteUbergraph_BP_Anim_Concertina(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
