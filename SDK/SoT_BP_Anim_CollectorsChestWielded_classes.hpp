#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_CollectorsChestWielded_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_CollectorsChestWielded.BP_Anim_CollectorsChestWielded_C
// 0x00B0 (0x0550 - 0x04A0)
class UBP_Anim_CollectorsChestWielded_C : public UOpenableItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_33FB0D2E42FB3805BB4CAA9495F7061C;      // 0x04A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3911D7164385EFF804E64499FCBB86E6;      // 0x04F0(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_CollectorsChestWielded.BP_Anim_CollectorsChestWielded_C"));
		return ptr;
	}


	void ExecuteUbergraph_BP_Anim_CollectorsChestWielded(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
