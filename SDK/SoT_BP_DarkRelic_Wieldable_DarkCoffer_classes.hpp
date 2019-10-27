#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DarkRelic_Wieldable_DarkCoffer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DarkRelic_Wieldable_DarkCoffer.BP_DarkRelic_Wieldable_DarkCoffer_C
// 0x0018 (0x0830 - 0x0818)
class ABP_DarkRelic_Wieldable_DarkCoffer_C : public ABP_TreasureChest_C
{
public:
	class UPickupableComponent*                        Pickupable;                                               // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldable;                                          // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWieldableInteractableComponent*             WieldableInteractable;                                    // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DarkRelic_Wieldable_DarkCoffer.BP_DarkRelic_Wieldable_DarkCoffer_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif