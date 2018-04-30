#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureChest_Wieldable_Drunken_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureChest_Wieldable_Drunken.BP_TreasureChest_Wieldable_Drunken_C
// 0x0018 (0x07D8 - 0x07C0)
class ABP_TreasureChest_Wieldable_Drunken_C : public ABP_TreasureChest_C
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x07C0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TreasureChest_Wieldable_Drunken.BP_TreasureChest_Wieldable_Drunken_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
