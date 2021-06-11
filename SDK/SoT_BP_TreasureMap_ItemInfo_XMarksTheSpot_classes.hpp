#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureMap_ItemInfo_XMarksTheSpot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureMap_ItemInfo_XMarksTheSpot.BP_TreasureMap_ItemInfo_XMarksTheSpot_C
// 0x0008 (0x0570 - 0x0568)
class ABP_TreasureMap_ItemInfo_XMarksTheSpot_C : public ATreasureMapItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TreasureMap_ItemInfo_XMarksTheSpot.BP_TreasureMap_ItemInfo_XMarksTheSpot_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
