#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_wpn_sniper_rifle_hwm_01_a_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_wpn_sniper_rifle_hwm_01_a_ItemInfo.BP_wpn_sniper_rifle_hwm_01_a_ItemInfo_C
// 0x0008 (0x0570 - 0x0568)
class ABP_wpn_sniper_rifle_hwm_01_a_ItemInfo_C : public AItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_wpn_sniper_rifle_hwm_01_a_ItemInfo.BP_wpn_sniper_rifle_hwm_01_a_ItemInfo_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
