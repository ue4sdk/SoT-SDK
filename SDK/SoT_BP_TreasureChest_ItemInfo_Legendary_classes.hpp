#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureChest_ItemInfo_Legendary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureChest_ItemInfo_Legendary.BP_TreasureChest_ItemInfo_Legendary_C
// 0x0000 (0x0858 - 0x0858)
class ABP_TreasureChest_ItemInfo_Legendary_C : public ABP_TreasureChest_GoldHoarderLockable_Base_ItemInfo_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TreasureChest_ItemInfo_Legendary.BP_TreasureChest_ItemInfo_Legendary_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
