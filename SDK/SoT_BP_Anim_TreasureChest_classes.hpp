#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_TreasureChest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_TreasureChest.BP_Anim_TreasureChest_C
// 0x00A0 (0x06D0 - 0x0630)
class UBP_Anim_TreasureChest_C : public UWieldableItemAnimationInstance
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0630(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_TreasureChest.BP_Anim_TreasureChest_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_Anim_TreasureChest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
