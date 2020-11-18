#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Cutscene_PirateLord_CollectorsChest_Anim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Cutscene_PirateLord_CollectorsChest_Anim.BP_Cutscene_PirateLord_CollectorsChest_Anim_C
// 0x00E8 (0x0598 - 0x04B0)
class UBP_Cutscene_PirateLord_CollectorsChest_Anim_C : public UAnimatedCosmeticItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6286B1F34CAC84ECD49B3B9612B96ADC;      // 0x04B8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B61A80614533643F4949DBAA53A4F7E6;      // 0x0500(0x0060)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2B2F527049D6DDCA06DABBB457307788;// 0x0560(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Cutscene_PirateLord_CollectorsChest_Anim.BP_Cutscene_PirateLord_CollectorsChest_Anim_C"));
		return ptr;
	}


	void ExecuteUbergraph_BP_Cutscene_PirateLord_CollectorsChest_Anim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
