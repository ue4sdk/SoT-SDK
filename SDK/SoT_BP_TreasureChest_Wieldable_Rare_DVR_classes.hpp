#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureChest_Wieldable_Rare_DVR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureChest_Wieldable_Rare_DVR.BP_TreasureChest_Wieldable_Rare_DVR_C
// 0x0000 (0x07E8 - 0x07E8)
class ABP_TreasureChest_Wieldable_Rare_DVR_C : public ABP_TreasureChest_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TreasureChest_Wieldable_Rare_DVR.BP_TreasureChest_Wieldable_Rare_DVR_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
