#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShadyEquipmentShop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShadyEquipmentShop.BP_ShadyEquipmentShop_C
// 0x0008 (0x0538 - 0x0530)
class ABP_ShadyEquipmentShop_C : public AShopkeeperInteractionProxy
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShadyEquipmentShop.BP_ShadyEquipmentShop_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
