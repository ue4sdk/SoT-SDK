#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureChest_Wieldable_Weeping_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureChest_Wieldable_Weeping.BP_TreasureChest_Wieldable_Weeping_C
// 0x0030 (0x07F0 - 0x07C0)
class ABP_TreasureChest_Wieldable_Weeping_C : public ABP_TreasureChest_C
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x07C0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TreasureChest_Wieldable_Weeping.BP_TreasureChest_Wieldable_Weeping_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
