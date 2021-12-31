#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BuriedTreasureLocation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BuriedTreasureLocation.BP_BuriedTreasureLocation_C
// 0x0008 (0x0400 - 0x03F8)
class ABP_BuriedTreasureLocation_C : public ABuriedTreasureLocation
{
public:
	UArrowComponent*                                   Arrow;                                                    // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BuriedTreasureLocation.BP_BuriedTreasureLocation_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
