#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TT_RitualBox_WildRose_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TT_RitualBox_WildRose.BP_TT_RitualBox_WildRose_C
// 0x0020 (0x04E8 - 0x04C8)
class ABP_TT_RitualBox_WildRose_C : public ABP_TT_RitualBox_C
{
public:
	TAssetPtr<class ABP_shop_oos_01_a_C>               Actor_Parent_to_Hide;                                     // 0x04C8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TT_RitualBox_WildRose.BP_TT_RitualBox_WildRose_C"));
		return ptr;
	}


	void Get_World_OOS_Magic_Box_to_Replace(class ABP_shop_oos_01_a_C** Magic_Box_to_Replace);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
