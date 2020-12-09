#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureChest_Proxy_Legendary_Rome_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureChest_Proxy_Legendary_Rome.BP_TreasureChest_Proxy_Legendary_Rome_C
// 0x0010 (0x08F8 - 0x08E8)
class ABP_TreasureChest_Proxy_Legendary_Rome_C : public ABP_TreasureChestProxy_Static_C
{
public:
	class UArenaWorldMarkerOnProxyComponent*           ArenaWorldMarkerOnProxy;                                  // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_seadogs_chest_smoke;                                  // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TreasureChest_Proxy_Legendary_Rome.BP_TreasureChest_Proxy_Legendary_Rome_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
