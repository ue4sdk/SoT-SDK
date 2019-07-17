#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureChest_Proxy_Mythical_Rome_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureChest_Proxy_Mythical_Rome.BP_TreasureChest_Proxy_Mythical_Rome_C
// 0x0008 (0x08A0 - 0x0898)
class ABP_TreasureChest_Proxy_Mythical_Rome_C : public ABP_TreasureChestProxy_C
{
public:
	class UGenericWorldMapMarker*                      GenericWorldMapMarker;                                    // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TreasureChest_Proxy_Mythical_Rome.BP_TreasureChest_Proxy_Mythical_Rome_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
