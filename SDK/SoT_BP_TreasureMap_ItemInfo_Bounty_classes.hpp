#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureMap_ItemInfo_Bounty_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureMap_ItemInfo_Bounty.BP_TreasureMap_ItemInfo_Bounty_C
// 0x0008 (0x0510 - 0x0508)
class ABP_TreasureMap_ItemInfo_Bounty_C : public ATreasureMapItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TreasureMap_ItemInfo_Bounty.BP_TreasureMap_ItemInfo_Bounty_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
