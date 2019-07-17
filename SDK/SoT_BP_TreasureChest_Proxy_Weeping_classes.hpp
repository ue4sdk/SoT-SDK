#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureChest_Proxy_Weeping_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureChest_Proxy_Weeping.BP_TreasureChest_Proxy_Weeping_C
// 0x0048 (0x08E0 - 0x0898)
class ABP_TreasureChest_Proxy_Weeping_C : public ABP_TreasureChestProxy_C
{
public:
	class UItemProxyShipTrackerComponent*              ItemProxyShipTracker;                                     // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             puddle_decal;                                             // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_mouth_3;                                              // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_mouth_2;                                              // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_weepingchest_long_sides2;                             // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_weepingchest_long_sides;                              // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_weepingchest_short_sides2;                            // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_weepingchest_short_sides;                             // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeepingComponent*                           Weeping;                                                  // 0x08D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TreasureChest_Proxy_Weeping.BP_TreasureChest_Proxy_Weeping_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
