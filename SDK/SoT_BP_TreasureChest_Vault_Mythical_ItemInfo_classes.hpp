#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureChest_Vault_Mythical_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureChest_Vault_Mythical_ItemInfo.BP_TreasureChest_Vault_Mythical_ItemInfo_C
// 0x0000 (0x0858 - 0x0858)
class ABP_TreasureChest_Vault_Mythical_ItemInfo_C : public ABP_TreasureChest_GoldHoarderLockable_Base_ItemInfo_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TreasureChest_Vault_Mythical_ItemInfo.BP_TreasureChest_Vault_Mythical_ItemInfo_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
