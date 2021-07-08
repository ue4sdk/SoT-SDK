#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_HurdyGurdy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_HurdyGurdy.BP_Anim_HurdyGurdy_C
// 0x00B0 (0x06E0 - 0x0630)
class UBP_Anim_HurdyGurdy_C : public UWieldableItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0630(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B3965DEB4C5D27BA9A2E829C0890A4BD;      // 0x0638(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_575EE4B64923C096D19E05B899C05754;      // 0x0680(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_HurdyGurdy.BP_Anim_HurdyGurdy_C"));
		return ptr;
	}


	void ExecuteUbergraph_BP_Anim_HurdyGurdy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
